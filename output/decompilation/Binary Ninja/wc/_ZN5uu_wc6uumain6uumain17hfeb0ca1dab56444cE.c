
  int64_t uu_wc::uumain::uumain::hfeb0ca1dab56444c(int64_t arg1)

{
    int64_t var_2e0;
    uu_wc::uu_app::h2fb478d89b05fb4c(&var_2e0);
    int64_t var_318;
    clap_builder::builder::command::Command::try_get_matches_from::h22564bc8dca359b5(&var_318, 
        &var_2e0, arg1);
    int64_t rax = var_318;
    int64_t result_2;
    
    if (-(rax) == -0x8000000000000000)
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(result_2);
    
    int64_t var_2e8;
    int64_t var_2b0 = var_2e8;
    int128_t var_2f8;
    int128_t var_2c0 = var_2f8;
    int128_t var_308;
    int128_t var_2d0 = var_308;
    var_2e0 = rax;
    int64_t result_4 = result_2;
    int64_t var_358;
    uu_wc::Settings::new::h23bd7857bdb7b414(&var_358, &var_2e0);
    uu_wc::Inputs::new::hed823cacb11525c8(&var_318, &var_2e0);
    int64_t rax_2 = var_318;
    int64_t result = result_2;
    
    if (rax_2 != 3)
    {
        int64_t var_338 = rax_2;
        int64_t result_1 = result;
        int64_t var_328_1 = var_308;
        int64_t var_320_1 = *var_308[8];
        int64_t result_3;
        int64_t rdx_2;
        result_3 = uu_wc::wc::hc7d9f9fb029f4801(&var_338, &var_358);
        result = result_3;
        core::ptr::drop_in_place$LT$uu_wc..Inputs$GT$::hb1413391f98ba4f8(&var_338);
    }
    
    int64_t var_350;
    core::ptr::drop_in_place$LT$uu_wc..Settings$GT$::hd65bd298243c0fbf(var_358, var_350);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6290d764748214ab(&var_2e0);
    return result;
}
