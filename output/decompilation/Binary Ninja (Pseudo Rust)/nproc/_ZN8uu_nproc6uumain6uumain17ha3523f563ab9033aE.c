
  fn uu_nproc::uumain::uumain::ha3523f563ab9033a(arg1: i64) -> *mut i64

{
    let mut var_2f8: *mut c_void;
    uu_nproc::uu_app::h3da9a545ae06046a(&var_2f8);
    let mut var_408: *mut i8;
    clap_builder::builder::command::Command::try_get_matches_from::h4a07ba778773b710(&var_408, 
        &var_2f8, arg1);
    let rax: *mut i8 = var_408;
    let var_400: *mut i8;
    
    if rax == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_400);
    }
    
    let var_3d8: i64;
    let var_360_1: i64 = var_3d8;
    let var_3e8: i128;
    let var_370_1: i128 = var_3e8;
    let mut var_3f8: i128;
    let var_380_1: i128 = var_3f8;
    let mut var_390: *mut i8 = rax;
    let var_388_1: *mut i8 = var_400;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he1bfe3f05eac1902(
        &var_2f8, &var_390, "ignore0.0.28Print the number of …", 6);
    let rax_2: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::he7da396e8269390d(
        "ignore0.0.28Print the number of …", 6, &var_2f8);
    let mut var_410: i8;
    let mut var_3c8: i8;
    let var_3c0: i64;
    let mut var_3b8: *mut i64;
    let mut r12_1: i64;
    
    if rax_2 == 0
    {
        r12_1 = 0;
    }
    else
    {
        let r14_1: i64 = *rax_2.byte_offset(8);
        let r15_1: i64 = *rax_2.byte_offset(0x10);
        let mut rax_3: *mut i8;
        let mut rdx_2: i64;
        rax_3 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h293a8678a37ef744(r14_1, r15_1);
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_3c8, rax_3, rdx_2);
        
        if var_3c8 != 0
        {
            let var_3c7: i8;
            var_410 = var_3c7;
            var_408 = nullptr;
            let var_400_1: i64 = r14_1;
            var_3f8 = r15_1;
            *var_3f8[8] = 1;
            var_3b8 = &var_408;
            let var_3b0_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            let var_3a8_1: *mut i8 = &var_410;
            let var_3a0_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h98d79d8d19892e5a;
            var_2f8 = &data_50e4b8;
            let var_2f0_1: i64 = 2;
            let var_2d8_1: i64 = 0;
            let var_2e8_1: *mut *mut i64 = &var_3b8;
            let mut var_2e0_1: i64 = 2;
            let mut var_358: i128;
            core::option::Option$LT$T$GT$::map_or_else::h3b8854d416b71613(&var_358, &var_2f8);
            var_2e0_1 = 1;
            var_2f8 = var_358;
            let var_348: i64;
            let var_2e8_2: i64 = var_348;
            let result: *mut i64 = alloc::boxed::Box$LT$T$GT$::new::ha1ebd3061cf9b985(&var_2f8);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he8c9c7239af95834(&var_390);
            return result;
        }
        
        r12_1 = var_3c0;
    }
    
    std::env::var::h2318c396540c8104(&var_2f8, "OMP_THREAD_LIMITconnection reset…");
    let mut r14_2: i64 = -1;
    let var_3b0: i64;
    let var_2f0: *mut i64;
    
    if var_2f8 != 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h02690b1027f9de22(&var_2f8);
    }
    else
    {
        let var_2e0: i64;
        var_3f8 = var_2e0;
        var_408 = var_2f0;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_3b8, var_400, var_2e0);
        let rbp_1: i8 = var_3b8;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb6387026a6809cd4(&var_408);
        r14_2 = (0 - 0) | (0 - 0) | var_3b0;
        
        if var_2f8 != 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h02690b1027f9de22(&var_2f8);
        }
    }
    
    let mut r15_3: i64;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_390, "allignore0.0.28Print the number …", 3) == 0
    {
        std::env::var::h2318c396540c8104(&var_408, "OMP_NUM_THREADS");
        
        if var_408 == 0
        {
            let r15_4: i64 = *var_3f8[8];
            let var_3a8_2: i64 = r15_4;
            var_3b8 = var_400;
            _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(
                &var_2f8, var_3b0, r15_4);
            let var_2d8: i64;
            let var_310_1: i128 = var_2d8;
            let var_2e8: i64;
            let var_320_1: i128 = var_2e8;
            let var_330_1: i128 = var_2f8;
            let mut var_340: i64 = 0;
            let var_338_1: i64 = r15_4;
            let var_300_1: i16 = 0;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h10fc9985799e9278(&var_2f8, &var_340);
            
            if var_2e8 == 0
            {
                r15_3 = uu_nproc::available_parallelism::h0a12aac02eb8d812();
            }
            else
            {
                core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_3c8, *var_2f0, var_2f0[1]);
                
                if var_3c8 == 0
                {
                    r15_3 = var_3c0;
                }
                
                if var_3c8 != 0 || r15_3 == 0
                {
                    r15_3 = uu_nproc::available_parallelism::h0a12aac02eb8d812();
                }
            }
            
            var_410 = r15_3;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hd7cebb54887ea04d(
                &var_2f8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb6387026a6809cd4(&var_3b8);
        }
        else
        {
            let rax_10: i64 = uu_nproc::available_parallelism::h0a12aac02eb8d812();
            r15_3 = rax_10;
            var_410 = rax_10;
        }
        
        if var_408 != 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h02690b1027f9de22(&var_408);
        }
    }
    else
    {
        r15_3 = uu_nproc::num_cpus_all::h7340e3b3a8ccdb85();
    }
    
    let rax_13: i64 = core::cmp::min_by::hf28b4cdfe3eabc55(r14_2, r15_3);
    let mut rcx_2: i64 = 1;
    
    if rax_13 > r12_1
    {
        rcx_2 = rax_13 - r12_1;
    }
    
    var_410 = rcx_2;
    var_408 = &var_410;
    let var_400_2: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    var_2f8 = &data_50e460;
    let var_2f0_2: i64 = 2;
    let var_2d8_2: i64 = 0;
    let var_2e8_3: *mut *mut i8 = &var_408;
    let var_2e0_2: i64 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&var_2f8);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he8c9c7239af95834(&var_390);
    nullptr
}
