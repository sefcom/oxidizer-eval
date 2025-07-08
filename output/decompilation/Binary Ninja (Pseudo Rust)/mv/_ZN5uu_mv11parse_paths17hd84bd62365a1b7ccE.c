
  fn uu_mv::parse_paths::hd84bd62365a1b7cc(arg1: *mut i128, arg2: *mut c_void, arg3: i64, arg4: i8) -> i64

{
    let rdx: *mut c_void = arg2.byte_offset(arg3 * 0x18);
    
    if arg4 != 0
    {
        /* tailcall */
        return _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h742afe73120e6079(arg1, arg2, rdx);
    }
    
    /* tailcall */
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h5b8bcb7d7220f2b8(arg1, arg2, rdx)
}
