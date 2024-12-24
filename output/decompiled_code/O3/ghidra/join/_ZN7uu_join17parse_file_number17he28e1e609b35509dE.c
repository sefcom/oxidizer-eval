void __rustcall
uu_join::parse_file_number(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *local_98;
  code *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined local_38 [24];
  undefined4 local_20;
  
  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"1",1);
  if (cVar1 == '\0') {
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"2",1);
    if (cVar1 == '\0') {
      local_88 = 0;
      local_70 = 1;
      local_98 = &local_88;
      local_90 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_68 = &DAT_00236060;
      local_60 = 1;
      local_48 = 0;
      local_50 = 1;
      local_80 = param_2;
      local_78 = param_3;
      local_58 = (undefined *)&local_98;
      core::option::Option<T>::map_or_else(local_38,&local_68);
      local_20 = 1;
      uVar2 = ::alloc::boxed::Box<T>::new(local_38);
      *param_1 = uVar2;
      param_1[1] = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00235e48;
      return;
    }
    *(undefined *)(param_1 + 1) = 1;
  }
  else {
    *(undefined *)(param_1 + 1) = 0;
  }
  *param_1 = 0;
  return;
}