/*
 *  Copyright (c) 2013-2014, p3root - Patrik Pfaffenbauer (patrik.pfaffenbauer@p3.co.at)
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without modification,
 *  are permitted provided that the following conditions are met:
 *
 *    Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright notice, this
 *    list of conditions and the following disclaimer in the documentation and/or
 *    other materials provided with the distribution.
 *
 *    Neither the name of the {organization} nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 *  ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 *  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 *  ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef HTTPEVENTSTREAM_H
#define HTTPEVENTSTREAM_H

#include <QtCore>

#if defined(Q_OS_QNX)
	#include <QtNetwork/qhostaddress.h>
	#include <QtNetwork/qtcpsocket.h>
#else
	#include <QHostAddress>
	#include <QTcpSocket>
    #include <QSslSocket>
#endif

#include "SignalException.h"

namespace P3 { namespace SignalR { namespace Client {

class ServerSentEventsTransport;
class ConnectionPrivate;

class HttpEventStream : public QObject
{
    Q_OBJECT

public:
    HttpEventStream(QUrl url, ConnectionPrivate* con, QObject *parent);
    ~HttpEventStream();

    void close();

    void open();
    const QString &id() { return _id; }

Q_SIGNALS:
    void packetReady(QString packet, QSharedPointer<SignalException> ex);
    void connected(QSharedPointer<SignalException>);
    void restartConnection();

private Q_SLOTS:

#ifndef QT_NO_SSL
    void onSslErrors(const QList<QSslError> &errors);
#endif

    void onReadyRead();
    void onSocketError(QAbstractSocket::SocketError);

private:
    ConnectionPrivate* _connection;
    QTcpSocket *_sock;
    bool _isAborting;
    QUrl _url;
    bool _isRunning;
    bool _connected;
    QString _id;

    class HttpEventStreamParser *_parser;
};

}}}


#endif // EVENTSTREAM_H
