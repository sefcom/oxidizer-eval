
  int64_t uu_join::Spec::parse::hcfd2d4b38d6b0e96(uint64_t arg1, char* arg2, int64_t arg3)

{
    char* var_80 = arg2;
    char rax_1;
    int32_t rdx;
    rax_1 = core::str::validations::next_code_point::h0099d433804eecaf(&var_80, arg1);
    int32_t rax_2 = 0x110000;
    
    if (rax_1 & 1)
        rax_2 = rdx;
    
    int64_t result;
    int64_t* var_b0;
    int64_t var_a0;
    char const (** const var_70)[0xda];
    char const (** const rax_7)[0xda];
    
    if (rax_2 == 0x30)
    {
        if (core::str::validations::next_code_point::h0099d433804eecaf(&var_80, arg1) & 1)
        {
            label_46d1bd:
            var_a0 = 0;
            char* var_98_1 = arg2;
            int64_t var_90_1 = arg3;
            char var_88_1 = 1;
            var_b0 = &var_a0;
            int64_t (* var_a8_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            rax_7 = &data_4fe320;
            label_46d229:
            var_70 = rax_7;
            int64_t var_68_1 = 1;
            int64_t var_50_1 = 0;
            int64_t** var_60_1 = &var_b0;
            int64_t var_58_1 = 1;
            void var_40;
            core::option::Option$LT$T$GT$::map_or_else::h9a77d6fb89838746(&var_40, &var_70);
            int32_t var_28_1 = 1;
            *(arg1 + 8) = alloc::boxed::Box$LT$T$GT$::new::h6838e3ae00012226(&var_40);
            *(arg1 + 0x10) = &data_4fe360;
            result = 1;
        }
        else
        {
            *(arg1 + 8) = 0;
            result = 0;
        }
    }
    else
    {
        int64_t rbp;
        int32_t rdx_1;
        
        if (rax_2 == 0x31)
        {
            rbp = 0;
            char rax_4;
            rax_4 = core::str::validations::next_code_point::h0099d433804eecaf(&var_80, arg1);
            
            if (!(rax_4 & 1) || rdx_1 != 0x2e)
                goto label_46d1bd;
        }
        else
        {
            if (rax_2 != 0x32)
            {
                var_a0 = 0;
                char* var_98_2 = arg2;
                int64_t var_90_2 = arg3;
                char var_88_2 = 1;
                var_b0 = &var_a0;
                int64_t (* var_a8_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                rax_7 = &data_4fe330;
                goto label_46d229;
            }
            
            rbp = 1;
            char rax_3;
            rax_3 = core::str::validations::next_code_point::h0099d433804eecaf(&var_80, arg1);
            
            if (!(rax_3 & 1) || rdx_1 != 0x2e)
                goto label_46d1bd;
        }
        char* rsi = var_80;
        uu_join::parse_field_number::h7876c58ca785f0e6(&var_70, rsi, &arg2[arg3] - rsi);
        char const (** const rcx_1)[0xda] = var_70;
        void** var_68;
        
        if (!rcx_1)
        {
            *(arg1 + 8) = 1;
            *(arg1 + 9) = rbp;
            *(arg1 + 0x10) = var_68;
            result = 0;
        }
        else
        {
            *(arg1 + 8) = rcx_1;
            *(arg1 + 0x10) = var_68;
            result = 1;
        }
    }
    *arg1 = result;
    return result;
}
