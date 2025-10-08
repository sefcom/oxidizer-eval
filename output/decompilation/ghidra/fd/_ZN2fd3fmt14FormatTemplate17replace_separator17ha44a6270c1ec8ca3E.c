void _ZN2fd3fmt14FormatTemplate17replace_separator17ha44a6270c1ec8ca3E
               (undefined (*param_1) [16],undefined8 param_2,undefined8 param_3,long param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined local_148 [16];
  undefined8 local_138;
  undefined (*local_130) [16];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  char local_a8;
  undefined8 local_a7;
  undefined8 uStack_9f;
  undefined8 local_97;
  undefined8 uStack_8f;
  undefined8 local_87;
  undefined7 uStack_7f;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_38;
  
  if (param_4 == 0) {
    *(undefined8 *)(*param_1 + 8) = param_2;
    *(undefined8 *)param_1[1] = param_3;
    *(undefined8 *)*param_1 = 0x8000000000000000;
  }
  else {
    local_130 = param_1;
    local_148 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h48a23d67ea2efec0E
                          (param_3,1,1,&PTR_s__rustc_bf64d66bd58719fac2585eae5_005024a0);
    local_138 = 0;
                    /* try { // try from 002f62e0 to 002f62f0 has its CatchHandler @ 002f6530 */
    (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_00540860)
              (&local_128,param_2,param_3);
    uStack_38 = uStack_f0;
    local_70 = local_128;
    uStack_6c = uStack_124;
    uStack_68 = uStack_120;
    uStack_64 = uStack_11c;
    cVar2 = '\v';
LAB_002f635b:
    while( true ) {
      local_a8 = '\v';
      if (cVar2 == '\v') {
        (*(code *)
          PTR__ZN80__LT_std__path__Components_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h73ed8dd6f02f5cb4E_005402b8
        )(&local_128,&local_70);
        cVar2 = (char)local_128;
      }
      else {
        local_108._1_3_ = (undefined3)local_87;
        uStack_104 = (undefined4)((ulong)local_87 >> 0x18);
        uStack_100._0_1_ = (undefined)((ulong)local_87 >> 0x38);
        uStack_100._1_3_ = (undefined3)uStack_7f;
        uStack_fc = (undefined4)((uint7)uStack_7f >> 0x18);
        local_118._1_3_ = (undefined3)local_97;
        uStack_114 = (undefined4)((ulong)local_97 >> 0x18);
        uStack_110._0_1_ = (undefined)((ulong)local_97 >> 0x38);
        uStack_110._1_3_ = (undefined3)uStack_8f;
        uStack_10c = (undefined4)((ulong)uStack_8f >> 0x18);
        local_108._0_1_ = (undefined)((ulong)uStack_8f >> 0x38);
        uStack_124 = (undefined4)((ulong)local_a7 >> 0x18);
        uStack_120._0_1_ = (undefined)((ulong)local_a7 >> 0x38);
        uStack_120._1_3_ = (undefined3)uStack_9f;
        uStack_11c = (undefined4)((ulong)uStack_9f >> 0x18);
        local_118._0_1_ = (undefined)((ulong)uStack_9f >> 0x38);
        local_128 = CONCAT31((int3)local_a7,cVar2);
      }
      if (cVar2 == '\n') break;
      local_e8._0_1_ = (byte)local_128;
      lVar4 = (ulong)(byte)local_e8 - 5;
      if (3 < (byte)((byte)local_e8 - 6)) {
        lVar4 = 0;
      }
      local_e8 = local_128;
      uStack_e4 = uStack_124;
      uStack_e0 = uStack_120;
      uStack_dc = uStack_11c;
      local_d8 = local_118;
      uStack_d4 = uStack_114;
      uStack_d0 = uStack_110;
      uStack_cc = uStack_10c;
      local_c8 = local_108;
      uStack_c4 = uStack_104;
      uStack_c0 = uStack_100;
      uStack_bc = uStack_fc;
      if (lVar4 != 0) {
        if (lVar4 != 1) goto code_r0x002f641e;
        goto LAB_002f6340;
      }
      if ((byte)local_e8 == 4) {
        uVar3 = CONCAT44(uStack_11c,uStack_120);
        uVar1 = CONCAT44(uStack_114,local_118);
        auVar5._4_4_ = uStack_10c;
        auVar5._0_4_ = uStack_110;
        auVar5._12_4_ = uStack_104;
        auVar5._8_4_ = local_108;
        _ZN3std3ffi6os_str8OsString4push17h6a19ccb6bfe997acE(local_148,param_4,param_5);
        _ZN3std3ffi6os_str8OsString4push17h6a19ccb6bfe997acE(local_148,param_4,param_5);
        _ZN3std3ffi6os_str8OsString4push17h6a19ccb6bfe997acE(local_148,uVar3,uVar1);
        _ZN3std3ffi6os_str8OsString4push17h6a19ccb6bfe997acE(local_148,param_4,param_5);
      }
      else {
        auVar5 = _ZN3std4path9Component9as_os_str17hf9025a90ab753f63E(&local_e8);
      }
      _ZN3std3ffi6os_str8OsString4push17h6a19ccb6bfe997acE(local_148,auVar5._0_8_,auVar5._8_8_);
      cVar2 = local_a8;
    }
    *(undefined8 *)local_130[1] = local_138;
    *local_130 = local_148;
  }
  return;
code_r0x002f641e:
  uVar3 = _ZN3std4path9Component9as_os_str17hf9025a90ab753f63E(&local_e8);
  _ZN3std3ffi6os_str8OsString4push17h6a19ccb6bfe997acE(local_148,uVar3);
  _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17h7382d7627330a388E(&local_a8,&local_70);
  cVar2 = local_a8;
  if (local_a8 != '\n') {
LAB_002f6340:
                    /* try { // try from 002f6340 to 002f64eb has its CatchHandler @ 002f6535 */
    _ZN3std3ffi6os_str8OsString4push17h6a19ccb6bfe997acE(local_148,param_4,param_5);
    cVar2 = local_a8;
  }
  goto LAB_002f635b;
}