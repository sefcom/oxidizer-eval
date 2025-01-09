undefined8 * __rustcall uu_sort::get_rlimit(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined **local_48;
  undefined8 uStack_40;
  undefined local_30 [24];
  undefined4 local_18;
  
  local_48 = (undefined **)0x0;
  uStack_40 = 0;
  iVar1 = (*(code *)PTR_getrlimit_00306f40)(7,&local_48);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(local_30,"Failed to fetch rlimit",0x16);
    local_18 = 2;
    uVar2 = ::alloc::boxed::Box<T>::new(local_30);
    local_48 = &PTR_drop_in_place<uucore_mods_error_UUsageError>_002ffc90;
  }
  param_1[1] = local_48;
  *param_1 = uVar2;
  return param_1;
}