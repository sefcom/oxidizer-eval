
  int64_t bat::printer::InteractivePrinter::preprocess::hb721972798c95be5(int128_t* arg1, void* arg2, int64_t arg3, uint64_t arg4, int64_t* arg5)

{
    int64_t rax_2 = *(arg2 + 0x108);
    
    if (rax_2)
        /* tailcall */
        return bat::preprocessor::expand_tabs::hd1e4844dd3a3fe09(arg1, arg3, arg4, rax_2);
    
    *arg5 += arg4;
    /* tailcall */
    return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(arg1, arg3, arg4);
}
