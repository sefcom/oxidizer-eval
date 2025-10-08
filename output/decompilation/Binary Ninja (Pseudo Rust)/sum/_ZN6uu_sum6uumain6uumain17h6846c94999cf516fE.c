
  fn uu_sum::uumain::uumain::h6846c94999cf516f(arg1: i64) -> u64

{
    let mut var_2f8: i128;
    uu_sum::uu_app::h22b6eed10a48226a(&var_2f8);
    let mut var_3f8: *mut i64;
    clap_builder::builder::command::Command::try_get_matches_from::h010691c38e4a811c(&var_3f8, 
        &var_2f8, arg1);
    let rax: *mut i64 = var_3f8;
    let var_3f0: i64;
    
    if -(rax) == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3f0);
    }
    
    let var_3c8: i64;
    let var_340_1: i64 = var_3c8;
    let mut var_3d8: i128;
    let var_350_1: i128 = var_3d8;
    let mut var_3e8: i128;
    let var_360_1: i128 = var_3e8;
    let mut var_370: *mut i64 = rax;
    let var_368_1: i64 = var_3f0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h86227b50abe21a44(
        &var_2f8, &var_370, "filei128 as dyn ERANGEEDEADLKENA…", 4);
    let mut var_338: i64;
    clap_builder::parser::error::MatchesError::unwrap::h900d5c8f1c00397d(&var_338, 
        "filei128 as dyn ERANGEEDEADLKENA…", 4, &var_2f8);
    let mut var_3b8: i64;
    let mut i_1: *const i8;
    let mut var_3a8: i64;
    let mut var_2e8: *mut *mut i64;
    
    if var_338 == 0
    {
        let i_4: *mut i8 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
        
        if i_4 == 0
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h342ab4e21d344bf8(&var_2f8, &data_418381, 1);
        var_3e8 = var_2e8;
        let zmm0_2: i128 = var_2f8;
        var_3f8 = zmm0_2;
        *i_4.byte_offset(0x10) = var_2e8;
        *i_4 = zmm0_2;
        var_3b8 = 1;
        i_1 = i_4;
        var_3a8 = 1;
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::h8612bd9333ecb813(&var_3b8, &var_338);
    }
    
    let rax_3: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_370, &data_417b34[0xc], 4);
    let mut i: *const i8;
    let mut r15_1: *const i8;
    
    if var_3a8 < 2
    {
        if var_3a8 != 1
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
            /* no return */
        }
        
        i = i_1;
        r15_1 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4b71e9aac84f9dc8(*i.byte_offset(8), *i.byte_offset(0x10), &data_418381, 1) ^ 1;
    }
    else
    {
        r15_1 = 1;
        i = i_1;
    }
    
    let rbx_1: i16 = ((rax_3 ^ 1) << 2) + 1;
    let rbp_2: *mut c_void = &i[var_3a8 * 0x18];
    let mut i_3: *const i8 = &i[0x18];
    
    do
    {
        let mut i_2: *const i8 = i;
        let rsi_5: *mut i8 = *i.byte_offset(8);
        let rdx_1: u64 = *i.byte_offset(0x10);
        i = i_3;
        let mut var_390: i32;
        uu_sum::open::h97fd496028ff67a9(&var_390, rsi_5, rdx_1);
        let mut var_408: i64;
        let mut var_3a0: *mut i64;
        let var_388: i64;
        let var_380: *mut i64;
        
        if var_390 != 1
        {
            if rax_3 == 0
            {
                uu_sum::bsd_sum::had74e08c6a1e4c0d(&var_2f8, var_388, var_380);
            }
            else
            {
                uu_sum::sysv_sum::h712a5fcd71af1ffc(&var_2f8, var_388, var_380);
            }
            
            let mut result: u64;
            
            if var_2f8 == 1
            {
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                'label_454339:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hce4ff74d33e74a0e(&var_3b8);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hcd62b237112384cd(&var_370);
                return result;
            }
            
            var_3a0 = *var_2f8[8];
            var_408 = var_2e8;
            std::io::stdio::stdout::hb6a8e10bcccf3287();
            var_2f8 = &std::io::stdio::STDOUT::h411b213c5c9add46;
            var_390 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_2f8);
            let mut var_2d0: i16;
            let mut result_1: u64;
            
            if r15_1 == 0
            {
                var_2f8 = &var_408;
                *var_2f8[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::h76cd049dd60d778d;
                var_2e8 = &var_3a0;
                let var_2e0_3: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                let var_2d8_3: i64 = 0;
                var_2d0 = rbx_1;
                var_3f8 = &data_4e10e0;
                let var_3f0_3: i64 = 3;
                var_3d8 = &data_418388;
                *var_3d8[8] = 2;
                var_3e8 = &var_2f8;
                *var_3e8[8] = 3;
                
                if std::io::Write::write_fmt::hc6c82a1bef370750(&var_390, &var_3f8) != 0
                {
                    result_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    'label_454324:
                    result = result_1;
                    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h97970d38f5c4b014(
                        var_390);
                    goto 'label_454339;
                }
                
                core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h97970d38f5c4b014(
                    var_390);
            }
            else
            {
                var_2f8 = &var_408;
                *var_2f8[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::h76cd049dd60d778d;
                var_2e8 = &var_3a0;
                let var_2e0_2: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                let var_2d8_2: *const *const i8 = &i_2;
                var_2d0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf45ce89b4f713ec;
                let var_2c8_1: i64 = 0;
                let var_2c0_1: i16 = rbx_1;
                var_3f8 = &data_4e1110;
                let var_3f0_2: i64 = 4;
                var_3d8 = &data_4183e8;
                *var_3d8[8] = 3;
                var_3e8 = &var_2f8;
                *var_3e8[8] = 4;
                
                if std::io::Write::write_fmt::hc6c82a1bef370750(&var_390, &var_3f8) != 0
                {
                    result_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    goto 'label_454324;
                }
                
                core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h97970d38f5c4b014(
                    var_390);
            }
        }
        else
        {
            var_408 = var_388;
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(var_380[0xb](var_388));
            let mut rax_9: *mut i64;
            let mut rdx_3: i64;
            rax_9 = uucore::util_name::h074417a1e6395129();
            var_3a0 = rax_9;
            let var_398_1: i64 = rdx_3;
            var_3f8 = &var_3a0;
            let var_3f0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he1ea19f857f8e1b5;
            var_3e8 = &var_408;
            *var_3e8[8] = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h19dd74e6fcb07769;
            var_2f8 = &data_4e1098;
            *var_2f8[8] = 3;
            let var_2d8_1: i64 = 0;
            var_2e8 = &var_3f8;
            let var_2e0_1: i64 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_2f8);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h5ecc831ddc7a04ed(var_408, var_380);
        }
        i_3 = &i[0x18];
        
        if i == rbp_2
        {
            i_3 = i;
        }
        
        if i == rbp_2
        {
            break;
        }
    } while i != 0;
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hce4ff74d33e74a0e(
        &var_3b8);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hcd62b237112384cd(&var_370);
    0
}
