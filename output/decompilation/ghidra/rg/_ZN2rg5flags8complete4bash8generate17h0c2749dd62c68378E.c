void _ZN2rg5flags8complete4bash8generate17h0c2749dd62c68378E(undefined4 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_RDX;
  long lVar6;
  undefined auVar7 [16];
  undefined local_128 [12];
  undefined4 uStack_11c;
  undefined8 *local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 *local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 *local_48;
  undefined4 *local_38;
  
  local_a0 = 0;
  local_98 = 1;
  local_90 = 0;
  lVar6 = 0;
  local_38 = param_1;
  do {
                    /* try { // try from 003429a1 to 00342a5d has its CatchHandler @ 00342fd7 */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h2fdea5a3ee2c8f62E
              (&local_a0,&DAT_00169abf,&DAT_00169ac1);
    uVar5 = *(undefined8 *)((long)&DAT_004e9308 + lVar6);
    lVar3 = *(long *)((long)&PTR_DAT_004e9310 + lVar6);
    auVar7 = (**(code **)(lVar3 + 0x30))(uVar5);
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h2fdea5a3ee2c8f62E
              (&local_a0,auVar7._0_8_,auVar7._8_8_ + auVar7._0_8_);
    _ZN5alloc6string6String4push17h0ede46164189e411E(&local_a0,0x20);
    auVar7 = (**(code **)(lVar3 + 0x28))(uVar5);
    if ((auVar7 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      _ZN5alloc6string6String4push17h0ede46164189e411E(&local_a0,0x2d);
      _ZN5alloc6string6String4push17h0ede46164189e411E(&local_a0,auVar7._8_8_ & 0xff);
      _ZN5alloc6string6String4push17h0ede46164189e411E(&local_a0,0x20);
    }
    auVar7 = (**(code **)(lVar3 + 0x40))(uVar5);
    lVar3 = auVar7._0_8_;
    if (lVar3 != 0) {
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h2fdea5a3ee2c8f62E
                (&local_a0,&DAT_00169abf,&DAT_00169ac1);
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h2fdea5a3ee2c8f62E
                (&local_a0,lVar3,auVar7._8_8_ + lVar3);
      _ZN5alloc6string6String4push17h0ede46164189e411E(&local_a0,0x20);
    }
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x680);
                    /* try { // try from 00342a63 to 00342a7d has its CatchHandler @ 00342f4e */
  _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h2fdea5a3ee2c8f62E
            (&local_a0,&DAT_00169ac1,&DAT_00169ad4);
  local_b8 = 0;
  local_b0 = 1;
  local_a8 = 0;
  lVar6 = 0;
  do {
    uVar5 = *(undefined8 *)((long)&DAT_004e9308 + lVar6);
    lVar3 = *(long *)((long)&PTR_DAT_004e9310 + lVar6);
    pcVar1 = *(code **)(lVar3 + 0x68);
                    /* try { // try from 00342b16 to 00342b40 has its CatchHandler @ 00342f93 */
    (*pcVar1)(uVar5);
    if (extraout_RDX == 0) {
      uVar4 = _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17h6abe8100f4b9b9b1E
                        (&DAT_00169ad4,0x5e);
                    /* try { // try from 00342bb1 to 00342bbb has its CatchHandler @ 00342f93 */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1dbf6ec1d593e24cE
                (&local_e8,uVar4);
      local_48 = local_d8;
      local_58 = (undefined4)local_e8;
      uStack_54 = local_e8._4_4_;
      uStack_50 = (undefined4)uStack_e0;
      uStack_4c = uStack_e0._4_4_;
    }
    else {
      auVar7 = (*pcVar1)(uVar5);
      _ZN5alloc3str17join_generic_copy17hccb370bfa740ad62E
                (&local_e8,auVar7._0_8_,auVar7._8_8_,&DAT_00169b32,1);
      local_f8 = local_d8;
      local_108 = (undefined4)local_e8;
      uStack_104 = local_e8._4_4_;
      uStack_100 = (undefined4)uStack_e0;
      uStack_fc = uStack_e0._4_4_;
      auVar7 = _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17h6abe8100f4b9b9b1E
                         (&DAT_00169b33,0x6d);
                    /* try { // try from 00342b70 to 00342b90 has its CatchHandler @ 00342f61 */
      _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
                (&local_58,auVar7._0_8_,auVar7._8_8_,&DAT_00169e27,9,CONCAT44(uStack_fc,uStack_100),
                 local_f8);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_108);
    }
                    /* try { // try from 00342bd6 to 00342c3e has its CatchHandler @ 00342f8e */
    auVar7 = (**(code **)(lVar3 + 0x30))(uVar5);
    local_88 = local_128;
    uStack_80 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8797fd25d6434092E;
    local_e8 = &PTR_DAT_004e5ee8;
    uStack_e0 = 1;
    local_c8 = 0;
    local_d0 = 1;
    local_d8 = &local_88;
    _local_128 = auVar7;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
              (&local_108,0,auVar7._8_8_,&local_e8);
    puVar2 = local_48;
    local_88 = (undefined *)CONCAT44(uStack_104,local_108);
    uStack_80 = (code *)CONCAT44(uStack_fc,uStack_100);
    local_78 = local_f8;
    uVar4 = CONCAT44(uStack_4c,uStack_50);
                    /* try { // try from 00342c74 to 00342c8f has its CatchHandler @ 00342f98 */
    _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
              (&local_e8,uVar4,local_48,&DAT_00169e30,6,uStack_80,local_f8);
                    /* try { // try from 00342c9d to 00342ca9 has its CatchHandler @ 00342f7f */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h2fdea5a3ee2c8f62E
              (&local_b8,uStack_e0,(long)local_d8 + uStack_e0);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_e8);
                    /* try { // try from 00342cb2 to 00342d24 has its CatchHandler @ 00342f98 */
    auVar7 = (**(code **)(lVar3 + 0x28))(uVar5);
    if ((auVar7 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      local_68._0_8_ = CONCAT44(local_68._4_4_,auVar7._8_4_) & 0xffffffff000000ff;
      local_128._0_8_ = local_68;
      stack0xfffffffffffffee0 =
           (code *)
           PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_00527048;
      local_e8 = &PTR_DAT_004e5ef8;
      uStack_e0 = 1;
      local_c8 = 0;
      local_d8 = (undefined8 *)local_128;
      local_d0 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
                (&local_108,0,auVar7._8_8_,&local_e8);
      local_128._4_4_ = uStack_104;
      local_128._0_4_ = local_108;
      stack0xfffffffffffffee0 = (code *)CONCAT44(uStack_fc,uStack_100);
      local_118 = local_f8;
                    /* try { // try from 00342d3e to 00342d5c has its CatchHandler @ 00342f53 */
      _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
                (&local_e8,uVar4,puVar2,&DAT_00169e30,6,stack0xfffffffffffffee0,local_f8);
                    /* try { // try from 00342d6a to 00342d76 has its CatchHandler @ 00342f55 */
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h2fdea5a3ee2c8f62E
                (&local_b8,uStack_e0,(long)local_d8 + uStack_e0);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_e8);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(local_128);
    }
                    /* try { // try from 00342d89 to 00342e02 has its CatchHandler @ 00342f98 */
    auVar7 = (**(code **)(lVar3 + 0x40))(uVar5);
    if (auVar7._0_8_ != 0) {
      local_128._0_8_ = local_68;
      stack0xfffffffffffffee0 =
           _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8797fd25d6434092E;
      local_e8 = &PTR_DAT_004e5ee8;
      uStack_e0 = 1;
      local_c8 = 0;
      local_d8 = (undefined8 *)local_128;
      local_d0 = 1;
      local_68 = auVar7;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
                (&local_108,0,auVar7._8_8_,&local_e8);
      local_128._4_4_ = uStack_104;
      local_128._0_4_ = local_108;
      stack0xfffffffffffffee0 = (code *)CONCAT44(uStack_fc,uStack_100);
      local_118 = local_f8;
                    /* try { // try from 00342e1c to 00342e3a has its CatchHandler @ 00342f57 */
      _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
                (&local_e8,uVar4,puVar2,&DAT_00169e30,6,stack0xfffffffffffffee0,local_f8);
                    /* try { // try from 00342e48 to 00342e54 has its CatchHandler @ 00342f6b */
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h2fdea5a3ee2c8f62E
                (&local_b8,uStack_e0,(long)local_d8 + uStack_e0);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_e8);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(local_128);
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_88);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_58);
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x680);
                    /* try { // try from 00342e6a to 00342e90 has its CatchHandler @ 00342f4c */
  _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
            (&local_108,&DAT_00169ba1,0x279,&DAT_00169e1a,6,local_98,local_90);
                    /* try { // try from 00342eab to 00342ec5 has its CatchHandler @ 00342f4a */
  _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
            (local_128,CONCAT44(uStack_fc,uStack_100),local_f8,&DAT_00169e20,7,local_b0,local_a8);
  uVar5 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17h7f68c1791d2d143bE
                    (stack0xfffffffffffffee0,local_118);
                    /* try { // try from 00342ed5 to 00342ee1 has its CatchHandler @ 00342f3b */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1dbf6ec1d593e24cE
            (&local_e8,uVar5);
  *(undefined8 **)(local_38 + 4) = local_d8;
  *local_38 = (undefined4)local_e8;
  local_38[1] = local_e8._4_4_;
  local_38[2] = (undefined4)uStack_e0;
  local_38[3] = uStack_e0._4_4_;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(local_128);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_108);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_b8);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_a0);
  return;
}