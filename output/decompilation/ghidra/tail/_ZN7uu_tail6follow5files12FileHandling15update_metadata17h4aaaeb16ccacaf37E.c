void _ZN7uu_tail6follow5files12FileHandling15update_metadata17h4aaaeb16ccacaf37E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long local_178;
  long local_170 [21];
  undefined local_c8 [168];
  
  lVar2 = *param_4;
  if (lVar2 == 2) {
    _ZN3std2fs8metadata17h5a76b0b01e9dc15dE(&local_178,param_2,param_3);
    lVar2 = local_178;
    if (local_178 == 2) {
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17he6af43ab7f514533E
                (local_170[0]);
      goto LAB_0020eb92;
    }
    param_4 = local_170;
  }
  else {
    param_4 = param_4 + 1;
  }
  (*(code *)PTR_memcpy_002c2760)(local_c8,param_4,0xa8);
LAB_0020eb92:
  plVar1 = (long *)_ZN7uu_tail6follow5files12FileHandling7get_mut17h1a80ce1ee4fcf7dcE
                             (param_1,param_2,param_3);
  *plVar1 = lVar2;
  (*(code *)PTR_memcpy_002c2760)(plVar1 + 1,local_c8,0xa8);
  return;
}