undefined8 *
_ZN5uu_od9prn_float17format_item_flo1617hec403f238da07cb9E_llvm_13072642883736753861
          (double param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined *local_80;
  code *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_28 [24];
  
  cVar1 = _ZN10std_detect6detect5cache4test17h15354216764ae092E();
  if (cVar1 == '\0') {
    uVar2 = _ZN4half8binary164arch19f64_to_f16_fallback17he45d933123023c2dE(SUB84(param_1,0));
  }
  else {
    uVar2 = _ZN4half8binary164arch3x8619f32_to_f16_x86_f16c17h664ec704d55f7139E((float)param_1);
  }
  _ZN5uu_od9prn_float12format_flo1617hd8d34214ac1f2229E(local_28,uVar2);
  local_78 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
  local_58 = &DAT_00242038;
  local_50 = 1;
  local_38 = 0;
  local_48 = &local_80;
  local_40 = 1;
                    /* try { // try from 001d4e43 to 001d4e51 has its CatchHandler @ 001d4e87 */
  local_80 = local_28;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hc22922308bfda6bfE(&local_70,&local_58);
                    /* try { // try from 001d4e52 to 001d4e5b has its CatchHandler @ 001d4e78 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h265121219f172febE(local_28);
  param_2[2] = local_60;
  *param_2 = local_70;
  param_2[1] = uStack_68;
  return param_2;
}