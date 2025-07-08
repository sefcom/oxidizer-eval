
  int64_t* uu_head::uumain::uumain::h5ea3dd696b7d584e(int64_t arg1)

{
    int32_t var_2d8;
    uu_head::uu_app::h3a0d0603aeae9cb6(&var_2d8);
    int64_t var_368;
    uu_head::arg_iterate::h2f4030183cfe2e94(&var_368, arg1);
    int64_t* result_1;
    int64_t* result = result_1;
    
    if (!var_368)
    {
        int64_t var_348;
        clap_builder::builder::command::Command::try_get_matches_from::hadd186c33093956e(&var_348, 
            &var_2d8, result);
        int64_t rax_1 = var_348;
        int64_t var_340;
        
        if (rax_1 != -0x8000000000000000)
        {
            int64_t var_318;
            int64_t var_2e0_1 = var_318;
            int128_t var_328;
            int128_t var_2f0_1 = var_328;
            int128_t var_338;
            int128_t var_300_1 = var_338;
            int64_t var_310 = rax_1;
            int64_t var_308_1 = var_340;
            uu_head::HeadOptions::get_from::h1adb6e5857002fb6(&var_2d8, &var_310);
            int128_t var_2c8;
            
            if (var_2d8 != 4)
            {
                int128_t var_2b8;
                int128_t var_328_1 = var_2b8;
                int128_t var_338_1 = var_2c8;
                var_348 = var_2d8;
                uu_head::uu_head::h50c9b533b8c9e19e(&var_348);
                result = nullptr;
                core::ptr::drop_in_place$LT$uu_head..HeadOptions$GT$::hf8ca7b2a25e80601(&var_348);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7f3766ce6d351c3b(&var_310);
            }
            else
            {
                int64_t var_358_1 = *var_2c8[8];
                int128_t var_2d0;
                var_368 = var_2d0;
                int32_t var_350_1 = 1;
                result = alloc::boxed::Box$LT$T$GT$::new::hec34c9cb33ab5596(&var_368);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7f3766ce6d351c3b(&var_310);
            }
        }
        else
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_340);
    }
    else
        core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h9d9eab11aa1d8814(
            &var_2d8);
    
    return result;
}
