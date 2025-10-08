
  uint64_t uu_logname::uumain::uumain::h0e2eb17c6cf25f91(int64_t arg1)

{
    void* const var_2e8;
    uu_logname::uu_app::h0a5118412066b45c(&var_2e8);
    int64_t var_358;
    clap_builder::builder::command::Command::try_get_matches_from::hd08ffb3d93990f3c(&var_358, 
        &var_2e8, arg1);
    int64_t rax = var_358;
    int64_t var_350;
    
    if (-(rax) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_350);
    
    int64_t var_328;
    int64_t var_2f0_1 = var_328;
    int128_t var_338;
    int128_t var_300_1 = var_338;
    int64_t var_320 = rax;
    int64_t var_318_1 = var_350;
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hfe0f27db66830307(&var_320);
    uu_logname::get_userlogin::h108c28e9a29e3387(&var_320);
    int64_t* var_368;
    
    if (var_320 != -0x8000000000000000)
    {
        var_358 = var_320;
        var_368 = &var_358;
        int64_t (* var_360_2)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_2e8 = &data_4d4e58;
        int64_t var_2e0_3 = 2;
        int64_t var_2c8_2 = 0;
        int64_t** var_2d8_3 = &var_368;
        int64_t var_2d0_2 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_2e8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd9d4e38b452bce0a(var_358, var_350);
    }
    else
    {
        int64_t rax_2;
        int64_t rdx_1;
        rax_2 = uucore::util_name::h074417a1e6395129();
        var_358 = rax_2;
        int64_t var_350_1 = rdx_1;
        var_368 = &var_358;
        int64_t (* var_360_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0778c180f68d165f;
        var_2e8 = &std::io::stdio::OUTPUT_CAPTURE::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::VAL::h45f5a16b2bc2a2a7;
        int64_t var_2e0_1 = 2;
        int64_t var_2c8_1 = 0;
        int64_t** var_2d8_1 = &var_368;
        int64_t var_2d0_1 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_2e8);
        var_2e8 = &data_4d4eb0;
        int64_t var_2e0_2 = 1;
        int64_t var_2d8_2 = 8;
        var_2d0_1 = {0};
        std::io::stdio::_eprint::h57899770eacec2ad(&var_2e8);
    }
    return 0;
}
