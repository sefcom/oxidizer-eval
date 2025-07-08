
  fn uu_cat::cat_handle::h2310985edbce98d4(arg1: *mut *mut *mut [i8; 0x92], arg2: *mut i64, arg3: *mut i32) -> i64

{
    let rcx: *mut i64;
    
    if *arg3 != 0
    {
        /* tailcall */
        return uu_cat::write_lines::hd655140a51395418(arg1, arg2, arg3, rcx);
    }
    
    if arg3[1] == 0
    {
        /* tailcall */
        return uu_cat::write_fast::ha32986047449ad77(arg1, arg2);
    }
    
    /* tailcall */
    uu_cat::write_lines::hd655140a51395418(arg1, arg2, arg3, rcx)
}
