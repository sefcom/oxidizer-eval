
  int64_t* uu_ptx::uumain::uumain::h70d69a58c41fd313(int64_t arg1)

{
    int128_t var_2e8;
    uu_ptx::uu_app::h769fde6fd203379a(&var_2e8);
    int64_t var_3f0;
    clap_builder::builder::command::Command::try_get_matches_from::h2025ffa7a5bdc906(&var_3f0, 
        &var_2e8, arg1);
    int64_t rax = var_3f0;
    int64_t* result;
    int64_t var_3e8;
    
    if (rax != -0x8000000000000000)
    {
        int64_t var_3c0;
        int64_t var_460_1 = var_3c0;
        int128_t var_3d0;
        int128_t var_470_1 = var_3d0;
        int128_t var_3e0;
        int128_t var_480_1 = var_3e0;
        int64_t var_490 = rax;
        int64_t var_488_1 = var_3e8;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h864bac169c66e408(
            &var_2e8, &var_490, "filemode{", 4);
        clap_builder::parser::error::MatchesError::unwrap::h699c379ce761fce9(&var_3f0, "filemode{", 
            4, &var_2e8);
        void var_4e0;
        int128_t var_458;
        int64_t var_3b8;
        int128_t var_2d8;
        int128_t var_2c8;
        
        if (!var_3f0)
        {
            int128_t* rax_3 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x18);
            
            if (!rax_3)
            {
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                /* no return */
            }
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h74d88cca8ed314cc(
                &var_2e8);
            int64_t rax_4 = var_2d8;
            int64_t var_448_1 = rax_4;
            int128_t zmm0_3 = var_2e8;
            var_458 = zmm0_3;
            rax_3[1] = rax_4;
            *rax_3 = zmm0_3;
            alloc::slice::hack::into_vec::ha6afe10c25aac0c3(&var_4e0, rax_3, 1);
        }
        else
        {
            _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h83e32bfe53941955(&var_2e8, &var_3f0, 4);
            int128_t var_328 = var_2e8;
            int128_t var_318_1 = var_2d8;
            int128_t var_308_1 = var_2c8;
            int64_t var_2b8;
            int64_t var_2f8_1 = var_2b8;
            int64_t var_2f0_1 = var_3b8;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h54a09cbba16345a6(&var_4e0, &var_328);
        }
        
        uu_ptx::get_config::hbc4f2f006b9116e7(&var_2e8, &var_490);
        int64_t rax_5 = var_2e8;
        result = *var_2e8[8];
        
        if (rax_5 == -0x8000000000000000)
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h958462a3e0e95c8d(&var_4e0);
        else
        {
            int128_t var_2a0;
            int128_t var_410_1 = var_2a0;
            int128_t var_2b0;
            int128_t var_420_1 = var_2b0;
            int128_t var_430_1 = var_2c8;
            int128_t var_440_1 = var_2d8;
            var_458 = rax_5;
            *var_458[8] = result;
            void** const var_448_2 = var_2d8;
            uu_ptx::WordFilter::new::h834513af9e48d5ee(&var_2e8, &var_490, &var_458);
            int64_t rax_6 = var_2e8;
            result = *var_2e8[8];
            
            if (rax_6 == -0x8000000000000000)
            {
                core::ptr::drop_in_place$LT$uu_ptx..Config$GT$::h6e90df535937af8f(&var_458);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h958462a3e0e95c8d(&var_4e0);
            }
            else
            {
                int64_t var_270;
                int64_t var_378_1 = var_270;
                int128_t var_280;
                int128_t var_388_1 = var_280;
                int64_t var_290;
                int128_t var_398_1 = var_290;
                int128_t var_3a8_1 = var_2a0;
                var_3b8 = var_2b0;
                var_3d0 = var_2c8;
                var_3e0 = var_2d8;
                var_3f0 = rax_6;
                int64_t* result_2 = result;
                var_3e0 = var_2d8;
                void* var_4d8;
                int64_t var_4d0;
                uu_ptx::read_input::h3799c9cd7e5fae81(&var_2e8, var_4d8, var_4d0, &var_458);
                int64_t var_4c8;
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc396743c958a8c80(&var_4c8, &var_2e8);
                int64_t rax_7 = var_4c8;
                void** result_1;
                result = result_1;
                
                if (!rax_7)
                {
                    core::ptr::drop_in_place$LT$uu_ptx..WordFilter$GT$::h81a74b3f80d3fda1(&var_3f0);
                    core::ptr::drop_in_place$LT$uu_ptx..Config$GT$::h6e90df535937af8f(&var_458);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h958462a3e0e95c8d(&var_4e0);
                }
                else
                {
                    int64_t var_4a0;
                    int64_t var_348_1 = var_4a0;
                    int128_t var_4b0;
                    int128_t var_358_1 = var_4b0;
                    int64_t var_370 = rax_7;
                    int64_t* result_3 = result;
                    uint64_t var_4b8;
                    void** const var_360_1 = var_4b8;
                    void var_340;
                    uu_ptx::create_word_set::ha43c71debbb1b6c6(&var_340, &var_458, &var_3f0, 
                        &var_370);
                    
                    if (var_290 || var_4d0 != 2)
                    {
                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h74d88cca8ed314cc(&var_2e8);
                        var_4b8 = var_2d8;
                        var_4c8 = var_2e8;
                    }
                    else
                    {
                        int64_t var_4d0_1 = 1;
                        int64_t rcx_9 = *(var_4d8 + 0x18);
                        
                        if (rcx_9 == -0x8000000000000000)
                        {
                            core::option::unwrap_failed::h0e11329e76906eaa();
                            /* no return */
                        }
                        
                        var_4c8 = rcx_9;
                        result_1 = *(var_4d8 + 0x20);
                    }
                    
                    int128_t* result_4;
                    void** rdx_6;
                    result_4 = uu_ptx::write_traditional_output::h994b7c7d26d6c70f(&var_458, 
                        &var_370, &var_340, result_1, var_4b8);
                    result = result_4;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9bf6ad007f06787b(
                        &var_4c8);
                    core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$uu_ptx..WordRef$GT$$GT$::h769ae90a68da11f0(&var_340);
                    core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$uu_ptx..FileContent$GT$$GT$::h39bd43f06bcbad41(&var_370);
                    core::ptr::drop_in_place$LT$uu_ptx..WordFilter$GT$::h81a74b3f80d3fda1(&var_3f0);
                    core::ptr::drop_in_place$LT$uu_ptx..Config$GT$::h6e90df535937af8f(&var_458);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h958462a3e0e95c8d(&var_4e0);
                }
            }
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc3045b61d51b3b09(&var_490);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_3e8);
    return result;
}
