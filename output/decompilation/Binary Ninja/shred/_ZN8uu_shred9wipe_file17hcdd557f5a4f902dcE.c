
  int128_t* uu_shred::wipe_file::hcdd557f5a4f902dc(char* arg1, uint64_t arg2, int64_t arg3, char arg4, int64_t arg5, int64_t arg6, char arg7, char arg8, char arg9, char arg10)

{
    int32_t var_220;
    std::fs::metadata::h605f1ca78403f0bd(&var_220, arg1);
    int32_t rbx = var_220;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h057e93f1d1d682ca(&var_220);
    int128_t* rbp_1;
    int128_t* var_298;
    int64_t* var_140;
    int32_t var_e0;
    void* const rax;
    
    if (rbx != 2)
    {
        if (!std::path::Path::is_file::h82f08f46fb8d8099(arg1, arg2))
        {
            var_298 = 1;
            char* var_290_2 = arg1;
            uint64_t var_288_2 = arg2;
            char var_280_2 = 0;
            var_140 = &var_298;
            int64_t (* var_138_2)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            rax = &data_5386f8;
            goto label_4bcf57;
        }
        
        std::fs::metadata::h605f1ca78403f0bd(&var_220, arg1);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hfeeb5d3bb5da4e93(&var_e0, &var_220);
        int128_t* var_d8;
        
        if (var_e0 != 2)
        {
            int32_t var_a8;
            
            if (arg10)
            {
                int32_t rdx_4 = 0x80;
                
                if (var_a8 < 0)
                    rdx_4 = var_a8;
                
                int128_t* rax_6 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8b41e8b25dbfd909(std::fs::set_permissions::hedfd3098c0eec3ac(arg1, arg2, rdx_4));
                
                if (rax_6)
                    return rax_6;
            }
            
            int64_t var_2b0 = 0;
            int64_t var_2a8_1 = 1;
            int64_t var_2a0_1 = 0;
            int64_t var_218;
            int128_t var_1f0;
            int128_t var_1e0;
            int128_t var_1d0;
            int64_t var_90;
            
            if (var_90)
            {
                if (arg3 > 3)
                {
                    uint64_t rdx_6 = arg3 / 0x16;
                    int64_t var_210;
                    int64_t var_200;
                    
                    if (arg3 >= 0x16)
                    {
                        int64_t r15_1 = 0;
                        
                        do
                        {
                            r15_1 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(r15_1);
                            var_220 = 0;
                            int64_t var_218_2 = 0x16;
                            int128_t var_1d0_1 = *data_41f0e8;
                            int128_t var_1e0_1 = *data_41f0d8;
                            int128_t var_1f0_1 = data_41f0c8;
                            var_200 = data_41f0b8;
                            var_210 = data_41f0a8;
                            int64_t var_1c0_1 = 0xee000000dd00;
                            
                            while (true)
                            {
                                int32_t rax_11 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0c495dba700bde13(&var_220);
                                
                                if (rax_11 == 2)
                                    break;
                                
                                alloc::vec::Vec$LT$T$C$A$GT$::push::heca98b157ed7cb4d(&var_2b0, 
                                    rax_11);
                            }
                            
                            core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$uu_shred..Pattern$C$22_usize$GT$$GT$::hccc20f2342448aa1();
                        } while (r15_1 < rdx_6);
                    }
                    
                    var_220 = 0;
                    var_218 = 0x16;
                    var_210 = data_41f0a8;
                    var_200 = data_41f0b8;
                    var_1f0 = data_41f0c8;
                    var_1e0 = *data_41f0d8;
                    var_1d0 = *data_41f0e8;
                    int64_t var_1c0_2 = 0xee000000dd00;
                    int64_t i = arg3 % 0x16;
                    int64_t i_3 = i;
                    
                    if (arg3 != rdx_6 * 0x16)
                    {
                        do
                        {
                            int32_t rax_15 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0c495dba700bde13(&var_220);
                            
                            if (rax_15 == 2)
                                break;
                            
                            alloc::vec::Vec$LT$T$C$A$GT$::push::heca98b157ed7cb4d(&var_2b0, rax_15);
                            i -= 1;
                        } while (i);
                    }
                    
                    core::ptr::drop_in_place$LT$core..iter..adapters..take..Take$LT$core..array..iter..IntoIter$LT$uu_shred..Pattern$C$22_usize$GT$$GT$$GT$::hd3bf92e12aae45fe();
                    var_220 = rand::rngs::thread::thread_rng::hb51ef0c041e68525();
                    _$LT$$u5b$T$u5d$$u20$as$u20$rand..seq..SliceRandom$GT$::shuffle::he012a51162e821c4(var_2a8_1, var_2a0_1, &var_220);
                    int64_t i_1 = 0;
                    
                    do
                    {
                        int64_t rax_20 = i_1 * (arg3 - 1);
                        uint64_t rbp_3;
                        uint64_t r15_2;
                        
                        if (!((rax_20 | (rbp_3 + 2)) >> 0x20))
                            r15_2 = COMBINE(0, rax_20) / (rbp_3 + 2);
                        else
                            r15_2 = COMBINE(0, rax_20) / (rbp_3 + 2);
                        
                        if (r15_2 >= var_2a0_1)
                        {
                            core::panicking::panic_bounds_check::h25a5330941572dd1(r15_2, 
                                var_2a0_1);
                            /* no return */
                        }
                        
                        i_1 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(i_1);
                        *(var_2a8_1 + (r15_2 << 2)) = 2;
                    } while (i_1 < arg3 / 0xa + 3);
                    
                    core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::h89ac64e96d66995e(&var_220);
                }
                else
                {
                    int64_t r12_1 = 0;
                    
                    while (r12_1 < arg3)
                    {
                        r12_1 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(r12_1);
                        alloc::vec::Vec$LT$T$C$A$GT$::push::heca98b157ed7cb4d(&var_2b0, 2);
                    }
                }
                
                if (arg8)
                    alloc::vec::Vec$LT$T$C$A$GT$::push::heca98b157ed7cb4d(&var_2b0, 0);
            }
            
            int64_t var_108 = var_2a0_1;
            var_220 = 0x1b600000000;
            var_218 = 0;
            *var_218[4] = 0;
            *var_218[1] = 1;
            std::fs::OpenOptions::open::h42007666e681861e(&var_e0, &var_220, arg1);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hdcf338468f0daf60(&var_298, &var_e0);
            rbp_1 = var_298;
            
            if (!rbp_1)
            {
                int64_t var_290;
                int32_t fd = var_290;
                int64_t rax_27 = arg6;
                
                if (!arg5)
                    rax_27 = var_90;
                
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hfb8255cffa267b63(&var_140, &var_2b0);
                int64_t var_120_1 = 0;
                int64_t var_250;
                _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h21af7eed97fbc67b(&var_250, &var_140);
                char i_2;
                
                if (i_2 != 3)
                {
                    do
                    {
                        int64_t rbx_6 = var_250;
                        int32_t var_2b4 = i_2;
                        int128_t* var_240;
                        int32_t var_c8;
                        
                        if (arg9)
                        {
                            void var_f8;
                            uu_shred::pass_name::hc502fb7b05ee159f(&var_f8, &var_2b4);
                            int64_t rax_32;
                            int64_t rdx_19;
                            rax_32 = uucore::util_name::h60d842bf27b05e82();
                            var_e0 = rax_32;
                            int64_t var_d8_1 = rdx_19;
                            var_298 = &var_e0;
                            int64_t (* var_290_3)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h264c667d1212e3ad;
                            var_220 = &data_538698;
                            int64_t var_218_3 = 2;
                            int64_t var_200_2 = 0;
                            int128_t** var_210_2 = &var_298;
                            int64_t var_208_2 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_220);
                            var_240 = 1;
                            char* var_238_1 = arg1;
                            uint64_t var_230_1 = arg2;
                            char var_228_1 = 0;
                            int64_t var_100 = rbx_6 + 1;
                            var_e0 = &var_240;
                            int64_t (* var_d8_2)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            int64_t* var_d0_1 = &var_100;
                            var_c8 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                            int64_t* var_c0_1 = &var_108;
                            uint64_t (* var_b8_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                            void* var_b0_1 = &var_f8;
                            var_a8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            var_220 = 2;
                            int64_t var_210_3 = 2;
                            int64_t var_200_3 = 0;
                            int64_t var_1f8_1 = 0x20;
                            var_1f0 = 3;
                            *var_1f0[8] = 2;
                            *var_1e0[8] = 0;
                            __builtin_memcpy(&var_1d0, 
                                "\x02\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 0x19);
                            int64_t var_1b0_1 = 2;
                            int64_t var_1a0_1 = 2;
                            int64_t var_190;
                            __builtin_memcpy(&var_190, 
                                "\x02\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 0x11);
                            int64_t var_178_1 = 2;
                            int64_t var_168_1 = 2;
                            int64_t var_158_1 = 3;
                            int64_t var_150_1 = 0x20;
                            char var_148_1 = 3;
                            var_298 = &data_538808;
                            int64_t var_290_4 = 5;
                            int32_t* var_278_1 = &var_220;
                            int64_t var_270_1 = 4;
                            int32_t* var_288_3 = &var_e0;
                            char var_280;
                            var_280 = 4;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_298);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h79f0f67a09ddf38f(&var_f8);
                        }
                        
                        int128_t* rax_35 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h5a7c198f926f4856(uu_shred::do_pass::hd89cf0ca9cbf1708(&fd, &var_2b4, 
                            arg7, rax_27));
                        
                        if (rax_35)
                        {
                            var_240 = rax_35;
                            int64_t* var_238_2 = &data_5389a0;
                            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                            int128_t* rax_36;
                            int64_t rdx_22;
                            rax_36 = uucore::util_name::h60d842bf27b05e82();
                            var_298 = rax_36;
                            int64_t var_290_5 = rdx_22;
                            var_e0 = &var_298;
                            int64_t (* var_d8_3)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h264c667d1212e3ad;
                            int128_t** var_d0_2 = &var_240;
                            var_c8 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hfa48898c7684171a;
                            var_220 = &data_538718;
                            int64_t var_218_4 = 3;
                            int64_t var_200_4 = 0;
                            int32_t* var_210_4 = &var_e0;
                            int64_t var_208_3 = 2;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_220);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hbf158212341c390e(var_240, var_238_2);
                        }
                        
                        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h21af7eed97fbc67b(&var_250, &var_140);
                    } while (i_2 != 3);
                }
                
                core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$uu_shred..PassType$GT$$GT$$GT$::h3fb90667d107ca3f(&var_140);
                int128_t* rax_30;
                
                if (arg4)
                {
                    rax_30 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd9d95a9b55133fba(uu_shred::do_remove::h7b1c5ba904fda3f1(arg1, arg2, arg1, arg2, arg9, 
                        arg4));
                    rbp_1 = rax_30;
                }
                
                if (!arg4 || !rax_30)
                {
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::h7f7a30b7b330e79b(fd);
                    return nullptr;
                }
                
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h7f7a30b7b330e79b(fd);
            }
            else
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_shred..PassType$GT$$GT$::hc7ae42648a6b147f(&var_2b0);
        }
        else
            rbp_1 = var_d8;
    }
    else
    {
        var_298 = 1;
        char* var_290_1 = arg1;
        uint64_t var_288_1 = arg2;
        char var_280_1 = 0;
        var_140 = &var_298;
        int64_t (* var_138_1)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        rax = &data_5386d8;
        label_4bcf57:
        var_220 = rax;
        int64_t var_218_1 = 2;
        int64_t var_200_1 = 0;
        int64_t** var_210_1 = &var_140;
        int64_t var_208_1 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h2a91f0892e8dc529(&var_e0, &var_220);
        int32_t var_c8_1 = 1;
        rbp_1 = alloc::boxed::Box$LT$T$GT$::new::h46ce8461a54b80d6(&var_e0);
    }
    return rbp_1;
}
