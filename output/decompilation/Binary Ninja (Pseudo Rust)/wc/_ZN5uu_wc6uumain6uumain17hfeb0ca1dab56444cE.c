
  fn uu_wc::uumain::uumain::hfeb0ca1dab56444c(arg1: i64) -> i64

{
    let mut var_2e0: i64;
    uu_wc::uu_app::h2fb478d89b05fb4c(&var_2e0);
    let mut var_318: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h22564bc8dca359b5(&var_318, 
        &var_2e0, arg1);
    let rax: i64 = var_318;
    let result_2: i64;
    
    if -(rax) == -0x8000000000000000
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(result_2);
    }
    
    let var_2e8: i64;
    let var_2b0: i64 = var_2e8;
    let var_2f8: i128;
    let var_2c0: i128 = var_2f8;
    let var_308: i128;
    let var_2d0: i128 = var_308;
    var_2e0 = rax;
    let result_4: i64 = result_2;
    let mut var_358: i64;
    uu_wc::Settings::new::h23bd7857bdb7b414(&var_358, &var_2e0);
    uu_wc::Inputs::new::hed823cacb11525c8(&var_318, &var_2e0);
    let rax_2: i64 = var_318;
    let mut result: i64 = result_2;
    
    if rax_2 != 3
    {
        let mut var_338: i64 = rax_2;
        let result_1: i64 = result;
        let var_328_1: i64 = var_308;
        let var_320_1: i64 = *var_308[8];
        let mut result_3: i64;
        let mut rdx_2: i64;
        result_3 = uu_wc::wc::hc7d9f9fb029f4801(&var_338, &var_358);
        result = result_3;
        core::ptr::drop_in_place$LT$uu_wc..Inputs$GT$::hb1413391f98ba4f8(&var_338);
    }
    
    let var_350: i64;
    core::ptr::drop_in_place$LT$uu_wc..Settings$GT$::hd65bd298243c0fbf(var_358, var_350);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6290d764748214ab(&var_2e0);
    result
}
