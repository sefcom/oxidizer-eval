
  int128_t* uu_join::Spec::parse::hd0c421fb4c424f36(uint64_t arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_80 = arg2;
    int32_t rax_1;
    int32_t rdx;
    rax_1 = core::str::validations::next_code_point::hd261ae405076a208(&var_80, arg1);
    int32_t rax_2 = 0x110000;
    
    if (rax_1)
        rax_2 = rdx;
    
    int128_t* result;
    int64_t* var_b0;
    int64_t var_a0;
    void** const var_70;
    void var_40;
    void** const rax_5;
    void** const rax_7;
    
    if (rax_2 == 0x30)
    {
        if (!core::str::validations::next_code_point::hd261ae405076a208(&var_80, arg1))
        {
            *(arg1 + 8) = 0;
            result = nullptr;
            *arg1 = result;
        }
        else
        {
            var_a0 = 0;
            int64_t var_98_2 = arg2;
            int64_t var_90_2 = arg3;
            char var_88_2 = 1;
            var_b0 = &var_a0;
            int64_t (* var_a8_2)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            rax_7 = &data_535260;
            label_4c389e:
            var_70 = rax_7;
            int64_t var_68_2 = 1;
            int64_t var_50_2 = 0;
            int64_t** var_60_2 = &var_b0;
            int64_t var_58_2 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h84da32fb4d9c85b4(&var_40, &var_70);
            int32_t var_28_2 = 1;
            *(arg1 + 8) = alloc::boxed::Box$LT$T$GT$::new::h7aaaeb17d3fe937d(&var_40);
            rax_5 = &data_5352b8;
            label_4c38f8:
            *(arg1 + 0x10) = rax_5;
            result = 1;
            *arg1 = result;
        }
    }
    else
    {
        int64_t rbp;
        
        if (rax_2 == 0x31)
            rbp = 0;
        else
        {
            if (rax_2 != 0x32)
            {
                var_a0 = 0;
                int64_t var_98_3 = arg2;
                int64_t var_90_3 = arg3;
                char var_88_3 = 1;
                var_b0 = &var_a0;
                int64_t (* var_a8_3)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                rax_7 = &data_535270;
                goto label_4c389e;
            }
            
            rbp = 1;
        }
        
        int32_t rax_3;
        int32_t rdx_1;
        rax_3 = core::str::validations::next_code_point::hd261ae405076a208(&var_80, arg1);
        
        if (!rax_3 || rdx_1 != 0x2e)
        {
            var_a0 = 0;
            int64_t var_98_1 = arg2;
            int64_t var_90_1 = arg3;
            char var_88_1 = 1;
            var_b0 = &var_a0;
            int64_t (* var_a8_1)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_70 = &data_535260;
            int64_t var_68_1 = 1;
            int64_t var_50_1 = 0;
            int64_t** var_60_1 = &var_b0;
            int64_t var_58_1 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h84da32fb4d9c85b4(&var_40, &var_70);
            int32_t var_28_1 = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::h7aaaeb17d3fe937d(&var_40);
            *(arg1 + 8) = result;
            *(arg1 + 0x10) = &data_5352b8;
            *arg1 = 1;
        }
        else
        {
            char* rax_4;
            int64_t rdx_2;
            rax_4 = core::slice::iter::Iter$LT$T$GT$::make_slice::h63c620eea536cd3e(var_80, 
                arg2 + arg3);
            uu_join::parse_field_number::h9316b11a89c3fc26(&var_70, rax_4, rdx_2);
            void** const rcx_1 = var_70;
            void** var_68;
            rax_5 = var_68;
            
            if (rcx_1)
            {
                *(arg1 + 8) = rcx_1;
                goto label_4c38f8;
            }
            
            *(arg1 + 8) = 1;
            *(arg1 + 9) = rbp;
            *(arg1 + 0x10) = rax_5;
            result = nullptr;
            *arg1 = result;
        }
    }
    return result;
}
