
  int64_t bat::vscreen::EscapeSequenceOffsetsIterator::next_nf::h9adbe93dde1fd540(int64_t* arg1, void* arg2, int64_t arg3)

{
    int64_t r15 = *(arg2 + 0x28);
    int32_t rdx = *(arg2 + 0x30);
    *(arg2 + 0x30) = 0x110001;
    
    if (rdx == 0x110001)
    {
        int64_t rax_1;
        rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(arg2 + 0x10);
        r15 = rax_1;
    }
    
    if (rdx == 0x110000)
    {
        core::option::expect_failed::h3f620cfb8545dc61("to not be finishedthis should no…");
        /* no return */
    }
    
    char var_48;
    int64_t result =
        bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while::h61c196cbe5d42445(&var_48, 
        arg2);
    
    if (!(var_48 & 1))
    {
        *arg1 = 2;
        arg1[1] = arg3;
        arg1[2] = r15;
        arg1[3] = r15;
    }
    else
    {
        int64_t var_38;
        int64_t rbp_1 = var_38;
        result = *(arg2 + 0x28);
        int32_t rdx_1 = *(arg2 + 0x30);
        *(arg2 + 0x30) = 0x110001;
        
        if (rdx_1 == 0x110001)
            result = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(arg2 + 0x10);
        
        if (rdx_1 != 0x110000)
        {
            int64_t rbp_2 = 1;
            
            if (rdx_1 >= 0x80)
            {
                rbp_2 = 2;
                
                if (rdx_1 >= 0x800)
                    rbp_2 = 4 - 0;
            }
            
            rbp_1 = rbp_2 + result;
        }
        
        *arg1 = 2;
        arg1[1] = arg3;
        arg1[2] = r15;
        arg1[3] = rbp_1;
    }
    
    return result;
}
