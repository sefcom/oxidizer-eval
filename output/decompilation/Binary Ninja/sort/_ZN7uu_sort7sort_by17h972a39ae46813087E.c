
  int64_t uu_sort::sort_by::h972a39ae46813087(void* arg1, void* arg2)

{
    int64_t rdi = *(arg1 + 8);
    int64_t rsi_1 = *(arg1 + 0x10);
    
    if (!(*(arg2 + 0x83) | *(arg2 + 0x84)))
        /* tailcall */
        return rayon::slice::ParallelSliceMut::par_sort_unstable_by::he75f5b395c47fc63(rdi, rsi_1, 
            arg2);
    
    /* tailcall */
    return rayon::slice::ParallelSliceMut::par_sort_by::hf559a0c32149ed22(rdi, rsi_1, arg2);
}
