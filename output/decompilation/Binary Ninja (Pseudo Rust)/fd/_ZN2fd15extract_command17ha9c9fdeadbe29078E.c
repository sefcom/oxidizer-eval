
  fn fd::extract_command::ha9c9fdeadbe29078(arg1: *mut i128, arg2: *mut c_void, arg3: i8) -> i64

{
    let mut r14: i64 = -0x8000000000000000;
    let mut rax: i64 = *arg2.byte_offset(0x160);
    *arg2.byte_offset(0x160) = -0x8000000000000000;
    
    if -(rax) != -0x8000000000000000
    {
        let var_18_1: i64 = *arg2.byte_offset(0x178);
        let var_28_1: i128 = *arg2.byte_offset(0x168);
    }
    else
    {
        rax = -0x7fffffffffffffff;
    }
    
    let mut var_30: i64 = rax;
    let mut result_1: i64;
    core::option::Option$LT$T$GT$::or_else::hb985d64ac7fccb66(&result_1, &var_30, 
        *arg2.byte_offset(0x1ec), arg3);
    let mut result: i64 = result_1;
    
    if -(result) == -0x8000000000000000
    {
        let result_2: i64;
        result = result_2;
        *arg1.byte_offset(8) = result;
        r14 = -0x7fffffffffffffff;
    }
    else if result != -0x7fffffffffffffff
    {
        let zmm0_1: i128 = result_1;
        let var_40: i128;
        arg1[1] = var_40;
        *arg1 = zmm0_1;
        return result;
    }
    
    *arg1 = r14;
    result
}
