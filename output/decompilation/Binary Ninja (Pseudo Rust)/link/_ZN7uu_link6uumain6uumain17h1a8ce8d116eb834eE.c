
  fn uu_link::uumain::uumain::h1a8ce8d116eb834e(arg1: i64) -> u64

{
    let mut var_2f8: fn() -> !;
    uu_link::uu_app::h418310be0040ada0(&var_2f8);
    let mut var_370: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h13d565a3a5c67bbf(&var_370, 
        &var_2f8, arg1);
    let rax: i64 = var_370;
    let var_368: *mut i64;
    
    if -(rax) == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_368);
    }
    
    let var_340: i64;
    let var_300_1: i64 = var_340;
    let var_350: i128;
    let var_310_1: i128 = var_350;
    let var_360: i128;
    let var_320_1: i128 = var_360;
    let mut var_330: i64 = rax;
    let var_328_1: *mut i64 = var_368;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hdbb453eb36b18045(
        &var_2f8, &var_330, "FILES(uutils coreutils) 0.0.30{}…", 5);
    clap_builder::parser::error::MatchesError::unwrap::hc7956110ac9be2e8(&var_370, 
        "FILES(uutils coreutils) 0.0.30{}…", 5, &var_2f8);
    
    if var_370 == 0
    {
        var_2f8 = core::ops::function::FnOnce::call_once::hf4ee4ccd9a4a864d;
        let var_2f0_1: *const i8 = "/home/34r7hm4n/.cargo/registry/s…";
        let var_2e8_1: *const i8 = "/home/34r7hm4n/.cargo/registry/s…";
        let var_2e0_1: i64 = 0;
        let var_2d0_1: i64 = 0;
        let var_2c0_1: i64 = 0;
    }
    else
    {
        let var_2c8_1: i128 = var_340;
        let var_2d8_1: i128 = var_350;
        let mut var_2e8: i64;
        var_2e8 = var_360;
        var_2f8 = var_370;
    }
    
    core::iter::traits::iterator::Iterator::collect::he6a5d57ffcfdab58(&var_370, &var_2f8);
    let rax_2: i64 = var_360;
    let mut rdi_10: i64;
    
    if rax_2 == 0
    {
        rdi_10 = 0;
    }
    else
    {
        if rax_2 != 1
        {
            let rax_3: *mut c_void = *var_368;
            let r14_1: i64 = *rax_3.byte_offset(8);
            let r15_1: i64 = *rax_3.byte_offset(0x10);
            let rax_4: *mut c_void = var_368[1];
            let r12_1: fn() -> ! = *rax_4.byte_offset(8);
            let r13_1: i64 = *rax_4.byte_offset(0x10);
            let rax_5: i64 = std::fs::hard_link::h2f74410233768cf7(r14_1, r15_1, r12_1);
            var_2f8 = r12_1;
            let var_2f0_2: i64 = r13_1;
            let var_2e8_2: i64 = r14_1;
            let var_2e0_2: i64 = r15_1;
            let result: u64 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc3ad62926789bbd2(rax_5);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h7c77565432162c2c(
                var_370, var_368);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8ab534aea64d6c27(&var_330);
            return result;
        }
        
        rdi_10 = 1;
    }
    
    core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_10, rdi_10);
    /* no return */
}
