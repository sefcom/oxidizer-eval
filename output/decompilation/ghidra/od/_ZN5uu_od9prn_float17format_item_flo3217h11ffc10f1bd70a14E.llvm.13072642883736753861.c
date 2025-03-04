undefined8 *
_ZN5uu_od9prn_float17format_item_flo3217h11ffc10f1bd70a14E_llvm_13072642883736753861
          (double param_1,undefined8 *param_2)

{
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
  
  _ZN5uu_od9prn_float12format_flo3217h9997a42b85d61a4bE((float)param_1,local_28);
  local_78 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
  local_58 = &DAT_00242038;
  local_50 = 1;
  local_38 = 0;
  local_48 = &local_80;
  local_40 = 1;
                    /* try { // try from 001d4f0d to 001d4f1b has its CatchHandler @ 001d4f51 */
  local_80 = local_28;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hc22922308bfda6bfE(&local_70,&local_58);
                    /* try { // try from 001d4f1c to 001d4f25 has its CatchHandler @ 001d4f42 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h265121219f172febE(local_28);
  param_2[2] = local_60;
  *param_2 = local_70;
  param_2[1] = uStack_68;
  return param_2;
}