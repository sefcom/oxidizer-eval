
  char* just::justfile::Justfile::run_dependencies::h985cd0506c66477f(char* arg1, void* arg2, int64_t* arg3, void* arg4, int64_t arg5, int64_t arg6, int64_t arg7, int32_t* arg8, void* arg9, void** arg10, int64_t arg11)

{
    int64_t rax = arg11;
    void** rax_1 = arg10;
    int32_t* rax_2 = arg8;
    void* var_40 = arg2;
    int64_t var_38 = arg6;
    char* result = *arg3;
    
    if (!result[0x19f])
    {
        int64_t var_150 = 0;
        int64_t var_148_1 = 8;
        int64_t var_140_1 = 0;
        int128_t var_138;
        int128_t var_131;
        int64_t i_1;
        void* var_128;
        int64_t var_f0;
        char var_d0;
        int128_t var_cf;
        int128_t var_c0;
        int128_t var_b0;
        int128_t var_a0;
        int128_t var_90;
        int128_t var_80;
        char* result_1;
        
        if (arg5)
        {
            void* r13_2 = arg4 + 0x18;
            int64_t i_2 = arg5 << 5;
            int64_t i;
            
            do
            {
                int64_t rax_3 = *(r13_2 - 0x10);
                int64_t rcx_2 = (*(r13_2 - 8) << 7) + rax_3;
                var_f0 = rax_3;
                int64_t var_e8_1 = rcx_2;
                int64_t var_e0_1 = arg7;
                core::iter::traits::iterator::Iterator::collect::h5455aaf9fc009a45(&var_d0, 
                    &var_f0);
                char rax_5 = var_d0;
                
                if (rax_5 != 0x38)
                {
                    *i_1[7] = var_c0;
                    var_138 = var_cf;
                    *(arg1 + 0x60) = result_1;
                    *(arg1 + 0x50) = var_80;
                    *(arg1 + 0x40) = var_90;
                    *(arg1 + 0x30) = var_a0;
                    *(arg1 + 0x20) = var_b0;
                    *(arg1 + 0x10) = *i_1[7];
                    *(arg1 + 1) = var_138;
                    *arg1 = rax_5;
                    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$$RF$alloc..sync..Arc$LT$just..recipe..Recipe$GT$$C$alloc..vec..Vec$LT$alloc..string..String$GT$$RP$$GT$$GT$::h31b6a7e2ffba598d(&var_150);
                }
                
                var_128 = *var_c0[8];
                int128_t var_c8;
                var_131 = var_c8;
                *var_c0[8] = var_128;
                var_c8 = var_131;
                var_d0 = r13_2;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h047d1ec34f0dd2bc(&var_150, &var_d0);
                r13_2 += 0x20;
                i = i_2;
                i_2 -= 0x20;
            } while (i != 0x20);
        }
        
        if (!just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg9 + 0xd8, 0xd))
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hb49bcb30c48ca590(&var_f0, &var_150);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf3825cab43731169(&var_138, &var_f0);
            
            if (!(0 + -(i_1)))
            {
                do
                {
                    int64_t var_120;
                    just::justfile::Justfile::run_recipe::h13dd814e0c2e2885(&var_d0, var_128, 
                        var_120, arg2, arg6, 1, rax_2, *var_138 + 0x10, rax_1, rax);
                    char rax_13 = var_d0;
                    
                    if (rax_13 != 0x38)
                    {
                        *(arg1 + 0x60) = result_1;
                        *(arg1 + 0x51) = var_80;
                        *(arg1 + 0x41) = var_90;
                        *(arg1 + 0x31) = var_a0;
                        *(arg1 + 0x21) = var_b0;
                        *(arg1 + 0x11) = var_c0;
                        *(arg1 + 1) = var_cf;
                        *arg1 = rax_13;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&*var_131[1]);
                        return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$alloc..sync..Arc$LT$just..recipe..Recipe$GT$$C$alloc..vec..Vec$LT$alloc..string..String$GT$$RP$$GT$$GT$::h10aa6922d349c1e6(&var_f0);
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&*var_131[1]);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf3825cab43731169(&var_138, &var_f0);
                } while (i_1 != -0x8000000000000000);
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$alloc..sync..Arc$LT$just..recipe..Recipe$GT$$C$alloc..vec..Vec$LT$alloc..string..String$GT$$RP$$GT$$GT$::h10aa6922d349c1e6(&var_f0);
            result = arg1;
            *result = 0x38;
        }
        else
        {
            int64_t var_128_1 = var_140_1;
            var_138 = var_150;
            int64_t* var_120_1 = &var_40;
            int64_t* var_118_1 = &var_38;
            int64_t* var_110_1 = &arg8;
            int64_t* var_108_1 = &arg10;
            int64_t* var_100_1 = &arg11;
            std::thread::scoped::scope::hc4d65ee38c800f47(&var_d0, &var_138);
            
            if (var_d0 == 0x38)
            {
                result = arg1;
                *result = 0x38;
            }
            else
            {
                result = result_1;
                *(arg1 + 0x60) = result;
                *(arg1 + 0x50) = var_80;
                *(arg1 + 0x40) = var_90;
                int128_t zmm0_3 = var_d0;
                *(arg1 + 0x30) = var_a0;
                *(arg1 + 0x20) = var_b0;
                *(arg1 + 0x10) = var_c0;
                *arg1 = zmm0_3;
            }
        }
    }
    else
        *arg1 = 0x38;
    
    return result;
}
