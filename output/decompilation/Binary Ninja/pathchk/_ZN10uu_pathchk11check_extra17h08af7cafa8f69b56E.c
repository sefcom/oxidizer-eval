
  int64_t uu_pathchk::check_extra::h08af7cafa8f69b56(int64_t arg1, int64_t arg2)

{
    char const (** const var_98)[0x40];
    void** rdi_4;
    void* var_60;
    
    if (!arg2)
    {
        label_4561b2:
        alloc::str::join_generic_copy::h3bd5640a2d2f1574(&var_98, arg1, arg2);
        int64_t var_90;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6647f07fb02b5c78(var_98, var_90);
        int64_t result;
        result = 1;
        int64_t var_88;
        
        if (var_88)
            return result;
        
        var_60 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
        var_98 = &data_4dea68;
        int64_t var_90_1 = 1;
        int64_t var_88_1 = 8;
        int128_t var_80_1 = {0};
        rdi_4 = &var_60;
    }
    else
    {
        int64_t rbx_1 = 0;
        
        while (true)
        {
            int64_t r12_1 = *(arg1 + rbx_1 + 8);
            int64_t r13_1 = *(arg1 + rbx_1 + 0x10);
            var_98 = 0;
            
            if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha1477059272abce5(r12_1, 
                r13_1, core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(&var_98)))
            {
                void* var_68 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                var_60 = nullptr;
                int64_t var_58_1 = r12_1;
                int64_t var_50_1 = r13_1;
                char var_48_1 = 1;
                void** var_40 = &var_60;
                int64_t (* var_38_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_98 = &data_4deab8;
                int64_t var_90_2 = 2;
                int128_t var_80;
                *var_80[8] = 0;
                void*** var_88_2 = &var_40;
                var_80 = 1;
                rdi_4 = &var_68;
                break;
            }
            
            rbx_1 += 0x18;
            
            if (arg2 * 0x18 == rbx_1)
                goto label_4561b2;
        }
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h7a4400e9f2ab9568(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(rdi_4, 
        &var_98));
    return 0;
}
