
  uint64_t uu_rm::prompt_file_permission_readonly::h22905ffc5cf8659c(int64_t arg1, int64_t arg2, char arg3, int32_t arg4)

{
    uint64_t r13;
    
    if (arg3 != 2)
        r13 = 1;
    
    if (arg3 == 2 || !(arg3 & 1))
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        r13 = std::sys::io::is_terminal::isatty::is_terminal::he401db6fc1473b6f();
    }
    
    void* const var_e0;
    std::fs::metadata::h578d377c5d8d0272(&var_e0, arg1);
    void* const r14 = var_e0;
    r13 ^= 1;
    int32_t rbp;
    rbp = 1;
    
    if (!(arg4 == 3 & r13))
    {
        int64_t* var_110;
        int64_t** var_100;
        
        if (r14 == 2)
        {
            label_45e1af:
            int64_t** rax_4;
            int64_t rdx_1;
            rax_4 = uucore::util_name::h074417a1e6395129();
            var_100 = rax_4;
            int64_t var_f8_1 = rdx_1;
            var_110 = &var_100;
            int64_t (* var_108_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
            var_e0 = &data_4ea4a0;
            int64_t var_d8_1 = 2;
            int64_t var_c0_1 = 0;
            int64_t** var_d0_1 = &var_110;
            int64_t var_c8_1 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
            var_100 = 1;
            int64_t var_f8_2 = arg1;
            int64_t var_f0_1 = arg2;
            char var_e8_1 = 1;
            var_110 = &var_100;
            int64_t (* var_108_2)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_e0 = &data_4ea6d0;
            int64_t var_d8_2 = 2;
            int64_t var_c0_2 = 0;
            int64_t** var_d0_2 = &var_110;
            int64_t var_c8_2 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
            var_e0 = &data_4ea630;
            int64_t var_d8_3 = 1;
            int64_t var_d0_3 = 8;
            var_c8_2 = {0};
            std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
            var_e0 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
            _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(
                &var_e0);
            rbp = uucore::read_yes::h67cb9532536454c0();
        }
        else if (!uu_rm::is_writable::h35835a5ca0912bec(arg1))
        {
            int64_t var_90;
            
            if (var_90)
                goto label_45e1af;
            
            int64_t** rax_10;
            int64_t rdx_3;
            rax_10 = uucore::util_name::h074417a1e6395129();
            var_100 = rax_10;
            int64_t var_f8_4 = rdx_3;
            var_110 = &var_100;
            int64_t (* var_108_4)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
            var_e0 = &data_4ea4a0;
            int64_t var_d8_5 = 2;
            int64_t var_c0_4 = 0;
            int64_t** var_d0_5 = &var_110;
            int64_t var_c8_4 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
            var_100 = 1;
            int64_t var_f8_5 = arg1;
            int64_t var_f0_3 = arg2;
            char var_e8_2 = 1;
            var_110 = &var_100;
            int64_t (* var_108_5)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_e0 = &data_4ea6b0;
            int64_t var_d8_6 = 2;
            int64_t var_c0_5 = 0;
            int64_t** var_d0_6 = &var_110;
            int64_t var_c8_5 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
            var_e0 = &data_4ea630;
            int64_t var_d8_7 = 1;
            int64_t var_d0_7 = 8;
            var_c8_5 = {0};
            std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
            var_e0 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
            _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(
                &var_e0);
            rbp = uucore::read_yes::h67cb9532536454c0();
        }
    }
    
    int64_t var_d8;
    core::ptr::drop_in_place$LT$$LP$bool$C$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$C$uu_rm..InteractiveMode$RP$$GT$::h34832e68475fb301(r14, var_d8);
    return rbp;
}
