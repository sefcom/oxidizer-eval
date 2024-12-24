undefined8 * __rustcall
uu_df::filesystem::Filesystem::from_path
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined local_e8 [16];
  undefined8 local_d8;
  undefined local_d0 [16];
  undefined8 local_c0;
  undefined local_b8 [152];
  
  local_e8 = _<&T_as_core::convert::AsRef<U>>::as_ref(param_4);
  _<T_as_alloc::string::ToString>::to_string(local_d0,local_e8);
                    /* try { // try from 0017b118 to 0017b137 has its CatchHandler @ 0017b187 */
  lVar1 = mount_info_from_path(param_2,param_3,param_4);
  if (lVar1 == 0) {
    *param_1 = 0x8000000000000000;
    core::ptr::drop_in_place<alloc::string::String>(local_d0);
  }
  else {
    _<uucore::features::fsext::MountInfo_as_core::clone::Clone>::clone(local_b8,lVar1);
    local_d8 = local_c0;
    (*(code *)PTR_new_002469a8)(param_1,local_b8,local_e8);
  }
  return param_1;
}