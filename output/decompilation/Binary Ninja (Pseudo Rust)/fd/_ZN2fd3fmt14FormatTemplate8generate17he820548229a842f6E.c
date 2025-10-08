
  fn sub_5f5e30(arg1: i64 @ rbx, arg2: i64 @ rbp, arg3: *mut c_void @ r12, arg4: i64 @ r13, arg5: i64, arg6: i64, arg7: i64, arg8: *mut i64, arg9: i64, arg10: i64, arg11: i64, arg12: i64, arg13: i64, arg14: i64) -> i64

{
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h7308b79749514aee(__return_addr, 
        arg2);
    
    if arg1 == 0x18
    {
        arg8[2] = arg7;
        *arg8 = arg5;
        arg8[1] = arg6;
        return arg6;
    }
    
    let mut rax_1: i64 = *arg3.byte_offset(0x18) ^ 0x8000000000000000;
    
    if rax_1 >= 5
    {
        rax_1 = 5;
    }
    
    /* jump -> *(arg4 + (rax_1 << 2)) + arg4 */
}
