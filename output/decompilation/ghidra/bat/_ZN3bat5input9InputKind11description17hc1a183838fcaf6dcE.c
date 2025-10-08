void _ZN3bat5input9InputKind11description17hc1a183838fcaf6dcE(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined local_30 [24];
  
  lVar1 = 0;
  if (*param_2 < -0x7ffffffffffffffe) {
    lVar1 = *param_2 + -0x7fffffffffffffff;
  }
  if (lVar1 == 0) {
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_008075f0)
              (local_30,param_2[1],param_2[2]);
    (*(code *)
      PTR__ZN98__LT_alloc__string__String_u20_as_u20_core__convert__From_LT_alloc__borrow__Cow_LT_str_GT__GT__GT_4from17hf538378189c0d550E_008075f8
    )(param_1,local_30);
  }
  else {
    if (lVar1 == 1) {
      puVar3 = &DAT_002a28d4;
      uVar2 = 5;
    }
    else {
      puVar3 = &DAT_002a28ce;
      uVar2 = 6;
    }
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h6553538e39c64234E
              (param_1,puVar3,uVar2);
  }
  *(undefined8 *)(param_1 + 0x18) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x30) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x48) = 0x8000000000000000;
  return;
}