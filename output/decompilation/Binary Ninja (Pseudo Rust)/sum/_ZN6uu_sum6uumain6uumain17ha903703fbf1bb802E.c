
  fn uu_sum::uumain::uumain::ha903703fbf1bb802(arg1: i64) -> *mut i64

{
    let mut var_2f8: i128;
    uu_sum::uu_app::hbdfcd560e86e61fa(&var_2f8);
    let mut var_438: *mut i64;
    clap_builder::builder::command::Command::try_get_matches_from::h7bb4a4ed4c02a1a0(&var_438, 
        &var_2f8, arg1);
    let rax: *mut i64 = var_438;
    let var_430: i64;
    
    if rax == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_430);
    }
    
    let var_408: i64;
    let var_340_1: i64 = var_408;
    let mut var_418: i128;
    let var_350_1: i128 = var_418;
    let mut var_428: i128;
    let var_360_1: i128 = var_428;
    let mut var_370: *mut i64 = rax;
    let var_368_1: i64 = var_430;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h8411335ddc2e2dac(
        &var_2f8, &var_370, "filei128 as dyn ERANGEEDEADLKENA…", 4);
    clap_builder::parser::error::MatchesError::unwrap::h87f32a93d09a0aa2(&var_438, 
        "filei128 as dyn ERANGEEDEADLKENA…", 4, &var_2f8);
    let mut var_3e8: i128;
    let mut var_3d8: *mut *mut i64;
    let mut var_3b0: ();
    
    if var_438 == 0
    {
        let rax_2: *mut i128 = alloc::alloc::Global::alloc_impl::hf61749d460433fff();
        
        if rax_2 == 0
        {
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
            /* no return */
        }
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h5cbecd347a16c703(&var_2f8);
        let var_2e8: *mut *mut i64;
        var_3d8 = var_2e8;
        let zmm0_3: i128 = var_2f8;
        var_3e8 = zmm0_3;
        rax_2[1] = var_2e8;
        *rax_2 = zmm0_3;
        alloc::slice::hack::into_vec::h11f95d209dbce12a(&var_3b0, rax_2, 1);
    }
    else
    {
        let var_308_1: i128 = var_408;
        let var_318_1: i128 = var_418;
        let var_328_1: i128 = var_428;
        let mut var_338: i128 = var_438;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd417ab4e14c6efef(&var_3b0, &var_338);
    }
    
    let rax_4: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_370, &anon.b1652e42acb5298d6255d984603c6a54.2.llvm.2130229470187885326, 4);
    let var_3a0: i64;
    let mut rax_5: i64 = var_3a0;
    let mut var_43a_1: i8 = 1;
    let var_3a8: *mut c_void;
    
    if rax_5 <= 1
    {
        if rax_5 != 1
        {
            core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
            /* no return */
        }
        
        *var_3a8.byte_offset(8);
        *var_3a8.byte_offset(0x10);
        var_43a_1 = _$LT$alloc..string..String$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::ne::hb4f2d17f007cd88a.specialized.1();
        rax_5 = var_3a0;
    }
    
    let mut var_398: *mut c_void = var_3a8;
    let var_390_1: *mut c_void = var_3a8.byte_offset(rax_5 * 0x18);
    
    for let mut i: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdd4670608fe27979(&var_398); i != 0; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdd4670608fe27979(&var_398)
    {
        let mut i_1: *mut c_void = i;
        uu_sum::open::hc6d78e625deb9f03(&var_3e8, *i.byte_offset(8), *i.byte_offset(0x10));
        let rdi_14: i64 = *var_3e8[8];
        let rsi_7: *mut i64 = var_3d8;
        let mut var_3f8: i64;
        let mut var_380: i64;
        
        if var_3e8 == 0
        {
            let mut rax_12: i64;
            let mut rdx_3: i16;
            
            if rax_4 == 0
            {
                rax_12 = uu_sum::bsd_sum::h3ffaf9234bf825c3(rdi_14, rsi_7);
            }
            else
            {
                rax_12 = uu_sum::sysv_sum::h29b452e8d3fae5cd(rdi_14, rsi_7);
            }
            
            var_380 = rax_12;
            var_3f8 = rdx_3;
            
            if var_43a_1 == 0
            {
                var_438 = &var_3f8;
                let var_430_1: fn(arg1: *mut i16, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hc16e9a303f8fca40;
                var_428 = &var_380;
                *var_428[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                var_418 = ((rax_4 ^ 1) << 2) + 1;
                *var_418[8] = 0;
                var_2f8 = 2;
                let var_2e8_1: i64 = 1;
                let var_2e0_1: i64 = 2;
                let var_2d8_1: i64 = 0;
                let var_2d0_1: i64 = 0x800000020;
                let var_2c8_1: i8 = 3;
                let var_2c0_1: i64 = 2;
                let mut var_2b0: i64;
                __builtin_memcpy(&var_2b0, 
                    "\x01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00", 0x20);
                let var_290_1: i8 = 3;
                var_3e8 = &data_50fab8;
                *var_3e8[8] = 3;
                let var_3c8_1: *mut i128 = &var_2f8;
                let var_3c0_1: i64 = 2;
                var_3d8 = &var_438;
                let var_3d0_1: i64 = 3;
                std::io::stdio::_print::he918bceb0c89db46(&var_3e8);
            }
            else
            {
                var_438 = &var_3f8;
                let var_430_3: fn(arg1: *mut i16, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hc16e9a303f8fca40;
                var_428 = &var_380;
                *var_428[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                var_418 = &i_1;
                *var_418[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb5b251f5996ecb26;
                let var_408_1: *mut c_void = ((rax_4 ^ 1) << 2) + 1;
                let var_400_1: i64 = 0;
                var_2f8 = 2;
                let var_2e8_3: i64 = 1;
                let var_2e0_3: i64 = 3;
                let var_2d8_3: i64 = 0;
                let var_2d0_2: i64 = 0x800000020;
                let var_2c8_2: i8 = 3;
                let var_2c0_2: i64 = 2;
                let mut var_2b0_1: i64;
                __builtin_memcpy(&var_2b0_1, 
                    "\x01\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 0x21);
                let var_288_1: i64 = 2;
                let var_278_1: i64 = 2;
                let var_268_1: i64 = 2;
                let var_260_1: i64 = 0x20;
                let var_258_1: i8 = 3;
                var_3e8 = &data_50fae8;
                *var_3e8[8] = 4;
                let var_3c8_2: *mut i128 = &var_2f8;
                let var_3c0_2: i64 = 3;
                var_3d8 = &var_438;
                let var_3d0_2: i64 = 4;
                std::io::stdio::_print::he918bceb0c89db46(&var_3e8);
            }
        }
        else
        {
            var_3f8 = rdi_14;
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(rsi_7[0xc]());
            let mut rax_11: i64;
            let mut rdx_2: i64;
            rax_11 = uucore::util_name::h60d842bf27b05e82();
            var_380 = rax_11;
            let var_378_1: i64 = rdx_2;
            var_438 = &var_380;
            let var_430_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haa62e7285047aad2;
            var_428 = &var_3f8;
            *var_428[8] = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb10dae7654710d7f;
            var_2f8 = &data_50fa70;
            *var_2f8[8] = 3;
            let var_2d8_2: i64 = 0;
            let var_2e8_2: *mut *mut i64 = &var_438;
            let var_2e0_2: i64 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2f8);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h329148619ba10487(var_3f8, rsi_7);
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h8670efed1fef2e3f(
        &var_3b0);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6657a28c01b53c01(&var_370);
    nullptr
}
