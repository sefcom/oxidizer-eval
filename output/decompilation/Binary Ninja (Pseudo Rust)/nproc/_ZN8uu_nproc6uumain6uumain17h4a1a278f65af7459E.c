
  fn uu_nproc::uumain::uumain::h4a1a278f65af7459(arg1: i64) -> u64

{
    let mut var_2f8: i8;
    uu_nproc::uu_app::h998d5466ee0e9d18(&var_2f8);
    let mut var_3a8: *mut i64;
    clap_builder::builder::command::Command::try_get_matches_from::h921b74ea6c524359(&var_3a8, 
        &var_2f8, arg1);
    let rax: *mut i64 = var_3a8;
    let var_3a0: i64;
    
    if -(rax) == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3a0);
    }
    
    let var_378: i64;
    let var_318_1: i64 = var_378;
    let var_388: i128;
    let var_328_1: i128 = var_388;
    let mut var_398: i128;
    let var_338_1: i128 = var_398;
    let mut var_348: *mut i64 = rax;
    let var_340_1: i64 = var_3a0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h95ab5b0ca4aa2ec6(
        &var_2f8, &var_348, "ignore(uutils coreutils) 0.0.30P…", 6);
    let rax_2: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h2a4d2283a7d2bd2d(
        "ignore(uutils coreutils) 0.0.30P…", 6, &var_2f8);
    let mut var_3b8: i8;
    let mut var_368: *mut i64;
    let mut var_2e8: *mut *mut i64;
    let mut rbp_1: i64;
    
    if rax_2 == 0
    {
        rbp_1 = 0;
    }
    else
    {
        let r14_1: i64 = *rax_2.byte_offset(8);
        let r15_1: i64 = *rax_2.byte_offset(0x10);
        let mut rax_3: *mut i8;
        let mut rdx_2: i64;
        rax_3 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h9b6c1414a16cc981(r14_1, r15_1);
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_3b8, rax_3, 
            rdx_2);
        
        if var_3b8 != 0
        {
            let var_3b7: i8;
            let mut var_3b9: i8 = var_3b7;
            var_3a8 = nullptr;
            let var_3a0_1: i64 = r14_1;
            var_398 = r15_1;
            *var_398[8] = 1;
            var_368 = &var_3a8;
            let var_360_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            let var_358_1: *mut i8 = &var_3b9;
            let var_350_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h3e61086f3d7b9af4;
            var_2f8 = &data_4e05c0;
            let var_2f0_1: i64 = 2;
            let var_2d8_1: i64 = 0;
            var_2e8 = &var_368;
            let mut var_2e0_1: i64 = 2;
            let mut var_310: i128;
            core::option::Option$LT$T$GT$::map_or_else::h9eac71f25a1b1f9c(&var_310, &var_2f8);
            var_2e0_1 = 1;
            var_2f8 = var_310;
            let var_300: *mut *mut i64;
            var_2e8 = var_300;
            let result: u64 = alloc::boxed::Box$LT$T$GT$::new::h4c07f6ade996acd8(&var_2f8);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hfa10aaf80f68f5e8(&var_348);
            return result;
        }
        
        let var_3b0: i64;
        rbp_1 = var_3b0;
    }
    
    std::env::var::h97f3f43dada70122(&var_2f8, "OMP_THREAD_LIMIT");
    let mut r14_2: i64;
    
    if (var_2f8 & 1) == 0
    {
        let r12_1: *mut *mut i64 = var_2e8;
        let var_2e0: i64;
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_3a8, r12_1, 
            var_2e0);
        r14_2 = -1;
        
        if var_3a8 == 0
        {
            r14_2 = (0 - 0) | var_3a0;
        }
        
        let var_2f0: i64;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5fada63a69b03a54(var_2f0, r12_1);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h8978e4c3daa9748b(&var_2f8);
        r14_2 = -1;
    }
    
    let mut r13_1: i64;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_348, "allignore(uutils coreutils) 0.0.…", 3) == 0
    {
        std::env::var::h97f3f43dada70122(&var_3a8, "OMP_NUM_THREADSError flushing st…");
        
        if var_3a8 != 1
        {
            let r15_3: i64 = var_398;
            let r13_2: i64 = *var_398[8];
            _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(
                &var_2e8, r15_3, r13_2);
            var_2f8 = 0;
            let var_2f0_2: i64 = r13_2;
            let var_2b8_1: i16 = 0;
            let mut rax_11: *mut i8;
            let mut rdx_8: i64;
            rax_11 = core::str::iter::SplitInternal$LT$P$GT$::next::hc3094b99fa4c8f31(&var_2f8);
            
            if rax_11 == 0
            {
                r13_1 = uu_nproc::available_parallelism::h7e39191f6c9c795b();
            }
            else
            {
                core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_368, 
                    rax_11, rdx_8);
                let var_360: i64;
                r13_1 = var_360;
                
                if (r13_1 == 0 | var_368) != 0
                {
                    r13_1 = uu_nproc::available_parallelism::h7e39191f6c9c795b();
                }
            }
            
            var_3b8 = r13_1;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5fada63a69b03a54(var_3a0, 
                r15_3);
        }
        else
        {
            r13_1 = uu_nproc::available_parallelism::h7e39191f6c9c795b();
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h8978e4c3daa9748b(&var_3a8);
        }
    }
    else
    {
        r13_1 = uu_nproc::num_cpus_all::hd72076020a4f12e1();
    }
    
    let rax_14: i64 = core::cmp::Ord::min::hd8378816db811468(r14_2, r13_1);
    let mut rcx_5: i64 = 1;
    
    if rax_14 > rbp_1
    {
        rcx_5 = rax_14 - rbp_1;
    }
    
    var_3b8 = rcx_5;
    var_3a8 = &var_3b8;
    let var_3a0_2: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    var_2f8 = &data_4e0568;
    let var_2f0_3: i64 = 2;
    let var_2d8_2: i64 = 0;
    var_2e8 = &var_3a8;
    let var_2e0_2: i64 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_2f8);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hfa10aaf80f68f5e8(&var_348);
    0
}
