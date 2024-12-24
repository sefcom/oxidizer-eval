void __rustcall
uu_join::get_field_number(undefined8 *param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long local_90;
  long local_88;
  long *local_80;
  code *local_78;
  long *local_70;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 **local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_30 [24];
  undefined4 local_18;
  
  if (param_2 != 1) {
    if (param_4 == 0) {
      param_5 = 0;
    }
    param_1[1] = param_5;
    *param_1 = 0;
    return;
  }
  if ((param_4 == 1) && (param_3 != param_5)) {
    local_90 = param_3 + 1;
    local_88 = param_5 + 1;
    local_80 = &local_90;
    local_78 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
    local_70 = &local_88;
    local_68 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
    local_60 = &DAT_00236030;
    local_58 = 2;
    local_40 = 0;
    local_50 = &local_80;
    local_48 = 2;
    core::option::Option<T>::map_or_else(local_30,&local_60);
    local_18 = 1;
    uVar1 = ::alloc::boxed::Box<T>::new(local_30);
    *param_1 = uVar1;
    param_1[1] = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00235e48;
    return;
  }
  param_1[1] = param_3;
  *param_1 = 0;
  return;
}