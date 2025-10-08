
  fn uu_test::isatty::h5c7d65a5151d7d28(arg1: *mut i64, arg2: *mut i8, arg3: i64) -> i32

{
    let mut var_50: i32;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_50, arg2, arg3);
    let mut result: i32;
    
    if var_50 == 1
    {
        'label_4597d7:
        var_50 = 1;
        let var_48_1: *mut i8 = arg2;
        let var_40_1: i64 = arg3;
        let var_38_1: i8 = 1;
        let mut result_1: i32;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h47d193bf63b6bc9a(
            &result_1, &var_50);
        result = result_1;
        let var_1c: i32;
        *arg1.byte_offset(0x1c) = var_1c;
        let var_2c: i128;
        *arg1.byte_offset(0xc) = var_2c;
        *arg1 = 5;
        arg1[1] = result;
    }
    else
    {
        let var_48: *mut i8;
        let var_40: i64;
        let rax_1: i64 =
            core::num::_$LT$impl$u20$i32$GT$::from_ascii_radix::h8c416a74051ba1e6(var_48, var_40);
        
        if (rax_1 & 1) != 0
        {
            goto 'label_4597d7;
        }
        
        result = isatty(rax_1 >> 0x20);
        arg1[1] = result == 1;
        *arg1 = 7;
    }
    
    result
}
