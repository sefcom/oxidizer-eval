undefined4 _ZN5uu_ls9is_hidden17he2cc02ae0ae5ae31E(undefined8 param_1)

{
  undefined4 uVar1;
  undefined auVar2 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  _ZN3std2fs8DirEntry9file_name17habdd235db90dd152E(local_28,param_1);
                    /* try { // try from 00227cdf to 00227d27 has its CatchHandler @ 00227d3e */
  _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
            (&local_40,local_20,local_18);
  if (CONCAT44(uStack_3c,local_40) == 0) {
    local_40 = 0;
    auVar2 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x2e,&local_40);
    uVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h032fb0d9cebdd48eE
                      (local_38,local_30,auVar2._0_8_,auVar2._8_8_);
  }
  else {
    uVar1 = 0;
  }
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h51f173604a280fb6E(local_28);
  return uVar1;
}