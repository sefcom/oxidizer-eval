
  fn uu_od::uumain::uumain::h77fc8bac6dd9e33c(arg1: i64) -> u64

{
    let mut var_4b8: ();
    uucore::Args::collect_ignore::h7978844b491bf773(&var_4b8, arg1);
    let mut var_2e0: ();
    uu_od::uu_app::hcdf03cb1df11eb22(&var_2e0);
    let var_4b0: *mut c_void;
    let var_4a8: i64;
    let mut var_368: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h903d8e3a928dde84(&var_368, 
        &var_2e0, var_4b0, var_4a8);
    let rax: i64 = var_368;
    let mut result: u64;
    let result_2: u64;
    
    if -(rax) != -0x8000000000000000
    {
        let var_338: i64;
        let var_3c8_1: i64 = var_338;
        let var_348: i128;
        let var_3d8_1: i128 = var_348;
        let var_358: i128;
        let var_3e8_1: i128 = var_358;
        let mut var_3f8: i64 = rax;
        let result_4: u64 = result_2;
        uu_od::OdOptions::new::hce9a179f9945fb25(&var_368, &var_3f8, var_4b0, var_4a8);
        let r8_1: i64 = var_368;
        result = result_2;
        let r14_1: *mut *mut c_void = var_358;
        
        if r8_1 != 2
        {
            let var_488_1: i64 = *var_358[8];
            let mut var_4a0: i64 = r8_1;
            let result_1: u64 = result;
            let var_490_1: *mut *mut c_void = r14_1;
            let var_320: i128;
            let rcx_4: i64 = *var_320[8];
            let var_310: i88;
            let var_370_1: i8 = *var_310[0xa];
            let var_378_1: i64 = rcx_4;
            let mut var_388: *mut *mut c_void = r14_1;
            let var_380_1: i64 = var_488_1;
            uu_od::open_input_peek_reader::h674c27249dd4a5e9(&var_368, var_348, *var_348[8], rcx_4, 
                r8_1);
            let rbx_1: i64 = var_310;
            let mut var_3c0: i128;
            _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h5d0dee941894a8a6(&var_3c0, rbx_1 + 4);
            let var_420_1: *mut i64 = &var_368;
            let mut var_438: i128 = var_3c0;
            let var_3b0: i64;
            let var_428_1: i64 = var_3b0;
            let var_418_1: i64 = 4;
            let var_410_1: i128 = {0};
            let var_400_1: i8 = *var_310[9];
            let var_330: i128;
            uu_od::output_info::OutputInfo::new::h9f07de616650c4c6(&var_3c0, rbx_1, *var_330[8], 
                var_320, *var_310[8]);
            let mut result_3: u64;
            let mut rdx_7: *mut *mut c_void;
            result_3 = uu_od::odfunc::he37a0cb3fa0b61f3(&var_388, &var_438, &var_3c0);
            result = result_3;
            core::ptr::drop_in_place$LT$uu_od..output_info..OutputInfo$GT$::h0cb464aa7e8d8c08(
                var_3c0, *var_3c0[8]);
            core::ptr::drop_in_place$LT$uu_od..inputdecoder..InputDecoder$LT$uu_od..peekreader..PeekReader$LT$std..io..buffered..bufreader..BufReader$LT$uu_od..partialreader..PartialReader$LT$uu_od..multifilereader..MultifileReader$GT$$GT$$GT$$GT$$GT$::h547ec07d1cc16381(var_438, *var_438[8]);
            core::ptr::drop_in_place$LT$uu_od..peekreader..PeekReader$LT$std..io..buffered..bufreader..BufReader$LT$uu_od..partialreader..PartialReader$LT$uu_od..multifilereader..MultifileReader$GT$$GT$$GT$$GT$::h69d01e48f18459a0(&var_368);
            core::ptr::drop_in_place$LT$uu_od..OdOptions$GT$::had8b6c5e032c0b68(&var_4a0);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8531ffef4cf6f488(&var_3f8);
        }
        else
        {
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8531ffef4cf6f488(&var_3f8);
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(result_2);
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h2daeae36db4f4b64(
        &var_4b8);
    result
}
