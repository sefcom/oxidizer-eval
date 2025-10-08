
  fn bat::printer::InteractivePrinter::preprocess::hb721972798c95be5(arg1: *mut i128, arg2: *mut c_void, arg3: i64, arg4: u64, arg5: *mut i64) -> i64

{
    let rax_2: i64 = *arg2.byte_offset(0x108);
    
    if rax_2 != 0
    {
        /* tailcall */
        return bat::preprocessor::expand_tabs::hd1e4844dd3a3fe09(arg1, arg3, arg4, rax_2);
    }
    
    *arg5 += arg4;
    /* tailcall */
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(arg1, arg3, arg4)
}
