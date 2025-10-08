
  char* zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..cmd..Query$GT$::query_interactive::hb59cdf2fd68d3de0(void* arg1, void* arg2)

{
    int32_t var_d8;
    zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..cmd..Query$GT$::get_fzf::hf403ce7b6e161106(
        &var_d8);
    char* var_d0;
    
    if (var_d8 == 1)
        return var_d0;
    
    int32_t var_d4;
    int32_t var_84 = var_d4;
    char* var_80_1 = var_d0;
    int128_t var_c8;
    int128_t var_78_1 = var_c8;
    int64_t* var_f0;
    char* var_e8_1;
    int64_t var_e0_1;
    int64_t* var_a8;
    char* var_a0_1;
    int64_t var_98_1;
    char* rbp_1;
    
    if (!(0 + -(*(arg1 + 0x18))))
    {
        int64_t r12_1 = *(arg1 + 0x20);
        int64_t r13_1 = *(arg1 + 0x28);
        int64_t var_60_1 = -0x7fffffffffffffff;
        
        while (true)
        {
            void* rax_4 = zoxide::db::stream::Stream::next::hb1d09a39dbd63cec(arg2);
            
            if (!rax_4)
                goto label_48fd27;
            
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h070d08ab5346a901(*(rax_4 + 8), *(rax_4 + 0x10), r12_1, r13_1))
            {
                zoxide::util::FzfChild::write::h5751cfe08cd05641(&var_d8, &var_84);
                int64_t* rax_6 = var_d8;
                rbp_1 = var_d0;
                
                if (rax_6 == var_60_1)
                    goto label_48feb9;
                
                var_f0 = rax_6;
                var_e8_1 = rbp_1;
                var_e0_1 = var_c8;
                
                if (rax_6 != -0x8000000000000000)
                    break;
                
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::he4fa8c614f7df1fb(
                    &var_f0);
            }
        }
    }
    else
    {
        while (true)
        {
            if (!zoxide::db::stream::Stream::next::hb1d09a39dbd63cec(arg2))
            {
                label_48fd27:
                zoxide::util::FzfChild::wait::h58b549ee022416b6(&var_d8, &var_84);
                int64_t* rax_7 = var_d8;
                rbp_1 = var_d0;
                
                if (rax_7 == -0x8000000000000000)
                    goto label_48feb9;
                
                var_a8 = rax_7;
                var_a0_1 = rbp_1;
                var_98_1 = var_c8;
                
                if (*(arg1 + 0x4b))
                    goto label_48fe45;
                
                goto label_48fd74;
            }
            
            zoxide::util::FzfChild::write::h5751cfe08cd05641(&var_d8, &var_84);
            int64_t* rax_3 = var_d8;
            rbp_1 = var_d0;
            
            if (rax_3 == -0x7fffffffffffffff)
                goto label_48feb9;
            
            var_f0 = rax_3;
            var_e8_1 = rbp_1;
            var_e0_1 = var_c8;
            
            if (rax_3 != -0x8000000000000000)
                break;
            
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::he4fa8c614f7df1fb(
                &var_f0);
        }
    }
    
    var_98_1 = var_e0_1;
    var_a8 = var_f0;
    var_a0_1 = var_e8_1;
    
    if (!*(arg1 + 0x4b))
    {
        label_48fd74:
        void* rax_9;
        int64_t rdx_5;
        rax_9 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(7, var_a0_1, var_98_1);
        anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$core..convert..Infallible$GT$$u20$for$u20$core..option..Option$LT$T$GT$$GT$::context::h87531f8a1ca6dc18(&var_d8, rax_9, rdx_5, "could not read selection from fz…", 0x21);
        int64_t rax_10 = var_d8;
        rbp_1 = var_d0;
        
        if (!rax_10)
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he43bec8f5a515731(&var_a8);
            label_48feb9:
            core::ptr::drop_in_place$LT$zoxide..util..FzfChild$GT$::h8162ffcf0a6e609c(&var_84);
            return rbp_1;
        }
        
        int64_t var_58 = rax_10;
        char* var_50_1 = rbp_1;
        var_f0 = &var_58;
        int64_t (* var_e8_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3f43078e28aa9000;
        var_d8 = &data_418b80;
        int64_t var_d0_1 = 1;
        int64_t var_b8_1 = 0;
        var_c8 = &var_f0;
        *var_c8[8] = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_d8);
    }
    else
    {
        label_48fe45:
        var_f0 = &var_a8;
        int64_t (* var_e8_3)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_d8 = &data_418b80;
        int64_t var_d0_2 = 1;
        int64_t var_b8_2 = 0;
        var_c8 = &var_f0;
        *var_c8[8] = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_d8);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::he43bec8f5a515731(&var_a8);
    core::ptr::drop_in_place$LT$zoxide..util..FzfChild$GT$::h8162ffcf0a6e609c(&var_84);
    return nullptr;
}
