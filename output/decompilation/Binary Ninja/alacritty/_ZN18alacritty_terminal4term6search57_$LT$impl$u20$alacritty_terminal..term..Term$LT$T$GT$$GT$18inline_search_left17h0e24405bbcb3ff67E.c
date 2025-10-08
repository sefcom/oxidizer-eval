
  int64_t* alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::inline_search_left::h0e24405bbcb3ff67(int64_t* arg1, void* arg2, int64_t arg3, int32_t arg4, char* arg5, void* arg6)

{
    char* var_60 = arg5;
    int64_t r12 = arg3;
    int64_t rax = *(arg2 + 0x50);
    int64_t rbx = *(arg2 + 0xc0);
    int32_t rsi = 0;
    
    if (rax >= rbx)
        rsi = rax - rbx;
    
    int32_t rax_2 = core::cmp::Ord::max::h3396bb7148673668(arg4, -(rsi));
    int32_t rbp = rax_2;
    int64_t r15_1 = *(arg2 + 0xb8) - 1;
    void* var_58 = arg2 + 0x28;
    int64_t var_50 = r12;
    int32_t var_48 = rax_2;
    int64_t var_40 = r15_1;
    int32_t var_38 = rbx - 1;
    void* var_80;
    _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&var_80, &var_58);
    void* rax_3 = var_80;
    int64_t var_78;
    int64_t rcx;
    uint32_t rdx;
    
    if (rax_3)
    {
        rcx = var_78;
        rdx = *(rax_3 + 0x14);
    }
    
    int64_t* result;
    
    if (!rax_3 || rcx == r15_1 & !(rdx & 0x10))
    {
        label_7721c6:
        result = arg1;
        result[1] = r12;
        result[2] = rbp;
        *result = 1;
    }
    else
    {
        int32_t var_70;
        int32_t rsi_4 = var_70;
        
        while (true)
        {
            r12 = rcx;
            rbp = rsi_4;
            
            if (!(rdx & 0x440))
            {
                char rax_4;
                rax_4 = _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(*(rax_3 + 0x10), var_60, arg6);
                
                if (rax_4)
                {
                    result = arg1;
                    result[1] = r12;
                    result[2] = rbp;
                    *result = 0;
                    break;
                }
            }
            
            _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&var_80, &var_58);
            rax_3 = var_80;
            
            if (!rax_3)
                goto label_7721c6;
            
            rcx = var_78;
            rsi_4 = var_70;
            rdx = *(rax_3 + 0x14);
            arg5 = !(rdx & 0x10);
            
            if (rcx == r15_1 & arg5)
                goto label_7721c6;
        }
    }
    
    return result;
}
