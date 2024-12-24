/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __rustcall uu_od::prn_float::format_flo32(float param_1,undefined8 param_2)

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
  if ((((float)(_DAT_00117eb0 & (uint)param_1) != _s__00117af8) &&
      ((float)(_DAT_00117eb0 & (uint)param_1) != 0.0)) && (((uint)param_1 & 0x7f800000) == 0)) {
    local_88 = &local_8c;
    local_80 = core::fmt::float::_<impl_core::fmt::LowerExp_for_f32>::fmt;
    local_78 = 0xe;
    local_70 = 0;
    local_38[0] = 2;
    local_28 = 1;
    local_20 = 1;
    local_18 = 0;
    local_10 = 0x20;
    local_8 = 3;
    local_68 = &DAT_00117e40;
    local_60 = 1;
    local_48 = local_38;
    local_40 = 1;
    local_58 = &local_88;
    local_50 = 2;
    core::option::Option<T>::map_or_else(param_2,&local_68);
    return;
  }
  format_float(SUB84((double)param_1,0),param_2,0xe,8);
  return;
}