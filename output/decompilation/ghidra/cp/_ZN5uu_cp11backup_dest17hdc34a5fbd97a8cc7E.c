void _ZN5uu_cp11backup_dest17hdc34a5fbd97a8cc7E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,int param_6)

{
  byte bVar1;
  long lVar2;
  undefined8 extraout_RDX;
  
  if (param_6 == 0) {
    bVar1 = _ZN3std2fs4copy17h705af7a8cd89b11dE(param_2,param_3,param_4,param_5);
    if ((bVar1 & 1) != 0) {
      *param_1 = 0x8000000000000001;
      param_1[1] = extraout_RDX;
      return;
    }
  }
  else {
    lVar2 = _ZN3std2fs6rename17h4347bfdced64b0f6E();
    if (lVar2 != 0) {
      *param_1 = 0x8000000000000001;
      param_1[1] = lVar2;
      return;
    }
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc9b93e2d5549764dE
            (param_1 + 1,param_4,param_5);
  *param_1 = 0x800000000000000c;
  return;
}