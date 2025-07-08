
  fn uu_dirname::uumain::uumain::h11513daeca688bec(arg1: i64) -> *mut i64

{
    let mut var_5c8: i128;
    uu_dirname::uu_app::ha975dcebe50fa881(&var_5c8);
    let mut var_2f8: *mut i8;
    clap_builder::builder::command::Command::after_help::h7c6e8d1a8e0241d3(&var_2f8, &var_5c8, 
        "Output each NAME with its last n…", 0x95);
    let mut var_678: i64;
    clap_builder::builder::command::Command::try_get_matches_from::hd708e816ad35cd23(&var_678, 
        &var_2f8, arg1);
    let rax: i64 = var_678;
    let var_670: i64;
    
    if rax == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_670);
    }
    
    let var_648: i64;
    let var_610_1: i64 = var_648;
    let var_658: i128;
    let var_620_1: i128 = var_658;
    let var_668: i128;
    let var_630_1: i128 = var_668;
    let mut var_640: i64 = rax;
    let var_638_1: i64 = var_670;
    let mut rax_3: i8 = 0xa;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_640, "zeroAnsi -- \x1b[8mhelpNoneshimn…", 4) != 0
    {
        rax_3 = 0;
    }
    
    let mut var_689: i8 = rax_3;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hbca69427bbb05630(
        &var_5c8, &var_640, "dir./Output each NAME with its l…", 3);
    let mut rsi_4: *const i8 = "dir./Output each NAME with its l…";
    clap_builder::parser::error::MatchesError::unwrap::h0a916d4903afd704(&var_2f8, 
        "dir./Output each NAME with its l…", 3, &var_5c8);
    let mut rax_4: *mut i8 = var_2f8;
    let var_2e8: u128;
    let mut rcx_3: *const i8;
    let mut rdx_1: i64;
    let mut zmm0_2: i128;
    let mut zmm1_2: u128;
    
    if rax_4 == 0
    {
        zmm0_2 = {0};
        zmm1_2 = "a Display implementation returne…";
        rcx_3 = "a Display implementation returne…";
        rax_4 = core::ops::function::FnOnce::call_once::hf9816fa1da96fc6b;
        rdx_1 = 0;
    }
    else
    {
        let var_2f0: *mut i8;
        rcx_3 = var_2f0;
        zmm1_2 = var_2e8;
        let var_2d8: i128;
        zmm0_2 = var_2d8;
        let var_2c8: *mut i8;
        rsi_4 = var_2c8;
        let var_2c0: i64;
        rdx_1 = var_2c0;
    }
    
    let mut var_608: *mut i8 = rax_4;
    let var_600_1: *const i8 = rcx_3;
    let var_5f8_1: u128 = zmm1_2;
    let var_5e8_1: i128 = zmm0_2;
    let var_5d8_1: *const i8 = rsi_4;
    let var_5d0_1: i64 = rdx_1;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd09e5e62fed0fc94(&var_678, &var_608);
    let rax_5: i64 = var_668;
    
    if rax_5 == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd9f27690394bc0dc(&var_2f8);
        let var_5b8_5: i64 = var_2e8;
        var_5c8 = var_2f8;
        let var_5b0_1: i32 = 1;
        let result: *mut i64 = alloc::boxed::Box$LT$T$GT$::new::h0f4bd833c5b203ad(&var_5c8);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h231b973bb6e880f3(&var_678);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc82f33e0af68aa1d(&var_640);
        return result;
    }
    
    let mut var_688: i64 = var_670;
    let var_680_1: i64 = var_670 + rax_5 * 0x18;
    
    for let mut i: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hea13242265cd5fc5(&var_688); i != 0; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hea13242265cd5fc5(&var_688)
    {
        let r15_1: *mut i8 = *i.byte_offset(8);
        let r12_1: u64 = *i.byte_offset(0x10);
        let mut rax_8: *mut i8;
        let mut rdx_2: i64;
        rax_8 = std::path::Path::parent::h65c9a340a6266f2d(r15_1, r12_1);
        let mut var_5b0: i32;
        
        if rax_8 == 0
        {
            let rax_9: i8 = std::path::Path::is_absolute::h3431a23d91045560(r15_1, r12_1);
            let mut rax_10: i8;
            
            if rax_9 == 0
            {
                rax_10 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h7b1b59c59615f35d(r15_1, r12_1, "/Output each NAME with its last …", 1);
            }
            
            if rax_9 == 0 && rax_10 == 0
            {
                var_5c8 = &data_5059e8;
                *var_5c8[8] = 1;
                let var_5b8_3: i64 = 8;
                var_5b0 = {0};
                std::io::stdio::_print::he918bceb0c89db46(&var_5c8);
            }
            else
            {
                var_5c8 = &data_5059f8;
                *var_5c8[8] = 1;
                let var_5b8_2: i64 = 8;
                var_5b0 = {0};
                std::io::stdio::_print::he918bceb0c89db46(&var_5c8);
            }
        }
        else
        {
            std::path::Path::components::h4f3217acf0fc8653(&var_5c8, rax_8, rdx_2);
            _$LT$std..path..Components$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h327ae97aa5bd0b06(&var_2f8, &var_5c8);
            
            if var_2f8 != 0xa
            {
                core::result::Result$LT$T$C$E$GT$::unwrap::h0ef4d55c3be2e364(
                    uucore::mods::display::print_verbatim::hce63210a40ab659b(rax_8));
            }
            else
            {
                var_5c8 = &data_5059e8;
                *var_5c8[8] = 1;
                let var_5b8_1: i64 = 8;
                var_5b0 = {0};
                std::io::stdio::_print::he918bceb0c89db46(&var_5c8);
            }
        }
        
        var_2f8 = &var_689;
        let var_2f0_1: fn(arg1: *mut i8, arg2: *mut c_void) -> i64 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
        var_5c8 = &data_412aa0;
        *var_5c8[8] = 1;
        let var_5a8_1: i64 = 0;
        let var_5b8_4: *mut *mut i8 = &var_2f8;
        var_5b0 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&var_5c8);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h231b973bb6e880f3(
        &var_678);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc82f33e0af68aa1d(&var_640);
    nullptr
}
