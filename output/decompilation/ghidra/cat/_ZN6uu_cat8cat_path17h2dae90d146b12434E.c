void _ZN6uu_cat8cat_path17h2dae90d146b12434E
               (ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,ulong *param_6)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  uint local_d4;
  ulong local_d0;
  undefined8 local_c8;
  char local_c0;
  undefined7 uStack_bf;
  undefined local_b8;
  undefined7 uStack_b7;
  
  _ZN6uu_cat14get_input_type17hbfde5e00eb22cee4E(&local_c8);
  if (local_c8 != 0x8000000000000006) {
    param_1[2] = CONCAT71(uStack_b7,local_b8);
    *(ulong *)((long)param_1 + 9) = CONCAT17(local_b8,uStack_bf);
    *param_1 = local_c8;
    *(char *)(param_1 + 1) = local_c0;
    return;
  }
  if (local_c0 == '\0') {
    *param_1 = 0x8000000000000003;
    return;
  }
  if (local_c0 == '\x02') {
    uVar4 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001f2540)();
    _ZN6uucore8features2fs15FileInformation9from_file17hb6ba8add35b75427E(&local_c8);
    uVar3 = CONCAT71(uStack_bf,local_c0);
    if ((local_c8 & 1) != 0) {
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar3;
      return;
    }
    local_d0 = CONCAT71(uStack_b7,local_b8);
    (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001f2540)();
    local_c0 = _ZN3std3sys2io11is_terminal6isatty11is_terminal17hd06dbb5b64a2e82fE();
    local_c8 = uVar4;
    if ((((param_6 != (ulong *)0x0) && (*param_6 == uVar3)) && (local_d0 == param_6[1])) &&
       (cVar2 = _ZN6uu_cat12is_appending17h9e9d7fe51c0c743fE(), cVar2 != '\0')) {
      *param_1 = 0x8000000000000004;
      return;
    }
    _ZN6uu_cat10cat_handle17h83d5d925eb060efbE(param_1,&local_c8,param_4,param_5);
    return;
  }
  if (local_c0 == '\a') {
    _ZN3std2os4unix3net6stream10UnixStream7connect17h284395e806ec7af2E();
    if ((local_c8 & 1) != 0) {
LAB_0015e258:
      *param_1 = 0x8000000000000000;
      param_1[1] = CONCAT71(uStack_bf,local_c0);
      return;
    }
    uVar1 = local_c8._4_4_;
    local_d4 = local_c8._4_4_;
                    /* try { // try from 0015e1c8 to 0015e1d7 has its CatchHandler @ 0015e3a0 */
    uVar3 = (*(code *)
              PTR__ZN3std2os4unix3net8datagram12UnixDatagram8shutdown17h05e4febd5bdd1171E_001f2538)
                      (&local_d4,1);
    if (uVar3 != 0) {
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar3;
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb12cd77b3305f064E(uVar1);
      return;
    }
    local_c8._0_5_ = (uint5)uVar1;
                    /* try { // try from 0015e311 to 0015e325 has its CatchHandler @ 0015e38a */
    _ZN6uu_cat10cat_handle17h3a9fe38f68852762E(param_1,&local_c8,param_4,param_5);
  }
  else {
    _ZN3std2fs4File4open17h74de74db77eaa88eE(&local_c8,param_2,param_3);
    if ((local_c8 & 1) != 0) goto LAB_0015e258;
    uVar1 = local_c8._4_4_;
                    /* try { // try from 0015e2bd to 0015e2eb has its CatchHandler @ 0015e3a2 */
    if ((param_6 != (ulong *)0x0) &&
       (lVar5 = (*(code *)
                  PTR__ZN6uucore8features2fs15FileInformation9file_size17h5ed1507e54a6e051E_001f2548
                )(param_6), lVar5 != 0)) {
      _ZN6uucore8features2fs15FileInformation9from_file17h4dbb3c16aaf63a90E(&local_c8,uVar1);
      if ((int)local_c8 == 1) {
        _ZN4core3ptr110drop_in_place_LT_core__result__Result_LT_uucore__features__fs__FileInformation_C_std__io__error__Error_GT__GT_17hc263a3b15372b709E
                  (&local_c8);
      }
      else if ((CONCAT71(uStack_bf,local_c0) == *param_6) &&
              (CONCAT71(uStack_b7,local_b8) == param_6[1])) {
        *param_1 = 0x8000000000000004;
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb12cd77b3305f064E(uVar1);
        return;
      }
    }
    local_c8._0_5_ = (uint5)uVar1;
                    /* try { // try from 0015e367 to 0015e37b has its CatchHandler @ 0015e38c */
    _ZN6uu_cat10cat_handle17h670456dd76daed3cE(param_1,&local_c8,param_4,param_5);
  }
  _ZN4core3ptr61drop_in_place_LT_uu_cat__InputHandle_LT_std__fs__File_GT__GT_17h63f04d642924b2ebE
            ((int)local_c8);
  return;
}