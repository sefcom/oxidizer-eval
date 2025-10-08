
  int64_t uu_chcon::fts::FTS::new::h1ba0cd59aadc0d7f(int32_t* arg1, int64_t arg2, int64_t arg3, int32_t arg4)

{
    int64_t rax;
    int64_t rdx;
    rax = core::iter::traits::iterator::Iterator::map::h25589f7664dffb69(arg2);
    int32_t result_1;
    core::iter::traits::iterator::Iterator::collect::hbb008879b6ab862c(&result_1, 
        core::iter::traits::iterator::Iterator::map::h25589f7664dffb69(rax));
    int32_t result = result_1;
    int128_t var_98;
    int128_t var_5c;
    
    if (result != 0x12)
    {
        var_98 = var_5c;
        int64_t var_20;
        *(arg1 + 0x40) = var_20;
        int128_t var_30;
        *(arg1 + 0x30) = var_30;
        int128_t var_40;
        *(arg1 + 0x20) = var_40;
        *(arg1 + 0x10) = var_5c;
        *(arg1 + 4) = var_98;
        *arg1 = result;
        return result;
    }
    
    int128_t var_78 = var_5c;
    int64_t var_48;
    int64_t var_68_1 = var_48;
    
    if (!var_48)
    {
        *arg1 = 0x10;
        *(arg1 + 8) = "FTS::new()fts_open()fts_read()FT…";
        *(arg1 + 0x10) = 0xa;
        *(arg1 + 0x18) = 0x1400000003;
    }
    else
    {
        int64_t rsi_3 = *var_78[8];
        core::iter::traits::iterator::Iterator::chain::h75d240e117d26bc3(&result_1, rsi_3, 
            (var_48 << 4) + rsi_3);
        core::iter::traits::iterator::Iterator::collect::hf56f411ed6263585(&var_98, &result_1);
        char** argv = *var_98[8];
        struct FTS* rax_2 = fts_open(argv, arg4, nullptr);
        
        if (!rax_2)
        {
            int64_t rax_6 = *__errno_location() << 0x20 | 2;
            *arg1 = 0x10;
            *(arg1 + 8) = "fts_open()fts_read()FTS::set()ft…";
            *(arg1 + 0x10) = 0xa;
            *(arg1 + 0x18) = rax_6;
        }
        else
        {
            *(arg1 + 8) = rax_2;
            *(arg1 + 0x10) = 0;
            *arg1 = 0x12;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$BP$const$u20$i8$GT$$GT$::h8450a7eb13650f71(
            var_98, argv);
    }
    
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..ffi..c_str..CString$GT$$GT$::h9525a83a75566948(&var_78);
}
