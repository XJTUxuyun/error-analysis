#ifndef __ERROR_ANALYSIS_H
#define __ERROR_ANALYSIS_H

/**
 * 动态随机误差变量差分法计算随机误差
 * 假设观测序列步长固定
 * @param obs_values:		原始观测数据
 * @param len:				观测数据长度
 * @return:					观测序列动态随机误差
 */
double rand_err_var_diff(double *obs_values, int len);

#endif
