undefined4 _ZN5uu_ls9is_hidden17h56276072d631ca64E(undefined8 param_1)

{
  undefined4 uVar1;
  undefined auVar2 [16];
  int local_50 [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  (*(code *)PTR__ZN3std2fs8DirEntry9file_name17h6946eae0b92783e6E_0048fe78)(&local_38,param_1);
                    /* try { // try from 0029aca2 to 0029acec has its CatchHandler @ 0029ad09 */
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_0048f870)
            (local_50,local_30,local_28);
  if (local_50[0] == 1) {
    uVar1 = 0;
  }
  else {
    local_50[0] = 0;
    auVar2 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2e,local_50);
    uVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h59d427cca09fdf3aE
                      (local_48,local_40,auVar2._0_8_,auVar2._8_8_);
  }
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h9930b46afeec8fe4E
            (local_38,local_30);
  return uVar1;
}