void _ZN12forc_publish14md_pre_process12MarkdownFile5parse17h7118ccb081fd3582E
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  long local_1f8;
  long local_1e8;
  long lStack_1e0;
  undefined8 local_1d8;
  long local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  long local_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  long local_118;
  undefined8 local_110;
  undefined local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e8;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar4 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17hb75be6aa9c8a8d87E
                    (param_2,param_3);
  _ZN3std2fs12canonicalize17h7b404ad07e351b4bE(&local_f8,uVar4);
  local_208 = (undefined4)local_f8;
  uStack_204 = local_f8._4_4_;
  uStack_200 = (undefined4)uStack_f0;
  uStack_1fc = uStack_f0._4_4_;
  local_1f8 = local_e8;
                    /* try { // try from 00763583 to 0076358f has its CatchHandler @ 007637c7 */
  _ZN3std2fs14read_to_string17h6ed86aa426eff30cE(&local_1a8,&local_208);
  lVar2 = lStack_198;
  lVar1 = lStack_1a0;
  if (local_1a8 == -0x8000000000000000) {
    param_1[1] = 0;
    param_1[2] = lStack_1a0;
    *param_1 = -0x8000000000000000;
  }
  else {
    local_1e8 = local_1a8;
    lStack_1e0 = lStack_1a0;
    local_1d8 = lStack_198;
                    /* try { // try from 007635d1 to 00763607 has its CatchHandler @ 007637b8 */
    auVar5 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_01049580)
                       (CONCAT44(uStack_1fc,uStack_200),local_1f8);
    if (auVar5._0_8_ == 0) {
      auVar5._8_8_ = 1;
      auVar5._0_8_ = ".";
    }
    (*(code *)PTR__ZN5regex5regex6string5Regex3new17h92399a8041d2121dE_01049938)
              (&local_1a8,"\\{\\{#include\\s+([^\\}]+)\\}\\}",0x1b);
    local_f8 = lStack_1a0;
    lVar3 = local_f8;
    uStack_f0 = lStack_198;
    uVar4 = uStack_f0;
    local_f8._0_4_ = (undefined4)lStack_1a0;
    local_f8._4_4_ = (undefined4)((ulong)lStack_1a0 >> 0x20);
    uStack_f0._0_4_ = (undefined4)lStack_198;
    uStack_f0._4_4_ = (undefined4)((ulong)lStack_198 >> 0x20);
    local_f8 = lVar3;
    uStack_f0 = uVar4;
    if (local_1a8 != 0) {
      uStack_1c0 = (undefined4)local_f8;
      uStack_1bc = local_f8._4_4_;
      local_1b8 = (undefined4)uStack_f0;
      uStack_1b4 = uStack_f0._4_4_;
      local_1c8 = local_1a8;
                    /* try { // try from 0076364f to 00763666 has its CatchHandler @ 007637a3 */
      _ZN14regex_automata4meta5regex5Regex13captures_iter17hccf880d63147bd55E
                (&local_f8,&local_1c8,lVar1,lVar2);
      (*(code *)PTR_memcpy_01048fd8)(&local_1a8,&local_f8,0x90);
      local_118 = lVar1;
      local_110 = lVar2;
                    /* try { // try from 007636a2 to 007636b1 has its CatchHandler @ 007637a3 */
      local_108 = auVar5;
      _ZN4core4iter6traits8iterator8Iterator7collect17heb8403834c248f38E(&local_60,&local_1a8);
      lStack_198 = local_1f8;
      local_1a8 = CONCAT44(uStack_204,local_208);
      lStack_1a0 = CONCAT44(uStack_1fc,uStack_200);
      local_170 = local_40;
      uStack_16c = uStack_3c;
      uStack_168 = uStack_38;
      uStack_164 = uStack_34;
      local_180 = local_50;
      uStack_17c = uStack_4c;
      uStack_178 = uStack_48;
      uStack_174 = uStack_44;
      local_190 = local_60;
      uStack_18c = uStack_5c;
      uStack_188 = uStack_58;
      uStack_184 = uStack_54;
      *param_1 = local_1a8;
      param_1[1] = lStack_1a0;
      param_1[8] = CONCAT44(uStack_34,uStack_38);
      param_1[6] = CONCAT44(uStack_44,uStack_48);
      param_1[7] = CONCAT44(uStack_3c,local_40);
      *(undefined4 *)(param_1 + 4) = uStack_58;
      *(undefined4 *)((long)param_1 + 0x24) = uStack_54;
      *(undefined4 *)(param_1 + 5) = local_50;
      *(undefined4 *)((long)param_1 + 0x2c) = uStack_4c;
      param_1[2] = local_1f8;
      param_1[3] = CONCAT44(uStack_5c,local_60);
                    /* try { // try from 0076372b to 00763734 has its CatchHandler @ 0076378e */
      _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17hf26d957e27fac499E(&local_1c8)
      ;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcc89c62839702889E(&local_1e8);
      return;
    }
    param_1[4] = CONCAT44(uStack_18c,local_190);
    *(undefined4 *)(param_1 + 2) = (undefined4)local_f8;
    *(undefined4 *)((long)param_1 + 0x14) = local_f8._4_4_;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_f0;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_f0._4_4_;
    param_1[1] = 1;
    *param_1 = -0x8000000000000000;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcc89c62839702889E(&local_1e8);
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h355ad17cb4a62d71E
            (CONCAT44(uStack_204,local_208),CONCAT44(uStack_1fc,uStack_200));
  return;
}