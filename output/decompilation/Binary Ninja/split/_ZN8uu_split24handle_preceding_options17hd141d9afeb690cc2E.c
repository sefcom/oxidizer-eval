
  int64_t uu_split::handle_preceding_options::hd141d9afeb690cc2(char* arg1, uint64_t arg2, char* arg3, char* arg4)

{
    uint64_t rbx;
    uint64_t var_30 = rbx;
    
    if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hae3dd1415174f1af(arg1, arg2, 
        "---a-b-C-l-n-tsrc/uu/split/src/s…", 2))
    {
        int64_t rax_1;
        uint64_t rdx;
        rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(arg1, arg2);
        
        if (!rax_1)
        {
            core::str::slice_error_fail::h1a2885084e28d077(arg1, arg2, 2, arg2);
            /* no return */
        }
        
        rbx = 1;
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(rax_1, rdx, "bytesline-byteslinesadditional-s…", 5) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(rax_1, rdx, 
                "line-byteslinesadditional-suffix…", 0xa) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(rax_1, rdx, 
                "linesadditional-suffixfilternumb…", 5) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(rax_1, rdx, 
                "additional-suffixfilternumber-dh…", 0x11) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(rax_1, rdx, 
                "filternumber-dhex-suffixes-xsuff…", 6) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(rax_1, rdx, 
                "number-dhex-suffixes-xsuffix-len…", 6) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(rax_1, rdx, 
                "suffix-lengthverboseseparatoreli…", 0xd))
            rbx = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(rax_1, rdx, "separatorelide-empty-files-io-bl…", 9);
        
        *arg3 = rbx;
    }
    
    rbx = 1;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(arg1, arg2, "-b-C-l-n-tsrc/uu/split/src/split…", 2) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(arg1, arg2, 
            "-C-l-n-tsrc/uu/split/src/split.r…", 2) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(arg1, arg2, "-l-n-tsrc/uu/split/src/split.rs(…", 2)
            && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(arg1, arg2, "-n-tsrc/uu/split/src/split.rs(uu…", 2) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(arg1, arg2, 
            "-a-b-C-l-n-tsrc/uu/split/src/spl…", 2))
        rbx = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(arg1, arg2, "-tsrc/uu/split/src/split.rs(uuti…", 2);
    
    *arg4 = rbx;
    int32_t var_3c = 0;
    char* rax_16;
    uint64_t rdx_1;
    rax_16 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2d, &var_3c);
    char result = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hae3dd1415174f1af(arg1, 
        arg2, rax_16, rdx_1);
    
    if (!result)
    {
        *arg4 = 0;
        *arg3 = 0;
    }
    
    return result;
}
