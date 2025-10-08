void _ZN5uu_od9prn_float12format_flo3217hb158b5d92d44987eE(float param_1,undefined8 param_2)

{
  float local_54;
  float *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined4 **local_20;
  undefined8 local_18;
  undefined *local_10;
  undefined8 local_8;
  
  local_54 = param_1;
  if (((((uint)param_1 & 0x7fffff) != 0) && (ABS(param_1) != INFINITY)) &&
     (((uint)param_1 & 0x7f800000) == 0)) {
    local_50 = &local_54;
    local_48 = 
    PTR__ZN4core3fmt5float53__LT_impl_u20_core__fmt__LowerExp_u20_for_u20_f32_GT_3fmt17h33a5b7ff1cb3b6abE_0020ace8
    ;
    local_40 = 0;
    local_38 = 0xe;
    local_30 = &DAT_0011a940;
    local_28 = 1;
    local_10 = &DAT_0011d228;
    local_8 = 1;
    local_20 = &local_50;
    local_18 = 2;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h56b2ee9aee1b26d0E(param_2,&local_30);
    return;
  }
  _ZN5uu_od9prn_float12format_float17hb20d3bf5c81306f8E(SUB84((double)param_1,0),param_2,0xe,8);
  return;
}