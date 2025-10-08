
  char* bat::controller::Controller::print_file::hf96ad44d7a2ebb76(char* arg1, void** arg2, int64_t arg3, void* arg4, int64_t arg5, void* arg6, char arg7, int64_t* arg8)

{
    char rax_1;
    
    if (!*(arg6 + 0x38))
        rax_1 = bat::style::StyleComponents::header::hf7c3a1f0ba3f090b(0xc0 + *arg2);
    
    char var_f0;
    
    if (*(arg6 + 0x38) || rax_1)
        (*(arg4 + 0x18))(&var_f0, arg3, arg5, arg6, arg7);
    
    int128_t var_e0;
    int128_t var_d0;
    int128_t var_c0;
    int128_t var_b0;
    
    if ((*(arg6 + 0x38) || rax_1) && var_f0 != 0xd)
    {
        label_83820e:
        *(arg1 + 0x40) = var_b0;
        int128_t zmm0_1 = var_f0;
        *(arg1 + 0x30) = var_c0;
        *(arg1 + 0x20) = var_d0;
        *(arg1 + 0x10) = var_e0;
        *arg1 = zmm0_1;
    }
    else
    {
        if (!*(arg6 + 0x38))
            goto label_8381f9;
        
        void* r12_1 = *arg2;
        int64_t var_80;
        
        if (!(0 + -(*(r12_1 + 0x90))))
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hc377ab5fa0151b10(&var_80, *(r12_1 + 0x98), *(r12_1 + 0xa0));
            int128_t var_68_1 = *(r12_1 + 0xa8);
            int64_t var_58_1 = *(r12_1 + 0xb8);
        }
        else
        {
            int64_t r12_2 = *(r12_1 + 0x98);
            int64_t var_108 = 0;
            int64_t var_100_1 = 8;
            int64_t var_f8_1 = 0;
            
            if (*arg8)
            {
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::h0b41fddabc84cd4c(&var_f0, 
                    arg8);
                
                for (int32_t* i = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h55f28d1a37c5a9fe(&var_f0); i; i = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h55f28d1a37c5a9fe(&var_f0))
                {
                    uint64_t rax_2 = *i;
                    int64_t rax_3 = rax_2 - r12_2;
                    
                    if (rax_2 < r12_2)
                        rax_3 = 0;
                    
                    int64_t var_50 = 0;
                    int64_t var_48_1 = rax_3;
                    int64_t var_40_1 = 0;
                    int64_t var_38_1 = r12_2 + rax_2;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hf3617d4a656b50d0(&var_108, &var_50);
                }
            }
            
            bat::line_range::LineRanges::from::h4ce85643fa8989ac(&var_80, &var_108);
        }
        
        bat::controller::Controller::print_file_ranges::h7b39e9e16e4bf9c7(&var_f0, r12_1, arg3, 
            *(arg4 + 0x28), *(arg4 + 0x30), arg5, arg5, arg6 + 0x28, &var_80);
        int64_t var_78;
        
        if (var_f0 != 0xd)
        {
            *(arg1 + 0x40) = var_b0;
            int128_t zmm0_3 = var_f0;
            *(arg1 + 0x30) = var_c0;
            *(arg1 + 0x20) = var_d0;
            *(arg1 + 0x10) = var_e0;
            *arg1 = zmm0_3;
            core::ptr::drop_in_place$LT$bat..line_range..LineRanges$GT$::h7115aa6cfb62384c(var_80, 
                var_78);
        }
        else
        {
            core::ptr::drop_in_place$LT$bat..line_range..LineRanges$GT$::h7115aa6cfb62384c(var_80, 
                var_78);
            label_8381f9:
            (*(arg4 + 0x20))(&var_f0, arg3, arg5, arg6);
            
            if (var_f0 != 0xd)
                goto label_83820e;
            
            *arg1 = 0xd;
        }
    }
    return arg1;
}
