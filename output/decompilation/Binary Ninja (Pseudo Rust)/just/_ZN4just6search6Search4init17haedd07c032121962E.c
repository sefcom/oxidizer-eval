
  fn sub_688c09(arg1: i64, arg2: *mut c_void, arg3: i64, arg4: u64, arg5: *mut i128 @ rbx, arg6: i64, arg7: i64, arg8: i64, arg9: i64, arg10: i64, arg11: i64, arg12: i64) -> i64

{
    *arg2.byte_offset(8);
    *arg2.byte_offset(0x10);
    just::search::Search::clean::hd91959d13e0c6030(&arg_30, arg3, arg4);
    *arg2.byte_offset(0x20);
    *arg2.byte_offset(0x28);
    just::search::Search::clean::hd91959d13e0c6030(&arg_50, arg3, arg4);
    let zmm0: i128 = arg_30;
    __return_addr = zmm0;
    let zmm1: i128 = arg_50;
    arg5[2] = *zmm1[8];
    *arg5.byte_offset(0x28) = arg7;
    arg5[1] = arg6;
    let result: i64 = zmm1;
    *arg5.byte_offset(0x18) = result;
    *arg5 = zmm0;
    result
}
