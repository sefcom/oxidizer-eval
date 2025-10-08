void _ZN9alacritty6config9ui_config20deserialize_bindings17h129f28972fe6be82E
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined local_238 [16];
  long local_228;
  long *local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  long lStack_1c8;
  undefined8 local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined local_1a8 [24];
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  long lStack_160;
  undefined8 local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  char *local_130;
  undefined8 local_128;
  char *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined local_108 [32];
  undefined local_e8 [26];
  char local_ce;
  undefined **local_c8;
  undefined8 local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long local_48;
  undefined8 uStack_40;
  
                    /* try { // try from 00536b87 to 00536b90 has its CatchHandler @ 00536f37 */
  _ZN62__LT_toml__value__Value_u20_as_u20_serde__de__Deserializer_GT_15deserialize_seq17h0cd96f3e3c9b3475E
            (&local_218);
  if (CONCAT44(uStack_214,local_218) == 2) {
    local_148 = uStack_210;
    uStack_144 = uStack_20c;
    uStack_140 = uStack_208;
    uStack_13c = uStack_204;
                    /* try { // try from 00536bda to 00536bef has its CatchHandler @ 00536f20 */
    local_238 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h6d79adff25664689E
                          (CONCAT44(uStack_1fc,uStack_200),8,0x60,
                           &PTR_s_alacritty_src_config_ui_config_r_009819f0);
    local_228 = 0;
    local_220 = param_1;
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hd28118b4f03ed1a4E
              (local_108,&local_148);
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hfd8232c883c87921E
              (local_e8,local_108);
    if (local_ce != '\b') {
      do {
        _ZN126__LT_alacritty__config__bindings__Binding_LT_alacritty__config__bindings__BindingKey_GT__u20_as_u20_serde__de__Deserialize_GT_11deserialize17h49d98313bc4609f9E
                  (&local_218,local_e8);
        if (CONCAT44(uStack_214,local_218) == -0x7fffffffffffffcb) {
          local_158 = local_1c0;
          lStack_160 = lStack_1c8;
          local_178 = local_1e0;
          uStack_174 = uStack_1dc;
          uStack_170 = uStack_1d8;
          uStack_16c = uStack_1d4;
          local_188 = local_1f0;
          uStack_184 = uStack_1ec;
          uStack_180 = uStack_1e8;
          uStack_17c = uStack_1e4;
          uStack_190 = uStack_1f8;
          uStack_18c = uStack_1f4;
                    /* try { // try from 00536e30 to 00536f0d has its CatchHandler @ 00536f3c */
          lVar2 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                            (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
          if (lVar2 != 0) {
            local_1b8 = local_1a8;
            local_1b0 = 
            PTR__ZN61__LT_toml__de__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h5637888e57e7e273E_009dea90
            ;
            local_c8 = &PTR_s_Config_error____ignoring_binding_009819d0;
            local_c0 = 2;
            local_a8 = 0;
            local_b8 = &local_1b8;
            local_b0 = 1;
            local_110 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                                  (&PTR_s_alacritty_src_config_ui_config_r_00981a20);
            local_130 = "alacritty_config_derive";
            local_128 = 0x17;
            local_120 = "alacritty::config::ui_config";
            local_118 = 0x1c;
            _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_c8,1,&local_130);
          }
                    /* try { // try from 00536f0e to 00536f1a has its CatchHandler @ 00536f56 */
          _ZN4core3ptr43drop_in_place_LT_toml__de__error__Error_GT_17h4158bf9df3d9fe37E(local_1a8);
        }
        else {
          local_48 = lStack_1c8;
          uStack_40 = local_1c0;
          local_68 = uStack_1e8;
          uStack_64 = uStack_1e4;
          uStack_60 = local_1e0;
          uStack_5c = uStack_1dc;
          local_78 = uStack_1f8;
          uStack_74 = uStack_1f4;
          uStack_70 = local_1f0;
          uStack_6c = uStack_1ec;
          local_88 = uStack_208;
          uStack_84 = uStack_204;
          uStack_80 = uStack_200;
          uStack_7c = uStack_1fc;
          local_98 = local_218;
          uStack_94 = uStack_214;
          uStack_90 = uStack_210;
          uStack_8c = uStack_20c;
                    /* try { // try from 00536d9e to 00536dd8 has its CatchHandler @ 00536f56 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h11dc9e9eabaa12faE
                    (local_238,&local_98,&PTR_s_alacritty_src_config_ui_config_r_00981a08);
        }
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hfd8232c883c87921E
                  (local_e8,local_108);
      } while (local_ce != '\b');
    }
                    /* try { // try from 00536c40 to 00536c4c has its CatchHandler @ 00536f32 */
    _ZN4core3ptr78drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_toml__value__Value_GT__GT_17h6249b05fd4c237b7E
              (local_108);
    lVar1 = local_238._8_8_;
    for (lVar2 = local_228 * 0x60; lVar2 != 0; lVar2 = lVar2 + -0x60) {
                    /* try { // try from 00536c6d to 00536c74 has its CatchHandler @ 00536f4e */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_6retain17h4e476ef0f8ba6959E(param_3,lVar1);
      lVar1 = lVar1 + 0x60;
    }
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h2a7386c3c2dd1eecE
              (&local_218,param_3);
                    /* try { // try from 00536ce8 to 00536cf2 has its CatchHandler @ 00536f32 */
    _ZN136__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT_T_C_alloc__vec__into_iter__IntoIter_LT_T_GT__GT__GT_11spec_extend17hbea3acb1520508ffE
              (local_238,&local_218);
    local_220[3] = local_228;
    *(undefined (*) [16])(local_220 + 1) = local_238;
    *local_220 = 2;
    return;
  }
  param_1[10] = lStack_1c8;
  *(undefined4 *)(param_1 + 8) = uStack_1d8;
  *(undefined4 *)((long)param_1 + 0x44) = uStack_1d4;
  *(undefined4 *)(param_1 + 9) = local_1d0;
  *(undefined4 *)((long)param_1 + 0x4c) = uStack_1cc;
  *(undefined4 *)(param_1 + 6) = uStack_1e8;
  *(undefined4 *)((long)param_1 + 0x34) = uStack_1e4;
  *(undefined4 *)(param_1 + 7) = local_1e0;
  *(undefined4 *)((long)param_1 + 0x3c) = uStack_1dc;
  param_1[4] = CONCAT44(uStack_1f4,uStack_1f8);
  param_1[5] = CONCAT44(uStack_1ec,local_1f0);
  param_1[3] = CONCAT44(uStack_1fc,uStack_200);
  *(undefined4 *)(param_1 + 1) = uStack_210;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_20c;
  *(undefined4 *)(param_1 + 2) = uStack_208;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_204;
  *param_1 = CONCAT44(uStack_214,local_218);
  _ZN4core3ptr127drop_in_place_LT_alloc__vec__Vec_LT_alacritty__config__bindings__Binding_LT_alacritty__config__bindings__BindingKey_GT__GT__GT_17h249ff361ada66d33E
            (param_3);
  return;
}