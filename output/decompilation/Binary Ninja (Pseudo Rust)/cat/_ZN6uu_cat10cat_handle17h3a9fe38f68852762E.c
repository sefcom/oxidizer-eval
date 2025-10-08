
  fn uu_cat::cat_handle::h3a9fe38f68852762(arg1: *mut i64, arg2: *mut i32, arg3: *mut i8) -> i64

{
    let rcx: *mut i8;
    
    if arg3[1] != 0
    {
        /* tailcall */
        return uu_cat::write_lines::h59950f7c6160fd92(arg1, arg2, arg3, rcx);
    }
    
    if arg3[3] != 0
    {
        /* tailcall */
        return uu_cat::write_lines::h59950f7c6160fd92(arg1, arg2, arg3, rcx);
    }
    
    if arg3[2] != 0
    {
        /* tailcall */
        return uu_cat::write_lines::h59950f7c6160fd92(arg1, arg2, arg3, rcx);
    }
    
    if *arg3 != 0
    {
        /* tailcall */
        return uu_cat::write_lines::h59950f7c6160fd92(arg1, arg2, arg3, rcx);
    }
    
    if arg3[4] == 0
    {
        /* tailcall */
        return uu_cat::write_fast::h8d1d87ec93285f91(arg1, arg2);
    }
    
    /* tailcall */
    uu_cat::write_lines::h59950f7c6160fd92(arg1, arg2, arg3, rcx)
}
