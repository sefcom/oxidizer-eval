undefined8 * _ZN5uu_df19get_all_filesystems17ha419c9a63b8c437aE(undefined8 *param_1,long param_2)

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
  _ZN6uucore8features5fsext12read_fs_list17h424e364609cbd5d3E(&local_90);
  if (local_90 == -0x8000000000000000) {
    param_1[1] = local_88;
    param_1[2] = local_80;
    *param_1 = 0x8000000000000000;
  }
  else {
    local_78 = local_90;
    local_70 = local_88;
    local_68 = local_80;
    _ZN5uu_df17filter_mount_list17h552d57bf732d9983E(local_38,&local_78,param_2);
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h16be972b538517f1E
              (local_60,local_38);
    local_40 = param_2;
    _ZN5alloc3vec16in_place_collect108__LT_impl_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__u20_for_u20_alloc__vec__Vec_LT_T_GT__GT_9from_iter17h5775629d250cad33E
              (param_1,local_60);
  }
  return param_1;
}