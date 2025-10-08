undefined8
_ZN5uu_pr18recreate_arguments17hde7501ecf1930281E
          (undefined8 param_1,undefined *param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined auVar3 [16];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined local_120 [24];
  undefined4 *local_108;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined local_a0 [32];
  undefined local_80 [24];
  undefined local_68 [32];
  undefined local_48 [24];
  
  puVar2 = PTR__ZN5regex5regex6string5Regex3new17h830f62d081924685E_00398da0;
  (*(code *)PTR__ZN5regex5regex6string5Regex3new17h830f62d081924685E_00398da0)
            (&local_150,&DAT_001581bd,10);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17he4d140c960df2cf7E
            (local_68,&local_150,&PTR_DAT_003690f8);
                    /* try { // try from 002334d1 to 002334fc has its CatchHandler @ 00233785 */
  (*(code *)puVar2)(&local_150,&DAT_001581da,9);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17he4d140c960df2cf7E
            (&local_c0,&local_150,&PTR_DAT_00369110);
                    /* try { // try from 002334fd to 0023352c has its CatchHandler @ 00233773 */
  (*(code *)PTR__ZN5regex5regex6string5Regex3new17h830f62d081924685E_00398da0)
            (&local_150,&DAT_001581e3,7);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17he4d140c960df2cf7E
            (local_a0,&local_150,&PTR_DAT_00369128);
                    /* try { // try from 0023352d to 0023353c has its CatchHandler @ 00233752 */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h7380502240c976a2E
            (local_120,param_2,param_3);
  uStack_148 = param_2 + param_3 * 0x18;
                    /* try { // try from 00233556 to 00233624 has its CatchHandler @ 00233757 */
  local_150 = param_2;
  auVar3 = _ZN9itertools9Itertools13find_position17h04a53920b67462d7E(&local_150,local_a0);
  if ((auVar3._8_8_ != 0) && (uVar1 = auVar3._0_8_ + 1, uVar1 < param_3)) {
    uStack_148 = *(undefined **)(param_2 + uVar1 * 0x18 + 8);
    local_140 = *(undefined4 ***)(param_2 + uVar1 * 0x18 + 0x10);
    local_150 = (undefined *)((ulong)local_150 & 0xffffffff00000000);
    uStack_138 = 0;
    uStack_128 = CONCAT31(uStack_128._1_3_,1);
    local_130 = local_140;
    _ZN14regex_automata4util6search5Input8set_span17hcd8fa69f9dbde1aeE(&local_150);
    local_d8 = (undefined4)local_130;
    uStack_d4 = local_130._4_4_;
    uStack_d0 = uStack_128;
    uStack_cc = uStack_124;
    local_e8 = (undefined4)local_140;
    uStack_e4 = local_140._4_4_;
    uStack_e0 = (undefined4)uStack_138;
    uStack_dc = uStack_138._4_4_;
    local_f8 = (undefined4)local_150;
    uStack_f4 = local_150._4_4_;
    uStack_f0 = (undefined4)uStack_148;
    uStack_ec = uStack_148._4_4_;
    _ZN14regex_automata4meta5regex5Regex11search_half17h3686cea544a747ffE
              (&local_150,local_c0,local_b8,&local_f8);
    if (((ulong)local_150 & 1) == 0) {
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_6remove17h2e81c17629bf526aE(local_80,local_120,uVar1);
                    /* try { // try from 00233625 to 0023362f has its CatchHandler @ 0023373e */
      (*(code *)
        PTR__ZN63__LT_uu_pr__NumberingMode_u20_as_u20_core__default__Default_GT_7default17hd7c807d30f792e21E_00398ba0
      )(&local_f8);
      local_108 = &uStack_e0;
      local_100 = 
      PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_00398c00
      ;
      local_150 = &DAT_00151320;
      uStack_148 = (undefined *)0x1;
      local_130 = (undefined4 **)0x0;
      local_140 = &local_108;
      uStack_138 = 1;
                    /* try { // try from 00233677 to 00233688 has its CatchHandler @ 0023372f */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17ha768742fd52e18baE(local_48,&local_150);
      _ZN4core3ptr41drop_in_place_LT_uu_pr__NumberingMode_GT_17h50ed004e0d36ef9cE(&local_f8);
                    /* try { // try from 00233693 to 002336ae has its CatchHandler @ 0023373e */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_6insert17hb6c6ac49912c548cE
                (local_120,uVar1,local_48,&PTR_DAT_00369158);
                    /* try { // try from 002336b3 to 002336ce has its CatchHandler @ 0023372d */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_6insert17hb6c6ac49912c548cE
                (local_120,auVar3._0_8_ + 2,local_80,&PTR_DAT_00369170);
    }
  }
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h0b8c6871f9c67703E
            (&local_150,local_120);
  local_130 = (undefined4 **)local_68;
                    /* try { // try from 002336e6 to 002336f0 has its CatchHandler @ 00233750 */
  _ZN4core4iter6traits8iterator8Iterator7collect17h9a67a3d05b8d56fbE(param_1,&local_150);
                    /* try { // try from 002336f1 to 002336fd has its CatchHandler @ 00233773 */
  _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17ha9f17d283cda3393E(local_a0);
                    /* try { // try from 002336fe to 0023370a has its CatchHandler @ 00233785 */
  _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17ha9f17d283cda3393E(&local_c0);
  _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17ha9f17d283cda3393E(local_68);
  return param_1;
}