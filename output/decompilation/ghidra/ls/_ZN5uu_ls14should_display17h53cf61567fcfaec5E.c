uint _ZN5uu_ls14should_display17h53cf61567fcfaec5E(undefined8 param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  undefined2 local_83;
  undefined local_81;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((*(char *)(param_2 + 0xf8) == '\x02') &&
     (cVar1 = _ZN5uu_ls9is_hidden17h56276072d631ca64E(param_1), cVar1 != '\0')) {
    uVar2 = 0;
  }
  else {
    local_83 = 1;
    local_81 = 1;
    (*(code *)PTR__ZN3std2fs8DirEntry9file_name17h6946eae0b92783e6E_0048fe78)(&local_38,param_1);
                    /* try { // try from 0029ad80 to 0029addb has its CatchHandler @ 0029ae64 */
    (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_0048f870)
              (&local_80,local_30,local_28);
    if ((int)local_80 == 1) {
      (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_0048fdf0)
                (&local_50,local_30,local_28);
      local_58 = local_40;
      local_80._0_4_ = local_50;
      local_80._4_4_ = uStack_4c;
      uStack_78._0_4_ = uStack_48;
      uStack_78._4_4_ = uStack_44;
    }
    else {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h24216b49f21f2bafE
                (&local_80,uStack_78,local_70);
      local_58 = local_70;
    }
                    /* try { // try from 0029ae17 to 0029ae2a has its CatchHandler @ 0029ae55 */
    local_68 = (int)local_80;
    uStack_64 = local_80._4_4_;
    local_80 = *(long *)(param_2 + 8);
    uStack_5c = uStack_78._4_4_;
    uStack_60 = (undefined4)uStack_78;
    uStack_78 = *(long *)(param_2 + 0x10) * 0x38 + *(long *)(param_2 + 8);
    uVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h753ac60a44d20d1fE
                      (&local_80,&local_68,&local_83);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_68);
    uVar2 = uVar2 ^ 1;
    _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h9930b46afeec8fe4E
              (local_38,local_30);
  }
  return uVar2;
}