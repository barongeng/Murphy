#ifndef __SOLVER_H__
#define __SOLVER_H__

#include "net.h"

typedef enum
{
	SOLVER_TYPE_Classifaction,
	SOLVER_TYPE_Detection,
	SOLVER_TYPE_BUTT
}SOLVER_TYPE_e;


typedef struct
{
	SOLVER_TYPE_e type;

	NET_PARA_s netPara;

	/*�������������data��label����Ӧ�÷���DataLayer*/
	int classifyNum;

	/*�������Ӧ�÷���ĳ��LossLayer*/
	double (*loss_function)(BLOB_s *e);

	NET_s *pNetTrain;
	NET_s *pNetTest;
	
}SOLVER_s;

typedef struct
{
	
}SOLVER_RES_s;



#endif