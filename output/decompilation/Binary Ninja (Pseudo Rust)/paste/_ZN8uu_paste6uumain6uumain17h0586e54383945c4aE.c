
  fn uu_paste::uumain::uumain::h0586e54383945c4a(arg1: i64) -> *mut i64

{
    let mut var_2e8: i128;
    uu_paste::uu_app::hcf547b4b95fcc990(&var_2e8);
    let mut var_360: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h91a5e3ed0fb42002(&var_360, 
        &var_2e8, arg1);
    let rax: i64 = var_360;
    let var_358: i64;
    
    if -(rax) == -0x8000000000000000
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_358);
    }
    
    let var_330: i64;
    let var_2f0: i64 = var_330;
    let var_340: i128;
    let var_300: i128 = var_340;
    let var_350: i128;
    let var_310: i128 = var_350;
    let mut var_320: i64 = rax;
    let var_318: i64 = var_358;
    let rax_2: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_320, "serialdelimiterszero-terminatedE…", 6);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hd6c560e218986f8a(
        &var_2e8, &var_320);
    let rax_3: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::h649468f8bdc4c194(&var_2e8);
    
    if rax_3 != 0
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfe70aa5b22204a80(
            &var_2e8, &var_320);
        clap_builder::parser::error::MatchesError::unwrap::h0a91321be2d51ed5(&var_360, &var_2e8);
        
        if var_360 != 0
        {
            let var_2b8: i128 = var_330;
            let var_2c8: i128 = var_340;
            let mut var_2d8: i128 = var_350;
            var_2e8 = var_360;
            core::iter::traits::iterator::Iterator::collect::h99bc6ca4579173b5(&var_360, &var_2e8);
            let rax_4: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_320, "zero-terminatedError flushing st…", 0xf);
            var_2d8 = var_350;
            var_2e8 = var_360;
            let mut r8_1: i8 = 0xa;
            
            if rax_4 != 0
            {
                r8_1 = 0;
            }
            
            let mut result: *mut i64;
            let mut rdx_3: i64;
            result = uu_paste::paste::hd569a65ca9908b3d(&var_2e8, rax_2, *rax_3.byte_offset(8), 
                *rax_3.byte_offset(0x10), r8_1);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h318e8695e56b4d8a(&var_320);
            return result;
        }
    }
    
    core::option::unwrap_failed::h893f57cb7db71cb7();
    /* no return */
}
