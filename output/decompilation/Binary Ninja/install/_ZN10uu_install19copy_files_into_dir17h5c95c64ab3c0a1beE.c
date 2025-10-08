
  uint64_t uu_install::copy_files_into_dir::h5c95c64ab3c0a1be(int64_t arg1, int64_t arg2, int64_t arg3, uint64_t arg4, void* arg5)

{
    void* const var_118;
    uint64_t var_110;
    
    if (!std::path::Path::is_dir::h02edbc48c38d7d9e(arg3, arg4))
    {
        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_110, arg3, 
            arg4);
        var_118 = 6;
        return alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_118);
    }
    
    if (arg2)
    {
        int64_t i = 0;
        
        do
        {
            char* r15_1 = *(arg1 + i + 8);
            uint64_t r14_1 = *(arg1 + i + 0x10);
            std::fs::metadata::hd1e2f191d36a0fa4(&var_118, r15_1);
            int32_t var_1c8;
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h9fe3718d1d15db77(&var_1c8, &var_118);
            uint64_t var_230;
            uint64_t var_220;
            int64_t (* var_218)(int64_t* arg1, int64_t arg2);
            uint64_t* var_210;
            int64_t var_200;
            uint64_t var_1c0;
            uint64_t* var_1b8;
            
            if (var_1c8 != 2)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hf9ffa6e3f01aa1e5(&var_1c8);
                int64_t var_1a8;
                
                if (!std::path::Path::is_dir::h02edbc48c38d7d9e(r15_1, r14_1))
                {
                    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(
                        &var_220, arg3, arg4);
                    std::path::Path::components::hd0346d362206f2e9(&var_118, r15_1, r14_1);
                    _$LT$std..path..Components$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h8d3527ff230619be(&var_1c8, &var_118);
                    
                    if (var_1c8 == 0xa)
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    int64_t var_198;
                    int64_t var_38_1 = var_198;
                    int128_t var_48_1 = var_1a8;
                    int128_t var_58_1 = var_1b8;
                    int128_t var_68_1 = var_1c8;
                    std::path::PathBuf::push::h07a5e2d6657bc540(&var_220);
                    uint64_t rax_9;
                    int64_t* rdx_8;
                    rax_9 =
                        uu_install::copy::h306162d3f0e5e6d2(r15_1, r14_1, var_218, var_210, arg5);
                    
                    if (!rax_9)
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hfbc899ec46b6393d(0, rdx_8);
                    else
                    {
                        var_230 = rax_9;
                        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(rdx_8[0xb](rax_9));
                        int64_t rax_11;
                        int64_t rdx_9;
                        rax_11 = uucore::util_name::h074417a1e6395129();
                        var_200 = rax_11;
                        int64_t var_1f8_2 = rdx_9;
                        var_1c8 = &var_200;
                        var_1c0 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb0c432d6311a3dda;
                        var_1b8 = &var_230;
                        int64_t (* var_1b0_2)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h13fdbe3457474fd3;
                        var_118 = &data_5022c0;
                        var_110 = 3;
                        int64_t var_f8_2 = 0;
                        int32_t* var_108_2 = &var_1c8;
                        int64_t var_100_3 = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h8b5fd8c779bbf85f(var_230, rdx_8);
                    }
                    
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc261e2b7908d5905(&var_220);
                }
                else
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0734b0984fa3fab3(&var_200, r15_1, r14_1);
                    var_118 = 0xd;
                    int64_t var_1f0;
                    int64_t var_100_2 = var_1f0;
                    var_110 = var_200;
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                    uint64_t rax_7;
                    int64_t rdx_4;
                    rax_7 = uucore::util_name::h074417a1e6395129();
                    var_230 = rax_7;
                    int64_t var_228_2 = rdx_4;
                    var_220 = &var_230;
                    var_218 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb0c432d6311a3dda;
                    var_210 = &var_118;
                    int64_t (* var_208_2)(int64_t* arg1, int64_t* arg2) = _$LT$uu_install..InstallError$u20$as$u20$core..fmt..Display$GT$::fmt::h251fabe430e9a7c5;
                    var_1c8 = &data_5022c0;
                    var_1c0 = 3;
                    var_1a8 = 0;
                    var_1b8 = &var_220;
                    int64_t var_1b0_1 = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_1c8);
                    core::ptr::drop_in_place$LT$uu_install..InstallError$GT$::haca1f059ca4c5a74(
                        &var_118);
                }
            }
            else
            {
                var_230 = var_1c0;
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(var_1b8[0xb]());
                int64_t rax_4;
                int64_t rdx_2;
                rax_4 = uucore::util_name::h074417a1e6395129();
                var_200 = rax_4;
                int64_t var_1f8_1 = rdx_2;
                var_220 = &var_200;
                var_218 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb0c432d6311a3dda;
                var_210 = &var_230;
                int64_t (* var_208_1)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h13fdbe3457474fd3;
                var_118 = &data_5022c0;
                var_110 = 3;
                int64_t var_f8_1 = 0;
                uint64_t* var_108_1 = &var_220;
                int64_t var_100_1 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h8b5fd8c779bbf85f(var_230, var_1b8);
            }
            i += 0x18;
        } while (arg2 * 0x18 != i);
    }
    
    return 0;
}
