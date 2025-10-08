undefined8
_ZN5uu_od9prn_float17format_item_flo1617ha3647a0160c6ce7fE(double param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined *local_68;
  code *local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_28 [24];
  
  cVar1 = _ZN10std_detect6detect5cache4test17h42d452cfc9d2956fE();
  if (cVar1 == '\0') {
    uVar2 = _ZN4half8binary164arch19f64_to_f16_fallback17h60cd6c4867711914E(param_1);
  }
  else {
    uVar2 = _ZN4half8binary164arch3x8619f32_to_f16_x86_f16c17h1e8e9fb359715c05E((float)param_1);
  }
  _ZN5uu_od9prn_float12format_flo1617habda6552607ff1e9E(local_28,uVar2);
  local_60 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_58 = &PTR_s_177_00203838;
  local_50 = 1;
  local_38 = 0;
  local_48 = &local_68;
  local_40 = 1;
                    /* try { // try from 0016b3f6 to 0016b402 has its CatchHandler @ 0016b418 */
  local_68 = local_28;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h56b2ee9aee1b26d0E(param_2,&local_58);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h0ecbbb68ed17b0f1E(local_28);
  return param_2;
}