#ifndef SUMSIGNALSERVICE_H
#define SUMSIGNALSERVICE_H
#include "../Dao/sumsignaldao.h"
#include "../Dao/singlesignaldao.h"
#include "Vo/sumsignalandprojectnamevo.h"
class SumSignalService
{
public:
    SumSignalService();
    ~SumSignalService();

    //根据sumSignalId返回SumSignal
    SumSignal* getSumSignalById(string sumSignalId);

    //根据项目id，返回所有的sumSignal根据创建时间，倒序
    vector<SumSignal*> getSumSignalsByProjectId(long long projectId);

    //添加sumSignal
    string addSumSignal(SumSignal* sumSignal);

    //更新sumSignal
    string updateSumSignal(SumSignal* sumSignal);

    vector<SumSignalAndProjectNameVo> allSumSignalWithProjectName();
private:
    SumSignalDao* sumSignalDao;

};

#endif // SUMSIGNALSERVICE_H
