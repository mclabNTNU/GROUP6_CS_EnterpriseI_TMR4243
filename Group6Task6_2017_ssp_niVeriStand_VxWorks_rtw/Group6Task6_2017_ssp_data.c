/*========================================================================*
 * NI VeriStand Generated Code                                            *
 *========================================================================**/
#include "NIVERISTAND_API.h"
#if defined VXWORKS || defined kNIOSLinux
# define Group6Task6_2017_ssp_P        Group6Task6_2017_ssp_P DataSection(".NIVS.defaultparams")
#endif

/*
 * Group6Task6_2017_ssp_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Group6Task6_2017_ssp".
 *
 * Model version              : 1.161
 * Simulink Coder version : 8.8 (R2015a) 09-Feb-2015
 * C source code generated on : Tue Jan 31 15:39:06 2017
 *
 * Target selection: NIVeriStand_VxWorks.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#include "Group6Task6_2017_ssp.h"
#include "Group6Task6_2017_ssp_private.h"

/* Block parameters (auto storage) */
P_Group6Task6_2017_ssp_T Group6Task6_2017_ssp_P = {
  0.0,                                 /* Mask Parameter: Ramp_X0
                                        * Referenced by: '<S4>/Constant1'
                                        */
  0.1,                                 /* Mask Parameter: Ramp_slope
                                        * Referenced by: '<S4>/Step'
                                        */
  0.0,                                 /* Mask Parameter: Ramp_start
                                        * Referenced by:
                                        *   '<S4>/Constant'
                                        *   '<S4>/Step'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<Root>/Memory1'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/PosXLeft'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/PosXLeft'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/PosXLeft'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/PosXLeft'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/PosXLeft'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/PosXLeft'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/select '
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/select '
                                        */
  4.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/select '
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/select '
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/select '
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/select '
                                        */
  -0.05,                               /* Expression: -0.05
                                        * Referenced by: '<Root>/Dead Zone'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<Root>/Dead Zone'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/PosYLeft'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/PosYLeft'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/PosYLeft'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/PosYLeft'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/PosYLeft'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/PosYLeft'
                                        */
  -0.05,                               /* Expression: -0.05
                                        * Referenced by: '<Root>/Dead Zone1'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<Root>/Dead Zone1'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/R2_continuous'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/R2_continuous'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/R2_continuous'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/R2_continuous'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/R2_continuous'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/R2_continuous'
                                        */
  -0.05,                               /* Expression: -0.05
                                        * Referenced by: '<Root>/Dead Zone2'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<Root>/Dead Zone2'
                                        */

  /*  Expression:  [1.165*2 2.629+1.165*2 0.3875*2.629+0.4575*1.165*2 2.629 ]
   * Referenced by: '<Root>/Max_Global_Forces'
   */
  { 2.33, 4.959, 2.0847125, 2.629 },

  /*  Expression:  [1.165*2 2.629 ]
   * Referenced by: '<Root>/Sat_Forces'
   */
  { 2.33, 2.629 },
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/u_BT'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/u_BT'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/u_BT'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/u_BT'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/u_BT'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/u_BT'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/u_VSP1'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/u_VSP1'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/u_VSP1'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/u_VSP1'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/u_VSP1'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/u_VSP1'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/u_VSP2'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/u_VSP2'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/u_VSP2'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/u_VSP2'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/u_VSP2'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/u_VSP2'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/alpha_VSP1'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/alpha_VSP1'
                                        */
  4.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/alpha_VSP1'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/alpha_VSP1'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/alpha_VSP1'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/alpha_VSP1'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/alpha_VSP2'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/alpha_VSP2'
                                        */
  5.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/alpha_VSP2'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/alpha_VSP2'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/alpha_VSP2'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/alpha_VSP2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/Step'
                                        */
  0.3,                                 /* Expression: 0.3
                                        * Referenced by: '<Root>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Saturation'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/omega_VSP1'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/omega_VSP1'
                                        */
  6.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/omega_VSP1'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/omega_VSP1'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/omega_VSP1'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/omega_VSP1'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/omega_VSP2'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/omega_VSP2'
                                        */
  7.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/omega_VSP2'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/omega_VSP2'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/omega_VSP2'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/omega_VSP2'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/Current Mode '
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/Current Mode '
                                        */
  8.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/Current Mode '
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/Current Mode '
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/Current Mode '
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/Current Mode '
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/Error State Flag'
                                        */
  10.0,                                /* Expression: dtype
                                        * Referenced by: '<Root>/Error State Flag'
                                        */
  9.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/Error State Flag'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/Error State Flag'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/Error State Flag'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/Error State Flag'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/f_vspx'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/f_vspx'
                                        */
  10.0,                                /* Expression: portnum
                                        * Referenced by: '<Root>/f_vspx'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/f_vspx'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/f_vspx'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/f_vspx'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/f_vspy'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/f_vspy'
                                        */
  11.0,                                /* Expression: portnum
                                        * Referenced by: '<Root>/f_vspy'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/f_vspy'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/f_vspy'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/f_vspy'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/f_bt'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/f_bt'
                                        */
  12.0,                                /* Expression: portnum
                                        * Referenced by: '<Root>/f_bt'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/f_bt'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/f_bt'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/f_bt'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/tau_yaw'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/tau_yaw'
                                        */
  13.0,                                /* Expression: portnum
                                        * Referenced by: '<Root>/tau_yaw'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/tau_yaw'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/tau_yaw'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/tau_yaw'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/tau_x'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/tau_x'
                                        */
  14.0,                                /* Expression: portnum
                                        * Referenced by: '<Root>/tau_x'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/tau_x'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/tau_x'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/tau_x'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/tau_y'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/tau_y'
                                        */
  15.0,                                /* Expression: portnum
                                        * Referenced by: '<Root>/tau_y'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/tau_y'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/tau_y'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/tau_y'
                                        */
  1.0                                  /* Expression: 1
                                        * Referenced by: '<Root>/NIVeriStandSignalProbe'
                                        */
};

#if defined VXWORKS || defined kNIOSLinux

typedef struct {
  long size;
  long width;
  long basetype;
} NI_ParamSizeWidth;

NI_ParamSizeWidth P_Group6Task6_2017_ssp_T_sizes[] DataSection(
  ".NIVS.defaultparamsizes") = {
  { sizeof(P_Group6Task6_2017_ssp_T), 1 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 4, 0 },

  { sizeof(real_T), 2, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },
};

#endif
