void _ZN5uu_cp9copy_fifo17he922d06a7cbac9e7E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined param_4,
               undefined param_5)

{
  int iVar1;
  long lVar2;
  int local_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  _ZN3std2fs8metadata17h87a95e5fd9b91fc7E(&local_e0);
  iVar1 = local_e0;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17he37bb0d8b54bbf24E
            (&local_e0);
  if (iVar1 != 2) {
    _ZN5uu_cp13OverwriteMode6verify17hcf2d8eaa11706b21E(&local_e0,param_4,param_2,param_3,param_5);
    if (CONCAT44(uStack_dc,local_e0) != -0x7ffffffffffffff4) {
      param_1[6] = local_b0;
      param_1[4] = local_c0;
      param_1[5] = uStack_b8;
      param_1[2] = local_d0;
      param_1[3] = uStack_c8;
      *param_1 = CONCAT44(uStack_dc,local_e0);
      param_1[1] = uStack_d8;
      return;
    }
    lVar2 = _ZN3std2fs11remove_file17h19277b2d7a4f8643E(param_2,param_3);
    if (lVar2 != 0) {
      *param_1 = 0x8000000000000001;
      param_1[1] = lVar2;
      return;
    }
  }
  lVar2 = (*(code *)PTR__ZN6uucore8features2fs9make_fifo17hb14eabe17aca9891E_00267c88)
                    (param_2,param_3);
  if (lVar2 == 0) {
    *param_1 = 0x800000000000000c;
    return;
  }
  _ZN5uu_cp9copy_fifo28__u7b__u7b_closure_u7d__u7d_17hda26bf9394832a9bE
            (param_1,param_2,param_3,lVar2);
  return;
}