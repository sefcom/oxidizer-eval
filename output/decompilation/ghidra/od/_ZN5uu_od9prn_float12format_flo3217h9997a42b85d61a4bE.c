/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN5uu_od9prn_float12format_flo3217h9997a42b85d61a4bE(float param_1,undefined8 param_2)

{
  float local_8c;
  float *local_88;
  code *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined4 **local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined local_8;
  
  local_8c = param_1;
  if ((((float)(_DAT_0010db40 & (uint)param_1) != _s__0010d688) &&
      ((float)(_DAT_0010db40 & (uint)param_1) != 0.0)) && (((uint)param_1 & 0x7f800000) == 0)) {
    local_88 = &local_8c;
    local_80 = 
    _ZN4core3fmt5float53__LT_impl_u20_core__fmt__LowerExp_u20_for_u20_f32_GT_3fmt17h814b1cab8d475c50E
    ;
    local_78 = 0xe;
    local_70 = 0;
    local_38[0] = 2;
    local_28 = 1;
    local_20 = 1;
    local_18 = 0;
    local_10 = 0x20;
    local_8 = 3;
    local_68 = &DAT_0010dad0;
    local_60 = 1;
    local_48 = local_38;
    local_40 = 1;
    local_58 = &local_88;
    local_50 = 2;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hc22922308bfda6bfE(param_2,&local_68);
    return;
  }
  _ZN5uu_od9prn_float12format_float17h341a0cfde1a47520E(SUB84((double)param_1,0),param_2,0xe,8);
  return;
}