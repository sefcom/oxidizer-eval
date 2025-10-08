
  fn uu_fold::uumain::uumain::h5496c35893a2376a(arg1: i64) -> u64

{
    let mut var_3e8: ();
    uucore::Args::collect_lossy::h7598d3357d355182(&var_3e8, arg1);
    let var_3e0: i64;
    let var_3d8: i64;
    let mut var_2f8: i128;
    uu_fold::handle_obsolete::hddaf49443b83bcdb(&var_2f8, var_3e0, var_3d8);
    let var_2e8: i64;
    let var_388: i64 = var_2e8;
    let mut var_398: i128 = var_2f8;
    let var_2d0: i64;
    let mut r12: i64 = var_2d0;
    let mut rbp: i64;
    rbp = 1;
    let mut rbx: i64;
    rbx = 1;
    uu_fold::uu_app::h371d51ec06c336ae(&var_2f8);
    rbp = 1;
    let mut var_378: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h1b5d670a45ea75f5(&var_378, 
        &var_2f8, &var_398);
    let rax_2: i64 = var_378;
    let mut result: u64;
    let var_370: i64;
    let var_2e0: i64;
    let var_2d8: *mut i8;
    
    if -(rax_2) != -0x8000000000000000
    {
        let var_348: i64;
        let var_3a0_1: i64 = var_348;
        let var_358: i128;
        let var_3b0_1: i128 = var_358;
        let mut var_368: i128;
        let var_3c0_1: i128 = var_368;
        let mut var_3d0: i64 = rax_2;
        let var_3c8_1: i64 = var_370;
        rbp = 1;
        let rax_4: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_3d0, "bytesspaceswidthillegal width va…", 5);
        let rax_5: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_3d0, "spaceswidthillegal width value (…", 6);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf4aa48645510e5a3(
            &var_2f8, &var_3d0);
        let rax_6: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h971e6acbc41fbb1f(&var_2f8);
        let mut rbx_3: *mut i8;
        let mut r13_1: u64;
        let mut r14_1: i64;
        let mut r15_1: *mut i8;
        
        if rax_6 == 0
        {
            r13_1 = 0x50;
            rbp = 0;
            r15_1 = var_2d8;
            rbx_3 = var_2d8;
            r14_1 = var_2e0;
            
            if var_2e0 == -0x8000000000000000
            {
                goto 'label_456498;
            }
            
            goto 'label_45641f;
        }
        
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_2f8, rax_6);
        r15_1 = var_2d8;
        r14_1 = var_2f8;
        rbx_3 = *var_2f8[8];
        r12 = var_2e8;
        rbp = 1;
        'label_45641f:
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_2f8, rbx_3, 
            r12);
        let mut r14: *mut i8;
        
        if var_2f8 == 0
        {
            r13_1 = *var_2f8[8];
            'label_456486:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h372e82d18bc090f0(r14_1, rbx_3);
            'label_456498:
            r14 = r15_1;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hf2f1c6d98face94a(
                &var_2f8, &var_3d0);
            let mut var_338: i64;
            clap_builder::parser::error::MatchesError::unwrap::h27dba348ee30906b(&var_338, 
                &var_2f8);
            let mut rbx_5: u64;
            let mut rsi_13: i64;
            
            if var_338 == 0
            {
                let rax_7: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
                
                if rax_7 == 0
                {
                    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                    /* no return */
                }
                
                rbx_5 = rax_7;
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hdd3f2159a20b86da(&var_2f8, "-bytesspaceswidthillegal width v…", 1);
                var_368 = var_2e8;
                let zmm0_2: i128 = var_2f8;
                var_378 = zmm0_2;
                *(rbx_5 + 0x10) = var_2e8;
                *rbx_5 = zmm0_2;
                var_2f8 = 1;
                *var_2f8[8] = rbx_5;
                let var_2e8_1: i64 = 1;
                rsi_13 = 1;
            }
            else
            {
                core::iter::traits::iterator::Iterator::collect::h860c854e7760da52(&var_2f8, 
                    &var_338);
                rbx_5 = *var_2f8[8];
                rsi_13 = var_2e8;
            }
            
            let mut result_2: *mut c_void;
            let mut rdx_6: *mut *mut c_void;
            result_2 = uu_fold::fold::h8107b1fccb5c9bf8(rbx_5, rsi_13, rax_4, rax_5, r13_1);
            result = result_2;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h57ac378a3c8b4349(&var_2f8);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8c2663bbf235871e(&var_3d0);
        }
        else
        {
            let result_1: u64 =
                uu_fold::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hf2c0ba6e75d1f2c8(rbx_3, 
                r12, *var_2f8[1]);
            result = result_1;
            
            if result_1 == 0
            {
                r13_1 = &data_4e5f18;
                goto 'label_456486;
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h372e82d18bc090f0(r14_1, rbx_3);
            r14 = r15_1;
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8c2663bbf235871e(&var_3d0);
        }
        
        if rbp != 0
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h6132633c6a0c61e7(var_2e0, r14);
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_370);
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h6132633c6a0c61e7(var_2e0, var_2d8);
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h57ac378a3c8b4349(
        &var_3e8);
    result
}
