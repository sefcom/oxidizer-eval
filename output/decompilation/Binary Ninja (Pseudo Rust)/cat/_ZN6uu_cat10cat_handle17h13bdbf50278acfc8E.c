
  fn uu_cat::cat_handle::h13bdbf50278acfc8(arg1: *mut *mut *mut [i8; 0x92], arg2: *mut i32, arg3: *mut i32) -> i64

{
    let rcx: *mut i64;
    
    if *arg3 != 0
    {
        /* tailcall */
        return uu_cat::write_lines::h3b8d3a5992cb0b4e(arg1, arg2, arg3, rcx);
    }
    
    if arg3[1] == 0
    {
        /* tailcall */
        return uu_cat::write_fast::he3f5331bc66ac0a4(arg1, arg2);
    }
    
    /* tailcall */
    uu_cat::write_lines::h3b8d3a5992cb0b4e(arg1, arg2, arg3, rcx)
}
