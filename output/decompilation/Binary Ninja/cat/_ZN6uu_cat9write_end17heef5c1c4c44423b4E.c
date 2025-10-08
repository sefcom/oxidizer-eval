
  int64_t uu_cat::write_end::heef5c1c4c44423b4(int64_t* arg1, void* arg2, uint64_t arg3, char arg4, char arg5)

{
    if (arg5 & 1)
    {
        if (!(arg4 & 1))
            /* tailcall */
            return uu_cat::write_nonprint_to_end::h33db268fb6c16bcd(arg2, arg3, arg1, 
                "\t^I^?unknown filetype: Is a dir…", 1);
        
        /* tailcall */
        return uu_cat::write_nonprint_to_end::h33db268fb6c16bcd(arg2, arg3, arg1, 
            "^I^?unknown filetype: Is a direc…", 2);
    }
    
    if (!(arg4 & 1))
        /* tailcall */
        return uu_cat::write_to_end::hcdda846ae653fcc6(arg2, arg3, arg1);
    
    /* tailcall */
    return uu_cat::write_tab_to_end::h19b37e049af5d87c(arg2, arg3, arg1);
}
