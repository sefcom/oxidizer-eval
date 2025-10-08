
  fn uu_logname::uumain::uumain::h0e2eb17c6cf25f91(arg1: i64) -> u64

{
    let mut var_2e8: *mut c_void;
    uu_logname::uu_app::h0a5118412066b45c(&var_2e8);
    let mut var_358: i64;
    clap_builder::builder::command::Command::try_get_matches_from::hd08ffb3d93990f3c(&var_358, 
        &var_2e8, arg1);
    let rax: i64 = var_358;
    let var_350: i64;
    
    if -(rax) == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_350);
    }
    
    let var_328: i64;
    let var_2f0_1: i64 = var_328;
    let var_338: i128;
    let var_300_1: i128 = var_338;
    let mut var_320: i64 = rax;
    let var_318_1: i64 = var_350;
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hfe0f27db66830307(&var_320);
    uu_logname::get_userlogin::h108c28e9a29e3387(&var_320);
    let mut var_368: *mut i64;
    
    if var_320 != -0x8000000000000000
    {
        var_358 = var_320;
        var_368 = &var_358;
        let var_360_2: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_2e8 = &data_4d4e58;
        let var_2e0_3: i64 = 2;
        let var_2c8_2: i64 = 0;
        let var_2d8_3: *mut *mut i64 = &var_368;
        let var_2d0_2: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_2e8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd9d4e38b452bce0a(var_358, var_350);
    }
    else
    {
        let mut rax_2: i64;
        let mut rdx_1: i64;
        rax_2 = uucore::util_name::h074417a1e6395129();
        var_358 = rax_2;
        let var_350_1: i64 = rdx_1;
        var_368 = &var_358;
        let var_360_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0778c180f68d165f;
        var_2e8 = &std::io::stdio::OUTPUT_CAPTURE::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::VAL::h45f5a16b2bc2a2a7;
        let var_2e0_1: i64 = 2;
        let var_2c8_1: i64 = 0;
        let var_2d8_1: *mut *mut i64 = &var_368;
        let mut var_2d0_1: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_2e8);
        var_2e8 = &data_4d4eb0;
        let var_2e0_2: i64 = 1;
        let var_2d8_2: i64 = 8;
        var_2d0_1 = {0};
        std::io::stdio::_eprint::h57899770eacec2ad(&var_2e8);
    }
    0
}
