undefined8 * __rustcall uu_df::get_all_filesystems(undefined8 *param_1,long param_2)

{
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined local_60 [32];
  long local_40;
  undefined local_38 [24];
  
  if (*(char *)(param_2 + 0x52) != '\0') {
    (*(code *)PTR_sync_00245d30)();
  }
  uucore::features::fsext::read_fs_list(&local_90);
  if (local_90 == -0x8000000000000000) {
    param_1[1] = local_88;
    param_1[2] = local_80;
    *param_1 = 0x8000000000000000;
  }
  else {
    local_78 = local_90;
    local_70 = local_88;
    local_68 = local_80;
    filter_mount_list(local_38,&local_78,param_2);
    _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
              (local_60,local_38);
    local_40 = param_2;
    ::alloc::vec::in_place_collect::
    _<impl_alloc::vec::spec_from_iter::SpecFromIter<T,I>for_alloc::vec::Vec<T>>::from_iter
              (param_1,local_60);
  }
  return param_1;
}