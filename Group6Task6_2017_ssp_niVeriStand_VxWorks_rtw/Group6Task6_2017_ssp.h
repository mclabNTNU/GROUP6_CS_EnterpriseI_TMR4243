/*
 * Group6Task6_2017_ssp.h
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

#ifndef RTW_HEADER_Group6Task6_2017_ssp_h_
#define RTW_HEADER_Group6Task6_2017_ssp_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef Group6Task6_2017_ssp_COMMON_INCLUDES_
# define Group6Task6_2017_ssp_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#endif                                 /* Group6Task6_2017_ssp_COMMON_INCLUDES_ */

#include "Group6Task6_2017_ssp_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->ModelData.blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->ModelData.blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->ModelData.constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->ModelData.constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ()
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ()
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->ModelData.defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->ModelData.defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ()
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ()
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ()
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
# define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
# define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ()
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ()
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ()
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ()
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->ModelData.periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->ModelData.periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->ModelData.periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->ModelData.periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->ModelData.prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->ModelData.prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->ModelData.dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->ModelData.dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ()
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ()
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->ModelData.inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->ModelData.inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->ModelData.outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->ModelData.outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->ModelData.zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->ModelData.zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->ModelData.dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->ModelData.dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define Group6Task6_2017_ssp_rtModel   RT_MODEL_Group6Task6_2017_ssp_T

/* Block signals for system '<Root>/Sat_Chk_BT' */
typedef struct {
  real_T u_out;                        /* '<Root>/Sat_Chk_BT' */
  boolean_T error;                     /* '<Root>/Sat_Chk_BT' */
} B_Sat_Chk_BT_Group6Task6_2017_T;

/* Block signals (auto storage) */
typedef struct {
  real_T PosXLeft;                     /* '<Root>/PosXLeft' */
  real_T select;                       /* '<Root>/select ' */
  real_T PosYLeft;                     /* '<Root>/PosYLeft' */
  real_T R2_continuous;                /* '<Root>/R2_continuous' */
  real_T Saturation;                   /* '<Root>/Saturation' */
  real_T current_mode;                 /* '<Root>/Sel_Control_Mode' */
  real_T alpha;                        /* '<Root>/Force2Control' */
  real_T f_vspx;                       /* '<Root>/Force Allocation' */
  real_T f_vspy;                       /* '<Root>/Force Allocation' */
  real_T f_bt;                         /* '<Root>/Force Allocation' */
  real_T tau_x;                        /* '<Root>/Contoller_Map' */
  real_T tau_y;                        /* '<Root>/Contoller_Map' */
  real_T tau_yaw;                      /* '<Root>/Contoller_Map' */
  boolean_T LogicalOperator;           /* '<Root>/Logical Operator' */
  B_Sat_Chk_BT_Group6Task6_2017_T sf_Sat_Chk_VSP;/* '<Root>/Sat_Chk_VSP' */
  B_Sat_Chk_BT_Group6Task6_2017_T sf_Sat_Chk_BT;/* '<Root>/Sat_Chk_BT' */
} B_Group6Task6_2017_ssp_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Memory1_PreviousInput;        /* '<Root>/Memory1' */
  real_T PosXLeft_DWORK1;              /* '<Root>/PosXLeft' */
  real_T select_DWORK1;                /* '<Root>/select ' */
  real_T PosYLeft_DWORK1;              /* '<Root>/PosYLeft' */
  real_T R2_continuous_DWORK1;         /* '<Root>/R2_continuous' */
  real_T u_BT_DWORK1;                  /* '<Root>/u_BT' */
  real_T u_VSP1_DWORK1;                /* '<Root>/u_VSP1' */
  real_T u_VSP2_DWORK1;                /* '<Root>/u_VSP2' */
  real_T alpha_VSP1_DWORK1;            /* '<Root>/alpha_VSP1' */
  real_T alpha_VSP2_DWORK1;            /* '<Root>/alpha_VSP2' */
  real_T omega_VSP1_DWORK1;            /* '<Root>/omega_VSP1' */
  real_T omega_VSP2_DWORK1;            /* '<Root>/omega_VSP2' */
  real_T CurrentMode_DWORK1;           /* '<Root>/Current Mode ' */
  real_T ErrorStateFlag_DWORK1;        /* '<Root>/Error State Flag' */
  real_T f_vspx_DWORK1;                /* '<Root>/f_vspx' */
  real_T f_vspy_DWORK1;                /* '<Root>/f_vspy' */
  real_T f_bt_DWORK1;                  /* '<Root>/f_bt' */
  real_T tau_yaw_DWORK1;               /* '<Root>/tau_yaw' */
  real_T tau_x_DWORK1;                 /* '<Root>/tau_x' */
  real_T tau_y_DWORK1;                 /* '<Root>/tau_y' */
  int32_T NIVeriStandSignalProbe_DWORK2;/* '<Root>/NIVeriStandSignalProbe' */
  uint8_T PosXLeft_DWORK2[21];         /* '<Root>/PosXLeft' */
  uint8_T select_DWORK2[21];           /* '<Root>/select ' */
  uint8_T PosYLeft_DWORK2[21];         /* '<Root>/PosYLeft' */
  uint8_T R2_continuous_DWORK2[21];    /* '<Root>/R2_continuous' */
  uint8_T u_BT_DWORK2[21];             /* '<Root>/u_BT' */
  uint8_T u_VSP1_DWORK2[21];           /* '<Root>/u_VSP1' */
  uint8_T u_VSP2_DWORK2[21];           /* '<Root>/u_VSP2' */
  uint8_T alpha_VSP1_DWORK2[21];       /* '<Root>/alpha_VSP1' */
  uint8_T alpha_VSP2_DWORK2[21];       /* '<Root>/alpha_VSP2' */
  uint8_T omega_VSP1_DWORK2[21];       /* '<Root>/omega_VSP1' */
  uint8_T omega_VSP2_DWORK2[21];       /* '<Root>/omega_VSP2' */
  uint8_T CurrentMode_DWORK2[21];      /* '<Root>/Current Mode ' */
  uint8_T ErrorStateFlag_DWORK2[21];   /* '<Root>/Error State Flag' */
  uint8_T f_vspx_DWORK2[21];           /* '<Root>/f_vspx' */
  uint8_T f_vspy_DWORK2[21];           /* '<Root>/f_vspy' */
  uint8_T f_bt_DWORK2[21];             /* '<Root>/f_bt' */
  uint8_T tau_yaw_DWORK2[21];          /* '<Root>/tau_yaw' */
  uint8_T tau_x_DWORK2[21];            /* '<Root>/tau_x' */
  uint8_T tau_y_DWORK2[21];            /* '<Root>/tau_y' */
  uint8_T NIVeriStandSignalProbe_DWORK1[21];/* '<Root>/NIVeriStandSignalProbe' */
  uint8_T NIVeriStandSignalProbe_DWORK3[64];/* '<Root>/NIVeriStandSignalProbe' */
} DW_Group6Task6_2017_ssp_T;

/* Backward compatible GRT Identifiers */
#define rtB                            Group6Task6_2017_ssp_B
#define BlockIO                        B_Group6Task6_2017_ssp_T
#define rtP                            Group6Task6_2017_ssp_P
#define Parameters                     P_Group6Task6_2017_ssp_T
#define rtDWork                        Group6Task6_2017_ssp_DW
#define D_Work                         DW_Group6Task6_2017_ssp_T

/* Parameters (auto storage) */
struct P_Group6Task6_2017_ssp_T_ {
  real_T Ramp_X0;                      /* Mask Parameter: Ramp_X0
                                        * Referenced by: '<S4>/Constant1'
                                        */
  real_T Ramp_slope;                   /* Mask Parameter: Ramp_slope
                                        * Referenced by: '<S4>/Step'
                                        */
  real_T Ramp_start;                   /* Mask Parameter: Ramp_start
                                        * Referenced by:
                                        *   '<S4>/Constant'
                                        *   '<S4>/Step'
                                        */
  real_T Memory1_X0;                   /* Expression: 2
                                        * Referenced by: '<Root>/Memory1'
                                        */
  real_T PosXLeft_P1;                  /* Expression: width
                                        * Referenced by: '<Root>/PosXLeft'
                                        */
  real_T PosXLeft_P2;                  /* Expression: dtype
                                        * Referenced by: '<Root>/PosXLeft'
                                        */
  real_T PosXLeft_P3;                  /* Expression: portnum
                                        * Referenced by: '<Root>/PosXLeft'
                                        */
  real_T PosXLeft_P4;                  /* Expression: stime
                                        * Referenced by: '<Root>/PosXLeft'
                                        */
  real_T PosXLeft_P5;                  /* Expression: stype
                                        * Referenced by: '<Root>/PosXLeft'
                                        */
  real_T PosXLeft_P6;                  /* Expression: btype
                                        * Referenced by: '<Root>/PosXLeft'
                                        */
  real_T select_P1;                    /* Expression: width
                                        * Referenced by: '<Root>/select '
                                        */
  real_T select_P2;                    /* Expression: dtype
                                        * Referenced by: '<Root>/select '
                                        */
  real_T select_P3;                    /* Expression: portnum
                                        * Referenced by: '<Root>/select '
                                        */
  real_T select_P4;                    /* Expression: stime
                                        * Referenced by: '<Root>/select '
                                        */
  real_T select_P5;                    /* Expression: stype
                                        * Referenced by: '<Root>/select '
                                        */
  real_T select_P6;                    /* Expression: btype
                                        * Referenced by: '<Root>/select '
                                        */
  real_T DeadZone_Start;               /* Expression: -0.05
                                        * Referenced by: '<Root>/Dead Zone'
                                        */
  real_T DeadZone_End;                 /* Expression: 0.05
                                        * Referenced by: '<Root>/Dead Zone'
                                        */
  real_T PosYLeft_P1;                  /* Expression: width
                                        * Referenced by: '<Root>/PosYLeft'
                                        */
  real_T PosYLeft_P2;                  /* Expression: dtype
                                        * Referenced by: '<Root>/PosYLeft'
                                        */
  real_T PosYLeft_P3;                  /* Expression: portnum
                                        * Referenced by: '<Root>/PosYLeft'
                                        */
  real_T PosYLeft_P4;                  /* Expression: stime
                                        * Referenced by: '<Root>/PosYLeft'
                                        */
  real_T PosYLeft_P5;                  /* Expression: stype
                                        * Referenced by: '<Root>/PosYLeft'
                                        */
  real_T PosYLeft_P6;                  /* Expression: btype
                                        * Referenced by: '<Root>/PosYLeft'
                                        */
  real_T DeadZone1_Start;              /* Expression: -0.05
                                        * Referenced by: '<Root>/Dead Zone1'
                                        */
  real_T DeadZone1_End;                /* Expression: 0.05
                                        * Referenced by: '<Root>/Dead Zone1'
                                        */
  real_T R2_continuous_P1;             /* Expression: width
                                        * Referenced by: '<Root>/R2_continuous'
                                        */
  real_T R2_continuous_P2;             /* Expression: dtype
                                        * Referenced by: '<Root>/R2_continuous'
                                        */
  real_T R2_continuous_P3;             /* Expression: portnum
                                        * Referenced by: '<Root>/R2_continuous'
                                        */
  real_T R2_continuous_P4;             /* Expression: stime
                                        * Referenced by: '<Root>/R2_continuous'
                                        */
  real_T R2_continuous_P5;             /* Expression: stype
                                        * Referenced by: '<Root>/R2_continuous'
                                        */
  real_T R2_continuous_P6;             /* Expression: btype
                                        * Referenced by: '<Root>/R2_continuous'
                                        */
  real_T DeadZone2_Start;              /* Expression: -0.05
                                        * Referenced by: '<Root>/Dead Zone2'
                                        */
  real_T DeadZone2_End;                /* Expression: 0.05
                                        * Referenced by: '<Root>/Dead Zone2'
                                        */
  real_T Max_Global_Forces_Value[4];   /* Expression:  [1.165*2 2.629+1.165*2 0.3875*2.629+0.4575*1.165*2 2.629 ]
                                        * Referenced by: '<Root>/Max_Global_Forces'
                                        */
  real_T Sat_Forces_Value[2];          /* Expression:  [1.165*2 2.629 ]
                                        * Referenced by: '<Root>/Sat_Forces'
                                        */
  real_T u_BT_P1;                      /* Expression: width
                                        * Referenced by: '<Root>/u_BT'
                                        */
  real_T u_BT_P2;                      /* Expression: dtype
                                        * Referenced by: '<Root>/u_BT'
                                        */
  real_T u_BT_P3;                      /* Expression: portnum
                                        * Referenced by: '<Root>/u_BT'
                                        */
  real_T u_BT_P4;                      /* Expression: stime
                                        * Referenced by: '<Root>/u_BT'
                                        */
  real_T u_BT_P5;                      /* Expression: stype
                                        * Referenced by: '<Root>/u_BT'
                                        */
  real_T u_BT_P6;                      /* Expression: btype
                                        * Referenced by: '<Root>/u_BT'
                                        */
  real_T u_VSP1_P1;                    /* Expression: width
                                        * Referenced by: '<Root>/u_VSP1'
                                        */
  real_T u_VSP1_P2;                    /* Expression: dtype
                                        * Referenced by: '<Root>/u_VSP1'
                                        */
  real_T u_VSP1_P3;                    /* Expression: portnum
                                        * Referenced by: '<Root>/u_VSP1'
                                        */
  real_T u_VSP1_P4;                    /* Expression: stime
                                        * Referenced by: '<Root>/u_VSP1'
                                        */
  real_T u_VSP1_P5;                    /* Expression: stype
                                        * Referenced by: '<Root>/u_VSP1'
                                        */
  real_T u_VSP1_P6;                    /* Expression: btype
                                        * Referenced by: '<Root>/u_VSP1'
                                        */
  real_T u_VSP2_P1;                    /* Expression: width
                                        * Referenced by: '<Root>/u_VSP2'
                                        */
  real_T u_VSP2_P2;                    /* Expression: dtype
                                        * Referenced by: '<Root>/u_VSP2'
                                        */
  real_T u_VSP2_P3;                    /* Expression: portnum
                                        * Referenced by: '<Root>/u_VSP2'
                                        */
  real_T u_VSP2_P4;                    /* Expression: stime
                                        * Referenced by: '<Root>/u_VSP2'
                                        */
  real_T u_VSP2_P5;                    /* Expression: stype
                                        * Referenced by: '<Root>/u_VSP2'
                                        */
  real_T u_VSP2_P6;                    /* Expression: btype
                                        * Referenced by: '<Root>/u_VSP2'
                                        */
  real_T alpha_VSP1_P1;                /* Expression: width
                                        * Referenced by: '<Root>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P2;                /* Expression: dtype
                                        * Referenced by: '<Root>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P3;                /* Expression: portnum
                                        * Referenced by: '<Root>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P4;                /* Expression: stime
                                        * Referenced by: '<Root>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P5;                /* Expression: stype
                                        * Referenced by: '<Root>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P6;                /* Expression: btype
                                        * Referenced by: '<Root>/alpha_VSP1'
                                        */
  real_T alpha_VSP2_P1;                /* Expression: width
                                        * Referenced by: '<Root>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P2;                /* Expression: dtype
                                        * Referenced by: '<Root>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P3;                /* Expression: portnum
                                        * Referenced by: '<Root>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P4;                /* Expression: stime
                                        * Referenced by: '<Root>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P5;                /* Expression: stype
                                        * Referenced by: '<Root>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P6;                /* Expression: btype
                                        * Referenced by: '<Root>/alpha_VSP2'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<S4>/Step'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 0.3
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T omega_VSP1_P1;                /* Expression: width
                                        * Referenced by: '<Root>/omega_VSP1'
                                        */
  real_T omega_VSP1_P2;                /* Expression: dtype
                                        * Referenced by: '<Root>/omega_VSP1'
                                        */
  real_T omega_VSP1_P3;                /* Expression: portnum
                                        * Referenced by: '<Root>/omega_VSP1'
                                        */
  real_T omega_VSP1_P4;                /* Expression: stime
                                        * Referenced by: '<Root>/omega_VSP1'
                                        */
  real_T omega_VSP1_P5;                /* Expression: stype
                                        * Referenced by: '<Root>/omega_VSP1'
                                        */
  real_T omega_VSP1_P6;                /* Expression: btype
                                        * Referenced by: '<Root>/omega_VSP1'
                                        */
  real_T omega_VSP2_P1;                /* Expression: width
                                        * Referenced by: '<Root>/omega_VSP2'
                                        */
  real_T omega_VSP2_P2;                /* Expression: dtype
                                        * Referenced by: '<Root>/omega_VSP2'
                                        */
  real_T omega_VSP2_P3;                /* Expression: portnum
                                        * Referenced by: '<Root>/omega_VSP2'
                                        */
  real_T omega_VSP2_P4;                /* Expression: stime
                                        * Referenced by: '<Root>/omega_VSP2'
                                        */
  real_T omega_VSP2_P5;                /* Expression: stype
                                        * Referenced by: '<Root>/omega_VSP2'
                                        */
  real_T omega_VSP2_P6;                /* Expression: btype
                                        * Referenced by: '<Root>/omega_VSP2'
                                        */
  real_T CurrentMode_P1;               /* Expression: width
                                        * Referenced by: '<Root>/Current Mode '
                                        */
  real_T CurrentMode_P2;               /* Expression: dtype
                                        * Referenced by: '<Root>/Current Mode '
                                        */
  real_T CurrentMode_P3;               /* Expression: portnum
                                        * Referenced by: '<Root>/Current Mode '
                                        */
  real_T CurrentMode_P4;               /* Expression: stime
                                        * Referenced by: '<Root>/Current Mode '
                                        */
  real_T CurrentMode_P5;               /* Expression: stype
                                        * Referenced by: '<Root>/Current Mode '
                                        */
  real_T CurrentMode_P6;               /* Expression: btype
                                        * Referenced by: '<Root>/Current Mode '
                                        */
  real_T ErrorStateFlag_P1;            /* Expression: width
                                        * Referenced by: '<Root>/Error State Flag'
                                        */
  real_T ErrorStateFlag_P2;            /* Expression: dtype
                                        * Referenced by: '<Root>/Error State Flag'
                                        */
  real_T ErrorStateFlag_P3;            /* Expression: portnum
                                        * Referenced by: '<Root>/Error State Flag'
                                        */
  real_T ErrorStateFlag_P4;            /* Expression: stime
                                        * Referenced by: '<Root>/Error State Flag'
                                        */
  real_T ErrorStateFlag_P5;            /* Expression: stype
                                        * Referenced by: '<Root>/Error State Flag'
                                        */
  real_T ErrorStateFlag_P6;            /* Expression: btype
                                        * Referenced by: '<Root>/Error State Flag'
                                        */
  real_T f_vspx_P1;                    /* Expression: width
                                        * Referenced by: '<Root>/f_vspx'
                                        */
  real_T f_vspx_P2;                    /* Expression: dtype
                                        * Referenced by: '<Root>/f_vspx'
                                        */
  real_T f_vspx_P3;                    /* Expression: portnum
                                        * Referenced by: '<Root>/f_vspx'
                                        */
  real_T f_vspx_P4;                    /* Expression: stime
                                        * Referenced by: '<Root>/f_vspx'
                                        */
  real_T f_vspx_P5;                    /* Expression: stype
                                        * Referenced by: '<Root>/f_vspx'
                                        */
  real_T f_vspx_P6;                    /* Expression: btype
                                        * Referenced by: '<Root>/f_vspx'
                                        */
  real_T f_vspy_P1;                    /* Expression: width
                                        * Referenced by: '<Root>/f_vspy'
                                        */
  real_T f_vspy_P2;                    /* Expression: dtype
                                        * Referenced by: '<Root>/f_vspy'
                                        */
  real_T f_vspy_P3;                    /* Expression: portnum
                                        * Referenced by: '<Root>/f_vspy'
                                        */
  real_T f_vspy_P4;                    /* Expression: stime
                                        * Referenced by: '<Root>/f_vspy'
                                        */
  real_T f_vspy_P5;                    /* Expression: stype
                                        * Referenced by: '<Root>/f_vspy'
                                        */
  real_T f_vspy_P6;                    /* Expression: btype
                                        * Referenced by: '<Root>/f_vspy'
                                        */
  real_T f_bt_P1;                      /* Expression: width
                                        * Referenced by: '<Root>/f_bt'
                                        */
  real_T f_bt_P2;                      /* Expression: dtype
                                        * Referenced by: '<Root>/f_bt'
                                        */
  real_T f_bt_P3;                      /* Expression: portnum
                                        * Referenced by: '<Root>/f_bt'
                                        */
  real_T f_bt_P4;                      /* Expression: stime
                                        * Referenced by: '<Root>/f_bt'
                                        */
  real_T f_bt_P5;                      /* Expression: stype
                                        * Referenced by: '<Root>/f_bt'
                                        */
  real_T f_bt_P6;                      /* Expression: btype
                                        * Referenced by: '<Root>/f_bt'
                                        */
  real_T tau_yaw_P1;                   /* Expression: width
                                        * Referenced by: '<Root>/tau_yaw'
                                        */
  real_T tau_yaw_P2;                   /* Expression: dtype
                                        * Referenced by: '<Root>/tau_yaw'
                                        */
  real_T tau_yaw_P3;                   /* Expression: portnum
                                        * Referenced by: '<Root>/tau_yaw'
                                        */
  real_T tau_yaw_P4;                   /* Expression: stime
                                        * Referenced by: '<Root>/tau_yaw'
                                        */
  real_T tau_yaw_P5;                   /* Expression: stype
                                        * Referenced by: '<Root>/tau_yaw'
                                        */
  real_T tau_yaw_P6;                   /* Expression: btype
                                        * Referenced by: '<Root>/tau_yaw'
                                        */
  real_T tau_x_P1;                     /* Expression: width
                                        * Referenced by: '<Root>/tau_x'
                                        */
  real_T tau_x_P2;                     /* Expression: dtype
                                        * Referenced by: '<Root>/tau_x'
                                        */
  real_T tau_x_P3;                     /* Expression: portnum
                                        * Referenced by: '<Root>/tau_x'
                                        */
  real_T tau_x_P4;                     /* Expression: stime
                                        * Referenced by: '<Root>/tau_x'
                                        */
  real_T tau_x_P5;                     /* Expression: stype
                                        * Referenced by: '<Root>/tau_x'
                                        */
  real_T tau_x_P6;                     /* Expression: btype
                                        * Referenced by: '<Root>/tau_x'
                                        */
  real_T tau_y_P1;                     /* Expression: width
                                        * Referenced by: '<Root>/tau_y'
                                        */
  real_T tau_y_P2;                     /* Expression: dtype
                                        * Referenced by: '<Root>/tau_y'
                                        */
  real_T tau_y_P3;                     /* Expression: portnum
                                        * Referenced by: '<Root>/tau_y'
                                        */
  real_T tau_y_P4;                     /* Expression: stime
                                        * Referenced by: '<Root>/tau_y'
                                        */
  real_T tau_y_P5;                     /* Expression: stype
                                        * Referenced by: '<Root>/tau_y'
                                        */
  real_T tau_y_P6;                     /* Expression: btype
                                        * Referenced by: '<Root>/tau_y'
                                        */
  real_T NIVeriStandSignalProbe_P1;    /* Expression: 1
                                        * Referenced by: '<Root>/NIVeriStandSignalProbe'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Group6Task6_2017_ssp_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    void *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    int_T *periodicContStateIndices;
    real_T *periodicContStateRanges;
    real_T *derivs;
    void *zcSignalValues;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
    void *dwork;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_Group6Task6_2017_ssp_T Group6Task6_2017_ssp_P;

/* Block signals (auto storage) */
extern B_Group6Task6_2017_ssp_T Group6Task6_2017_ssp_B;

/* Block states (auto storage) */
extern DW_Group6Task6_2017_ssp_T Group6Task6_2017_ssp_DW;

/*====================*
 * External functions *
 *====================*/
extern Group6Task6_2017_ssp_rtModel *Group6Task6_2017_ssp(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_Group6Task6_2017_ssp_T *const Group6Task6_2017_ssp_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Group6Task6_2017_ssp'
 * '<S1>'   : 'Group6Task6_2017_ssp/Contoller_Map'
 * '<S2>'   : 'Group6Task6_2017_ssp/Force Allocation'
 * '<S3>'   : 'Group6Task6_2017_ssp/Force2Control'
 * '<S4>'   : 'Group6Task6_2017_ssp/Ramp'
 * '<S5>'   : 'Group6Task6_2017_ssp/Sat_Chk_BT'
 * '<S6>'   : 'Group6Task6_2017_ssp/Sat_Chk_VSP'
 * '<S7>'   : 'Group6Task6_2017_ssp/Sel_Control_Mode'
 */
#endif                                 /* RTW_HEADER_Group6Task6_2017_ssp_h_ */

/*========================================================================*
 * NI VeriStand Generated Code                                            *
 *========================================================================**/
#define NI_SIT_PARAMS
#ifdef NI_ROOTMODEL_Group6Task6_2017_ssp
#ifndef NI_VERISTAND_MODELDATAFILE
#ifdef NI_VERISTAND_MAINMODELFILE

int READSIDE = 0;
int tid = 0;

#ifdef MULTITASKING

P_Group6Task6_2017_ssp_T rtParameter[NUMST+!TID01EQ];
P_Group6Task6_2017_ssp_T *param_lookup[NUMST][2] = {
  { &rtParameter[0], &rtParameter[1] },

  { &rtParameter[0], &rtParameter[1] },
};

#else

P_Group6Task6_2017_ssp_T rtParameter[2];

#endif

#else

extern int READSIDE;

#ifdef MULTITASKING

extern int tid;
extern P_Group6Task6_2017_ssp_T* param_lookup[NUMST][2];

#else

extern P_Group6Task6_2017_ssp_T rtParameter[];

#endif
#endif

#ifdef MULTITASKING
#define Group6Task6_2017_ssp_P         (*param_lookup[tid][READSIDE])
#else
#define Group6Task6_2017_ssp_P         rtParameter[READSIDE]
#endif
#endif
#endif
