
  uint64_t uu_od::uumain::uumain::h77fc8bac6dd9e33c(int64_t arg1)

{
    void var_4b8;
    uucore::Args::collect_ignore::h7978844b491bf773(&var_4b8, arg1);
    void var_2e0;
    uu_od::uu_app::hcdf03cb1df11eb22(&var_2e0);
    void* var_4b0;
    int64_t var_4a8;
    int64_t var_368;
    clap_builder::builder::command::Command::try_get_matches_from::h903d8e3a928dde84(&var_368, 
        &var_2e0, var_4b0, var_4a8);
    int64_t rax = var_368;
    uint64_t result;
    uint64_t result_2;
    
    if (-(rax) != -0x8000000000000000)
    {
        int64_t var_338;
        int64_t var_3c8_1 = var_338;
        int128_t var_348;
        int128_t var_3d8_1 = var_348;
        int128_t var_358;
        int128_t var_3e8_1 = var_358;
        int64_t var_3f8 = rax;
        uint64_t result_4 = result_2;
        uu_od::OdOptions::new::hce9a179f9945fb25(&var_368, &var_3f8, var_4b0, var_4a8);
        int64_t r8_1 = var_368;
        result = result_2;
        void** const r14_1 = var_358;
        
        if (r8_1 != 2)
        {
            int64_t var_488_1 = *var_358[8];
            int64_t var_4a0 = r8_1;
            uint64_t result_1 = result;
            void** const var_490_1 = r14_1;
            int128_t var_320;
            int64_t rcx_4 = *var_320[8];
            int88_t var_310;
            char var_370_1 = *var_310[0xa];
            int64_t var_378_1 = rcx_4;
            void** const var_388 = r14_1;
            int64_t var_380_1 = var_488_1;
            uu_od::open_input_peek_reader::h674c27249dd4a5e9(&var_368, var_348, *var_348[8], rcx_4, 
                r8_1);
            int64_t rbx_1 = var_310;
            int128_t var_3c0;
            _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h5d0dee941894a8a6(&var_3c0, rbx_1 + 4);
            int64_t* var_420_1 = &var_368;
            int128_t var_438 = var_3c0;
            int64_t var_3b0;
            int64_t var_428_1 = var_3b0;
            int64_t var_418_1 = 4;
            int128_t var_410_1 = {0};
            char var_400_1 = *var_310[9];
            int128_t var_330;
            uu_od::output_info::OutputInfo::new::h9f07de616650c4c6(&var_3c0, rbx_1, *var_330[8], 
                var_320, *var_310[8]);
            uint64_t result_3;
            void** rdx_7;
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
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8531ffef4cf6f488(&var_3f8);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(result_2);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h2daeae36db4f4b64(
        &var_4b8);
    return result;
}
