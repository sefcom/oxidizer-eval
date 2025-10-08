void _ZN9alacritty14window_context13WindowContext22write_ref_test_results17h6978821319591045E
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 extraout_RDX;
  int local_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 **local_138;
  undefined8 local_130;
  undefined8 local_128;
  long local_110;
  undefined local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined local_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined *local_d0;
  undefined local_c8 [40];
  ulong local_a0;
  undefined8 local_38;
  ulong local_30;
  long local_20;
  
  lVar1 = *(long *)(param_1 + 0x1e18);
  lVar3 = lVar1 + 0x10;
  _ZN18alacritty_terminal4sync18FairMutex_LT_T_GT_4lock17h8771cda87d96e8b1E(lVar3);
                    /* try { // try from 00570366 to 00570375 has its CatchHandler @ 0057064b */
  _ZN78__LT_alacritty_terminal__grid__Grid_LT_T_GT__u20_as_u20_core__clone__Clone_GT_5clone17h51baa77945d10210E
            (local_c8,lVar1 + 0x40);
                    /* try { // try from 00570376 to 00570430 has its CatchHandler @ 0057065d */
  _ZN4core3ptr157drop_in_place_LT_lock_api__mutex__MutexGuard_LT_parking_lot__raw_mutex__RawMutex_C_alacritty_terminal__term__Term_LT_alacritty__event__EventProxy_GT__GT__GT_17h090449980f2d2d72E
            (lVar3);
  _ZN18alacritty_terminal4grid7storage16Storage_LT_T_GT_8truncate17h2d132ed67c9d1788E(local_c8);
  lVar3 = 0;
  if (local_30 <= local_a0) {
    lVar3 = local_a0 - local_30;
  }
  _ZN18alacritty_terminal4grid7storage16Storage_LT_T_GT_10initialize17hf07ff5cf81d3c7d9E
            (local_c8,local_20 - lVar3,local_38);
  _ZN18alacritty_terminal4grid7storage16Storage_LT_T_GT_8truncate17h2d132ed67c9d1788E(local_c8);
  _ZN10serde_json3ser6to_vec17h5a92ade1450ab03eE(&local_148,local_c8);
  local_158 = local_138;
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17he09979abea91806dE
            (local_108,&local_168,"serialize grid",&PTR_s_alacritty_src_window_context_rs_009843e8);
                    /* try { // try from 0057043f to 0057048d has its CatchHandler @ 00570658 */
  _ZN10serde_json3ser6to_vec17haac6b17463ff884cE
            (&local_148,*(undefined8 *)(param_1 + 0x1910),*(undefined8 *)(param_1 + 0x1908));
  if (local_148 == (undefined **)0x8000000000000000) {
    local_168 = 0;
    uStack_164 = 0x80000000;
  }
  else {
    local_158 = local_138;
    local_168 = (int)local_148;
    uStack_164 = local_148._4_4_;
  }
  uStack_160 = uStack_140;
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17he09979abea91806dE
            (local_f0,&local_168,"serialize size");
  local_110 = local_a0 - local_30;
  if (local_a0 < local_30) {
    local_110 = 0;
  }
  local_d8 = &local_110;
  local_d0 = 
  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_009de578
  ;
  local_148 = &PTR_DAT_009843c8;
  uStack_140 = 2;
  local_128 = 0;
  local_138 = &local_d8;
  local_130 = 1;
                    /* try { // try from 005704f9 to 00570507 has its CatchHandler @ 00570646 */
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E
            (&local_168,0,extraout_RDX,&local_148);
  local_148 = (undefined **)CONCAT44(uStack_164,local_168);
  uStack_140 = uStack_160;
  local_138 = (undefined8 **)local_158;
                    /* try { // try from 0057051b to 0057060d has its CatchHandler @ 00570662 */
  _ZN3std2fs4File6create17h0df24f189f7321e7E(&local_168,"./grid.json",0xb);
  uVar2 = uStack_160;
  if (local_168 != 1) {
    uVar2 = _ZN9alacritty14window_context13WindowContext22write_ref_test_results28__u7b__u7b_closure_u7d__u7d_17hdb7bf6cba3b252e4E
                      (local_100,local_f8,uStack_164);
  }
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h07194ab63a8d2f81E
            (uVar2,"write grid.json",0xf,&PTR_s_alacritty_src_window_context_rs_00984418);
  _ZN3std2fs4File6create17h0df24f189f7321e7E(&local_168,"./size.json",0xb);
  uVar2 = uStack_160;
  if (local_168 != 1) {
    uVar2 = _ZN9alacritty14window_context13WindowContext22write_ref_test_results28__u7b__u7b_closure_u7d__u7d_17hdb7bf6cba3b252e4E
                      (local_e8,local_e0,uStack_164);
  }
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h07194ab63a8d2f81E
            (uVar2,"write size.json",0xf,&PTR_s_alacritty_src_window_context_rs_00984430);
  _ZN3std2fs4File6create17h0df24f189f7321e7E(&local_168,"./config.json",0xd);
  if (local_168 != 1) {
    uStack_160 = _ZN9alacritty14window_context13WindowContext22write_ref_test_results28__u7b__u7b_closure_u7d__u7d_17hdb7bf6cba3b252e4E
                           (uStack_140,local_138,uStack_164);
  }
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h07194ab63a8d2f81E
            (uStack_160,"write config.json",0x11,&PTR_s_alacritty_src_window_context_rs_00984448);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_148);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(local_f0);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(local_108);
  _ZN4core3ptr95drop_in_place_LT_alacritty_terminal__grid__Grid_LT_alacritty_terminal__term__cell__Cell_GT__GT_17hd67781d2bbb4d82bE
            (local_c8);
  return;
}