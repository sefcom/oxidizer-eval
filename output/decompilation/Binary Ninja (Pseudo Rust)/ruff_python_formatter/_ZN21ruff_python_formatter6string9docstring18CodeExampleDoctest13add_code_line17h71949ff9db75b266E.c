
  fn ruff_python_formatter::string::docstring::CodeExampleDoctest::add_code_line::h71949ff9db75b266(arg1: *mut i128, arg2: *mut i128, arg3: *mut i64, arg4: *mut i64) -> i64

{
    let mut var_88: i64;
    core::str::_$LT$impl$u20$str$GT$::split_once::h7acac61c42a54f40(&var_88, *arg3, arg3[1]);
    let rdx_1: i64 = var_88;
    let mut result: i64;
    let mut var_80: i128;
    
    if rdx_1 == 0
    {
        let var_60_1: i64 = arg2[2];
        let var_70_1: i128 = arg2[1];
        let var_80_1: i128 = *arg2;
        var_88 = -0x8000000000000000;
        result = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
            arg4, &var_88);
        *arg1 = -0x8000000000000000;
    }
    else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbe429b610375a1ae(*arg2.byte_offset(0x18), arg2[2], rdx_1, var_80) == 0
    {
        let var_60_2: i64 = arg2[2];
        let var_70_2: i128 = arg2[1];
        let var_80_2: i128 = *arg2;
        var_88 = -0x8000000000000000;
        result = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
            arg4, &var_88);
        *arg1 = -0x8000000000000000;
    }
    else
    {
        var_88 = 0;
        let mut rax_1: *mut i8;
        let mut rdx_2: u64;
        rax_1 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x20, &var_88);
        let mut var_70: i64;
        let mut rax_2: i64;
        let mut rdx_4: i64;
        rax_2 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(rax_1, rdx_2, *var_80[8], var_70);
        
        if rax_2 != 0
        {
            goto 'label_724f6d;
        }
        
        if var_70 == 0
        {
            rax_2 = 1;
            rdx_4 = 0;
            'label_724f6d:
            var_70 = arg3[4];
            var_80 = *arg3.byte_offset(0x10);
            var_88 = *arg3;
            let var_60: i64 = rax_2;
            let var_58_1: i64 = rdx_4;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hdd3e9f5ed333529e(arg2, &var_88);
            var_88 = -0x7ffffffffffffffc;
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
                arg4, &var_88);
            result = arg2[2];
            arg1[2] = result;
            let zmm0_3: i128 = *arg2;
            arg1[1] = arg2[1];
            *arg1 = zmm0_3;
        }
        else
        {
            let var_60_3: i64 = arg2[2];
            let var_70_3: i128 = arg2[1];
            let var_80_3: i128 = *arg2;
            var_88 = -0x8000000000000000;
            result =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
                arg4, &var_88);
            *arg1 = -0x8000000000000000;
        }
    }
    result
}
