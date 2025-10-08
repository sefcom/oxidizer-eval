
  int64_t ruff_python_formatter::string::docstring::CodeExampleDoctest::add_code_line::h71949ff9db75b266(int128_t* arg1, int128_t* arg2, int64_t* arg3, int64_t* arg4)

{
    int64_t var_88;
    core::str::_$LT$impl$u20$str$GT$::split_once::h7acac61c42a54f40(&var_88, *arg3, arg3[1]);
    int64_t rdx_1 = var_88;
    int64_t result;
    int128_t var_80;
    
    if (!rdx_1)
    {
        int64_t var_60_1 = arg2[2];
        int128_t var_70_1 = arg2[1];
        int128_t var_80_1 = *arg2;
        var_88 = -0x8000000000000000;
        result = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
            arg4, &var_88);
        *arg1 = -0x8000000000000000;
    }
    else if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbe429b610375a1ae(*(arg2 + 0x18), arg2[2], rdx_1, var_80))
    {
        int64_t var_60_2 = arg2[2];
        int128_t var_70_2 = arg2[1];
        int128_t var_80_2 = *arg2;
        var_88 = -0x8000000000000000;
        result = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
            arg4, &var_88);
        *arg1 = -0x8000000000000000;
    }
    else
    {
        var_88 = 0;
        char* rax_1;
        uint64_t rdx_2;
        rax_1 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x20, &var_88);
        int64_t var_70;
        int64_t rax_2;
        int64_t rdx_4;
        rax_2 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(rax_1, rdx_2, *var_80[8], var_70);
        
        if (rax_2)
            goto label_724f6d;
        
        if (!var_70)
        {
            rax_2 = 1;
            rdx_4 = 0;
            label_724f6d:
            var_70 = arg3[4];
            var_80 = *(arg3 + 0x10);
            var_88 = *arg3;
            int64_t var_60 = rax_2;
            int64_t var_58_1 = rdx_4;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hdd3e9f5ed333529e(arg2, &var_88);
            var_88 = -0x7ffffffffffffffc;
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
                arg4, &var_88);
            result = arg2[2];
            arg1[2] = result;
            int128_t zmm0_3 = *arg2;
            arg1[1] = arg2[1];
            *arg1 = zmm0_3;
        }
        else
        {
            int64_t var_60_3 = arg2[2];
            int128_t var_70_3 = arg2[1];
            int128_t var_80_3 = *arg2;
            var_88 = -0x8000000000000000;
            result =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
                arg4, &var_88);
            *arg1 = -0x8000000000000000;
        }
    }
    return result;
}
