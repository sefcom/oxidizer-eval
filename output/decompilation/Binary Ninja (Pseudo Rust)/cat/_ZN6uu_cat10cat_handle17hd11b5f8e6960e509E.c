
  fn uu_cat::cat_handle::hd11b5f8e6960e509(arg1: *mut *mut *mut [i8; 0x92], arg2: *mut i32, arg3: *mut i32) -> i64

{
    let rcx: *mut i64;
    
    if *arg3 != 0
    {
        /* tailcall */
        return uu_cat::write_lines::hff42684e0ec60399(arg1, arg2, arg3, rcx);
    }
    
    if arg3[1] == 0
    {
        /* tailcall */
        return uu_cat::write_fast::hd2141eaf4d9f5934(arg1, arg2);
    }
    
    /* tailcall */
    uu_cat::write_lines::hff42684e0ec60399(arg1, arg2, arg3, rcx)
}
