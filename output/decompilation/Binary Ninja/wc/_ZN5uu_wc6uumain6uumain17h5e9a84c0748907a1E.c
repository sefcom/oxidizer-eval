
  int64_t* uu_wc::uumain::uumain::h5e9a84c0748907a1(int64_t arg1)

{
    int64_t var_2e0;
    uu_wc::uu_app::h62af8873bd1507e0(&var_2e0);
    int64_t var_370;
    clap_builder::builder::command::Command::try_get_matches_from::h083d8fd88180a517(&var_370, 
        &var_2e0, arg1);
    int64_t rax = var_370;
    int64_t* result;
    int64_t var_368;
    
    if (rax != -0x8000000000000000)
    {
        int64_t var_340;
        int64_t var_308_1 = var_340;
        int128_t var_350;
        int128_t var_318_1 = var_350;
        int128_t var_360;
        int128_t var_328_1 = var_360;
        int64_t var_338 = rax;
        int64_t var_330_1 = var_368;
        void var_300;
        uu_wc::Settings::new::h34807c3ccfb33cdb(&var_300, &var_338);
        uu_wc::Inputs::new::h8e829995353f568c(&var_2e0, &var_338);
        int64_t rax_2 = var_2e0;
        int64_t* result_2;
        result = result_2;
        
        if (rax_2 != 3)
        {
            var_370 = rax_2;
            int64_t* result_1 = result;
            void** var_2d0;
            var_360 = var_2d0;
            int64_t var_2c8;
            *var_360[8] = var_2c8;
            int64_t* result_3;
            void** rdx_1;
            result_3 = uu_wc::wc::hd5e1121da6170855(&var_370, &var_300);
            result = result_3;
            core::ptr::drop_in_place$LT$uu_wc..Inputs$GT$::hfa6bf0dcd5b0a081(&var_370);
            core::ptr::drop_in_place$LT$uu_wc..Settings$GT$::hbdea90b142ccaaa3(&var_300);
        }
        else
            core::ptr::drop_in_place$LT$uu_wc..Settings$GT$::hbdea90b142ccaaa3(&var_300);
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h19fadc71bd35101b(&var_338);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_368);
    return result;
}
