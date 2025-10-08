
  int64_t forc_tx::Command::try_parse_from_args::h5a42d14b30008122(int64_t* arg1, int128_t* arg2)

{
    int64_t var_368;
    core::iter::traits::iterator::Iterator::map::h9053d5cd7d1b9974(&var_368, arg2);
    int64_t var_430;
    core::iter::traits::iterator::Iterator::peekable::hb29e92dc34d54b68(&var_430, &var_368);
    clap_builder::derive::Parser::try_parse_from::hd80ede15a878cb0b(&var_368, &var_430);
    int64_t rbx = var_368;
    int128_t var_360;
    
    if (rbx != 2)
    {
        int128_t var_350;
        int128_t var_228_1 = var_350;
        int128_t var_340;
        int128_t var_218_1 = var_340;
        int128_t var_330;
        void var_208;
        memcpy(&var_208, &var_330, 0xc8);
        int64_t var_240 = rbx;
        int128_t var_238_1 = var_360;
        int64_t var_398_1 = -0x7ffffffffffffffe;
        
        while (true)
        {
            int64_t rax_2 = var_430;
            var_430 = -0x7fffffffffffffff;
            void var_418;
            int64_t var_390;
            
            if (rax_2 == -0x7fffffffffffffff)
            {
                _$LT$std..env..Args$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0d29c3efeb1bccd1(&var_390, &var_418);
                
                if (var_390 != -0x8000000000000000)
                    goto label_528f44;
                
                goto label_529149;
            }
            
            int128_t var_428;
            int128_t var_388 = var_428;
            var_390 = rax_2;
            int128_t var_410;
            int64_t var_400;
            int128_t var_3d8;
            int128_t var_3b8;
            int64_t var_3a8;
            
            if (rax_2 == -0x8000000000000000)
            {
                label_529149:
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h04bef88e15bf4d0c(
                    &var_390);
                core::option::Option$LT$T$GT$::get_or_insert_with::h72b2e45c1c5dc82b(&var_430, 
                    &var_418);
                
                if (var_430 == -0x8000000000000000)
                {
                    memcpy(arg1, &var_240, 0x100);
                    break;
                }
                
                core::option::Option$LT$T$GT$::get_or_insert_with::h72b2e45c1c5dc82b(&var_430, 
                    &var_418);
                
                if (var_430 == -0x8000000000000000)
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_3d8, &var_430);
                *var_340[8] = var_400;
                var_350 = var_410;
                var_360 = var_428;
                var_368 = var_430;
                core::iter::traits::iterator::Iterator::collect::h754fc273ed0f5862(&var_3b8, 
                    &var_368);
                int128_t zmm0_9 = var_3d8;
                var_368 = zmm0_9;
                int64_t var_3c8;
                *var_360[8] = var_3c8;
                int128_t zmm1_6 = var_3b8;
                var_340 = var_3a8;
                arg1[5] = *zmm1_6[8];
                arg1[6] = var_340;
                arg1[3] = *var_360[8];
                arg1[4] = zmm1_6;
                *(arg1 + 8) = zmm0_9;
                *arg1 = 2;
            }
            else
            {
                label_528f44:
                uint64_t rax_4 = *var_388[8];
                int128_t var_3f8 = var_390;
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_368, &var_3f8);
                var_3a8 = *var_360[8];
                var_3b8 = var_368;
                void var_260;
                core::iter::traits::iterator::Iterator::chain::h58df5d297a0e2fa3(&var_260, 
                    &var_3b8, &var_430);
                int64_t rbx_1 = *var_3f8[8];
                int64_t* rdx_5;
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9f89b7fe3acaa233(rbx_1, rax_4, "inputoutputforc-plugins/forc-tx/…", 5))
                {
                    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9f89b7fe3acaa233(rbx_1, rax_4, "outputforc-plugins/forc-tx/src/l…", 6))
                    {
                        clap_builder::derive::Parser::try_parse_from::h372580919e0a23ca(&var_368, 
                            &var_260);
                        char rax_9 = var_368;
                        
                        if (rax_9 == 5)
                        {
                            rdx_5 = arg1;
                            rdx_5[1] = var_398_1;
                            rdx_5[2] = var_360;
                            goto label_5293e9;
                        }
                        
                        int32_t var_13c_1 = *var_368[4];
                        int32_t var_13f_1 = *var_368[1];
                        int128_t var_118_1 = var_340;
                        int128_t var_128_1 = var_350;
                        int128_t var_108_1 = var_330;
                        int64_t var_320;
                        int64_t var_f8_1 = var_320;
                        char var_140 = rax_9;
                        int128_t var_138_1 = var_360;
                        forc_tx::Command::try_parse_from_args::push_output::h69c3dc84426c4703(
                            &var_240, &var_140);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd7ca2662200baaab(
                            &var_3f8);
                        continue;
                    }
                }
                else
                {
                    clap_builder::derive::Parser::try_parse_from::h74e5b126bf245110(&var_368, 
                        &var_260);
                    int64_t rbx_2 = var_368;
                    
                    if (rbx_2 == var_398_1)
                    {
                        rdx_5 = arg1;
                        rdx_5[1] = -0x7fffffffffffffff;
                        rdx_5[2] = var_360;
                        label_5293e9:
                        *rdx_5 = 2;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd7ca2662200baaab(
                            &var_3f8);
                        core::ptr::drop_in_place$LT$forc_tx..Command$GT$::he4ae0b0a31f879df(
                            &var_240);
                        break;
                    }
                    
                    int128_t var_d8_1 = var_350;
                    int128_t var_c8_1 = var_340;
                    void var_b8;
                    memcpy(&var_b8, &var_330, 0x88);
                    int64_t var_f0 = rbx_2;
                    int128_t var_e8_1 = var_360;
                    forc_tx::Command::try_parse_from_args::push_input::h6072756290f79a7b(&var_368, 
                        &var_240, &var_f0);
                    int64_t rax_7 = var_368;
                    
                    if (rax_7 == -0x7ffffffffffffffb)
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd7ca2662200baaab(
                            &var_3f8);
                        continue;
                    }
                    
                    rdx_5 = arg1;
                    rdx_5[6] = var_340;
                    *(rdx_5 + 0x20) = var_350;
                    *(rdx_5 + 0x10) = var_360;
                    rdx_5[1] = rax_7;
                    goto label_5293e9;
                }
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h42f651794ff968d1(&var_368, rbx_1, rax_4);
                int64_t rax_17 = *var_360[8];
                var_3d8 = var_368;
                *var_340[8] = var_400;
                var_350 = var_410;
                var_360 = var_428;
                var_368 = var_430;
                core::iter::traits::iterator::Iterator::collect::h754fc273ed0f5862(&var_3b8, 
                    &var_368);
                int128_t zmm0_11 = var_3d8;
                var_368 = zmm0_11;
                *var_360[8] = rax_17;
                int128_t zmm1_8 = var_3b8;
                var_340 = var_3a8;
                arg1[5] = *zmm1_8[8];
                arg1[6] = var_340;
                arg1[3] = *var_360[8];
                arg1[4] = zmm1_8;
                *(arg1 + 8) = zmm0_11;
                *arg1 = 2;
                core::ptr::drop_in_place$LT$core..iter..adapters..chain..Chain$LT$core..iter..sources..once..Once$LT$alloc..string..String$GT$$C$core..iter..sources..from_fn..FromFn$LT$forc_tx..Command..try_parse_from_args$LT$std..env..Args$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h3ba7c09acd5133aa(&var_260);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd7ca2662200baaab(&var_3f8);
            }
            return core::ptr::drop_in_place$LT$forc_tx..Command$GT$::he4ae0b0a31f879df(&var_240);
        }
    }
    else
    {
        arg1[1] = -0x8000000000000000;
        arg1[2] = var_360;
        *arg1 = 2;
    }
    return core::ptr::drop_in_place$LT$core..iter..adapters..peekable..Peekable$LT$std..env..Args$GT$$GT$::h94bf4311a3bef29d(&var_430);
}
