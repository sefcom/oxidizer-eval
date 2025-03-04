void _ZN7uu_sort7sort_by17h972a39ae46813087E(long param_1,long param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  long lStack_10;
  undefined8 uStack_8;
  
  if (*(char *)(param_2 + 0x83) != '\0' || *(char *)(param_2 + 0x84) != '\0') {
    _ZN5rayon5slice16ParallelSliceMut11par_sort_by17hf559a0c32149ed22E();
    return;
  }
  lStack_10 = param_2;
  uStack_8 = param_3;
  auVar1 = _ZN71__LT__u5b_T_u5d__u20_as_u20_rayon__slice__ParallelSliceMut_LT_T_GT__GT_21as_parallel_slice_mut17h67767d53242053d1E
                     (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  _ZN5rayon5slice9quicksort13par_quicksort17h182be65b6c1fdb36E(auVar1._0_8_,auVar1._8_8_,&lStack_10)
  ;
  return;
}