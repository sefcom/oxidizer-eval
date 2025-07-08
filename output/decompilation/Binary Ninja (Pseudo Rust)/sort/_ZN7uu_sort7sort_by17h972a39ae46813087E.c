
  fn uu_sort::sort_by::h972a39ae46813087(arg1: *mut c_void, arg2: *mut c_void) -> i64

{
    let rdi: i64 = *arg1.byte_offset(8);
    let rsi_1: i64 = *arg1.byte_offset(0x10);
    
    if (*arg2.byte_offset(0x83) | *arg2.byte_offset(0x84)) == 0
    {
        /* tailcall */
        return rayon::slice::ParallelSliceMut::par_sort_unstable_by::he75f5b395c47fc63(rdi, rsi_1, 
            arg2);
    }
    
    /* tailcall */
    rayon::slice::ParallelSliceMut::par_sort_by::hf559a0c32149ed22(rdi, rsi_1, arg2)
}
