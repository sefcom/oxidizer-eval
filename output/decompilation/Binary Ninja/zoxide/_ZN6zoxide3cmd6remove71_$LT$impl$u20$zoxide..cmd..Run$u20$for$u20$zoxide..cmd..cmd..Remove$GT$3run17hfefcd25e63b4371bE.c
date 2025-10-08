
  uint64_t zoxide::cmd::remove::_$LT$impl$u20$zoxide..cmd..Run$u20$for$u20$zoxide..cmd..cmd..Remove$GT$::run::hfefcd25e63b4371b(void* arg1, int64_t arg2)

{
    void* r14 = arg1;
    int32_t var_d0;
    zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::open::ha2e4ec58863e42c6(&var_d0);
    uint64_t result_1;
    uint64_t result = result_1;
    
    if (var_d0 != 1)
    {
        int64_t var_90;
        int64_t var_38_1 = var_90;
        int128_t var_a0;
        int128_t var_48_1 = var_a0;
        int128_t var_b0;
        int128_t var_58_1 = var_b0;
        int128_t var_c0;
        int128_t var_68_1 = var_c0;
        uint64_t result_2 = result;
        
        if (!arg2)
        {
            label_490914:
            result = zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::save::h965acf6a20fff002(&result_2);
        }
        else
        {
            int64_t r15_2 = arg2 * 0x18;
            
            while (true)
            {
                void* var_88 = r14;
                
                if (!zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::remove::he03cc2ff8669cdde(&result_2, r14))
                {
                    zoxide::util::resolve_path::h8aa7abc34508b0d7(&var_d0, r14);
                    int64_t r12_1 = var_d0;
                    result = result_1;
                    
                    if (-(r12_1) == -0x8000000000000000)
                        break;
                    
                    zoxide::util::path_to_str::h52f975d9744c5a30(&var_d0, result);
                    int64_t r13_1 = var_d0;
                    uint64_t result_3 = result_1;
                    
                    if (!r13_1)
                        goto label_490900;
                    
                    char rax_5 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h070d08ab5346a901(r13_1, result_3, *(r14 + 8), *(r14 + 0x10));
                    char rax_6;
                    
                    if (!rax_5)
                        rax_6 = zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::remove::he8cbb156e9e90a2b(&result_2, r13_1);
                    
                    if (rax_5 || !rax_6)
                    {
                        void** var_80 = &var_88;
                        int64_t (* var_78_1)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hff193ca47b9cf8cb;
                        var_d0 = &data_534970;
                        int64_t var_c8 = 1;
                        var_b0 = 0;
                        var_c0 = &var_80;
                        *var_c0[8] = 1;
                        result_3 = anyhow::__private::format_err::h09b344f6a077676a(&var_d0);
                        label_490900:
                        core::mem::drop::h8efcdb4578edbe7f(r12_1, result);
                        result = result_3;
                        break;
                    }
                    
                    core::mem::drop::h8efcdb4578edbe7f(r12_1, result);
                }
                
                r14 += 0x18;
                int64_t temp0_1 = r15_2;
                r15_2 -= 0x18;
                
                if (temp0_1 == 0x18)
                    goto label_490914;
            }
        }
        
        core::ptr::drop_in_place$LT$zoxide..db..ouroboros_impl_database..Database$GT$::h5b6619742b1f1539(&result_2);
    }
    
    return result;
}
