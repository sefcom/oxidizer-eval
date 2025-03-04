uint _ZN5uu_ls14should_display17h04a8ace30b4ea77eE(undefined8 param_1,long param_2)

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
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined local_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  if ((*(char *)(param_2 + 0xf0) == '\x02') &&
     (cVar1 = _ZN5uu_ls9is_hidden17he2cc02ae0ae5ae31E(param_1), cVar1 != '\0')) {
    return 0;
  }
  local_83 = 1;
  local_81 = 1;
  _ZN3std2fs8DirEntry9file_name17habdd235db90dd152E(local_30,param_1);
                    /* try { // try from 00227daf to 00227e13 has its CatchHandler @ 00227e97 */
  _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
            (&local_80,local_28,local_20);
  if (local_80 == 0) {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h09d6369a280ff05aE
              (&local_80,uStack_78,local_70);
  }
  else {
    _ZN3std3sys6os_str5bytes5Slice15to_string_lossy17h816275565265bd85E(&local_48,local_28,local_20)
    ;
    if (CONCAT44(uStack_44,local_48) != -0x8000000000000000) {
      local_58 = local_38;
      local_80._0_4_ = local_48;
      local_80._4_4_ = uStack_44;
      uStack_78._0_4_ = uStack_40;
      uStack_78._4_4_ = uStack_3c;
      goto LAB_00227e34;
    }
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h09d6369a280ff05aE
              (&local_80,CONCAT44(uStack_3c,uStack_40),local_38);
  }
  local_58 = local_70;
LAB_00227e34:
                    /* try { // try from 00227e4f to 00227e62 has its CatchHandler @ 00227e88 */
  local_68 = (undefined4)local_80;
  uStack_64 = local_80._4_4_;
  local_80 = *(long *)(param_2 + 8);
  uStack_5c = uStack_78._4_4_;
  uStack_60 = (undefined4)uStack_78;
  uStack_78 = *(long *)(param_2 + 0x10) * 0x38 + *(long *)(param_2 + 8);
  uVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17haa0a26cb84a32dffE
                    (&local_80,&local_68,&local_83);
                    /* try { // try from 00227e63 to 00227e6e has its CatchHandler @ 00227e97 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_68);
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h51f173604a280fb6E(local_30);
  return uVar2 ^ 1;
}