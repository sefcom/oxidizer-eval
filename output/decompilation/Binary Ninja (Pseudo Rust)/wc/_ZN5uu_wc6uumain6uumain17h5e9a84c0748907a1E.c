
  fn uu_wc::uumain::uumain::h5e9a84c0748907a1(arg1: i64) -> *mut i64

{
    let mut var_2e0: i64;
    uu_wc::uu_app::h62af8873bd1507e0(&var_2e0);
    let mut var_370: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h083d8fd88180a517(&var_370, 
        &var_2e0, arg1);
    let rax: i64 = var_370;
    let mut result: *mut i64;
    let var_368: i64;
    
    if rax != -0x8000000000000000
    {
        let var_340: i64;
        let var_308_1: i64 = var_340;
        let var_350: i128;
        let var_318_1: i128 = var_350;
        let mut var_360: i128;
        let var_328_1: i128 = var_360;
        let mut var_338: i64 = rax;
        let var_330_1: i64 = var_368;
        let mut var_300: ();
        uu_wc::Settings::new::h34807c3ccfb33cdb(&var_300, &var_338);
        uu_wc::Inputs::new::h8e829995353f568c(&var_2e0, &var_338);
        let rax_2: i64 = var_2e0;
        let result_2: *mut i64;
        result = result_2;
        
        if rax_2 != 3
        {
            var_370 = rax_2;
            let result_1: *mut i64 = result;
            let var_2d0: *mut *mut c_void;
            var_360 = var_2d0;
            let var_2c8: i64;
            *var_360[8] = var_2c8;
            let mut result_3: *mut i64;
            let mut rdx_1: *mut *mut c_void;
            result_3 = uu_wc::wc::hd5e1121da6170855(&var_370, &var_300);
            result = result_3;
            core::ptr::drop_in_place$LT$uu_wc..Inputs$GT$::hfa6bf0dcd5b0a081(&var_370);
            core::ptr::drop_in_place$LT$uu_wc..Settings$GT$::hbdea90b142ccaaa3(&var_300);
        }
        else
        {
            core::ptr::drop_in_place$LT$uu_wc..Settings$GT$::hbdea90b142ccaaa3(&var_300);
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h19fadc71bd35101b(&var_338);
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_368);
    }
    result
}
