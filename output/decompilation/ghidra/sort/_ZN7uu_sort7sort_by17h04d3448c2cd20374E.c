void _ZN7uu_sort7sort_by17h04d3448c2cd20374E
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined auVar1 [16];
  long lStack_10;
  undefined8 uStack_8;
  
  lStack_10 = param_3;
  uStack_8 = param_4;
  if (*(char *)(param_3 + 0x83) != '\0') {
    auVar1 = _ZN71__LT__u5b_T_u5d__u20_as_u20_rayon__slice__ParallelSliceMut_LT_T_GT__GT_21as_parallel_slice_mut17hc8585c533b4de935E
                       ();
    _ZN5rayon5slice9mergesort13par_mergesort17h340122b031ab0faeE
              (auVar1._0_8_,auVar1._8_8_,&lStack_10);
    return;
  }
  if (*(char *)(param_3 + 0x84) == '\x01') {
    _ZN5rayon5slice16ParallelSliceMut11par_sort_by17h524a1ba5d2d76596E();
    return;
  }
  auVar1 = _ZN71__LT__u5b_T_u5d__u20_as_u20_rayon__slice__ParallelSliceMut_LT_T_GT__GT_21as_parallel_slice_mut17hc8585c533b4de935E
                     ();
  _ZN5rayon5slice9quicksort13par_quicksort17h7a954073c0dbe56cE(auVar1._0_8_,auVar1._8_8_,&lStack_10)
  ;
  return;
}