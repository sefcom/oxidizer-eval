
  fn uu_ptx::uumain::uumain::h70d69a58c41fd313(arg1: i64) -> *mut i64

{
    let mut var_2e8: i128;
    uu_ptx::uu_app::h769fde6fd203379a(&var_2e8);
    let mut var_3f0: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h2025ffa7a5bdc906(&var_3f0, 
        &var_2e8, arg1);
    let rax: i64 = var_3f0;
    let mut result: *mut i64;
    let var_3e8: i64;
    
    if rax != -0x8000000000000000
    {
        let var_3c0: i64;
        let var_460_1: i64 = var_3c0;
        let mut var_3d0: i128;
        let var_470_1: i128 = var_3d0;
        let mut var_3e0: i128;
        let var_480_1: i128 = var_3e0;
        let mut var_490: i64 = rax;
        let var_488_1: i64 = var_3e8;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h864bac169c66e408(
            &var_2e8, &var_490, "filemode{", 4);
        clap_builder::parser::error::MatchesError::unwrap::h699c379ce761fce9(&var_3f0, "filemode{", 
            4, &var_2e8);
        let mut var_4e0: ();
        let mut var_458: i128;
        let mut var_3b8: i64;
        let var_2d8: i128;
        let var_2c8: i128;
        
        if var_3f0 == 0
        {
            let rax_3: *mut i128 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x18);
            
            if rax_3 == 0
            {
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                /* no return */
            }
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h74d88cca8ed314cc(
                &var_2e8);
            let rax_4: i64 = var_2d8;
            let var_448_1: i64 = rax_4;
            let zmm0_3: i128 = var_2e8;
            var_458 = zmm0_3;
            rax_3[1] = rax_4;
            *rax_3 = zmm0_3;
            alloc::slice::hack::into_vec::ha6afe10c25aac0c3(&var_4e0, rax_3, 1);
        }
        else
        {
            _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h83e32bfe53941955(&var_2e8, &var_3f0, 4);
            let mut var_328: i128 = var_2e8;
            let var_318_1: i128 = var_2d8;
            let var_308_1: i128 = var_2c8;
            let var_2b8: i64;
            let var_2f8_1: i64 = var_2b8;
            let var_2f0_1: i64 = var_3b8;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h54a09cbba16345a6(&var_4e0, &var_328);
        }
        
        uu_ptx::get_config::hbc4f2f006b9116e7(&var_2e8, &var_490);
        let rax_5: i64 = var_2e8;
        result = *var_2e8[8];
        
        if rax_5 == -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h958462a3e0e95c8d(&var_4e0);
        }
        else
        {
            let var_2a0: i128;
            let var_410_1: i128 = var_2a0;
            let var_2b0: i128;
            let var_420_1: i128 = var_2b0;
            let var_430_1: i128 = var_2c8;
            let var_440_1: i128 = var_2d8;
            var_458 = rax_5;
            *var_458[8] = result;
            let var_448_2: *mut *mut c_void = var_2d8;
            uu_ptx::WordFilter::new::h834513af9e48d5ee(&var_2e8, &var_490, &var_458);
            let rax_6: i64 = var_2e8;
            result = *var_2e8[8];
            
            if rax_6 == -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$uu_ptx..Config$GT$::h6e90df535937af8f(&var_458);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h958462a3e0e95c8d(&var_4e0);
            }
            else
            {
                let var_270: i64;
                let var_378_1: i64 = var_270;
                let var_280: i128;
                let var_388_1: i128 = var_280;
                let var_290: i64;
                let var_398_1: i128 = var_290;
                let var_3a8_1: i128 = var_2a0;
                var_3b8 = var_2b0;
                var_3d0 = var_2c8;
                var_3e0 = var_2d8;
                var_3f0 = rax_6;
                let result_2: *mut i64 = result;
                var_3e0 = var_2d8;
                let var_4d8: *mut c_void;
                let var_4d0: i64;
                uu_ptx::read_input::h3799c9cd7e5fae81(&var_2e8, var_4d8, var_4d0, &var_458);
                let mut var_4c8: i64;
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc396743c958a8c80(&var_4c8, &var_2e8);
                let rax_7: i64 = var_4c8;
                let mut result_1: *mut *mut c_void;
                result = result_1;
                
                if rax_7 == 0
                {
                    core::ptr::drop_in_place$LT$uu_ptx..WordFilter$GT$::h81a74b3f80d3fda1(&var_3f0);
                    core::ptr::drop_in_place$LT$uu_ptx..Config$GT$::h6e90df535937af8f(&var_458);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h958462a3e0e95c8d(&var_4e0);
                }
                else
                {
                    let var_4a0: i64;
                    let var_348_1: i64 = var_4a0;
                    let var_4b0: i128;
                    let var_358_1: i128 = var_4b0;
                    let mut var_370: i64 = rax_7;
                    let result_3: *mut i64 = result;
                    let mut var_4b8: u64;
                    let var_360_1: *mut *mut c_void = var_4b8;
                    let mut var_340: ();
                    uu_ptx::create_word_set::ha43c71debbb1b6c6(&var_340, &var_458, &var_3f0, 
                        &var_370);
                    
                    if var_290 != 0 || var_4d0 != 2
                    {
                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h74d88cca8ed314cc(&var_2e8);
                        var_4b8 = var_2d8;
                        var_4c8 = var_2e8;
                    }
                    else
                    {
                        let var_4d0_1: i64 = 1;
                        let rcx_9: i64 = *var_4d8.byte_offset(0x18);
                        
                        if rcx_9 == -0x8000000000000000
                        {
                            core::option::unwrap_failed::h0e11329e76906eaa();
                            /* no return */
                        }
                        
                        var_4c8 = rcx_9;
                        result_1 = *var_4d8.byte_offset(0x20);
                    }
                    
                    let mut result_4: *mut i128;
                    let mut rdx_6: *mut *mut c_void;
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
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_3e8);
    }
    result
}
