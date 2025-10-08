
  int64_t just::recipe::Recipe$LT$D$GT$::run::hef557c87b94c38c2(char* arg1, void* arg2, int64_t* arg3, void* arg4, int64_t arg5, int64_t arg6, char arg7)

{
    void* r14 = *arg3;
    int16_t var_b8 = *(r14 + 0x194);
    int128_t var_c8 = *(r14 + 0x184);
    char var_70;
    just::color::Color::stderr::h04afff4548ac818e(&var_70, &var_c8);
    char var_5f;
    uint32_t rax_1 = var_5f;
    char var_f8;
    int32_t rax_3;
    int32_t rcx;
    
    if (!rax_1)
    {
        var_f8 = 1;
        int32_t var_f7_2 = 0;
        var_f7_2 = 0;
        int64_t var_f0_1 = 0xa00000006;
        rax_3 = 6;
        rcx = 1;
    }
    else if (rax_1 != 1)
    {
        var_f8 = 0;
        int64_t var_f0_2 = 0xa0000000a;
        rax_3 = 0xa;
        rcx = 0;
    }
    else
    {
        char rax_2 = var_70;
        var_f8 = rax_2;
        int32_t var_f7_1 = 0;
        var_f7_1 = 0;
        int64_t var_f0;
        var_f0 = ((rax_2 ^ 1) << 2) + 6;
        *var_f0[4] = 0xa;
        
        if (rax_2)
        {
            rax_3 = 6;
            rcx = 1;
        }
        else
        {
            rax_3 = 0xa;
            rcx = 0;
        }
    }
    
    char var_e8 = rcx;
    int32_t var_e7 = 0;
    var_e7 = 0;
    int32_t var_e0 = rax_3;
    int32_t var_dc = 0xa;
    char* var_a8;
    
    if (*(r14 + 0x1a7) >= 2)
    {
        var_c8 = &var_f8;
        *var_c8[8] =
            _$LT$ansi_term..ansi..Prefix$u20$as$u20$core..fmt..Display$GT$::fmt::h4f4d4a1a10975a1c;
        var_b8 = arg2 + 0x90;
        int64_t (* var_b0_1)(void* arg1, int64_t* arg2) =
            _$LT$just..name..Name$u20$as$u20$core..fmt..Display$GT$::fmt::h235bf6517801ef05;
        var_a8 = &var_e8;
        int64_t (* var_a0_1)(char* arg1, int64_t arg2) =
            _$LT$ansi_term..ansi..Suffix$u20$as$u20$core..fmt..Display$GT$::fmt::hcf6335302746b9ae;
        var_70 = &data_830b70;
        int64_t var_68_1 = 4;
        int64_t var_50_1 = 0;
        int128_t* var_60_1 = &var_c8;
        int64_t var_58_1 = 3;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
    }
    
    if (*(r14 + 0x19a))
    {
        int64_t rax_5;
        int64_t rdx;
        rax_5 = just::recipe::Recipe$LT$D$GT$::doc::he63458a2ff4e69a8(arg2);
        
        if (rax_5)
        {
            int64_t var_40 = rax_5;
            int64_t var_38_1 = rdx;
            var_c8 = &var_f8;
            *var_c8[8] = _$LT$ansi_term..ansi..Prefix$u20$as$u20$core..fmt..Display$GT$::fmt::h4f4d4a1a10975a1c;
            var_b8 = &var_40;
            int64_t (* var_b0_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
            var_a8 = &var_e8;
            int64_t (* var_a0_2)(char* arg1, int64_t arg2) = _$LT$ansi_term..ansi..Suffix$u20$as$u20$core..fmt..Display$GT$::fmt::hcf6335302746b9ae;
            var_70 = &data_830bb0;
            int64_t var_68_2 = 4;
            int64_t var_50_2 = 0;
            int128_t* var_60_2 = &var_c8;
            int64_t var_58_2 = 3;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
        }
    }
    
    if (*(arg2 + 0xfe))
    {
        var_b8 = *(arg3 + 0x10);
        var_c8 = *arg3;
        int64_t var_90 = 0;
        var_a8 = {0};
        void* var_88 = arg4;
        char var_80 = arg7;
        return just::recipe::Recipe$LT$D$GT$::run_script::hf7776548fb8d2f66(arg1, arg2, arg3, arg4, 
            arg5, arg6, &var_c8);
    }
    
    var_b8 = *(arg3 + 0x10);
    var_c8 = *arg3;
    int64_t var_90_1 = 0;
    var_a8 = {0};
    void* var_88_1 = arg4;
    char var_80_1 = arg7;
    return just::recipe::Recipe$LT$D$GT$::run_linewise::hcd560343e88fb507(arg1, arg2, arg3, arg4, 
        arg5, arg6, &var_c8);
}
