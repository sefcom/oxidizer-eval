void _ZN9alacritty7display7Display22draw_hyperlink_preview17h06442e3008e163c3E
               (long param_1,long param_2,uint param_3,undefined4 param_4,undefined8 param_5)

{
  uint3 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint3 *puVar5;
  long lVar6;
  undefined local_1c0 [16];
  undefined8 local_1b0;
  uint local_1a4;
  ulong *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  long local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158 [3];
  undefined8 local_140;
  undefined8 *local_128;
  long local_120;
  undefined *local_118;
  int local_110;
  int local_10c;
  undefined local_108;
  undefined local_100 [40];
  int local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined local_c0 [32];
  undefined8 *local_a0;
  
  local_198 = *(undefined8 *)(param_1 + 0x7a0);
  lVar6 = 0;
  if (*(char *)(param_1 + 0x758) != '\x02') {
    lVar6 = param_1 + 0x728;
  }
  local_178 = param_5;
  _ZN4core4iter6traits8iterator8Iterator5chain17h0b78b35f524935abE(local_c0,lVar6,param_1 + 0x760);
  local_a0 = &local_198;
  _ZN4core4iter6traits8iterator8Iterator7collect17h7140d2817fc35ef4E(&local_190,local_c0);
  if (local_180 == 0) {
    _ZN4core3ptr198drop_in_place_LT_alloc__vec__Vec_LT__LP_clap_builder__util__id__Id_C_clap_builder__builder__arg_predicate__ArgPredicate_C_core__option__Option_LT_clap_builder__builder__os_str__OsStr_GT__RP__GT__GT_17hb1850bbe1054744eE
              (local_190,local_188);
  }
  else {
                    /* try { // try from 0054ec8d to 0054eca5 has its CatchHandler @ 0054eed6 */
    local_1c0 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h6d79adff25664689E
                          (local_180 * 2,4,8,&PTR_s_alacritty_src_display_mod_rs_00982740);
    local_1a0 = (ulong *)(param_1 + 0x798);
    local_1b0 = 0;
    uVar4 = *local_1a0;
    if ((ulong)(local_180 * 2) < uVar4) {
                    /* try { // try from 0054ecdf to 0054ed0b has its CatchHandler @ 0054eedb */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hc5018d8de0a68cccE
                (local_1c0,*(uint *)(param_1 + 200) & 1,*(undefined4 *)(param_1 + 0xd8),
                 &PTR_s_alacritty_src_display_mod_rs_00982758);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hc5018d8de0a68cccE
                (local_1c0,param_3 & 1,param_4,&PTR_s_alacritty_src_display_mod_rs_00982770);
      uVar4 = *local_1a0;
    }
    local_10c = ~(uint)param_5 + (int)uVar4;
    local_110 = -(uint)param_5;
    local_158[0] = 2;
    local_140 = 2;
    local_128 = &local_178;
    local_120 = local_180;
    local_118 = local_1c0;
    local_108 = 0;
    puVar5 = (uint3 *)(param_2 + 0x273);
    if ((*(byte *)(param_2 + 0x1f8) & 1) != 0) {
      puVar5 = (uint3 *)(param_2 + 0x1f9);
    }
    uVar1 = *puVar5;
    puVar5 = (uint3 *)(param_2 + 0x270);
    if ((*(byte *)(param_2 + 0x1fc) & 1) != 0) {
      puVar5 = (uint3 *)(param_2 + 0x1fd);
    }
    local_1a4 = (uint)*puVar5;
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h62c023f15cddc5c5E
              (local_100,&local_190);
    _ZN4core4iter6traits8iterator8Iterator3zip17had26b8161789ea72E(local_c0,local_100,local_158);
    while( true ) {
                    /* try { // try from 0054ee00 to 0054ee8e has its CatchHandler @ 0054ef11 */
      _ZN111__LT_core__iter__adapters__zip__Zip_LT_A_C_B_GT__u20_as_u20_core__iter__adapters__zip__ZipImpl_LT_A_C_B_GT__GT_4next17h9f14dc4adb0f2181E
                (local_100,local_c0);
      uVar3 = local_c8;
      uVar2 = local_d0;
      if (local_d8 == 0x110001) break;
      local_170 = local_d0;
      local_168 = local_c8;
      local_160 = local_198;
      _ZN9alacritty7display6damage11FrameDamage11damage_line17hb967af29845291d1E
                (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),&local_170);
      _ZN9alacritty7display6damage11FrameDamage11damage_line17hb967af29845291d1E
                (*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),&local_170);
      _ZN9alacritty8renderer8Renderer11draw_string17he0cf7f189aeb0195E
                (param_1 + 0xe0,uVar2,uVar3,(uint)uVar1,local_1a4,local_100,local_1a0,
                 param_1 + 0x5f8);
    }
                    /* try { // try from 0054ee97 to 0054eea3 has its CatchHandler @ 0054eedb */
    _ZN4core3ptr713drop_in_place_LT_core__iter__adapters__zip__Zip_LT_alloc__vec__into_iter__IntoIter_LT_alacritty__string__StrShortener_GT__C_core__iter__adapters__flatten__FlatMap_LT_core__iter__adapters__take__Take_LT_core__iter__adapters__filter_map__FilterMap_LT_core__iter__adapters__map__Map_LT_core__iter__adapters__rev__Rev_LT_core__ops__range__RangeInclusive_LT_i32_GT__GT__C_alacritty__display__Display__draw_hyperlink_preview___u7b__u7b_closure_u7d__u7d__GT__C_alacritty__display__Display__draw_hyperlink_preview___u7b__u7b_closure_u7d__u7d__GT__GT__C_core__option__Option_LT_alacritty_terminal__index__Point_LT_usize_GT__GT__C_alacritty__display__Display__draw_hyperlink_preview___u7b__u7b_closure_u7d__u7d__GT__GT__GT_17he9ef3c79b25c85f5E
              (local_c0);
    _ZN4core3ptr103drop_in_place_LT_alloc__vec__Vec_LT_core__option__Option_LT_alacritty_terminal__index__Line_GT__GT__GT_17h1577cbfb0b7f6601E
              (local_1c0._0_8_,local_1c0._8_8_);
  }
  return;
}