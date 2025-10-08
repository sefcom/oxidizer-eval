
  fn uu_cat::write_end::heef5c1c4c44423b4(arg1: *mut i64, arg2: *mut c_void, arg3: u64, arg4: i8, arg5: i8) -> i64

{
    if (arg5 & 1) != 0
    {
        if (arg4 & 1) == 0
        {
            /* tailcall */
            return uu_cat::write_nonprint_to_end::h33db268fb6c16bcd(arg2, arg3, arg1, 
                "\t^I^?unknown filetype: Is a dir…", 1);
        }
        
        /* tailcall */
        return uu_cat::write_nonprint_to_end::h33db268fb6c16bcd(arg2, arg3, arg1, 
            "^I^?unknown filetype: Is a direc…", 2);
    }
    
    if (arg4 & 1) == 0
    {
        /* tailcall */
        return uu_cat::write_to_end::hcdda846ae653fcc6(arg2, arg3, arg1);
    }
    
    /* tailcall */
    uu_cat::write_tab_to_end::h19b37e049af5d87c(arg2, arg3, arg1)
}
