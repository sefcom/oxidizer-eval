
  uint64_t uu_stat::uumain::uumain::haa1e44edc2b16b49(int64_t arg1)

{
    int64_t var_2e8;
    uu_stat::uu_app::hbfdb7614c9afe971(&var_2e8);
    int64_t var_5b0;
    clap_builder::builder::command::Command::after_help::h689e169e1dadb085(&var_5b0, &var_2e8);
    int64_t var_5e8;
    clap_builder::builder::command::Command::try_get_matches_from::h5b338e1121cdf3cf(&var_5e8, 
        &var_5b0, arg1);
    int64_t rax = var_5e8;
    int64_t var_5e0;
    
    if (-(rax) == -0x8000000000000000)
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_5e0);
    
    int64_t var_5b8;
    int64_t var_5f0 = var_5b8;
    int128_t var_5c8;
    int128_t var_600 = var_5c8;
    int128_t var_5d8;
    int128_t var_610 = var_5d8;
    int64_t var_620 = rax;
    int64_t var_618 = var_5e0;
    uu_stat::Stater::new::hf7bef9b18037fce5(&var_2e8, &var_620);
    int64_t rax_2 = var_2e8;
    uint64_t result_2;
    uint64_t result = result_2;
    
    if (rax_2 != -0x8000000000000000)
    {
        int128_t var_290;
        int128_t var_558_1 = var_290;
        int128_t var_2a0;
        int128_t var_568_1 = var_2a0;
        int128_t var_2b0;
        int128_t var_578_1 = var_2b0;
        int128_t var_2c0;
        int128_t var_588_1 = var_2c0;
        int128_t var_2d0;
        int128_t var_598_1 = var_2d0;
        var_5b0 = rax_2;
        uint64_t result_1 = result;
        void* var_2d8;
        void* const var_5a0_1 = var_2d8;
        int32_t rax_3 = uu_stat::Stater::exec::h69251542c7e1d7ab(&var_5b0);
        
        if (!rax_3)
            result = 0;
        else
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(rax_3);
        
        core::ptr::drop_in_place$LT$uu_stat..Stater$GT$::h03daa1cf463b0657(&var_5b0);
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h95c39aef9149518e(&var_620);
    return result;
}
