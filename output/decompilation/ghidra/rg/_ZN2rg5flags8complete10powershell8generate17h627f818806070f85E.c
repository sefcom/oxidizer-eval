void _ZN2rg5flags8complete10powershell8generate17h627f818806070f85E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 *local_128;
  undefined local_120 [16];
  long local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined **local_d8;
  code *pcStack_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined local_a8 [16];
  undefined8 *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 *local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  
  local_f0 = 0;
  local_e8 = 1;
  local_e0 = 0;
  local_60 = &DAT_004e9308;
  local_58 = &PTR_DAT_004e9988;
  local_50 = 0;
  local_68 = param_1;
  auVar6 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h4d69f2644738cbfcE
                     (&local_60);
  if (auVar6._8_8_ == 0) {
    uVar3 = 1;
    uVar4 = 0;
  }
  else {
    do {
      puVar2 = auVar6._8_8_;
                    /* try { // try from 00343770 to 00343799 has its CatchHandler @ 00343d70 */
      auVar7 = (**(code **)(puVar2[1] + 0x58))(*puVar2);
      _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
                (local_48,auVar7._0_8_,auVar7._8_8_,&DAT_0016a233,1,&DAT_0016a617,2);
                    /* try { // try from 003437a3 to 0034380e has its CatchHandler @ 00343d85 */
      auVar7 = (**(code **)(puVar2[1] + 0x30))(*puVar2);
      local_108 = (undefined **)local_120;
      uStack_100 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8797fd25d6434092E;
      local_d8 = &PTR_DAT_004e5ee8;
      pcStack_d0 = (code *)0x1;
      local_b8 = 0;
      local_c8 = &local_108;
      local_c0 = 1;
      local_120 = auVar7;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
                (&local_138,0,auVar7._8_8_,&local_d8);
      local_88 = local_138;
      uStack_84 = uStack_134;
      uStack_80 = uStack_130;
      uStack_7c = uStack_12c;
      local_78 = local_128;
                    /* try { // try from 00343832 to 0034389b has its CatchHandler @ 00343d8a */
      auVar7 = (**(code **)(puVar2[1] + 0x30))(*puVar2);
      if (auVar6._0_8_ != 0) {
        _ZN5alloc6string6String4push17h0ede46164189e411E(&local_f0,10);
      }
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h2fdea5a3ee2c8f62E
                (&local_f0,&DAT_0016a603,&DAT_0016a609);
      _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
                (&local_d8,&DAT_0016a619,0x60,&DAT_0016a679,0xb,CONCAT44(uStack_7c,uStack_80),
                 local_78);
                    /* try { // try from 003438a9 to 003438c6 has its CatchHandler @ 00343d22 */
      _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
                (&local_138,pcStack_d0,local_c8,&DAT_0016a684,6,auVar7._0_8_,auVar7._8_8_);
      uVar4 = local_38;
      uVar3 = local_40;
                    /* try { // try from 003438e1 to 003438fe has its CatchHandler @ 00343d27 */
      _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
                (local_120,CONCAT44(uStack_12c,uStack_130),local_128,&DAT_0016a274,5,local_40,
                 local_38);
                    /* try { // try from 0034390c to 00343915 has its CatchHandler @ 00343d2c */
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h2fdea5a3ee2c8f62E
                (&local_f0,local_120._8_8_,local_120._8_8_ + local_110);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(local_120);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_138);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_d8);
                    /* try { // try from 0034393b to 003439ad has its CatchHandler @ 00343d8a */
      auVar6 = (**(code **)(puVar2[1] + 0x28))(*puVar2);
      if ((auVar6 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        uVar5 = auVar6._8_8_ & 0xff;
        local_108 = (undefined **)CONCAT44(local_108._4_4_,(int)uVar5);
        local_120._0_8_ = &local_108;
        local_120._8_8_ =
             PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_00527048;
        local_d8 = &PTR_DAT_004e5ef8;
        pcStack_d0 = (code *)0x1;
        local_b8 = 0;
        local_c8 = (undefined8 *)local_120;
        local_c0 = 1;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
                  (&local_138,0,auVar6._8_8_,&local_d8);
        local_a8._4_4_ = uStack_134;
        local_a8._0_4_ = local_138;
        local_a8._12_4_ = uStack_12c;
        local_a8._8_4_ = uStack_130;
        local_98 = local_128;
        local_138 = 0;
        uVar1 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(uVar5,&local_138);
                    /* try { // try from 003439dd to 003439e7 has its CatchHandler @ 00343ccc */
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1dbf6ec1d593e24cE
                  (&local_d8,uVar1);
        local_f8 = local_c8;
        local_108 = local_d8;
        uStack_100 = pcStack_d0;
                    /* try { // try from 003439ff to 00343a4b has its CatchHandler @ 00343d4a */
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h2fdea5a3ee2c8f62E
                  (&local_f0,&DAT_0016a609,&DAT_0016a610);
        _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
                  (&local_d8,&DAT_0016a619,0x60,&DAT_0016a679,0xb,local_a8._8_8_,local_98);
                    /* try { // try from 00343a63 to 00343a7d has its CatchHandler @ 00343cb8 */
        _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
                  (&local_138,pcStack_d0,local_c8,&DAT_0016a684,6,uStack_100,local_f8);
                    /* try { // try from 00343a88 to 00343aa5 has its CatchHandler @ 00343cdc */
        _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
                  (local_120,CONCAT44(uStack_12c,uStack_130),local_128,&DAT_0016a274,5,uVar3,uVar4);
                    /* try { // try from 00343ab3 to 00343abc has its CatchHandler @ 00343cbd */
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h2fdea5a3ee2c8f62E
                  (&local_f0,local_120._8_8_,(undefined *)(local_120._8_8_ + local_110));
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(local_120);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_138);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_d8);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_108);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(local_a8);
      }
                    /* try { // try from 00343af9 to 00343b76 has its CatchHandler @ 00343d8a */
      auVar6 = (**(code **)(puVar2[1] + 0x40))(*puVar2);
      if (auVar6._0_8_ != 0) {
        local_120._0_8_ = local_a8;
        local_120._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8797fd25d6434092E;
        local_d8 = &PTR_DAT_004e5ee8;
        pcStack_d0 = (code *)0x1;
        local_b8 = 0;
        local_c8 = (undefined8 *)local_120;
        local_c0 = 1;
        local_a8 = auVar6;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
                  (&local_138,0,auVar6._8_8_,&local_d8);
        local_108 = (undefined **)CONCAT44(uStack_134,local_138);
        uStack_100 = (code *)CONCAT44(uStack_12c,uStack_130);
        local_f8 = local_128;
                    /* try { // try from 00343b8b to 00343bd1 has its CatchHandler @ 00343d61 */
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h2fdea5a3ee2c8f62E
                  (&local_f0,&DAT_0016a609,&DAT_0016a610);
        _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
                  (&local_d8,&DAT_0016a619,0x60,&DAT_0016a679,0xb,uStack_100,local_f8);
                    /* try { // try from 00343bef to 00343c09 has its CatchHandler @ 00343cf5 */
        _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
                  (&local_138,pcStack_d0,local_c8,&DAT_0016a684,6,local_a8._0_8_,local_a8._8_8_);
                    /* try { // try from 00343c14 to 00343c31 has its CatchHandler @ 00343cfa */
        _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
                  (local_120,CONCAT44(uStack_12c,uStack_130),local_128,&DAT_0016a274,5,uVar3,uVar4);
                    /* try { // try from 00343c3f to 00343c48 has its CatchHandler @ 00343cff */
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h2fdea5a3ee2c8f62E
                  (&local_f0,local_120._8_8_,(code *)(local_120._8_8_ + local_110));
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(local_120);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_138);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_d8);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_108);
      }
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_88);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(local_48);
      auVar6 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h4d69f2644738cbfcE
                         (&local_60);
      uVar3 = local_e8;
      uVar4 = local_e0;
    } while (auVar6._8_8_ != 0);
  }
  auVar6 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17h7f68c1791d2d143bE
                     (&DAT_0016a2cf,0x334);
                    /* try { // try from 00343c73 to 00343c96 has its CatchHandler @ 00343cb3 */
  _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
            (local_68,auVar6._0_8_,auVar6._8_8_,&DAT_0016a610,7,uVar3,uVar4);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_f0);
  return;
}