undefined  [16] _ZN3bat4less21retrieve_less_version17h21096205fd9a4b87E(void)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uVar3;
  undefined8 extraout_RDX;
  byte *unaff_RBX;
  undefined auVar4 [16];
  long local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  long local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  byte local_f0 [8];
  long local_e8;
  long local_e0;
  undefined8 uStack_d8;
  
  uVar3 = _ZN3std3ffi6os_str103__LT_impl_u20_core__convert__AsRef_LT_std__ffi__os_str__OsStr_GT__u20_for_u20_alloc__string__String_GT_6as_ref17h5eb4ca0e0b17e13dE
                    ();
  _ZN8grep_cli10decompress14resolve_binary17h64d0312cb73fa303E(local_f0,uVar3);
  if ((local_f0[0] & 1) == 0) {
    local_148 = local_e0;
    lVar2 = local_148;
    uStack_140 = uStack_d8;
    uVar3 = uStack_140;
    local_148._0_4_ = (undefined4)local_e0;
    local_148._4_4_ = (undefined4)((ulong)local_e0 >> 0x20);
    uStack_140._0_4_ = (undefined4)uStack_d8;
    uStack_140._4_4_ = (undefined4)((ulong)uStack_d8 >> 0x20);
    local_100 = (undefined4)local_148;
    uStack_fc = local_148._4_4_;
    uStack_f8 = (undefined4)uStack_140;
    uStack_f4 = uStack_140._4_4_;
    local_108 = local_e8;
    unaff_RBX = local_f0;
    local_148 = lVar2;
    uStack_140 = uVar3;
    _ZN3std7process7Command3new17h3f6cc1aa3e6a6597E(unaff_RBX,&local_108,extraout_RDX,-local_e8);
                    /* try { // try from 0053c055 to 0053c099 has its CatchHandler @ 0053c13e */
    _ZN3std7process7Command3arg17hd3991715298ce12eE(unaff_RBX,&DAT_002a2a36,9);
    (*(code *)PTR__ZN3std7process7Command6output17h8d3fd625d1d0bec1E_00807c30)(&local_148,local_f0);
    if (local_148 != -0x8000000000000000) {
      local_158 = local_120;
      uStack_154 = uStack_11c;
      iStack_150 = iStack_118;
      uStack_14c = uStack_114;
      local_168 = local_130;
      uStack_164 = uStack_12c;
      uStack_160 = uStack_128;
      uStack_15c = uStack_124;
      local_178 = (undefined4)uStack_140;
      uStack_174 = uStack_140._4_4_;
      uStack_170 = uStack_138;
      uStack_16c = uStack_134;
      local_180 = local_148;
                    /* try { // try from 0053c0dd to 0053c113 has its CatchHandler @ 0053c129 */
      _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h096d1de53edcff53E(local_f0);
      if (iStack_150 == 0) {
        auVar4 = _ZN3bat4less18parse_less_version17hf361f545e9895bb3E
                           (CONCAT44(uStack_174,local_178),CONCAT44(uStack_16c,uStack_170));
      }
      else {
        uVar3 = _ZN3bat4less26parse_less_version_busybox17h0e67158fc44d9733E
                          (CONCAT44(uStack_15c,uStack_160),CONCAT44(uStack_154,local_158));
        auVar4._8_8_ = unaff_RBX;
        auVar4._0_8_ = uVar3;
      }
      _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h7641c12b86f58c25E(&local_180);
      return auVar4;
    }
    _ZN4core3ptr93drop_in_place_LT_core__result__Result_LT_std__process__Output_C_std__io__error__Error_GT__GT_17h1f9edd4a4679642fE
              (&local_148);
    _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h096d1de53edcff53E(local_f0);
  }
  else {
    _ZN4core3ptr101drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_grep_cli__process__CommandError_GT__GT_17ha008211fea5fe0d4E
              (local_f0);
  }
  auVar1._8_8_ = unaff_RBX;
  auVar1._0_8_ = 2;
  return auVar1;
}