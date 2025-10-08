
  uint64_t uu_rm::prompt_file::h7c1fa3f92c48040a(int64_t arg1, int64_t arg2, char arg3, char arg4)

{
    uint32_t r13 = arg4;
    uint64_t rbp;
    rbp = 1;
    
    if (r13 == 2)
    {
        void* const var_e0;
        std::fs::symlink_metadata::h2654b7702b6620cd(&var_e0, arg1);
        void* const rax_1 = var_e0;
        void* const rdi_1 = 2;
        
        if (rax_1 == 2)
            goto label_45dc51;
        
        int32_t var_a8;
        int64_t** var_148;
        int64_t* var_118;
        int64_t var_d8;
        
        if ((0xf000 & var_a8) != 0xa000)
        {
            rdi_1 = rax_1;
            label_45dc51:
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h33062896cdc75427(rdi_1, var_d8);
            label_45dc61:
            std::fs::metadata::h578d377c5d8d0272(&var_e0, arg1);
            void* const rdi_12 = var_e0;
            
            if (rdi_12 != 2)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h33062896cdc75427(rdi_12, var_d8);
                uint8_t rax_9;
                
                if (arg4 == 2)
                    rax_9 = uu_rm::is_writable::h35835a5ca0912bec(arg1);
                
                if (arg4 != 2 || !rax_9)
                    /* tailcall */
                    return uu_rm::prompt_file_permission_readonly::h22905ffc5cf8659c(arg1, arg2, 
                        arg3, r13);
                
                int64_t var_90;
                int64_t var_130;
                
                if (!var_90)
                {
                    int64_t** rax_15;
                    int64_t rdx_8;
                    rax_15 = uucore::util_name::h074417a1e6395129();
                    var_148 = rax_15;
                    int64_t var_140_8 = rdx_8;
                    var_118 = &var_148;
                    int64_t (* var_110_7)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
                    var_e0 = &data_4ea4a0;
                    int64_t var_d8_5 = 2;
                    int64_t var_c0_4 = 0;
                    int64_t** var_d0_5 = &var_118;
                    int64_t var_c8_4 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
                    var_148 = 1;
                    int64_t var_140_9 = arg1;
                    int64_t var_138_7 = arg2;
                    var_130 = 1;
                    var_118 = &var_148;
                    int64_t (* var_110_8)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_e0 = &data_4ea670;
                    int64_t var_d8_6 = 2;
                    int64_t var_c0_5 = 0;
                    int64_t** var_d0_6 = &var_118;
                    int64_t var_c8_5 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
                    var_e0 = &data_4ea630;
                    int64_t var_d8_7 = 1;
                    int64_t var_d0_7 = 8;
                    var_c8_5 = {0};
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
                    var_e0 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                    _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(&var_e0);
                }
                else
                {
                    int64_t** rax_10;
                    int64_t rdx_4;
                    rax_10 = uucore::util_name::h074417a1e6395129();
                    var_148 = rax_10;
                    int64_t var_140_5 = rdx_4;
                    var_118 = &var_148;
                    int64_t (* var_110_4)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
                    var_e0 = &data_4ea4a0;
                    int64_t var_d8_1 = 2;
                    int64_t var_c0_1 = 0;
                    int64_t** var_d0_1 = &var_118;
                    int64_t var_c8_1 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
                    var_148 = 1;
                    int64_t var_140_6 = arg1;
                    int64_t var_138_5 = arg2;
                    var_130 = 1;
                    var_118 = &var_148;
                    int64_t (* var_110_5)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_e0 = &data_4ea690;
                    int64_t var_d8_2 = 2;
                    int64_t var_c0_2 = 0;
                    int64_t** var_d0_2 = &var_118;
                    int64_t var_c8_2 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
                    var_e0 = &data_4ea630;
                    int64_t var_d8_3 = 1;
                    int64_t var_d0_3 = 8;
                    var_c8_2 = {0};
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
                    var_e0 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                    _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(&var_e0);
                }
                rbp = uucore::read_yes::h67cb9532536454c0();
            }
            else
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h33062896cdc75427(2, var_d8);
        }
        else
        {
            int64_t* rax_3;
            int64_t rdx_1;
            rax_3 = uucore::util_name::h074417a1e6395129();
            var_118 = rax_3;
            int64_t var_110_1 = rdx_1;
            uint64_t var_158 = &var_118;
            int64_t (* var_150_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
            var_148 = &data_4ea4a0;
            int64_t var_140_1 = 2;
            int64_t var_128_1 = 0;
            uint64_t* var_138_1 = &var_158;
            int64_t var_130_1 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_148);
            var_118 = 1;
            int64_t var_110_2 = arg1;
            int64_t var_108_1 = arg2;
            char var_100_1 = 1;
            var_158 = &var_118;
            int64_t (* var_150_2)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_148 = &data_4ea610;
            int64_t var_140_2 = 2;
            int64_t var_128_2 = 0;
            uint64_t* var_138_2 = &var_158;
            int64_t var_130_2 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_148);
            var_148 = &data_4ea630;
            int64_t var_140_3 = 1;
            int64_t var_138_3 = 8;
            var_130_2 = {0};
            std::io::stdio::_eprint::h57899770eacec2ad(&var_148);
            var_148 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
            _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(
                &var_148);
            rbp = uucore::read_yes::h67cb9532536454c0();
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h33062896cdc75427(rax_1, var_d8);
        }
    }
    else if (r13)
        goto label_45dc61;
    
    return rbp;
}
