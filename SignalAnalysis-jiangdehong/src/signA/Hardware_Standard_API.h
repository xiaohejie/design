#ifndef HARDWARESTANDARDAPI_DEFINE_H
#define HARDWARESTANDARDAPI_DEFINE_H

#include "PlatformCompat.h"

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifdef DHTEST_WINDOWS

#ifdef _HARDWARE_STANDARD_C_INTERFACE_
#define HARDWARE_STANDARD_C_INTERFACE_API	__declspec(dllexport)
#else
#define HARDWARE_STANDARD_C_INTERFACE_API	__declspec(dllimport)

#ifdef _DEBUG
    #pragma comment(lib, "HardWare_Standard_C_Interface_d.lib")
#else
    #pragma comment(lib, "HardWare_Standard_C_Interface.lib")
#endif

#endif

#else
#define HARDWARE_STANDARD_C_INTERFACE_API
#endif

#include "HeaderInterface.h"

const int ERROR_NO_INIT = -1;
const int ERROR_NO_ENOUGH = -3;//���������ڴ�ռ䲻��

extern "C"
{
	//��ʼ���������� 
	HARDWARE_STANDARD_C_INTERFACE_API	void	InitMacControl(const char* pHardWareIniDir);
	//��ʼ���������� 
	HARDWARE_STANDARD_C_INTERFACE_API	void	InitMacControlEx(const char* pHardWareIniDir, const char* pLanguage);
	//�˳��������� 
	HARDWARE_STANDARD_C_INTERFACE_API	void	QuitMacControl();
	//���²�����������
	HARDWARE_STANDARD_C_INTERFACE_API	bool	RefindAndConnecMac();

	//��ȡ�Խ��뿪���ӿڵ�������������
	HARDWARE_STANDARD_C_INTERFACE_API	int		GetAllMacOnlineCount(); 

	//��ȡ���ӳɹ���������������
	HARDWARE_STANDARD_C_INTERFACE_API	int		GetAllValidMacOnlineCount(); 

	//������Ż�ȡ������Ϣ
	HARDWARE_STANDARD_C_INTERFACE_API	int		GetMacInfoFromIndex(int nIndex, int* pMacID, char* strMacIp, int nMacBuffer,int* nUseBuffer);
	//���ݻ��ź�IP��ȡ�������ͺͽӿ�����
	HARDWARE_STANDARD_C_INTERFACE_API	bool	GetMacInstrumentInfo(int nMacID, const char* pMacIp, int *nInstrumentType, int* nInterfaceType);

	//������Ż�ȡ���ӳɹ���������Ϣ
	HARDWARE_STANDARD_C_INTERFACE_API	int		GetValidMacInfoFromIndex(int nIndex, int* pMacID, char* strMacIp, int nMacBuffer,int* nUseBuffer);

	//����ĳ̨����������״̬
	HARDWARE_STANDARD_C_INTERFACE_API	bool	GetMacLinkStatus(int nMacId, const char* pMacIp);

	// ��ȡĳ̨�������ܵ�ͨ����
	HARDWARE_STANDARD_C_INTERFACE_API	int		GetMacCurrentChnCount(int nMacId, const char* pMacIp);
	//������Ż�ȡĳ̨������ͨ�����Լ�����״̬
	HARDWARE_STANDARD_C_INTERFACE_API	int		GetMacChnIdFromMacIndex(int nIndex, int nMacID, const char* pMacIp, int* nMacChnId ,int* bOnLine);
	//��ȡ��ǰ����Ƶ��,Ĭ�ϲ���Ƶ��ȡ��
	HARDWARE_STANDARD_C_INTERFACE_API	float	GetMacCurrentSampleFreq();
	//��ȡĳ̨����ĳ��ͨ�������б����ݣ�nShowParamID �ο�HeaderInterface.h������
	HARDWARE_STANDARD_C_INTERFACE_API	int		GetMacChnParamListValue(int nMacID, const char* pMacIp,int nMacChnID, int nShowParamID, char* pMacValue, int nMacBuffer, int* nUsedBuffer);
	//�޸�̨����ĳ��ͨ������ֵ��nShowParamID �ο�HeaderInterface.h������
	HARDWARE_STANDARD_C_INTERFACE_API	bool	ModifyMacChnParam(int nMacID, const char* pMacIp,int nMacChnID, int nShowParamID, const char* strParamValue);
	//��ȡĳ̨����ĳ��ͨ������ֵ��nShowParamID �ο�HeaderInterface.h������
	HARDWARE_STANDARD_C_INTERFACE_API	int		GetMacChnCurrentParam(int nMacID,int nMacChnID, const char* pMacIp,int nParamShowID, char* strParamValue, int nMacBuffer, int* nUsedBuffer);
	//����
	// �Ƿ����ڲ���
	HARDWARE_STANDARD_C_INTERFACE_API	bool	IsMacSampling();
	//��������
	HARDWARE_STANDARD_C_INTERFACE_API	bool	StartMacSample();
	//ֹͣ����
	HARDWARE_STANDARD_C_INTERFACE_API	bool	StopMacSample();
	//��ȡ����Ƶ���б�����Ƶ��ȡ����
	HARDWARE_STANDARD_C_INTERFACE_API	int		GetMacSampleFreqList(char* pFreqList, int nFreqBuffer, int* nUsedBuffer);
	// ���Ĳ���Ƶ��
	HARDWARE_STANDARD_C_INTERFACE_API	bool	SetMacSampleFreq(float fltSampleFreq);
	//���������鴦��////////////////////////////////////////////////////////////////////////
	// ��ȡ������Ӧ����
	HARDWARE_STANDARD_C_INTERFACE_API bool GetTeamID(int ChannelGroupID, int* nTeamID);
	//��ȡ����Ƶ���б�����Ƶ��ȡ����
	HARDWARE_STANDARD_C_INTERFACE_API int GetTeamSampleFreqList(int nTeamID,char* pFreqList, int nFreqBuffer, int* nUsedBuffer);
	//��ȡ��ǰ����Ƶ��,Ĭ�ϲ���Ƶ��ȡ��
	HARDWARE_STANDARD_C_INTERFACE_API float GetTeamSampleFreq(int nTeamID);
	// ���Ĳ���Ƶ��
	HARDWARE_STANDARD_C_INTERFACE_API bool SetTeamSampleFreq(int nTeamID, float fltSampleFreq);
	// ��ȡ����Ĳ���Ƶ��ȡ��ģʽ�͵�ǰȡ��ģʽ
	HARDWARE_STANDARD_C_INTERFACE_API bool GetTeamAllowFreqMode(int nTeamID, int *nAllowFreqMode, int * nFreqMode);
	// ���Ĳ���Ƶ��ȡ��ģʽ
	HARDWARE_STANDARD_C_INTERFACE_API bool SetTeamFreqMode(int nTeamID, int nFreqMode);
	//���������鴦��////////////////////////////////////////////////////////////////////////
	//ƽ��
	HARDWARE_STANDARD_C_INTERFACE_API	bool	BalanceAllMacChn();
	//����
	HARDWARE_STANDARD_C_INTERFACE_API	bool	ClearAllMacZero(char **pZeroResult);
	//ƽ��ѡ��ͨ��
	HARDWARE_STANDARD_C_INTERFACE_API	bool	BalanceSelectMacChn(const char* pChnInfo, int nChnBuffer);
	// ����ÿ�λ�ȡ���ݵ�������
	HARDWARE_STANDARD_C_INTERFACE_API   int		SetGetDataCountEveryTime(long nDataCount);
	//��ȡ��̨������ͨ����������
	HARDWARE_STANDARD_C_INTERFACE_API	int		GetOneMacChnData(int nMacId,long* nReceiveCount, long* nChnCount, long lBufferSize, long* pBufferAddr);

	//��ȡ��̨������ͨ����������
	HARDWARE_STANDARD_C_INTERFACE_API	int		GetOneMacChnDataEx(int nMacId,long* nReceiveCount, long* nChnCount, long long* lTotalPos, long lBufferSize, long* pBufferAddr);

	//��ȡ��̨������ͨ����������x64
	HARDWARE_STANDARD_C_INTERFACE_API	int		GetOneMacChnData_New(int nMacId,long* nReceiveCount, long* nChnCount, long long* lTotalPos, long lBufferSize, char* pBufferAddr);

	//�������
	HARDWARE_STANDARD_C_INTERFACE_API	bool	SaveMacParameter(const char* pFilePath);
	//�������
	HARDWARE_STANDARD_C_INTERFACE_API	bool	LoadMacParameter(const char* pFilePath);

	//�������
	HARDWARE_STANDARD_C_INTERFACE_API	bool	SaveBinaryMacParameter(const char* pFilePath);
	//�������
	HARDWARE_STANDARD_C_INTERFACE_API	bool	LoadBinaryMacParameter(const char* pFilePath);

	//��ȡ��̨��������485ͨ������
	HARDWARE_STANDARD_C_INTERFACE_API   bool    GetRS485ChnData(int nMachineID, int nChannelID, int nBufferSize, long* pBufferAddr, long* nReceiveCount, long* nSignalCount);
	//��ȡ��̨��������485ͨ������x64
	HARDWARE_STANDARD_C_INTERFACE_API   bool    GetRS485ChnData_New(int nMachineID, int nChannelID, int nBufferSize, char* pBufferAddr, long* nReceiveCount, long* nSignalCount);

	//��ȡĳ̨����ĳ��485ͨ���Ĳ��·��
	HARDWARE_STANDARD_C_INTERFACE_API   int     GetRS485OneChnSeparateCount(int nMachineID, int nChannelID);

	HARDWARE_STANDARD_C_INTERFACE_API	void	SetCallBackFun( FN_DataDispose pDisposeFun );

	HARDWARE_STANDARD_C_INTERFACE_API	void	SetStaticCallBackFun( FN_StaticDataDispose pDisposeFun );
	HARDWARE_STANDARD_C_INTERFACE_API bool	IsReceiveMacReconnect();
	//����ģ����Ϣ
	HARDWARE_STANDARD_C_INTERFACE_API	void	SetUpInterface();

	HARDWARE_STANDARD_C_INTERFACE_API	int	GetNetModuleParam(const char* strMacInfo, char* strNetInfoXML);
	HARDWARE_STANDARD_C_INTERFACE_API	int	SetNetModuleParam(const char* strNetInfoXML);

	//��ȡ������������δ����������ȡͨ����������Ϣ(����������)
	HARDWARE_STANDARD_C_INTERFACE_API	int 	GetWaitDealMacInfo(char* pMacInfo, int nMacBuffer, int* nUseBuffer); 
	//�޸�������Ϣ,��Ҫ���������������������ַ��ʹ��(|)�ָĩβ���'\0'������
	HARDWARE_STANDARD_C_INTERFACE_API	int		ModifyMacInfo(const char* pMacInfo, int nMacBuffer);
	//��ȡ��������
	HARDWARE_STANDARD_C_INTERFACE_API	int		GetOneMacDataIndex(int nMacId, int nChannelID);
	//��ȡ����ʱ��
	HARDWARE_STANDARD_C_INTERFACE_API	int     GetSampleTime(long long* ltime,long* millionTime,char* strTime,int nSize,int* nUseBuffer);

	//��ȡ��̨����VIBͨ��ChID
	HARDWARE_STANDARD_C_INTERFACE_API   bool GetVIBChn(int nMachineID, char* strMacIp, int nBufferLen, long* pChannelIDAddr, long* nChnCount);
	//��ȡ��̨��������VIBͨ������
	HARDWARE_STANDARD_C_INTERFACE_API   bool GetVIBChnData(int nMachineID, int nChannelID, int nBufferSize, long* pBufferAddr, long* nReceiveCount, long* nSignalCount);
	//��ȡ��̨����VIBͨ��ChIDx64
	HARDWARE_STANDARD_C_INTERFACE_API   bool GetVIBChn_New(int nMachineID, char* strMacIp, int nBufferLen, char* pChannelIDAddr, long* nChnCount);
	//��ȡ��̨��������VIBͨ������x64
	HARDWARE_STANDARD_C_INTERFACE_API   bool GetVIBChnData_New(int nMachineID, int nChannelID, int nBufferSize, char* pBufferAddr, long* nReceiveCount, long* nSignalCount);

	
	// ת��Э����
	HARDWARE_STANDARD_C_INTERFACE_API   bool ForwardMachineCmd(int nMachineID, char* strIP, char* pCode, int nSize);
	// ͸��Э���뷴���ص�
	HARDWARE_STANDARD_C_INTERFACE_API   bool ForwardMachineCmdRespond(int nMachineId, char* strIp, void* pDisposeFun);

	HARDWARE_STANDARD_C_INTERFACE_API bool SetTextMessageCallBackFun(OnRegisterStatusChange pText);
	HARDWARE_STANDARD_C_INTERFACE_API bool SetDataChangeCallBackFun(SampleDataChange pText);

	// ��ȡͨ����Ϣ
	HARDWARE_STANDARD_C_INTERFACE_API int GetAllGroupChannel(int nBufferSize, char* pDesData);
	HARDWARE_STANDARD_C_INTERFACE_API int GetChannelStatus(int nSize, const char* pGroup, int nNumberSize, char* pNumber, int nUseSize, char* pUse, int* nOutNumberSize, int* nOutUseSize);
	HARDWARE_STANDARD_C_INTERFACE_API int GetChannel(int nGroupChannelID, int nSize, const char* pIP, int nChannelStyle, int nChannelID, int nCellID, int nBufferSize, char* pXMLChannel);
	HARDWARE_STANDARD_C_INTERFACE_API int GetParamValue(int nGroupChannelID, int nSize, const char* pIP, int nChannelStyle, int nChannelID, int nCellID, int nParamID, int nBufferSize, char* pXMLChannel);
	HARDWARE_STANDARD_C_INTERFACE_API int GetParamSelectValue(int nGroupChannelID, int nSize, const char* pIP, int nChannelStyle, int nChannelID, int nCellID, int nParamID, int nBufferSize, char* pXMLChannel);
	HARDWARE_STANDARD_C_INTERFACE_API int GetAllChannelZeroValue(int nBufferSize, char* pZeroValue);
	HARDWARE_STANDARD_C_INTERFACE_API int GetShowParamInfo(int nInstrumentType, int nInterfaceType, int nMeasureType, int nBufferSize, char* pXMLShowParamInfo);
	HARDWARE_STANDARD_C_INTERFACE_API int GetAllChnRectifyCoief(int nBufferSize, char* pXMLCoief);
	HARDWARE_STANDARD_C_INTERFACE_API int GetAllChnSampleRate(int nBufferSize, char* pXMLRate);
	HARDWARE_STANDARD_C_INTERFACE_API int SetAllGroupChannel(int nBufferSize, const char* pAllGroupChannel);
	HARDWARE_STANDARD_C_INTERFACE_API int SetChannel(int nGroupChannelID, int nSize, const char* pIP, int nChannelStyle, int nChannelID, int nCellID, int nBufferSize, const char* pXMLChannel);
	HARDWARE_STANDARD_C_INTERFACE_API int ChangeChannelUsedStatus(int nBufferSize, const char* pXMLChannel, int bUsed);
	HARDWARE_STANDARD_C_INTERFACE_API int ModifyChannelsParam(int nBufferSize, const char* pXMLChannel, int nParamID, int nParamSize, const char* pParamValue, int nAssicateBufferSize, char* pAssicateChn);
	HARDWARE_STANDARD_C_INTERFACE_API int ResetDefaultParam();
	HARDWARE_STANDARD_C_INTERFACE_API int GetTachoTestFreq(int nBufferSize, char* pTestFreq);
	HARDWARE_STANDARD_C_INTERFACE_API int IsAllDataValidTachoValue(int nInstrumentType, int nInterfaceType);
	HARDWARE_STANDARD_C_INTERFACE_API int IsSupportBalance();
	HARDWARE_STANDARD_C_INTERFACE_API int IsSupportGNDBalance();
	HARDWARE_STANDARD_C_INTERFACE_API int IsSupportGNDClearZero();
	HARDWARE_STANDARD_C_INTERFACE_API int IsSupportBalanceEx(int nBufferSize, const char* pXMLChannel);
	HARDWARE_STANDARD_C_INTERFACE_API int IsSupportLeadResistanceTest(int nBufferSize, const char* pXMLChannel);
	HARDWARE_STANDARD_C_INTERFACE_API int IsExistInstantSampleMode();
	HARDWARE_STANDARD_C_INTERFACE_API int GetMacCardChnCount(int nInstrumentType);
	HARDWARE_STANDARD_C_INTERFACE_API int IsSupportBalanceResultDisplay(int nInstrumentType);
	HARDWARE_STANDARD_C_INTERFACE_API int IsPrepareSample(int nBufferSize, char* pDetail, int* nDetailSize);
	HARDWARE_STANDARD_C_INTERFACE_API int IsSupportEditSensorCoief(int nInstrumentType);
	HARDWARE_STANDARD_C_INTERFACE_API int IsExistChnAutoCheck();
	HARDWARE_STANDARD_C_INTERFACE_API int IsSupportChnMultiFreq();
	HARDWARE_STANDARD_C_INTERFACE_API int IsSupportBalanceDataDown();
	HARDWARE_STANDARD_C_INTERFACE_API int GetAllowFreqModeValue();
	HARDWARE_STANDARD_C_INTERFACE_API int GetExtraTrigSupportType(int nBufferSize, char* pSupportType);
	HARDWARE_STANDARD_C_INTERFACE_API float GetMaxContinueSampleFeq();
	HARDWARE_STANDARD_C_INTERFACE_API int IsAllowContinueSample(int nGroupChannelID, int nSize, const char* pIP, float fltSampleFreq);
	HARDWARE_STANDARD_C_INTERFACE_API int IsSupportShowElec();
	HARDWARE_STANDARD_C_INTERFACE_API int IsSupportEID();
	HARDWARE_STANDARD_C_INTERFACE_API int IsExistHardTrig();
	HARDWARE_STANDARD_C_INTERFACE_API int GetHardTrigRAMEx(float fltSampleFreq);
	HARDWARE_STANDARD_C_INTERFACE_API int IsConnectMachine();
	HARDWARE_STANDARD_C_INTERFACE_API int GetSampleFreqList(int nSampleMode, int nBufferSize, char* pFreqList);
	HARDWARE_STANDARD_C_INTERFACE_API int IsSupportNormalSample();
	HARDWARE_STANDARD_C_INTERFACE_API int IsExistContinueSampleMode();
	HARDWARE_STANDARD_C_INTERFACE_API int IsExistExtraTrig();
	HARDWARE_STANDARD_C_INTERFACE_API int IsExistExtraTrigSignal();
	HARDWARE_STANDARD_C_INTERFACE_API int IsSupportPositive();
	HARDWARE_STANDARD_C_INTERFACE_API int IsSupportSoftExtraTrigInstant();
	HARDWARE_STANDARD_C_INTERFACE_API int GetSampleParam(int nBufferSize, char* pSampleParam);
	HARDWARE_STANDARD_C_INTERFACE_API int SetSampleParam(int nBufferSize, const char* pSampleParam);
	HARDWARE_STANDARD_C_INTERFACE_API int ChangeSoftParam(int nBufferSize, const char* pSoftParam);
	HARDWARE_STANDARD_C_INTERFACE_API int GetServerSoftParam(int nBufferSize, char* pSoftParam);
	HARDWARE_STANDARD_C_INTERFACE_API int IsSupportChangeFirstChnIDAndChnNumber(int nInstrumentType, int nInterfaceType);
	HARDWARE_STANDARD_C_INTERFACE_API int SetClientSN(int nBufferSize, char* pClientSN);
	HARDWARE_STANDARD_C_INTERFACE_API int StartSample(int nBufferSize, char* pRunName, int nInstantIndex, int nBlockSize);
	//	StopSample
	HARDWARE_STANDARD_C_INTERFACE_API int IsSampling();
	HARDWARE_STANDARD_C_INTERFACE_API int MakeRelativePath(int nParent, const char* pParent, int nChild, const char* pChild, int nBufferSize, char* pPath);
	HARDWARE_STANDARD_C_INTERFACE_API int MakeAbsolutePath(int nParent, const char* pParent, int nChild, const char* pChild, int nBufferSize, char* pPath);
	HARDWARE_STANDARD_C_INTERFACE_API int SetDemoStatus(int bDemoStatus);
	HARDWARE_STANDARD_C_INTERFACE_API int CollectSampleInfo();
	HARDWARE_STANDARD_C_INTERFACE_API int SetStoreType(int nStoreType);
	HARDWARE_STANDARD_C_INTERFACE_API int SetUseSynchTrans(int bUseSynchTrans);
	HARDWARE_STANDARD_C_INTERFACE_API int SendChannelParamCode(int nBufferSize, const char* pXMLChannel);
	HARDWARE_STANDARD_C_INTERFACE_API int SendGetPower();
	HARDWARE_STANDARD_C_INTERFACE_API int GetPower(int nBufferSize, char* pChannelPower);
	HARDWARE_STANDARD_C_INTERFACE_API int DownBalanceData(int nBufferSize, const char* pXMLChannel);
	HARDWARE_STANDARD_C_INTERFACE_API int DownZeroData(int nBufferSize, const char* pXMLChannel);
	HARDWARE_STANDARD_C_INTERFACE_API int RefreshTedsSensorInfo(int nBufferSize, const char* pXMLChannel);
	HARDWARE_STANDARD_C_INTERFACE_API int RefreshEIDChn(int nBufferSize, const char* pXMLChannel);
	HARDWARE_STANDARD_C_INTERFACE_API int ChangeChnEIDInfo(int nBufferSize, const char* pXMLChannel);
	HARDWARE_STANDARD_C_INTERFACE_API int AllChannelClearZeroEx(int bGND);
	HARDWARE_STANDARD_C_INTERFACE_API int ChannelGNDBalance(int nBufferSize, const char* pXMLChannel);
	HARDWARE_STANDARD_C_INTERFACE_API int AllChannelGNDBalance();
	HARDWARE_STANDARD_C_INTERFACE_API int ChannelBalance(int nBufferSize, const char* pXMLChannel);
	HARDWARE_STANDARD_C_INTERFACE_API int ChannelClearZeroEx(int nBufferSize, const char* pXMLChannel, int bGND);
	HARDWARE_STANDARD_C_INTERFACE_API int AllChannelBalance();
	HARDWARE_STANDARD_C_INTERFACE_API int GetBalanceData(int nBufferSize, char* pXMLChannel, int* nOutSize);
	HARDWARE_STANDARD_C_INTERFACE_API int SingleResistanceTest(int nBufferSize, const char* pXMLChannel, int* bStatus, float* fltR);
	HARDWARE_STANDARD_C_INTERFACE_API int AllChannelResistanceTest(int nBufferSize, char* pXMLChannel, int* nOutSize);
	HARDWARE_STANDARD_C_INTERFACE_API int MacAutoCheck(int nBufferSize, char* pXMLChannel, int* nOutSize);
	// GetAllFindMac
	HARDWARE_STANDARD_C_INTERFACE_API int ReConnectAllMac();
	HARDWARE_STANDARD_C_INTERFACE_API int ReconnectMac(int nSize, const char* pIP, int nChannelGroupID);
	HARDWARE_STANDARD_C_INTERFACE_API int ReConnectAllMacEx(int nInstrumentType, int nInterfaceType);
	HARDWARE_STANDARD_C_INTERFACE_API int ModifyLinkMacInfo(int nBufferSize, const char* pXMLMac);
	HARDWARE_STANDARD_C_INTERFACE_API int ModifyLinkMacInfoEx(int nInstrumentType, int nInterfaceType, int nBufferSize, const char* pXMLMac);
	HARDWARE_STANDARD_C_INTERFACE_API int GetCanLinkMacInfo(int nBufferSize, char* pXMLMac);
	HARDWARE_STANDARD_C_INTERFACE_API int GetExistLinkMacInfo(int nBufferSize, char* pXMLMac);
	HARDWARE_STANDARD_C_INTERFACE_API int GetCanLinkMacInfoEx(int nInstrumentType, int nInterfaceType, int nBufferSize, char* pXMLMac);
	HARDWARE_STANDARD_C_INTERFACE_API int GetExistLinkMacInfoEx(int nInstrumentType, int nInterfaceType, int nBufferSize, char* pXMLMac);
	HARDWARE_STANDARD_C_INTERFACE_API int SetMultiChannel(int nBufferSize, const char* pXMLChannel, int nValueSize, const char* pXMLParam);
	HARDWARE_STANDARD_C_INTERFACE_API float GetCapacitorTypeCoief(int nInstrumentType, int nInterfaceType, int nChannelType);

	HARDWARE_STANDARD_C_INTERFACE_API int IsUseClock();
	HARDWARE_STANDARD_C_INTERFACE_API int ChangeUseClockStatus(int bUseClock);
	HARDWARE_STANDARD_C_INTERFACE_API int IsSupportMultiRebackData();
	HARDWARE_STANDARD_C_INTERFACE_API int SetMultiRebackDataStatus(int nStatus);
	HARDWARE_STANDARD_C_INTERFACE_API int IsSupportModifyCoief();
	HARDWARE_STANDARD_C_INTERFACE_API int GetTeamAllowFreqModeValue(int nTeamID);
	HARDWARE_STANDARD_C_INTERFACE_API int IsSupportReadTedsSensor();
	HARDWARE_STANDARD_C_INTERFACE_API int GetTeamExtraTrigSupportType(int nTeamID, int nBufferSize, char* pSupportType);
	HARDWARE_STANDARD_C_INTERFACE_API int WireLessChange(int bWireLess);
	HARDWARE_STANDARD_C_INTERFACE_API int IsWireLessUsed();
	HARDWARE_STANDARD_C_INTERFACE_API int ChangeOffLineSampleStatus(int nOffLineSampleStatus);
	HARDWARE_STANDARD_C_INTERFACE_API int GetUseTeam();
	HARDWARE_STANDARD_C_INTERFACE_API int SetHighSpeedSampleStatus(int bHighSpeedSample);
	HARDWARE_STANDARD_C_INTERFACE_API int IsSupportSwitchClockMode();
	HARDWARE_STANDARD_C_INTERFACE_API float GetTeamMaxContinueSampleFreq(int nTeamID);
	HARDWARE_STANDARD_C_INTERFACE_API int IsTeamExistHardTrig(int nTeamID);
	HARDWARE_STANDARD_C_INTERFACE_API int IsTeamExistExtraTrig(int nTeamID);
	HARDWARE_STANDARD_C_INTERFACE_API int GetTeamHardTrigRAM(int nTeamID, float fltSampleFreq);
	HARDWARE_STANDARD_C_INTERFACE_API int IsSupportOffLineSample();
	HARDWARE_STANDARD_C_INTERFACE_API int GetOffLineSampleStatus();
	HARDWARE_STANDARD_C_INTERFACE_API int IsSupportHighSpeedSample();
	HARDWARE_STANDARD_C_INTERFACE_API int GetHighSpeedSampleStatus();
	HARDWARE_STANDARD_C_INTERFACE_API int IsTeamExistInstantSampleMode(int nTeamID);
	HARDWARE_STANDARD_C_INTERFACE_API int GetTeamSampleFreqListEx(int nTeamID, int nSampleMode, int nBufferSize, char* pSampleFreq);
	HARDWARE_STANDARD_C_INTERFACE_API int IsMultiHardWareManage(int nBufferSize, char* pMultiInfo, int* nOutSize);
	HARDWARE_STANDARD_C_INTERFACE_API int GetAllWireLessLinuxInstrument(int nBufferSize, char* pMultiInfo);
	HARDWARE_STANDARD_C_INTERFACE_API int IsSupporWireLessSwitch(int nInstrumentType, int nInterfaceType);
	HARDWARE_STANDARD_C_INTERFACE_API int ChangeExtTrigKeepTime(int nKeepTime);
	HARDWARE_STANDARD_C_INTERFACE_API int IsSignalSourceHandle();
	HARDWARE_STANDARD_C_INTERFACE_API int IsSignalSourceStart();
	HARDWARE_STANDARD_C_INTERFACE_API int SetSignalSourceHandle(bool bHandle);
	HARDWARE_STANDARD_C_INTERFACE_API int StartSignalSource();
	HARDWARE_STANDARD_C_INTERFACE_API int StopSignalSource();
	HARDWARE_STANDARD_C_INTERFACE_API int RebackLostData();
	HARDWARE_STANDARD_C_INTERFACE_API int GetTeamSampleParam(int nTeamID, int nBufferSize, char* pSampleParam, int* nOutSize);
	HARDWARE_STANDARD_C_INTERFACE_API int SetTeamSampleParam(int nTeamID, int nBufferSize, const char* pSampleParam);
	HARDWARE_STANDARD_C_INTERFACE_API int GetClockType(int nBufferSize, char* pClockType);
	HARDWARE_STANDARD_C_INTERFACE_API int SetClockType(int nBufferSize, const char* pClockType);
	HARDWARE_STANDARD_C_INTERFACE_API int GetAllClockType(int nBufferSize, char* pClockType);
	HARDWARE_STANDARD_C_INTERFACE_API int GetAllMacSerialNo(int nBufferSize, char* pMacNo);
	HARDWARE_STANDARD_C_INTERFACE_API int IsSupportDownOfflineParam();
	HARDWARE_STANDARD_C_INTERFACE_API int DownOfflineParamFile();
	HARDWARE_STANDARD_C_INTERFACE_API int SetContinueTestCount(long long nCount, long long tmSample);
	HARDWARE_STANDARD_C_INTERFACE_API int SetHLHighSampleFilePath(int nBufferSize, char* pXMLPath);
	HARDWARE_STANDARD_C_INTERFACE_API int SetHighSpeedSampleFilePath(int nBufferSize, char* pXMLPath);
	HARDWARE_STANDARD_C_INTERFACE_API int GetSampleTimeEx(long long* time, int* nMicroSecond);
	HARDWARE_STANDARD_C_INTERFACE_API int GetAllSampleTime(int nBufferSize, char* pXMLTime, int* nOutSize);
	HARDWARE_STANDARD_C_INTERFACE_API int UpdateQueryInfoFile();
	HARDWARE_STANDARD_C_INTERFACE_API int UpdateMaterialFile();
	HARDWARE_STANDARD_C_INTERFACE_API int ChangeKiolMulitInstrStatus(int bKiloMultiInstr);
	HARDWARE_STANDARD_C_INTERFACE_API int WriteIOChnOutputValue(int nGroupChannelID, int nSize, const char* pIP, int nChannelID, int nCellID, int nOutValue);
	HARDWARE_STANDARD_C_INTERFACE_API int GetGPSSynchStatus();
	HARDWARE_STANDARD_C_INTERFACE_API int SetUseGPSSynch(int nSynch);
	HARDWARE_STANDARD_C_INTERFACE_API int GetTeamInfo(int nBufferSize, char* pTeamInfo);
	HARDWARE_STANDARD_C_INTERFACE_API int ChangeMapTeamID(int nBufferSize, const char* pTeamInfo);
	HARDWARE_STANDARD_C_INTERFACE_API int ChangeChannelGroupID(int nGroupChannelID, int nSize, const char* pIP, int nNewChannelGroupID);
	HARDWARE_STANDARD_C_INTERFACE_API int ChangeChannelGroupIDEx(int nBufferSize, const char* pXMLGroup);
	HARDWARE_STANDARD_C_INTERFACE_API int GetSensorLinkStatus(int nBufferSize, char* pSensorInfo);
	HARDWARE_STANDARD_C_INTERFACE_API int GetChnIndexInMacFromChannelID(int nGroupChannelID, const char* strMachineIP, int nChannelID , int *nIndex);
	HARDWARE_STANDARD_C_INTERFACE_API void GetChannelCount(int GroupChannelID, const char* pIP, int *nChannelCount);
	HARDWARE_STANDARD_C_INTERFACE_API void GetChannelFirstID(int GroupChannelID, const char* pIP, int *nChannelFirstID);
	HARDWARE_STANDARD_C_INTERFACE_API void IsChannelOnLine(long GroupChannelID, const char* strMachineIP, long nChannelID, long *bOnLine);
	HARDWARE_STANDARD_C_INTERFACE_API void GetChannelGroup(int nIndex, int* nGroupChannelID, char* pIP, int *ReturnValue);
	HARDWARE_STANDARD_C_INTERFACE_API void GetChannelGroupCount(int* nChannelGroupCount);
	HARDWARE_STANDARD_C_INTERFACE_API void GetChannelMeasureType(int GroupChannelID, const char* pIP, int nChannelID, int *nMeasureType);
	HARDWARE_STANDARD_C_INTERFACE_API void GetChannelIDFromIndex(int GroupChannelID, const char* pIP, int nIndex, int *nChannelID);
	HARDWARE_STANDARD_C_INTERFACE_API void GetDataIndexInTeam(int nMachineID, const char* pIP, int nChannelID, int nTeamID, int* nDataIndex, int *ReturnValue);
	HARDWARE_STANDARD_C_INTERFACE_API void GetChannelTeamID(int GroupChannelID, const char* pIP, int nChannelID, int *nTeamID);
	HARDWARE_STANDARD_C_INTERFACE_API void GetOneMacTeamChnData(long nMacID, long nTeamID, long* point, long nBufferSize,long long* nTotalDataPos, long* nReceiveCount, long* nChnCount, long* ReturnValue);
	//�Ƿ�̨������ȡ����ģʽ
	HARDWARE_STANDARD_C_INTERFACE_API void IsSingleGetDataStatus(long* ReturnValue);
	//���Ļ�ȡ��ȡ����ģʽ
	HARDWARE_STANDARD_C_INTERFACE_API void ChangeGetDataStatus(long nSingleGetData);
	// �Ƿ�֧�ֽӿ�����
	HARDWARE_STANDARD_C_INTERFACE_API bool IsSupportSetupInterface();

	// ��ȡƽ���������ֵ
	HARDWARE_STANDARD_C_INTERFACE_API bool GetAllChannelBalanceAndZeroValue(const char* strMachineIP);
	// ����ƽ���������ֵ
	HARDWARE_STANDARD_C_INTERFACE_API bool SetAllChannelBalanceAndZeroValue(const char* strMachineIP);

	// �ֶ�ȡ��  5981E nFetch 0:ֹͣȡ�� 1:��ʼȡ��/�ֶ�����
	HARDWARE_STANDARD_C_INTERFACE_API bool ManualFetch(const char* strMachineIP, int nMachineID, int nFetch);

	//�����Ƿ����������
	HARDWARE_STANDARD_C_INTERFACE_API bool SetCalcEUStatus(bool bCalcEU);

	//	GetNotAssicateGroupChannelXML
	//	GetOutDataSourceGroupChannel
	//	GetNotAssicateGroupChannel
	//	GetOutDataChannel
	//	GetNotAssicateChannel
	//	GetNotAssicateChnParamValue
	//	GetNotAssicateChnParamSelectValue
	//	SetOutChannel
	//	ChangeOutDataChnUsedStatus
	//	ChangeNotAssicateChnUsedStatus
	//	ModifyNotAssicateChnParam
	//	SetOutDataSampleParam
	//	GetOutDataSampleParam

		// �绯ѧ����ͨ���Զ����̱�־
	HARDWARE_STANDARD_C_INTERFACE_API bool ECSendChnAutoGainFlag(const char * pXMLMac);
	// �绯ѧ����ֹͣǰ�����Ƿ���Ҫ��λ״̬
	HARDWARE_STANDARD_C_INTERFACE_API bool ECSetSampleStopResetFlag(const char * pXMLMac);
	// �绯ѧ��������ǰ�����Ƿ�ѭ��ʵ��״̬���������������и�ֵ��
	HARDWARE_STANDARD_C_INTERFACE_API bool ECSetMultiSampleFlag(const char * pXMLMac);
	// �绯ѧ�޸���ز�����ͨ�ýӿ�
	HARDWARE_STANDARD_C_INTERFACE_API bool ECModifyParam(const char * pXMLMac, int nFlagType, const char * strInput);

	//����
	HARDWARE_STANDARD_C_INTERFACE_API bool GetInstrumentPrjInfo(const char* strMachineIP, int nMachineID, char** strPrjInfo);
	HARDWARE_STANDARD_C_INTERFACE_API bool DeleteInstrumentPrj(const char* strMachineIP, int nMachineID, const char* strPrjName);
	HARDWARE_STANDARD_C_INTERFACE_API bool CallBackData(const char* strMachineIP, int nMachineID, const char* strPrjName);
	//�����ļ�ϵͳFormat
	HARDWARE_STANDARD_C_INTERFACE_API bool ClearInstrumentFS(int nMachineID, const char* strMachineIP);
	//��ȡ��̨������ͨ����������x64
	HARDWARE_STANDARD_C_INTERFACE_API	int	GetOneMacRebackData_New(int nMacId,long* nReceiveCount, long* nChnCount, long long* lTotalPos, long lBufferSize, char* pBufferAddr);
	//HARDWARE_STANDARD_C_INTERFACE_API bool StopCallBackData(const char* strMachineIP, int nMachineID);

	//��ȡ����Ψһ����
	HARDWARE_STANDARD_C_INTERFACE_API int GetMachineNumber(const char* strMachineIP, int nMachineID, int nBufferSize, char* strMacNumber, int *nActualSize);
	//��������Ψһ����
	HARDWARE_STANDARD_C_INTERFACE_API bool SetMachineNumber(const char* strMachineIP, int nMachineID, const char* strMacNumber);
	//��ȡ�ͻ����к�
	HARDWARE_STANDARD_C_INTERFACE_API int GetSerialNumber(const char* strMachineIP, int nMachineID, int nBufferSize, char* strSerialNumber, int *nActualSize);
	//��������Ψһ����
	HARDWARE_STANDARD_C_INTERFACE_API bool SetSerialNumber(const char* strMachineIP, int nMachineID, const char* strSerialNumber);
	//��ȡ���ֵ pChannelIds id0,id1,id2...
	HARDWARE_STANDARD_C_INTERFACE_API int GetClearZeroValue(const char* strMachineIP, int nMachineID, const char* pChannelIds, int nBufferSize, char *pResult, int *nActualSize);
	//�������ֵ
	HARDWARE_STANDARD_C_INTERFACE_API int SetClearZeroValue(const char* strMachineIP, int nMachineID, const char* pChannelZeroValueXML);
	// ��ȡ����ͨ����ͬ����������ϵ����Ϣ
	HARDWARE_STANDARD_C_INTERFACE_API int GetChnModifyCoiefInfo(const char* strMachineIP, int nMachineID, int nChannelId, int nChannelStyle, int nCellId, int nParamType, int nBufferSize, char *pResult, int *nActualSize);
	//�޸�ͨ������������ϵ����Ϣ
	HARDWARE_STANDARD_C_INTERFACE_API int SetChnModifyCoiefInfo(const char* strMachineIP, int nMachineID, int nParamType, const char* pCoiefXML);

	/////////////////////////////5972N_PCI////////////////////////////////////////
	//�Լ�/ԭλУ׼ nCheckType:���� 1��Ӧ���Լ� 2��ԭλУ׼
	HARDWARE_STANDARD_C_INTERFACE_API int AutoCheck(const char* strMachineIP, int nMachineID, const char* pChannelIds, int nCheckType, bool bStart, int nFreqCode);
	//��������ʱ�޸�ͨ����Ϣ
	HARDWARE_STANDARD_C_INTERFACE_API int ChangeChannelInfo(const char* strMachineIP, int nMachineID, const char* pBuffer);
	//��ȡͨ���̶�������
	HARDWARE_STANDARD_C_INTERFACE_API int GetChnFixItem(const char* strMachineIP, int nMachineID, int nChannelId, int nBufferSize, char *pResult, int *nActualSize);
	//������Ż�ȡĳ̨������ͨ�����Լ�����״̬
	HARDWARE_STANDARD_C_INTERFACE_API	int		GetMacChnIdFromMacIndexEx(int nIndex, int nMacID, const char* pMacIp, int* nMacChnId ,int* bOnLine, int *nAcqId, int *nChannelVersion, int *nCardId);
	//��ʱ
	HARDWARE_STANDARD_C_INTERFACE_API int SetSyncTime(const char* strMachineIP, int nMachineID, unsigned long long lTime);
	//IEPE�Լ�
	HARDWARE_STANDARD_C_INTERFACE_API int GetSensorLinkStatusEx(int nBufferSize, char *pResult, int *nActualSize);
	//��������ͨ����ʹ�ñ�־
	HARDWARE_STANDARD_C_INTERFACE_API  int ResetAllChnUsedFlag();
	//����ͨ������Ƶ�ʺͲ�������
	HARDWARE_STANDARD_C_INTERFACE_API int SetChannelsFreq(const char* strMachineIP, int nMachineID, const char* pBuffer, int nLength);
	//��������
	HARDWARE_STANDARD_C_INTERFACE_API int StartClearZero(const char* strMachineIP, int nMachineID, const char* pChannelIds);
	//�˳�����
	HARDWARE_STANDARD_C_INTERFACE_API int EndClearZero(const char* strMachineIP, int nMachineID);
	//����DOͨ������
	HARDWARE_STANDARD_C_INTERFACE_API int SetDOChannelParam(const char* strMachineIP, int nMachineID, const char* pBuffer, int nLength);
	//����DOͨ�����ֵ
	HARDWARE_STANDARD_C_INTERFACE_API int SetMultiDOOutputValue(const char* strMachineIP, int nMachineID, const char* pBuffer, int nLength);
	//�·����������״̬֪ͨ
	HARDWARE_STANDARD_C_INTERFACE_API int SetServerLinkStatus(bool bLinkStatus);
	//����485ͨ��������
	HARDWARE_STANDARD_C_INTERFACE_API int SetBaudRate(const char* strMachineIP, int nMachineID, int nChannelId, int nBaudRate, bool bOddEvenCheck, int nOddEvenCheckMode, int nStopBitCount);
	//��ȡ485ͨ��������
	HARDWARE_STANDARD_C_INTERFACE_API int GetBaudRate(const char* strMachineIP, int nMachineID, int nChannelId, int *nBaudRate);
	//����485ͨ����������Ϣ
	HARDWARE_STANDARD_C_INTERFACE_API int Set485SensorInfo(const char* strMachineIP, int nMachineID, const char* pBuffer, int nLength);
	//����5503��������ֵ��Ҫ�Ĳ���ͨ���� ͨ����+ͨ��id + ���� + ͨ��id + ���� + ����
	HARDWARE_STANDARD_C_INTERFACE_API int Set5503ChannelsStatParam(const char* strMachineIP, int nMachineID, const char* pBuffer, int nLength);
	//����5503����ʱ����
	HARDWARE_STANDARD_C_INTERFACE_API int Set5503SampleInterval(const char* strMachineIP, int nMachineID, int nSampleInterval);
	//���ò�����ʽ
	HARDWARE_STANDARD_C_INTERFACE_API int SetSampleMode(int nSampleMode);

	// ��ȡ����ͨ����ͬ�����Ĳ�ͬ��λ��ϵ����Ϣ
	HARDWARE_STANDARD_C_INTERFACE_API int GetChnAppointedLevelCoief(const char* strMachineIP, int nMachineID, int nChannelId, int nChannelStyle, int nCellId, int nParamType, int nCode, float *fltCoief);
	// ��������
	HARDWARE_STANDARD_C_INTERFACE_API bool SetParam(int nID, int nCode);
	// Ƶ������ռ�ձ�
	HARDWARE_STANDARD_C_INTERFACE_API bool FlashBackDutyRatio(float fltDuty);
	// Ƶ��ռ�ձ�
	HARDWARE_STANDARD_C_INTERFACE_API bool FlashDutyRatio(float fltDuty);
	// Ƶ�����̶ܳ�
	HARDWARE_STANDARD_C_INTERFACE_API bool FlashClose(float fltAwe, float fltTheta);
	// Ƶ���������
	HARDWARE_STANDARD_C_INTERFACE_API bool FlashOutPulse(float fltPulse);
	// Ƶ����λ
	HARDWARE_STANDARD_C_INTERFACE_API bool FlashPhase(float fltPhase);
	// Ƶ����ͨ��
	HARDWARE_STANDARD_C_INTERFACE_API bool FlashBind(int nChnID);
	// Ƶ������ͨ������ϵ��
	HARDWARE_STANDARD_C_INTERFACE_API bool SetChnCoief_Flash(int nChnID, int nParamCode, float fltCoief);
	// Ƶ������ͨ������ϵ��
	HARDWARE_STANDARD_C_INTERFACE_API bool GetBattery_Flash(float& fltBattery);

};
#endif
