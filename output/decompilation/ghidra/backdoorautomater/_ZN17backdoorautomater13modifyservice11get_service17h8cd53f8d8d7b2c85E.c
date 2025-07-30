undefined8
_ZN17backdoorautomater13modifyservice11get_service17h8cd53f8d8d7b2c85E
          (undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
          undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined local_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_198 = param_2[1];
  uStack_190 = param_2[2] + local_198;
  iVar1 = _ZN96__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h6ef03064f47cabe8E
                    (&local_198);
  if ((iVar1 != 0x2f) && (iVar1 != 0x110000)) {
                    /* try { // try from 001538fa to 00153912 has its CatchHandler @ 00153c94 */
    _ZN5alloc6string6String4push17h8dfcd488d6c0f12bE(param_2);
  }
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17hb1e8eef355dde452E_00368788
  )(&local_108,param_1);
                    /* try { // try from 00153913 to 00153923 has its CatchHandler @ 00153c6f */
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17hb1e8eef355dde452E_00368788
  )(&local_78,param_2);
  local_170 = local_f8;
  uStack_180 = local_108;
  uStack_178 = uStack_100;
  local_198._0_4_ = local_78;
  local_198._4_4_ = uStack_74;
  uStack_190 = CONCAT44(uStack_6c,uStack_70);
  local_188 = local_68;
                    /* try { // try from 00153958 to 00153973 has its CatchHandler @ 00153c4a */
  _ZN5alloc3str17join_generic_copy17h6e3e6eb2fb0da332E(&local_158,&local_198,2,1,0);
  local_118 = local_148;
  local_128 = (undefined4)local_158;
  uStack_124 = local_158._4_4_;
  uStack_120 = (undefined4)uStack_150;
  uStack_11c = uStack_150._4_4_;
                    /* try { // try from 0015398e to 001539d0 has its CatchHandler @ 00153cac */
  _ZN4core3ptr63drop_in_place_LT__u5b_alloc__string__String_u3b__u20_2_u5d__GT_17hfd07afc6d277b85dE
            (&local_198);
  _ZN3std2fs4File4open17hc9cc0415293bf7f9E(&local_198,&local_128);
  uVar2 = uStack_190;
  if ((int)local_198 == 0) {
    _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hfc22a243c8e8e3e1E
              (local_60,0x2000,local_198._4_4_);
    local_140 = 0;
    uStack_138 = 8;
    local_130 = 0;
    uStack_178 = local_40;
    local_170 = uStack_38;
    local_188 = local_50;
    uStack_180 = uStack_48;
    local_15c = param_3;
                    /* try { // try from 00153a60 to 00153aac has its CatchHandler @ 00153cc6 */
    while (_ZN82__LT_std__io__Lines_LT_B_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h114c8ea989dd5339E
                     (&local_158,&local_198), local_158 != -0x7fffffffffffffff) {
      if (local_158 == -0x8000000000000000) {
                    /* try { // try from 00153b7f to 00153b88 has its CatchHandler @ 00153bf4 */
        _ZN4core3ptr103drop_in_place_LT_std__io__Lines_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT__GT_17hdb5dfe103db56feeE
                  (&local_198);
                    /* try { // try from 00153b89 to 00153ba5 has its CatchHandler @ 00153cac */
        _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h8814db29c860c5cdE
                  (&local_140);
        uVar2 = uStack_150;
        goto LAB_00153ba6;
      }
      local_f0 = local_158;
      local_e8 = uStack_150;
      local_e0 = local_148;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3237d89e60f90e3aE(&local_140,&local_f0);
    }
                    /* try { // try from 00153aaf to 00153ab8 has its CatchHandler @ 00153bf4 */
    _ZN4core3ptr103drop_in_place_LT_std__io__Lines_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT__GT_17hdb5dfe103db56feeE
              (&local_198);
    local_c8 = param_1[2];
    local_d8 = *param_1;
    uStack_d0 = param_1[1];
    local_a8 = param_2[2];
    local_b8 = *param_2;
    uStack_b0 = param_2[1];
    local_88 = local_130;
    local_98 = local_140;
    uStack_90 = uStack_138;
    local_148 = param_4[2];
    local_158 = *param_4;
    uStack_150 = param_4[1];
    local_188 = param_5[2];
    local_198 = *param_5;
    uStack_190 = param_5[1];
                    /* try { // try from 00153b3f to 00153b6a has its CatchHandler @ 00153bea */
    _ZN17backdoorautomater13modifyservice14modify_service17h70e6f10bf69e7ecaE
              (&local_d8,&local_b8,(undefined)local_15c,&local_98,&local_158,&local_198);
                    /* try { // try from 00153b6d to 00153b79 has its CatchHandler @ 00153c2f */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_128);
    uVar2 = 0;
  }
  else {
LAB_00153ba6:
                    /* try { // try from 00153ba8 to 00153bb4 has its CatchHandler @ 00153c2f */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_128);
                    /* try { // try from 00153bb5 to 00153bbc has its CatchHandler @ 00153c19 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_5);
                    /* try { // try from 00153bbd to 00153bc4 has its CatchHandler @ 00153c08 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_4);
                    /* try { // try from 00153bc5 to 00153bcc has its CatchHandler @ 00153bfc */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_2);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_1);
  }
  return uVar2;
}