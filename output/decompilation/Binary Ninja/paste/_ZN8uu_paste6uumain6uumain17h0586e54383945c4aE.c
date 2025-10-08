
  int64_t* uu_paste::uumain::uumain::h0586e54383945c4a(int64_t arg1)

{
    int128_t var_2e8;
    uu_paste::uu_app::hcf547b4b95fcc990(&var_2e8);
    int64_t var_360;
    clap_builder::builder::command::Command::try_get_matches_from::h91a5e3ed0fb42002(&var_360, 
        &var_2e8, arg1);
    int64_t rax = var_360;
    int64_t var_358;
    
    if (-(rax) == -0x8000000000000000)
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_358);
    
    int64_t var_330;
    int64_t var_2f0 = var_330;
    int128_t var_340;
    int128_t var_300 = var_340;
    int128_t var_350;
    int128_t var_310 = var_350;
    int64_t var_320 = rax;
    int64_t var_318 = var_358;
    char rax_2 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_320, "serialdelimiterszero-terminatedE…", 6);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hd6c560e218986f8a(
        &var_2e8, &var_320);
    void* rax_3 = clap_builder::parser::error::MatchesError::unwrap::h649468f8bdc4c194(&var_2e8);
    
    if (rax_3)
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfe70aa5b22204a80(
            &var_2e8, &var_320);
        clap_builder::parser::error::MatchesError::unwrap::h0a91321be2d51ed5(&var_360, &var_2e8);
        
        if (var_360)
        {
            int128_t var_2b8 = var_330;
            int128_t var_2c8 = var_340;
            int128_t var_2d8 = var_350;
            var_2e8 = var_360;
            core::iter::traits::iterator::Iterator::collect::h99bc6ca4579173b5(&var_360, &var_2e8);
            char rax_4 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_320, "zero-terminatedError flushing st…", 0xf);
            var_2d8 = var_350;
            var_2e8 = var_360;
            char r8_1 = 0xa;
            
            if (rax_4)
                r8_1 = 0;
            
            int64_t* result;
            int64_t rdx_3;
            result = uu_paste::paste::hd569a65ca9908b3d(&var_2e8, rax_2, *(rax_3 + 8), 
                *(rax_3 + 0x10), r8_1);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h318e8695e56b4d8a(&var_320);
            return result;
        }
    }
    
    core::option::unwrap_failed::h893f57cb7db71cb7();
    /* no return */
}
