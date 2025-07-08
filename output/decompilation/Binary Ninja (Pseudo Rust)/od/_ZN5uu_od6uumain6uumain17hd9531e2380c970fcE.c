
  fn uu_od::uumain::uumain::hd9531e2380c970fc(arg1: i64) -> *mut i64

{
    let mut var_498: ();
    uucore::Args::collect_ignore::h6c749d9347c7e8d2(&var_498, arg1);
    let mut var_2d8: ();
    uu_od::uu_app::hbbddbed21fc2c7d3(&var_2d8);
    let mut var_418: i64;
    clap_builder::builder::command::Command::try_get_matches_from::hd12027f76159d4b7(&var_418, 
        &var_2d8, &var_498);
    let rax: i64 = var_418;
    let mut result: *mut i64;
    let result_2: *mut i64;
    
    if rax != -0x8000000000000000
    {
        let var_3e8: i64;
        let var_380_1: i64 = var_3e8;
        let var_3f8: i128;
        let var_390_1: i128 = var_3f8;
        let var_408: i128;
        let var_3a0_1: i128 = var_408;
        let mut var_3b0: i64 = rax;
        let result_4: *mut i64 = result_2;
        let var_490: i64;
        let var_488: i64;
        uu_od::OdOptions::new::h0c238bf8480e2d7e(&var_418, &var_3b0, var_490, var_488);
        let r8_1: i64 = var_418;
        result = result_2;
        let r14: *mut *mut c_void = var_408;
        
        if r8_1 != 2
        {
            let var_468_1: i64 = *var_408[8];
            let mut var_480: i64 = r8_1;
            let result_1: *mut i64 = result;
            let var_470_1: *mut *mut c_void = r14;
            let var_3d0: i128;
            let rcx_3: i64 = *var_3d0[8];
            let var_3c0: i88;
            let var_360_1: i8 = *var_3c0[0xa];
            let var_368_1: i64 = rcx_3;
            let mut var_378: *mut *mut c_void = r14;
            let var_370_1: i64 = var_468_1;
            uu_od::open_input_peek_reader::h114ec616b3c82f88(&var_418, var_3f8, *var_3f8[8], rcx_3, 
                r8_1, result);
            let mut var_310: i128;
            _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h1c962bd1b88deb3c(&var_310, var_3c0 + 4);
            let var_340_1: *mut i64 = &var_418;
            let mut var_358: i128 = var_310;
            let var_300: i64;
            let var_348_1: i64 = var_300;
            let var_338_1: i64 = 4;
            let var_330_1: i128 = {0};
            let var_320_1: i8 = *var_3c0[9];
            let var_3e0: i128;
            uu_od::output_info::OutputInfo::new::hafb4075cd97b7856(&var_310, var_3c0, *var_3e0[8], 
                var_3d0, *var_3c0[8]);
            let mut result_3: *mut i32;
            let mut rdx_7: *mut *mut c_void;
            result_3 = uu_od::odfunc::hf4c116c67e2cd288(&var_378, &var_358, &var_310);
            result = result_3;
            core::ptr::drop_in_place$LT$uu_od..output_info..OutputInfo$GT$::h04fce5ed85f4782b(
                &var_310);
            core::ptr::drop_in_place$LT$uu_od..inputdecoder..InputDecoder$LT$uu_od..peekreader..PeekReader$LT$uu_od..partialreader..PartialReader$LT$uu_od..multifilereader..MultifileReader$GT$$GT$$GT$$GT$::hfde7c0062cf8f582(&var_358);
            core::ptr::drop_in_place$LT$uu_od..peekreader..PeekReader$LT$uu_od..partialreader..PartialReader$LT$uu_od..multifilereader..MultifileReader$GT$$GT$$GT$::h2541bed74aaa9d24(&var_418);
            core::ptr::drop_in_place$LT$uu_od..OdOptions$GT$::h2134892c7e473795(&var_480);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hbff2e96ca9f96176(&var_3b0);
        }
        else
        {
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hbff2e96ca9f96176(&var_3b0);
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(result_2);
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hb97e612f004e4252(
        &var_498);
    result
}
