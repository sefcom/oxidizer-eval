
  int128_t** uu_du::read_block_size::h76babfb70e66ee44(int128_t** arg1, void* arg2, uint64_t arg3)

{
    int32_t var_c8;
    void** var_c0;
    char const* const var_a8;
    
    if (!arg2)
    {
        var_a8 = "DU_BLOCK_SIZEBLOCK_SIZEBLOCKSIZE…";
        int64_t var_a0_1 = 0xd;
        char const* const var_98_1 = "BLOCK_SIZEBLOCKSIZEPOSIXLY_CORRE…";
        int64_t var_90_1 = 0xa;
        char const* const var_88_1 = "BLOCKSIZEPOSIXLY_CORRECTblock-si…";
        int64_t var_80_1 = 9;
        int64_t var_78_1 = 0;
        int64_t var_70_1 = 3;
        
        while (true)
        {
            int64_t rax_2 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hca94120cebd2fbbe(&var_a8);
            
            if (!rax_2)
            {
                core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::h1e3b5b2db52edb1f();
                std::env::var::h8742b1567e161603(&var_a8, "POSIXLY_CORRECTblock-size ignore…");
                char const* const r15_2 = var_a8;
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h9fc456eefb69a366(&var_a8);
                
                if (!r15_2)
                {
                    arg1[1] = 0x200;
                    *arg1 = nullptr;
                }
                else
                {
                    arg1[1] = 0x400;
                    *arg1 = nullptr;
                }
                
                break;
            }
            
            int64_t var_50;
            std::env::var::h8742b1567e161603(&var_50, rax_2);
            
            if (!var_50)
            {
                uint64_t var_38;
                uint64_t var_58_1 = var_38;
                int128_t var_48;
                int128_t var_68 = var_48;
                uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_c8, *var_68[8], 
                    var_38);
                
                if (var_c8 == 3)
                {
                    arg1[1] = var_c0;
                    *arg1 = nullptr;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::h0c054e42efb06657(&var_c8);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(
                        &var_68);
                    
                    if (var_50)
                        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h9fc456eefb69a366(&var_50);
                    
                    core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::h1e3b5b2db52edb1f();
                    break;
                }
                
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::h0c054e42efb06657(&var_c8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&var_68);
                
                if (!var_50)
                    continue;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h9fc456eefb69a366(&var_50);
        }
    }
    else
    {
        uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_c8, arg2, arg3);
        int128_t* rax_1;
        void** const rcx_1;
        
        if (var_c8 != 3)
        {
            int128_t var_b8;
            int64_t var_98;
            var_98 = var_b8;
            var_a8 = var_c8;
            rax_1 = uu_du::read_block_size::_$u7b$$u7b$closure$u7d$$u7d$::hbe6839e34197ed94(arg2, 
                arg3, &var_a8);
            rcx_1 = &data_584310;
        }
        else
        {
            rcx_1 = var_c0;
            rax_1 = nullptr;
        }
        
        arg1[1] = rcx_1;
        *arg1 = rax_1;
    }
    return arg1;
}
