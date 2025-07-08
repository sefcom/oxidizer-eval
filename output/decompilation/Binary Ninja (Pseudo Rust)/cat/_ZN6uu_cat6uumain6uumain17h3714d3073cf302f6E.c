
  fn uu_cat::uumain::uumain::h3714d3073cf302f6(arg1: i64) -> *mut i128

{
    let mut var_348: i128;
    uu_cat::uu_app::h297ec10995593580(&var_348);
    let mut var_3e8: *mut i128;
    clap_builder::builder::command::Command::try_get_matches_from::hafbe22770e67234c(&var_3e8, 
        &var_348, arg1);
    let rax: *mut i128 = var_3e8;
    let var_3e0: i64;
    
    if rax == -0x8000000000000000
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_3e0);
    }
    
    let var_3b8: i64;
    let var_370: i64 = var_3b8;
    let var_3c8: i128;
    let var_380: i128 = var_3c8;
    let var_3d8: i128;
    let var_390: i128 = var_3d8;
    let mut var_3a0: *mut i128 = rax;
    let var_398: i64 = var_3e0;
    let mut rcx_3: i8 = 1;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_3a0, "number-nonblankeshow-endsnumbers…", 0xf) == 0
    {
        rcx_3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_3a0, "numbersqueeze-blanktshow-tabsign…", 6) * 2;
    }
    
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8c15b3df3c7c9d45(&var_348, 
        "show-a", 8);
    let zmm0_2: i128 = var_348;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8c15b3df3c7c9d45(&var_348, 
        "eshow-endsnumbersqueeze-blanktsh…", 1);
    let zmm0_3: i128 = var_348;
    let var_3a8: *mut c_void = "tshow-tabsignored-udescription()…";
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8c15b3df3c7c9d45(&var_348, 
        "tshow-tabsignored-udescription()…", 1);
    let zmm0_4: i128 = var_348;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8c15b3df3c7c9d45(&var_3e8, 
        "show-nonprintingPossible values:…", 0x10);
    let var_2f0: i64 = var_3d8;
    let mut var_300: i128 = var_3e8;
    var_348 = zmm0_2;
    let var_330: i128 = zmm0_3;
    let var_338: i64;
    let var_320: i64 = var_338;
    let var_318: i128 = zmm0_4;
    let var_308: i64 = var_338;
    var_3e8 = &var_348;
    let mut var_2e8: ();
    let var_3e0_1: *mut c_void = &var_2e8;
    let rax_11: i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h4d38e22d3789febd(&var_3e8, &var_3a0);
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u3b$$u20$4$u5d$$GT$::h285049efda19b58d(
        &var_348);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8c15b3df3c7c9d45(&var_348, 
        "show-endsnumbersqueeze-blanktsho…", 9);
    let zmm0_6: i128 = var_348;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8c15b3df3c7c9d45(&var_348, 
        "show-a", 8);
    let zmm0_7: i128 = var_348;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8c15b3df3c7c9d45(&var_3e8, 
        "eshow-endsnumbersqueeze-blanktsh…", 1);
    let var_308_1: i64 = var_3d8;
    let var_318_1: i128 = var_3e8;
    var_348 = zmm0_6;
    let var_330_1: i128 = zmm0_7;
    let var_320_1: i64 = var_338;
    var_3e8 = &var_348;
    let var_3e0_2: *mut i128 = &var_300;
    let rax_17: i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h4d38e22d3789febd(&var_3e8, &var_3a0);
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u3b$$u20$3$u5d$$GT$::hb11cd236e7793c22(
        &var_348);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8c15b3df3c7c9d45(&var_348, 
        "show-a", 8);
    let zmm0_9: i128 = var_348;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8c15b3df3c7c9d45(&var_348, 
        "show-tabsignored-udescription() …", 9);
    let zmm0_10: i128 = var_348;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8c15b3df3c7c9d45(&var_3e8, 
        var_3a8, 1);
    let var_308_2: i64 = var_3d8;
    let var_318_2: i128 = var_3e8;
    var_348 = zmm0_9;
    let var_330_2: i128 = zmm0_10;
    let var_320_2: i64 = var_338;
    var_3e8 = &var_348;
    let var_3e0_3: *mut i128 = &var_300;
    let rax_23: i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h4d38e22d3789febd(&var_3e8, &var_3a0);
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u3b$$u20$3$u5d$$GT$::hb11cd236e7793c22(
        &var_348);
    let rax_24: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_3a0, "squeeze-blanktshow-tabsignored-u…", 0xd);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hde9984c10c8b7a7c(
        &var_348, &var_3a0, "filei128 as dyn ERANGEEDEADLKENA…", 4);
    clap_builder::parser::error::MatchesError::unwrap::h166fa5812f149320(&var_3e8, 
        "filei128 as dyn ERANGEEDEADLKENA…", 4, &var_348);
    
    if var_3e8 == 0
    {
        let rax_25: *mut i128 = alloc::alloc::Global::alloc_impl::hf61749d460433fff();
        
        if rax_25 == 0
        {
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
            /* no return */
        }
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8c15b3df3c7c9d45(&var_348, 
            "-Mismatch between definition and…", 1);
        let var_418_3: i64 = var_338;
        let zmm0_13: i128 = var_348;
        let var_428_3: i128 = zmm0_13;
        rax_25[1] = var_338;
        *rax_25 = zmm0_13;
        alloc::slice::hack::into_vec::hd0042bfcfa9cef1c(&var_348, rax_25, 1);
    }
    else
    {
        let var_48_1: i128 = var_3b8;
        let var_58_1: i128 = var_3c8;
        let var_68_1: i128 = var_3d8;
        let mut var_78: i128 = var_3e8;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h02e9ff3463a0508c(&var_348, &var_78);
    }
    
    *var_3e8[4] = rcx_3;
    var_3e8 = rax_24;
    *var_3e8[1] = rax_23;
    *var_3e8[2] = rax_17;
    *var_3e8[3] = rax_11;
    let result: *mut i128 = uu_cat::cat_files::h6abdb7a5d8f0206f(*var_348[8], var_338, &var_3e8);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hff841ab73154f8fc(
        &var_348);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h46c2762526e71bd4(&var_3a0);
    result
}
