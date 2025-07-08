
  fn uu_mktemp::uumain::uumain::hbe5555b039ad0e2e(arg1: i64) -> *mut i64

{
    let mut var_478: ();
    core::iter::traits::iterator::Iterator::collect::he8be1adec482e7f0(&var_478, arg1);
    let mut var_2e8: i64;
    uu_mktemp::uu_app::h678f679507a186e9(&var_2e8);
    let mut var_3d8: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h5fc7b7c71f2359a5(&var_3d8, 
        &var_2e8, &var_478);
    let mut result: *mut i64;
    let mut var_428: i128;
    let var_3d0: *mut i32;
    let mut var_2d8: i128;
    
    if var_3d8 != -0x8000000000000000
    {
        let var_3a8: i64;
        let var_358_1: i64 = var_3a8;
        let var_3b8: i128;
        let var_368_1: i128 = var_3b8;
        let mut var_3c8: i128;
        let var_378_1: i128 = var_3c8;
        let mut var_388: i128 = var_3d8;
        uu_mktemp::Options::from::h443dd3893f930365(&var_428, &var_388);
        std::env::var::h511154690abe6389(&var_2e8, "POSIXLY_CORRECT[template]");
        let var_418: i128;
        
        if var_2e8 == 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::he26e00ff24602776(&var_2e8);
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&var_388, "templateDeadlock", 8) == 0
            {
                goto 'label_472b9a;
            }
            
            let var_468: i64;
            
            if var_468 == 0
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            let rax_9: i64 = var_468 * 3;
            let var_470: i64;
            
            if _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$std..ffi..os_str..OsStr$GT$$GT$::eq::ha5f536083d339933(*(var_470 + (rax_9 << 3) - 0x10), *(var_470 + (rax_9 << 3) - 8), *var_428[8], 
                var_418) != 0
            {
                goto 'label_472b9a;
            }
            
            *var_2d8[8] = -0x7ffffffffffffffa;
            result = alloc::boxed::Box$LT$T$GT$::new::h81fafefccffeca47(&var_2e8);
            core::ptr::drop_in_place$LT$uu_mktemp..Options$GT$::he84430dd8faf4926(&var_428);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h83a686a69d3d6469(&var_388);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::he26e00ff24602776(&var_2e8);
            'label_472b9a:
            let var_3e8: i128;
            let var_2a8_1: i128 = var_3e8;
            let var_3f8: i128;
            let var_2b8_1: i128 = var_3f8;
            let var_408: i128;
            let var_2c8_1: i128 = var_408;
            let var_2d8_1: i128 = var_418;
            var_2e8 = var_428;
            uu_mktemp::Params::from::h08dfed7a01f28665(&var_3d8, &var_2e8);
            let rcx_2: i64 = var_3d8;
            let mut zmm0_4: i128;
            
            if rcx_2 != -0x8000000000000000
            {
                zmm0_4 = var_3d0;
                let var_338_2: i128 = var_3c8;
                let var_348_2: i128 = zmm0_4;
                let r8_1: i64 = var_3b8;
                let var_438_1: i64 = r8_1;
                let mut var_448: i128 = var_3c8;
                let var_3a0: i128;
                let rax_12: i64 = *var_3a0[8];
                var_3c8 = rax_12;
                var_3d8 = var_3b8;
                let mut var_460: i64 = rcx_2;
                let rsi_8: i64 = zmm0_4;
                let rdx_4: size_t = *zmm0_4[8];
                let rcx_3: i64 = *var_448[8];
                let var_3df: i8;
                let var_390: i64;
                
                if var_3df == 0
                {
                    let var_3e0: i8;
                    let var_488_2: u64 = var_3e0;
                    let var_490_1: i64 = rax_12;
                    let var_498_1: *mut i32 = var_3d0;
                    uu_mktemp::exec::h4964a5bb0e6c4200(&var_2e8, rsi_8, rdx_4, rcx_3, r8_1, 
                        var_390);
                }
                else
                {
                    uu_mktemp::dry_exec::h0a7898737835babc(&var_2e8, rsi_8, rdx_4, rcx_3, r8_1, 
                        var_390, var_3d0, rax_12);
                }
                let rax_13: i64 = var_2e8;
                let var_3de: i8;
                let var_2e0: [u32; 0x4];
                
                if var_3de != 0
                {
                    if rax_13 != -0x8000000000000000
                    {
                        goto 'label_472daf;
                    }
                    
                    result =
                        uu_mktemp::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h6fe6f02797a60696(
                        var_2e0[0], _mm_shuffle_epi32(var_2e0, 0xee)[0]);
                    goto 'label_472d87;
                }
                
                if rax_13 != -0x8000000000000000
                {
                    'label_472daf:
                    let mut var_300: i64 = rax_13;
                    let var_2f8_1: [u32; 0x4] = var_2e0;
                    result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc85311bdbf48fb6a(uucore::mods::display::println_verbatim::h5bcfcd3708f9694a(&var_300));
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::heaa044c2009f3939(
                        &var_3d8);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::heaa044c2009f3939(
                        &var_448);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ae21e0dc128195b(&var_460);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h83a686a69d3d6469(&var_388);
                }
                else
                {
                    result = var_2e0[0];
                    _mm_shuffle_epi32(var_2e0, 0xee)[0];
                    'label_472d87:
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::heaa044c2009f3939(
                        &var_3d8);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::heaa044c2009f3939(
                        &var_448);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ae21e0dc128195b(&var_460);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h83a686a69d3d6469(&var_388);
                }
            }
            else
            {
                zmm0_4 = var_3d0;
                let var_328_1: i128 = var_3b8;
                let var_338_1: i128 = var_3c8;
                let var_348_1: i128 = zmm0_4;
                let var_2c8_2: i128 = var_3b8;
                let var_2d8_2: i128 = var_3c8;
                var_2e8 = zmm0_4;
                result = alloc::boxed::Box$LT$T$GT$::new::h81fafefccffeca47(&var_2e8);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h83a686a69d3d6469(&var_388);
            }
        }
    }
    else if *var_3d0.byte_offset(0xd5) != 5
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_3d0);
    }
    else
    {
        clap_builder::util::flat_map::FlatMap$LT$K$C$V$GT$::iter::h134ffb24717c5ed1(&var_2e8, 
            &var_3d0[8]);
        let var_418_1: i64 = var_2d8;
        var_428 = var_2e8;
        
        if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h01b87041e6942a90(core::iter::traits::iterator::Iterator::try_fold::h2d42ac3e53677c18(&var_428)) == 0
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_3d0);
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7ba27a2dd62ae859(
                &var_428, "too many templatesPOSIXLY_CORREC…", 0x12);
            var_2d8 = var_418_1;
            var_2e8 = var_428;
            *var_2d8[8] = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::h8d52bc748f976a23(&var_2e8);
            core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h678970666a3c3523(var_3d0);
        }
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::hb8a32b81c806225f(&var_478);
    result
}
