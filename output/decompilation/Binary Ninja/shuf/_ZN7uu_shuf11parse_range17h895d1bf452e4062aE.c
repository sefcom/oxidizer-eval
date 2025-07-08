
  int64_t* uu_shuf::parse_range::h895d1bf452e4062a(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    char* var_50;
    core::str::_$LT$impl$u20$str$GT$::split_once::h8f190cd472d8d64b(&var_50, arg2, arg3);
    char* r12 = var_50;
    int64_t var_b8;
    void** const var_98;
    int64_t* var_60;
    
    if (!r12)
    {
        var_b8 = 0;
        int64_t var_b0_1 = arg2;
        int64_t var_a8_1 = arg3;
        char var_a0_1 = 1;
        var_60 = &var_b8;
        label_4c1cbf:
        int64_t (* var_58_1)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_98 = &data_537d38;
        int64_t var_90_1 = 1;
        int64_t var_78_1 = 0;
        int64_t** var_88_1 = &var_60;
        int64_t var_80_1 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h7c94a57f03ee0317(&arg1[1], &var_98);
        *arg1 = 1;
    }
    else
    {
        int64_t var_48;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_b8, r12, var_48);
        int64_t var_90;
        void** const rax_2;
        
        if (!var_b8)
        {
            char* var_40;
            int64_t var_38;
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_b8, var_40, var_38);
            int64_t var_b0;
            int64_t rax_5;
            
            if (!var_b8)
            {
                rax_5 = var_b0;
                
                if (var_b0 > rax_5 && var_b0 != rax_5 + 1)
                {
                    label_4c1d88:
                    var_b8 = 0;
                    int64_t var_b0_2 = arg2;
                    int64_t var_a8_2 = arg3;
                    char var_a0_2 = 1;
                    var_60 = &var_b8;
                    goto label_4c1cbf;
                }
            }
            else
            {
                uu_shuf::parse_range::_$u7b$$u7b$closure$u7d$$u7d$::ha46b1477c8a092d1(&var_98);
                rax_2 = var_98;
                
                if (rax_2 != -0x8000000000000000)
                    goto label_4c1c88;
                
                rax_5 = var_90;
                
                if (var_b0 > rax_5 && var_b0 != rax_5 + 1)
                    goto label_4c1d88;
            }
            
            arg1[1] = var_b0;
            arg1[2] = rax_5;
            arg1[3] = 0;
            *arg1 = 0;
        }
        else
        {
            uu_shuf::parse_range::_$u7b$$u7b$closure$u7d$$u7d$::h12498d1826f58d1e(&var_98);
            rax_2 = var_98;
            label_4c1c88:
            arg1[1] = rax_2;
            *(arg1 + 0x10) = var_90;
            *arg1 = 1;
        }
    }
    return arg1;
}
