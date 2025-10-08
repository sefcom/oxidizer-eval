
  fn uu_fmt::linebreak::restart_active_breaks::h7c37ac9084c76f9e(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: i8, arg6: i64, arg7: *mut i32, arg8: i64, arg9: i64) -> *mut i32

{
    let mut rbx: i64 = arg3;
    let mut result: *mut i32 = arg7;
    let mut zmm0: i32 = 0xbf800000;
    let mut rbp: i8;
    
    if (arg5 & 1) == 0
    {
        let rdx: i64 = *result.byte_offset(0x28);
        rbp = 0;
        
        if arg8 + arg4
            + uu_fmt::linebreak::BreakArgs::compute_width::h78d96ea40f73ab18(arg2, result, arg4, 0)
            + rdx - *arg2.byte_offset(0x30) <= arg9 - arg4
        {
            result = arg7;
            zmm0 = 0xbf800000;
        }
        else
        {
            rbx += rdx;
            rbp = 1;
            zmm0 = 0x3f800000;
            result = arg7;
        }
    }
    else
    {
        rbp = 0;
    }
    
    *arg1 = arg6;
    arg1[1] = result;
    *arg1.byte_offset(0x24) = rbp;
    arg1[2] = 0;
    arg1[4] = zmm0;
    arg1[3] = rbx;
    *arg1.byte_offset(0x25) = rbp ^ 1;
    result
}
