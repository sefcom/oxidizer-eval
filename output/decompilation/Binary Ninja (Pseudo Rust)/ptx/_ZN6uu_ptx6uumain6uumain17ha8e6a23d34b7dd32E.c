
  fn uu_ptx::uumain::uumain::ha8e6a23d34b7dd32(arg1: i64) -> u64

{
    let mut var_3c8: *mut *mut [i8; 0xa3];
    uu_ptx::uu_app::h1c00958dd96a6a6b(&var_3c8);
    let mut var_528: *mut *mut [i8; 0xa3];
    clap_builder::builder::command::Command::try_get_matches_from::hf5d2c4a8ca2b27a5(&var_528, 
        &var_3c8, arg1);
    let rax: *mut *mut [i8; 0xa3] = var_528;
    let result_8: *mut *mut c_void;
    
    if -(rax) == -0x8000000000000000
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(result_8);
    }
    
    let var_4f8: i64;
    let var_448: i64 = var_4f8;
    let mut var_508: i128;
    let var_458: i128 = var_508;
    let mut var_518: i128;
    let var_468: i128 = var_518;
    let mut var_478: *mut *mut [i8; 0xa3] = rax;
    let result_9: *mut *mut c_void = result_8;
    uu_ptx::get_config::h0871b6c26e5986f1(&var_3c8, &var_478);
    let rax_2: *mut *mut [i8; 0xa3] = var_3c8;
    let result_4: *mut *mut c_void;
    let mut result: u64 = result_4;
    
    if rax_2 != -0x8000000000000000
    {
        let var_380: i128;
        let var_3f8_1: i128 = var_380;
        let var_390: i128;
        let var_408_1: i128 = var_390;
        let var_3a0: i128;
        let var_418_1: i128 = var_3a0;
        let mut var_3b0: i128;
        let var_428_1: i128 = var_3b0;
        let mut var_440: *mut *mut [i8; 0xa3] = rax_2;
        let result_3: u64 = result;
        let var_3b8: u64;
        let var_430_1: u64 = var_3b8;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h72ce5736d951d193(
            &var_3c8, &var_478, "filemode{", 4);
        clap_builder::parser::error::MatchesError::unwrap::hb151fffebee1738c(&var_528, "filemode{", 
            4, &var_3c8);
        let var_f0_1: i128 = var_528;
        let var_e0_1: i128 = var_518;
        let var_d0_1: i128 = var_508;
        let var_c0_1: i128 = var_4f8;
        let mut var_f8: i64 = 1;
        let var_b0_1: i64 = 0;
        let var_70_1: i64 = 0;
        let mut var_578: i128;
        let mut var_568_1: u64;
        let mut var_558: i128;
        let var_548: u64;
        let var_370: i64;
        let mut rbx_1: *mut *mut [i8; 0xa3];
        let mut r13_1: u64;
        let mut result_7: *mut *mut c_void;
        
        if var_370 != 0
        {
            core::iter::traits::iterator::Iterator::collect::h5afcec4cfc7ff9d0(&var_558, &var_f8);
            
            if var_548 == 0
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::haecf4c95bb52634c(&var_3c8, "-extra operand /home/34r7hm4n/.r…", 1);
                var_518 = var_3b8;
                var_528 = var_3c8;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h637bfad009f371fd(&var_558, &var_528);
            }
            
            var_568_1 = var_548;
            var_578 = var_558;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::haecf4c95bb52634c(&var_3c8, "-extra operand /home/34r7hm4n/.r…", 1);
            rbx_1 = var_3c8;
            result_7 = result_4;
            r13_1 = var_3b8;
            goto 'label_51b755;
        }
        
        let rax_5: *mut i64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
        
        if rax_5 == 0
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd310af34a44ea93d(&var_528, &var_f8);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::haecf4c95bb52634c(&var_3c8, "-extra operand /home/34r7hm4n/.r…", 1);
        let mut rdi_13: *mut *mut [i8; 0xa3] = var_3c8;
        let mut result_6: *mut *mut c_void = result_4;
        let r15: *mut *mut [i8; 0xa3] = var_528;
        let mut r14_1: u64;
        
        if r15 != -0x8000000000000000
        {
            r14_1 = var_518;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c43411a32210947(rdi_13, 
                result_6);
            result_6 = result_8;
            rdi_13 = r15;
        }
        else
        {
            r14_1 = var_3b8;
        }
        
        *rax_5 = rdi_13;
        rax_5[1] = result_6;
        rax_5[2] = r14_1;
        var_578 = 1;
        *var_578[8] = rax_5;
        var_568_1 = 1;
        _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd310af34a44ea93d(&var_528, &var_f8);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::haecf4c95bb52634c(&var_3c8, "-extra operand /home/34r7hm4n/.r…", 1);
        rbx_1 = var_3c8;
        result_7 = result_4;
        let r12_2: *mut *mut [i8; 0xa3] = var_528;
        
        if r12_2 != -0x8000000000000000
        {
            r13_1 = var_518;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c43411a32210947(rbx_1, 
                result_7);
            result_7 = result_8;
            rbx_1 = r12_2;
        }
        else
        {
            r13_1 = var_3b8;
        }
        
        _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd310af34a44ea93d(&var_558, &var_f8);
        let r12_3: i64 = var_558;
        let mut var_4a8: *mut i64;
        
        if r12_3 != -0x8000000000000000
        {
            let r13_2: i64 = *var_558[8];
            var_528 = nullptr;
            let var_520: i64 = r13_2;
            var_518 = var_548;
            *var_518[8] = 1;
            var_4a8 = &var_528;
            let var_4a0_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_3c8 = &data_650498;
            let var_3c0: i64 = 1;
            *var_3b0[8] = 0;
            let var_3b8_1: *mut *mut i64 = &var_4a8;
            var_3b0 = 1;
            let mut var_3e0: i128;
            core::option::Option$LT$T$GT$::map_or_else::hbdb9e301cc9bb1ce(&var_3e0, &var_3c8);
            var_3b0 = 1;
            var_3c8 = var_3e0;
            let var_3d0: i64;
            let var_3b8_2: i64 = var_3d0;
            result = alloc::boxed::Box$LT$T$GT$::new::had9a1a842e4db98a(&var_3c8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c43411a32210947(r12_3, r13_2);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hb5663e3f3b5aea09(&var_558);
            'label_51b755:
            uu_ptx::WordFilter::new::h59c276fe1fe77d78(&var_3c8, &var_478, &var_440);
            let rax_6: *mut *mut [i8; 0xa3] = var_3c8;
            result = result_4;
            
            if rax_6 != -0x8000000000000000
            {
                let var_350: i64;
                let var_4b0_1: i64 = var_350;
                let var_360: i128;
                let var_4c0_1: i128 = var_360;
                let var_4d0_1: i128 = var_370;
                let var_4e0_1: i128 = var_380;
                let var_4f0_1: i128 = var_390;
                var_508 = var_3a0;
                var_518 = var_3b0;
                var_528 = rax_6;
                let result_1: u64 = result;
                var_518 = var_3b8;
                uu_ptx::read_input::h2aa7184f71c3fbbd(&var_3c8, *var_578[8], var_568_1);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h5f2fe159620f481a(&var_558, &var_3c8);
                let rax_7: *mut i64 = var_558;
                result = *var_558[8];
                
                if rax_7 != 0
                {
                    let var_530: i64;
                    let var_480_1: i64 = var_530;
                    let var_540: i128;
                    let var_490_1: i128 = var_540;
                    var_4a8 = rax_7;
                    let result_2: u64 = result;
                    let var_498_1: u64 = var_548;
                    uu_ptx::create_word_set::hc9ac89a5cc609dad(&var_3c8, &var_440, &var_528, 
                        &var_4a8);
                    let mut result_5: u64;
                    let mut rdx_6: u64;
                    result_5 = uu_ptx::write_traditional_output::hd12854409474720a(&var_440, 
                        &var_4a8, &var_3c8, result_7, r13_1);
                    result = result_5;
                    core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$uu_ptx..WordRef$GT$$GT$::h0a0bf2ea53c34a94(&var_3c8);
                    core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$uu_ptx..FileContent$GT$$GT$::h21128070f469357e(&var_4a8);
                }
                
                core::ptr::drop_in_place$LT$uu_ptx..WordFilter$GT$::h822d17abc90201bf(&var_528);
            }
        }
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c43411a32210947(rbx_1, result_7);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hfd38882339c58216(&var_578);
        core::ptr::drop_in_place$LT$uu_ptx..Config$GT$::h41b400fd0146e447(&var_440);
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hdffd26dae7360ee4(&var_478);
    result
}
