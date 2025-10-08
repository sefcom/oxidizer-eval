
  uint64_t bat::assets::HighlightingAssets::get_first_line_syntax::h6c56271b9f5531af(char* arg1, int64_t* arg2, int64_t arg3, uint64_t arg4)

{
    char result_1;
    bat::assets::HighlightingAssets::get_syntax_set::h9a5acb7c2790c837(&result_1, arg2);
    uint64_t result = result_1;
    void* var_a0;
    int128_t var_98;
    
    if (result != 0xd)
    {
        int32_t var_a7;
        *(arg1 + 4) = var_a7;
        *(arg1 + 1) = var_a7;
        int128_t var_88;
        *(arg1 + 0x20) = var_88;
        int128_t var_78;
        *(arg1 + 0x30) = var_78;
        int128_t var_68;
        *(arg1 + 0x40) = var_68;
        *(arg1 + 0x10) = var_98;
        *arg1 = result;
        *(arg1 + 8) = var_a0;
    }
    else
    {
        void* r14_1 = var_a0;
        void var_40;
        _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(
            &var_40, arg3, arg4);
        alloc::string::String::from_utf8::hcb4419710bc0e60b(&result_1, &var_40);
        
        if (!(0 + -(result_1)))
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$alloc..string..FromUtf8Error$GT$$GT$::h0a588ef4664a090f(&result_1);
            result = 0;
        }
        else
        {
            void* rax = var_a0;
            
            if (rax == -0x8000000000000000)
                result = 0;
            else
            {
                var_a0 = var_98;
                result_1 = rax;
                result = bat::assets::HighlightingAssets::get_first_line_syntax::_$u7b$$u7b$closure$u7d$$u7d$::h1202d514bb2ef4da(r14_1, &result_1);
                
                if (!result)
                    result = 0;
            }
        }
        
        *(arg1 + 8) = result;
        *(arg1 + 0x10) = r14_1;
        *arg1 = 0xd;
    }
    return result;
}
