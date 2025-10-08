
  fn uu_numfmt::uumain::uumain::h7a36dd360fce0307(arg1: i64) -> u64

{
    let mut var_2e0: *mut i64;
    uu_numfmt::uu_app::h17d783a9d7220ae7(&var_2e0);
    let mut var_3f0: *mut i64;
    clap_builder::builder::command::Command::try_get_matches_from::hfb908c4e8fd8a90b(&var_3f0, 
        &var_2e0, arg1);
    let rax: *mut i64 = var_3f0;
    let var_3e8: i64;
    
    if -(rax) == -0x8000000000000000
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3e8);
    }
    
    let var_3c0: i64;
    let var_410: i64 = var_3c0;
    let mut var_3d0: i128;
    let var_420: i128 = var_3d0;
    let var_3e0: i128;
    let var_430: i128 = var_3e0;
    let mut var_440: *mut i64 = rax;
    let var_438: i64 = var_3e8;
    uu_numfmt::parse_options::hdd4028f9a896523f(&var_2e0, &var_440);
    let rbx_1: *mut i64 = var_2e0;
    let mut result: u64;
    let mut var_2d8: *mut *mut c_void;
    let mut var_2d0: i128;
    
    if rbx_1 != 2
    {
        let mut var_458: i128 = var_2d0;
        let mut var_2b8: ();
        memcpy(&*var_3d0[8], &var_2b8, 0xa8);
        let zmm0_3: i128 = var_458;
        let var_408_1: i128 = zmm0_3;
        let var_3e0_1: i128 = zmm0_3;
        let var_2c0: i64;
        var_3d0 = var_2c0;
        var_3f0 = rbx_1;
        let var_3e8_1: *mut *mut c_void = var_2d8;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h471fa3c8de9cc35d(
            &var_2e0, &var_440);
        let mut var_320: i64;
        clap_builder::parser::error::MatchesError::unwrap::h7285758572399059(&var_320, &var_2e0);
        
        if var_320 == 0
        {
            std::io::stdio::stdin::h9a05a2c3e7544b2a();
            var_458 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
            let mut rax_5: *mut i64;
            let mut rdx_3: i8;
            rax_5 = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(&var_458);
            var_2e0 = rax_5;
            var_2d8 = rdx_3 & 1;
            let mut result_2: u64;
            let mut rdx_4: *mut *mut c_void;
            result_2 = uu_numfmt::handle_buffer::h8d59c98e3da551b3(&var_2e0, &var_3f0);
            result = result_2;
            core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h74753e38be762355(var_2e0, 
                var_2d8);
            
            if result == 0
            {
                result = 0;
            }
            else
            {
                'label_463ac0:
                std::io::stdio::stdout::hb6a8e10bcccf3287();
                var_2e0 = &std::io::stdio::STDOUT::h411b213c5c9add46;
                core::result::Result$LT$T$C$E$GT$::expect::h35336489fa14421a(_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(&var_2e0));
            }
        }
        else
        {
            let mut result_1: *mut i128;
            let mut rdx_2: *mut *mut c_void;
            result_1 = uu_numfmt::handle_args::h88f782532eeab52a(&var_320, &var_3f0);
            result = result_1;
            
            if result_1 != 0
            {
                goto 'label_463ac0;
            }
            
            result = 0;
        }
        
        core::ptr::drop_in_place$LT$uu_numfmt..options..NumfmtOptions$GT$::h46b9f219212e0ff3(
            &var_3f0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2f0f0406eae3d8c2(&var_440);
    }
    else
    {
        let rcx_4: i64 = *var_2d0[8];
        let zmm0_2: i128 = var_2d8;
        let var_408: i128 = zmm0_2;
        let var_3f8_1: i64 = rcx_4;
        *var_2d0[8] = rcx_4;
        var_2d8 = zmm0_2;
        var_2e0 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::hb6e44097f5c9c613(&var_2e0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2f0f0406eae3d8c2(&var_440);
    }
    result
}
