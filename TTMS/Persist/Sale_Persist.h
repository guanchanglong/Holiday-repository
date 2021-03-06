
#ifndef SLAEINGPERSIST_H
#define SALEINGPERSIST_H

#include "Sale.h"
#include "common.h"

int Sale_Perst_Insert(const sale_t *data);

int Sale_Perst_DeleteByID(int saleID);


//:int Sale_Perst_SelectAll(sale_list_t list) ;
//根据用户ID载入给定时间区间内的销售记录
int Sale_Perst_SelectByUsrID(sale_list_t list, int usrID,user_date_t stDate, user_date_t endDate);

//根据用户ID载入给定时间区间内的销售记录
int Sale_Perst_SelectByDate(sale_list_t list,user_date_t stDate, user_date_t endDate);

//根据票的id获得票售票的基本信息
int Select_Price_By_Playid(int id, sale_t *buf);

//int Sale_Infor_By_Time(char queryTime[][30], sale_list_t head);

//根据票的id获得票的基本信息 
//int Select_Price_By_Playid(int id, ticket_t *buf);

#endif
