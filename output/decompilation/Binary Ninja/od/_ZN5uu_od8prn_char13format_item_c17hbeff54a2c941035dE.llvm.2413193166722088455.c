
  int128_t* uu_od::prn_char::format_item_c::hbeff54a2c941035d.llvm.2413193166722088455()

{
    int64_t rdx;
    
    if (!rdx)
    {
        core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
        /* no return */
    }
    
    char* rsi;
    uint32_t rax = *rsi;
    char var_a9 = rax;
    int128_t* result;
    void* var_a8;
    int128_t* const var_98;
    int64_t var_68;
    void** var_30;
    int128_t* const rax_2;
    void** rax_3;
    
    if (rax < 0)
    {
        if ((rax & 0xc0) != 0x80)
        {
            int64_t rdi_1;
            
            if (rdx != 1 && (rax & 0xe0) == 0xc0)
                rdi_1 = 2;
            else if (rdx < 3 || (rax & 0xf0) != 0xe0)
            {
                if (rdx >= 4)
                    rax &= 0xf8;
                
                if (rdx < 4 || rax != 0xf0)
                {
                    var_30 = &var_a9;
                    uint64_t (* var_28_2)(char* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i8$GT$::fmt::h435338519aeb34aa;
                    var_68 = 2;
                    int64_t var_58_4 = 0;
                    int64_t var_50_4 = 3;
                    int64_t var_48_4 = 0;
                    int64_t var_40_4 = 0x800000020;
                    char var_38_4 = 3;
                    rax_2 = &data_5430c8;
                    goto label_4d57dd;
                }
                
                rdi_1 = 4;
            }
            else
                rdi_1 = 3;
            
            char* rax_4;
            int64_t rdx_1;
            rax_4 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h805a03118b26e41e(rdi_1, rsi, rdx);
            core::str::converts::from_utf8::ha1effb4cca6d9901(&var_30, rax_4, rdx_1);
            int128_t* rax_5;
            
            if (!var_30)
            {
                int64_t var_28;
                int128_t var_18 = var_28;
                var_a8 = &var_18;
                int64_t (* var_a0_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
                var_68 = 2;
                int64_t var_58_3 = 0;
                int64_t var_50_3 = 4;
                int64_t var_48_3 = 0;
                int64_t var_40_3 = 0x20;
                char var_38_3 = 1;
                rax_5 = &data_40dad0;
            }
            else
            {
                var_a8 = &var_a9;
                uint64_t (* var_a0_1)(char* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i8$GT$::fmt::h435338519aeb34aa;
                var_68 = 2;
                int64_t var_58_2 = 0;
                int64_t var_50_2 = 3;
                int64_t var_48_2 = 0;
                int64_t var_40_2 = 0x800000020;
                char var_38_2 = 3;
                rax_5 = &data_5430c8;
            }
            
            var_98 = rax_5;
            int64_t var_90_2 = 1;
            int64_t* var_78_2 = &var_68;
            int64_t var_70_2 = 1;
            rax_3 = &var_a8;
            goto label_4d5984;
        }
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(result);
    }
    else
    {
        var_a8 = &uu_od::prn_char::C_CHARS::h05ab81629a83a794 + (rax << 4);
        var_30 = &var_a8;
        int64_t (* var_28_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3c73fc09a8c273ab;
        var_68 = 2;
        int64_t var_58_1 = 0;
        int64_t var_50_1 = 4;
        int64_t var_48_1 = 0;
        int64_t var_40_1 = 0x20;
        char var_38_1 = 1;
        rax_2 = &data_40dad0;
        label_4d57dd:
        var_98 = rax_2;
        int64_t var_90_1 = 1;
        int64_t* var_78_1 = &var_68;
        int64_t var_70_1 = 1;
        rax_3 = &var_30;
        label_4d5984:
        void** var_88_1 = rax_3;
        int64_t var_80_1 = 1;
        core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf(result, &var_98);
    }
    return result;
}
