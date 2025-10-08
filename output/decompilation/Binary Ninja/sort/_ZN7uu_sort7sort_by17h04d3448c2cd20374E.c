
  int64_t uu_sort::sort_by::h04d3448c2cd20374(int64_t arg1, int64_t arg2, void* arg3)

{
    if (*(arg3 + 0x83))
        /* tailcall */
        return rayon::slice::ParallelSliceMut::par_sort_by::h524a1ba5d2d76596(arg1, arg2, arg3);
    
    if (*(arg3 + 0x84) != 1)
        /* tailcall */
        return rayon::slice::ParallelSliceMut::par_sort_unstable_by::hafdab91561a94fc5(arg1, arg2, 
            arg3);
    
    /* tailcall */
    return rayon::slice::ParallelSliceMut::par_sort_by::h524a1ba5d2d76596(arg1, arg2, arg3);
}
