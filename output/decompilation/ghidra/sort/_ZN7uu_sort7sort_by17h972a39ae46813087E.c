void __rustcall uu_sort::sort_by(long param_1,long param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  long lStack_10;
  undefined8 uStack_8;
  
  if (*(char *)(param_2 + 0x83) != '\0' || *(char *)(param_2 + 0x84) != '\0') {
    rayon::slice::ParallelSliceMut::par_sort_by();
    return;
  }
  lStack_10 = param_2;
  uStack_8 = param_3;
  auVar1 = _<[T]as_rayon::slice::ParallelSliceMut<T>>::as_parallel_slice_mut
                     (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  rayon::slice::quicksort::par_quicksort(auVar1._0_8_,auVar1._8_8_,&lStack_10);
  return;
}