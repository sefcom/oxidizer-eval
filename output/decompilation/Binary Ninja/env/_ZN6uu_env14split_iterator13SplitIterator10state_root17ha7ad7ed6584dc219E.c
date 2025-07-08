
  int64_t uu_env::split_iterator::SplitIterator::state_root::ha7ad7ed6584dc219(int32_t* arg1, int128_t* arg2)

{
    int32_t var_40;
    int32_t rax_1;
    
    while (true)
    {
        uu_env::split_iterator::SplitIterator::state_delimiter::hcb2808b02d57ed1b(&var_40, arg2);
        rax_1 = var_40;
        
        if (rax_1 != 7)
            break;
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_env..parse_error..ParseError$GT$$GT$::ha3cb64f13c33686f(&var_40);
    }
    
    if (rax_1 == 6)
    {
        *arg1 = 8;
        return core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_env..parse_error..ParseError$GT$$GT$::ha3cb64f13c33686f(&var_40);
    }
    
    int64_t result;
    *(arg1 + 0x20) = result;
    int128_t zmm0_1 = var_40;
    int128_t var_30;
    *(arg1 + 0x10) = var_30;
    *arg1 = zmm0_1;
    return result;
}
