/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __rustcall
uu_df::table::RowFormatter::percentage(double param_1,undefined8 param_2,long param_3)

{
  undefined8 local_90;
  undefined8 *local_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined local_18;
  
  if (param_3 != 0) {
    local_90 = (*(code *)PTR_ceil_002463a8)(param_1 * _s__0010bfd0);
    local_88 = &local_90;
    local_80 = core::fmt::float::_<impl_core::fmt::Display_for_f64>::fmt;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 2;
    local_28 = 0;
    local_20 = 0x20;
    local_18 = 3;
    local_78 = &DAT_00241b30;
    local_70 = 2;
    local_58 = &local_48;
    local_50 = 1;
    local_68 = &local_88;
    local_60 = 1;
    core::option::Option<T>::map_or_else(param_2,&local_78);
    return;
  }
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_2,"-",1);
  return;
}