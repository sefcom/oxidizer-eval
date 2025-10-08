
  fn uu_tsort::uumain::uumain::h97be15f1635ca8bc(arg1: i64) -> u64

{
    let mut var_2f8: i64;
    uu_tsort::uu_app::ha4d420519a23c26a(&var_2f8);
    let mut var_3b8: u64;
    clap_builder::builder::command::Command::try_get_matches_from::h2712c152c76f907c(&var_3b8, 
        &var_2f8, arg1);
    let rax: u64 = var_3b8;
    let var_3b0: i64;
    
    if -(rax) == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3b0);
    }
    
    let var_388: i64;
    let var_318_1: i64 = var_388;
    let var_398: i128;
    let var_328_1: i128 = var_398;
    let mut var_3a8: i128;
    let var_338_1: i128 = var_3a8;
    let mut var_348: u64 = rax;
    let var_340_1: i64 = var_3b0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h8ad808f2a71a8300(
        &var_2f8, &var_348);
    let rax_2: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::h3cd29ce795df9bc3(&var_2f8);
    
    if rax_2 == 0
    {
        core::option::expect_failed::h3f620cfb8545dc61("Value is required by clap-mid > …");
        /* no return */
    }
    
    let rbx_1: i64 = *rax_2.byte_offset(8);
    let r14_1: u64 = *rax_2.byte_offset(0x10);
    let mut result: u64;
    let mut var_2f0: i64;
    let mut rbx_2: i64;
    let mut r14_2: i64;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h02730a1c6542e747(rbx_1, r14_1, "-mid > len/home/34r7hm4n/.rustup…", 1) == 0
    {
        if std::path::Path::is_dir::h02edbc48c38d7d9e(rbx_1, r14_1) == 0
        {
            std::fs::read_to_string::h6cd40b6ea36e7f45(&var_2f8, rbx_1);
            r14_2 = var_2f8;
            rbx_2 = var_2f0;
            
            if r14_2 != -0x8000000000000000
            {
                goto 'label_457b91;
            }
            
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        }
        else
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_3b8, rax_2);
            let var_2e0_1: i64 = var_3a8;
            var_2f0 = var_3b8;
            var_2f8 = 0;
            result = alloc::boxed::Box$LT$T$GT$::new::h24dc63cecfcf9104(&var_2f8);
        }
    }
    else
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        std::io::read_to_string::h15b27336b722ccbc(&var_2f8, 
            &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
        r14_2 = var_2f8;
        rbx_2 = var_2f0;
        
        if r14_2 != -0x8000000000000000
        {
            'label_457b91:
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_3b8, rax_2);
            uu_tsort::Graph::new::ha5caf065ef75f119(&var_2f8, &var_3b8);
            let var_2e8: i64;
            _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h57d6bad6f545cdc0(&var_3a8, rbx_2, var_2e8);
            var_3b8 = 0;
            let mut var_3b0_1: i64 = var_2e8;
            let var_380_1: i16 = 1;
            let mut var_378: i64;
            core::iter::traits::iterator::Iterator::collect::he88e1f753b28c06e(&var_378, &var_3b8);
            let var_370: i64;
            let mut var_360: i64 = var_370;
            let var_368: i64;
            let var_358_1: i64 = var_368;
            let var_350_1: i64 = 2;
            
            loop
            {
                let mut rax_9: *mut i64;
                let mut rdx_3: i64;
                rax_9 = _$LT$core..slice..iter..Chunks$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha79187def6c19531(&var_360);
                
                if rax_9 == 0
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hfa5c966e6cbf810b(var_378, var_370);
                    uu_tsort::Graph::run_tsort::h43715d18696d47b7(&var_2f8);
                    core::ptr::drop_in_place$LT$uu_tsort..Graph$GT$::h0753526b15370295(&var_2f8);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h67140223e6ae7745(r14_2, 
                        rbx_2);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hbfd76ed7452bcb59(&var_348);
                    return 0;
                }
                
                if rdx_3 != 2
                {
                    break;
                }
                
                uu_tsort::Graph::add_edge::h4310416a4e0d07ea(&var_2f8, *rax_9, rax_9[1], rax_9[2], 
                    rax_9[3]);
            }
            
            let mut var_310: i128;
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_310, rax_2);
            let var_300: i64;
            *var_3a8[8] = var_300;
            var_3b0_1 = var_310;
            var_3b8 = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::h24dc63cecfcf9104(&var_3b8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hfa5c966e6cbf810b(
                var_378, var_370);
            core::ptr::drop_in_place$LT$uu_tsort..Graph$GT$::h0753526b15370295(&var_2f8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h67140223e6ae7745(r14_2, rbx_2);
        }
        else
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        }
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hbfd76ed7452bcb59(&var_348);
    result
}
