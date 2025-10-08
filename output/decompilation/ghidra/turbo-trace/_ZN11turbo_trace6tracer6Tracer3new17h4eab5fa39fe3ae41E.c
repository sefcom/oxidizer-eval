void _ZN11turbo_trace6tracer6Tracer3new17h4eab5fa39fe3ae41E
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0 [26];
  undefined local_f0 [208];
  
                    /* try { // try from 00467956 to 0046795f has its CatchHandler @ 00467a4c */
  _ZN9turbopath24absolute_system_path_buf21AbsoluteSystemPathBuf12from_unknown17h6ee9ef581f0f913bE
            (&local_1d0,param_2[1],param_2[2]);
  uVar2 = uStack_1c8;
  uVar1 = local_1d0;
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hc219ee25ff47600dE
            (&local_1d0,param_3);
                    /* try { // try from 00467983 to 0046798f has its CatchHandler @ 00467a67 */
  _ZN4core4iter6traits8iterator8Iterator7collect17hc2abea4174d80438E(&local_1e8,&local_1d0);
                    /* try { // try from 004679ab to 004679b8 has its CatchHandler @ 00467a82 */
  (*(code *)
    PTR__ZN76__LT_swc_common__source_map__SourceMap_u20_as_u20_core__default__Default_GT_7default17h868a0c2a871bf1c2E_0075ffc8
  )(local_f0);
  local_1d0 = 1;
  uStack_1c8 = 1;
  (*(code *)PTR_memcpy_0075f310)(local_1c0,local_f0,0xd0);
                    /* try { // try from 004679e3 to 004679ec has its CatchHandler @ 00467a82 */
  uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h754cfb95a1fbe884E(&local_1d0);
  param_1[2] = local_1d8;
  *param_1 = local_1e8;
  param_1[1] = uStack_1e0;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = local_1c0[0];
  param_1[0xc] = uVar3;
  param_1[5] = param_2[2];
  uVar1 = param_2[1];
  param_1[3] = *param_2;
  param_1[4] = uVar1;
  param_1[6] = 0;
  param_1[7] = 8;
  param_1[8] = 0;
  *(undefined *)(param_1 + 0xd) = 0;
  return;
}