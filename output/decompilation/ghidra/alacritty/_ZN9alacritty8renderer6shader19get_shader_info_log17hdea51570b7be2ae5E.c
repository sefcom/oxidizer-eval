void _ZN9alacritty8renderer6shader19get_shader_info_log17hdea51570b7be2ae5E
               (undefined8 param_1,undefined4 param_2)

{
  int local_48;
  int local_44;
  undefined local_40 [16];
  long local_30;
  undefined local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  local_48 = 0;
  (*(code *)_ZN9alacritty2gl7storage11GetShaderiv17h69c95f7d61f52dacE_0)(param_2,0x8b84,&local_48);
  local_44 = 0;
  local_40 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h6d79adff25664689E
                       ((long)local_48,1,1,&PTR_s_alacritty_src_renderer_shader_rs_00983b78);
  local_30 = 0;
  (*(code *)_ZN9alacritty2gl7storage16GetShaderInfoLog17h2a8fa29910573669E_0)
            (param_2,local_48,&local_44,local_40._8_8_);
  local_30 = (long)local_44;
                    /* try { // try from 00563b59 to 00563b63 has its CatchHandler @ 00563bb0 */
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_009de418)
            (local_28,local_40._8_8_);
                    /* try { // try from 00563b6e to 00563b75 has its CatchHandler @ 00563b91 */
  _ZN55__LT__RF_str_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h0eee6798dc8ee10dE
            (param_1,local_20,local_18);
  _ZN4core3ptr37drop_in_place_LT_crossfont__Style_GT_17h2b47363f07595d0eE(local_28);
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hf03622863648a7aaE(local_40);
  return;
}