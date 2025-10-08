
  int64_t uu_cksum::handle_tag_text_binary_flags::h483042924fc20423(int64_t* arg1, int128_t* arg2)

{
    int128_t var_48 = arg2[1];
    int128_t var_58 = *arg2;
    int64_t i_1;
    _$LT$std..env..ArgsOs$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfc73b5786eb10db9(&i_1, &var_58);
    int64_t i = i_1;
    uint64_t r12;
    r12 = 1;
    char result_1 = 0;
    
    if (-(i) != -0x8000000000000000)
    {
        do
        {
            int64_t var_68;
            int64_t rax_2;
            uint64_t rdx_1;
            rax_2 = _$LT$alloc..string..String$u20$as$u20$core..convert..AsRef$LT$$u5b$u8$u5d$$GT$$GT$::as_ref::h6c2a555f71a2b08a(var_68);
            char rax_3 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a332431da5eb7c8(rax_2, rdx_1, "-b--tag--untagged-: \ncrcbsdcrc3…", 2);
            char rax_4;
            
            if (!rax_3)
                rax_4 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a332431da5eb7c8(rax_2, rdx_1, "--bina", 8);
            
            if (rax_3 || rax_4)
                result_1 = 1;
            else if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a332431da5eb7c8(rax_2, rdx_1, "--tag--untagged-: \ncrcbsdcrc32b…", 5))
            {
                r12 = r12;
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a332431da5eb7c8(rax_2, rdx_1, "--untagged-: \ncrcbsdcrc32bblake…", 0xa))
                    r12 = 0;
            }
            else
            {
                r12 = 1;
                result_1 = 0;
            }
            
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hddf6d5007c2de64b(i, 
                var_68);
            _$LT$std..env..ArgsOs$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfc73b5786eb10db9(&i_1, &var_58);
            i = i_1;
        } while (i != -0x8000000000000000);
    }
    
    core::ptr::drop_in_place$LT$std..env..ArgsOs$GT$::he735fd9805f0296c(&var_58);
    char result = result_1;
    r12 &= 1;
    
    if (r12)
        result = 0;
    
    arg1[1] = r12;
    *(arg1 + 9) = result;
    *arg1 = 0;
    return result;
}
