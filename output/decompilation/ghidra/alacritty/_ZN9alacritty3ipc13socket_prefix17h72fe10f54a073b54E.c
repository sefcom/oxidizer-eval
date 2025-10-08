void _ZN9alacritty3ipc13socket_prefix17h72fe10f54a073b54E(undefined8 param_1)

{
  undefined8 extraout_RDX;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined **local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  int local_48 [2];
  undefined auStack_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined local_28 [24];
  
  _ZN3std3env3var17h6dfe92363d5ba5ffE(local_48,"WAYLAND_DISPLAY",0xf);
  if (local_48[0] == 1) {
    _ZN9alacritty3ipc13socket_prefix28__u7b__u7b_closure_u7d__u7d_17hbd6393b3722c6a59E
              (&local_a8,auStack_40);
  }
  else {
    local_98 = (undefined **)local_38;
    uStack_90 = uStack_30;
  }
  _ZN4core6result19Result_LT_T_C_E_GT_17unwrap_or_default17h963cd60af23de70fE(local_70,&local_a8);
                    /* try { // try from 0055ccf3 to 0055cd0e has its CatchHandler @ 0055cda1 */
  _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb8f25c113ebcb6e9E
            (local_28,local_68,local_60,0x2f,"-");
  local_50 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_a8 = &PTR_s_Alacritty__00983020;
  uStack_a0 = 1;
  local_88 = 0;
  local_98 = &local_58;
  uStack_90 = 1;
  local_58 = local_28;
                    /* try { // try from 0055cd50 to 0055cd5c has its CatchHandler @ 0055cd7f */
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E
            (param_1,0,extraout_RDX,&local_a8);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(local_28);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(local_70);
  return;
}