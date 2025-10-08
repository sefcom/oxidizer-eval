uint _ZN11firecracker4main17hd20bcdbec6856efdE(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  byte local_119;
  undefined **local_118;
  undefined8 uStack_110;
  undefined8 **local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined **local_d0;
  code *local_c8;
  undefined **local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  int local_50 [10];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  _ZN11firecracker9main_exec17h0b30eb7959f3f695E(local_50);
  if (local_50[0] == 0xb) {
    uVar1 = 0;
    uVar2 = _ZN4core4sync6atomic11atomic_load17hcd41a4cf8b7c5bb4E
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE_004bfb78,0);
    if (2 < uVar2) {
      local_118 = &PTR_DAT_004a3e58;
      uStack_110 = 1;
      local_108 = (undefined8 **)0x8;
      uStack_100 = 0;
      uStack_f8 = 0;
      local_78 = (*(code *)PTR__ZN3log13__private_api3loc17h0b1bf3028c786bb7E_004bfb80)
                           (&PTR_DAT_004a3e98);
      local_98 = &DAT_00138bb9;
      uStack_90 = 0xb;
      local_88 = &DAT_00138bb9;
      uStack_80 = 0xb;
      _ZN3log13__private_api8log_impl17h05439a06b798919cE(&local_118,3,&local_98);
      uVar1 = 0;
    }
  }
  else {
    local_58 = local_10;
    local_68 = local_20;
    uStack_64 = uStack_1c;
    uStack_60 = uStack_18;
    uStack_5c = uStack_14;
    uStack_70 = uStack_28;
    uStack_6c = uStack_24;
    lVar3 = _ZN4core4sync6atomic11atomic_load17hcd41a4cf8b7c5bb4E
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE_004bfb78,0);
    if (lVar3 != 0) {
      local_d0 = &local_98;
      local_c8 = 
      _ZN11firecracker1_71__LT_impl_u20_core__fmt__Display_u20_for_u20_firecracker__MainError_GT_3fmt17hf09503798fa43cb0E
      ;
      local_118 = (undefined **)&DAT_00130b60;
      uStack_110 = 1;
      uStack_f8 = 0;
      local_108 = &local_d0;
      uStack_100 = 1;
      local_a0 = (*(code *)PTR__ZN3log13__private_api3loc17h0b1bf3028c786bb7E_004bfb80)
                           (&PTR_DAT_004a3e68);
      local_c0 = (undefined **)&DAT_00138bb9;
      local_b8 = (code *)0xb;
      local_b0 = &DAT_00138bb9;
      local_a8 = 0xb;
      _ZN3log13__private_api8log_impl17h05439a06b798919cE(&local_118,1,&local_c0);
    }
    local_c0 = &local_98;
    local_b8 = 
    _ZN59__LT_firecracker__MainError_u20_as_u20_core__fmt__Debug_GT_3fmt17h8305828c66816984E;
    local_118 = &PTR_DAT_004a3e28;
    uStack_110 = 2;
    uStack_f8 = 0;
    local_108 = &local_c0;
    uStack_100 = 1;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_004bfc98)(&local_118);
    local_d8 = local_58;
    local_e8 = local_68;
    uStack_e4 = uStack_64;
    uStack_e0 = uStack_60;
    uStack_dc = uStack_5c;
    uStack_f0 = uStack_70;
    uStack_ec = uStack_6c;
    uVar1 = _ZN11firecracker95__LT_impl_u20_core__convert__From_LT_firecracker__MainError_GT__u20_for_u20_vmm__FcExitCode_GT_4from17hdc436c2690ea3a60E
                      (&local_118);
    local_119 = (byte)uVar1;
    lVar3 = _ZN4core4sync6atomic11atomic_load17hcd41a4cf8b7c5bb4E
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE_004bfb78,0);
    if (lVar3 != 0) {
      local_d0 = (undefined **)&local_119;
      local_c8 = (code *)
                 PTR__ZN4core3fmt3num3imp51__LT_impl_u20_core__fmt__Display_u20_for_u20_u8_GT_3fmt17h150c2a008a7de3c9E_004bf918
      ;
      local_118 = &PTR_DAT_004a3e48;
      uStack_110 = 1;
      uStack_f8 = 0;
      local_108 = &local_d0;
      uStack_100 = 1;
      local_a0 = (*(code *)PTR__ZN3log13__private_api3loc17h0b1bf3028c786bb7E_004bfb80)
                           (&PTR_DAT_004a3e80);
      local_c0 = (undefined **)&DAT_00138bb9;
      local_b8 = (code *)0xb;
      local_b0 = &DAT_00138bb9;
      local_a8 = 0xb;
      _ZN3log13__private_api8log_impl17h05439a06b798919cE(&local_118,1,&local_c0);
      return (uint)local_119;
    }
  }
  return uVar1;
}