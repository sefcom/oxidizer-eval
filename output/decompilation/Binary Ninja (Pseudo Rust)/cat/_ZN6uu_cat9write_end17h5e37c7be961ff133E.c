
  fn uu_cat::write_end::h5e37c7be961ff133(arg1: *mut i64, arg2: *mut c_void, arg3: u64, arg4: i8, arg5: i8) -> i64

{
    if arg5 == 0
    {
        if arg4 == 0
        {
            /* tailcall */
            return uu_cat::write_to_end::hc5c9bc823008cc21(arg2, arg3, arg1);
        }
        
        /* tailcall */
        return uu_cat::write_tab_to_end::h72aa057f554663f6(arg2, arg3, arg1);
    }
    
    let mut rcx: *const i8;
    let mut r8: u64;
    
    if arg4 == 0
    {
        rcx = "\t$\n^M^I^?unknown filetype: Is …";
        r8 = 1;
    }
    else
    {
        rcx = "^I^?unknown filetype: Is a direc…";
        r8 = 2;
    }
    
    /* tailcall */
    uu_cat::write_nonprint_to_end::h8a88ce313d35316b(arg2, arg3, arg1, rcx, r8)
}
