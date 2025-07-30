undefined8 *
_ZN7flealib13commandparser13CommandParser11get_command17hb7c6cafd7485ac31E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined auVar7 [16];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 **local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 **local_188;
  undefined4 *local_180;
  undefined *local_178;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  long local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  
  (*(code *)PTR__ZN9roxmltree5parse5parse17hf3aa1ef302061528E_00828348)
            (&local_b8,param_3,param_4,0xffffffff,0);
  (*(code *)PTR_memcpy_008266e0)(&local_140,&local_b8,0x88);
  if (CONCAT44(uStack_12c,uStack_130) == 0) {
                    /* try { // try from 00472f65 to 00472f75 has its CatchHandler @ 00472fba */
    (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h8f7cc6d356d411ddE_008266d0)
              (0,0,&PTR_s__root__cargo_registry_src_index__00808f38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uStack_1c0 = CONCAT44(uStack_134,local_138);
  local_1b8 = (undefined4 **)CONCAT44(local_1b8._4_4_,1);
                    /* try { // try from 00472e1a to 00472e7b has its CatchHandler @ 00472fba */
  local_1c8 = &local_140;
  _ZN9roxmltree11Descendants3new17h4d86cf4878017524E(&local_180,&local_1c8);
  _ZN4core4iter6traits8iterator8Iterator8try_fold17haddb30a31b69cbaeE(&local_1c8,&local_180);
  uVar5 = uStack_1c0;
  plVar2 = local_1c8;
  if (local_1c8 != (long *)0x0) {
    auVar7 = _ZN9roxmltree4Node9attribute17h591e30e868dc40e8E
                       (local_1c8,uStack_1c0,"name B\r\nLAlt",4);
    uVar4 = auVar7._8_8_;
    pcVar3 = auVar7._0_8_;
    if (pcVar3 == (char *)0x0) {
      uVar4 = 0x1c;
    }
    pcVar6 = "\'name\' attribute not exists.";
    if (pcVar3 != (char *)0x0) {
      pcVar6 = pcVar3;
    }
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
              (&local_1c8,pcVar6,uVar4);
    local_188 = local_1b8;
    local_198 = (undefined4)local_1c8;
    uStack_194 = local_1c8._4_4_;
    uStack_190 = (undefined4)uStack_1c0;
    uStack_18c = uStack_1c0._4_4_;
                    /* try { // try from 00472e8f to 00472ec6 has its CatchHandler @ 00472fab */
    auVar7 = _ZN9roxmltree4Node9attribute17h591e30e868dc40e8E(plVar2,uVar5,"value",5);
    uVar5 = auVar7._8_8_;
    pcVar3 = auVar7._0_8_;
    if (pcVar3 == (char *)0x0) {
      uVar5 = 0x1d;
    }
    pcVar6 = "\'value\' attribute not exists.\n";
    if (pcVar3 != (char *)0x0) {
      pcVar6 = pcVar3;
    }
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
              (&local_158,pcVar6,uVar5);
    local_1a0 = local_148;
    local_1b0 = local_158;
    uStack_1a8 = uStack_150;
    local_1b8 = local_188;
    local_1c8 = (long *)CONCAT44(uStack_194,local_198);
    uStack_1c0 = CONCAT44(uStack_18c,uStack_190);
    param_1[4] = uStack_150;
    param_1[5] = local_148;
    param_1[2] = local_188;
    param_1[3] = local_158;
    *(undefined4 *)param_1 = local_198;
    *(undefined4 *)((long)param_1 + 4) = uStack_194;
    *(undefined4 *)(param_1 + 1) = uStack_190;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_18c;
                    /* try { // try from 00472f18 to 00472f24 has its CatchHandler @ 00472fa6 */
    _ZN4core3ptr40drop_in_place_LT_roxmltree__Document_GT_17h2a51f9358b50aec5E(&local_140);
    if (CONCAT44(uStack_b4,local_b8) != -0x8000000000000000) {
      return param_1;
    }
    _ZN4core3ptr94drop_in_place_LT_core__result__Result_LT_roxmltree__Document_C_roxmltree__parse__Error_GT__GT_17hb8e88dbba5291207E
              (&local_b8);
    return param_1;
  }
                    /* try { // try from 00472f45 to 00472f51 has its CatchHandler @ 00472fa6 */
  _ZN4core3ptr40drop_in_place_LT_roxmltree__Document_GT_17h2a51f9358b50aec5E(&local_140);
  if (CONCAT44(uStack_b4,local_b8) == -0x8000000000000000) {
    _ZN4core3ptr94drop_in_place_LT_core__result__Result_LT_roxmltree__Document_C_roxmltree__parse__Error_GT__GT_17hb8e88dbba5291207E
              (&local_b8);
  }
  (*(code *)PTR__ZN9roxmltree5parse5parse17hf3aa1ef302061528E_00828348)
            (&local_140,param_3,param_4,0xffffffff,0);
  if (local_140 == -0x8000000000000000) {
    local_88 = local_108;
    local_98 = local_118;
    uStack_94 = uStack_114;
    uStack_90 = uStack_110;
    uStack_8c = uStack_10c;
    local_a8 = local_128;
    uStack_a4 = uStack_124;
    uStack_a0 = uStack_120;
    uStack_9c = uStack_11c;
    local_b8 = local_138;
    uStack_b4 = uStack_134;
    uStack_b0 = uStack_130;
    uStack_ac = uStack_12c;
    local_178 = 
    PTR__ZN62__LT_roxmltree__parse__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h7bb52ed52cdcb4d8E_00828350
    ;
    local_1c8 = (long *)&DAT_00808f18;
    uStack_1c0 = 2;
    uStack_1a8 = 0;
    local_1b8 = &local_180;
    local_1b0 = 1;
    local_180 = &local_b8;
                    /* try { // try from 00472d7c to 00472d84 has its CatchHandler @ 00472f7d */
    (*(code *)PTR__ZN3std2io5stdio6_print17h17d6c2a1d6a6f99eE_00826768)(&local_1c8);
                    /* try { // try from 00472d85 to 00472d91 has its CatchHandler @ 00472f78 */
    _ZN4core3ptr44drop_in_place_LT_roxmltree__parse__Error_GT_17h882013e7cdd3dd0aE(&local_b8);
    if (local_140 == -0x8000000000000000) goto LAB_00472da9;
  }
  _ZN4core3ptr94drop_in_place_LT_core__result__Result_LT_roxmltree__Document_C_roxmltree__parse__Error_GT__GT_17hb8e88dbba5291207E
            (&local_140);
LAB_00472da9:
  param_1[1] = "Command xml corrupted";
  param_1[2] = 0x15;
  *param_1 = 0x8000000000000000;
  return param_1;
}