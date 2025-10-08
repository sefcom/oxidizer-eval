
  uint64_t uu_install::directory::h0671663bd4f8b2db(int64_t arg1, int64_t arg2, void* arg3)

{
    void* const var_e0;
    
    if (!arg2)
    {
        var_e0 = 1;
        return alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_e0);
    }
    
    int32_t var_13c_1 = 0x1ed;
    
    if (*(arg3 + 0x48) & 1)
        var_13c_1 = *(arg3 + 0x4c);
    
    char rax_2 = *(arg3 + 0x61);
    int64_t i = 0;
    
    do
    {
        int64_t r15_1 = *(arg1 + i + 8);
        uint64_t rbx_1 = *(arg1 + i + 0x10);
        std::fs::metadata::hd1e2f191d36a0fa4(&var_e0, r15_1);
        int32_t rbp_1 = var_e0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h8e5ba91c564dca48(&var_e0);
        uint64_t var_150;
        uint64_t* var_138;
        int64_t (* var_120)(int64_t* arg1);
        uint64_t var_108;
        int64_t var_100;
        
        if (rbp_1 != 2)
        {
            label_467398:
            
            if (uu_install::mode::chmod::hdfca6c9c8a923e56(r15_1, rbx_1))
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            else
            {
                uint64_t rax_8 =
                    uu_install::chown_optional_user_group::h803ff07f1543e95d(r15_1, rbx_1, arg3);
                
                if (!rax_8)
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hfbc899ec46b6393d(0, &data_502208);
                else
                {
                    var_150 = rax_8;
                    int64_t* var_148_3 = &data_502208;
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uu_install..InstallError$u20$as$u20$uucore..mods..error..UError$GT$::code::hae211d2e19e01945(rax_8));
                    uint64_t rax_10;
                    int64_t rdx_6;
                    rax_10 = uucore::util_name::h074417a1e6395129();
                    var_108 = rax_10;
                    var_100 = rdx_6;
                    var_138 = &var_108;
                    int64_t (* var_130_3)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb0c432d6311a3dda;
                    uint64_t* var_128_3 = &var_150;
                    var_120 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h13fdbe3457474fd3;
                    var_e0 = &data_5022c0;
                    int64_t var_d8_3 = 3;
                    int64_t var_c0_3 = 0;
                    uint64_t** var_d0_3 = &var_138;
                    int64_t var_c8_3 = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h8b5fd8c779bbf85f(var_150, var_148_3);
                }
            }
        }
        else
        {
            uucore::features::fs::dir_strip_dot_for_creation::h60bc83913df5140f(&var_108, r15_1, 
                rbx_1);
            int64_t rax_5 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h25a33db3103aecfc(std::fs::create_dir_all::hd557ad1207496242(var_100));
            
            if (!rax_5)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hfbc899ec46b6393d(0, &data_501e30);
                
                if (rax_2 & 1)
                {
                    var_138 = 1;
                    int64_t var_130_2 = var_100;
                    int64_t var_f8;
                    int64_t var_128_2 = var_f8;
                    var_120 = 1;
                    var_150 = &var_138;
                    int64_t (* var_148_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_e0 = &data_5022f0;
                    int64_t var_d8_2 = 2;
                    int64_t var_c0_2 = 0;
                    uint64_t* var_d0_2 = &var_150;
                    int64_t var_c8_2 = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
                }
                
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc261e2b7908d5905(&var_108);
                goto label_467398;
            }
            
            int64_t var_118 = rax_5;
            void** const var_110_1 = &data_501e30;
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            uint64_t rax_6;
            int64_t rdx_3;
            rax_6 = uucore::util_name::h074417a1e6395129();
            var_150 = rax_6;
            int64_t var_148_1 = rdx_3;
            var_138 = &var_150;
            int64_t (* var_130_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb0c432d6311a3dda;
            int64_t* var_128_1 = &var_118;
            var_120 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h13fdbe3457474fd3;
            var_e0 = &data_5022c0;
            int64_t var_d8_1 = 3;
            int64_t var_c0_1 = 0;
            uint64_t** var_d0_1 = &var_138;
            int64_t var_c8_1 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h8b5fd8c779bbf85f(var_118, var_110_1);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc261e2b7908d5905(&var_108);
        }
        i += 0x18;
    } while (arg2 * 0x18 != i);
    
    return 0;
}
