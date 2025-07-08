
  int64_t* uu_od::uumain::uumain::hd9531e2380c970fc(int64_t arg1)

{
    void var_498;
    uucore::Args::collect_ignore::h6c749d9347c7e8d2(&var_498, arg1);
    void var_2d8;
    uu_od::uu_app::hbbddbed21fc2c7d3(&var_2d8);
    int64_t var_418;
    clap_builder::builder::command::Command::try_get_matches_from::hd12027f76159d4b7(&var_418, 
        &var_2d8, &var_498);
    int64_t rax = var_418;
    int64_t* result;
    int64_t* result_2;
    
    if (rax != -0x8000000000000000)
    {
        int64_t var_3e8;
        int64_t var_380_1 = var_3e8;
        int128_t var_3f8;
        int128_t var_390_1 = var_3f8;
        int128_t var_408;
        int128_t var_3a0_1 = var_408;
        int64_t var_3b0 = rax;
        int64_t* result_4 = result_2;
        int64_t var_490;
        int64_t var_488;
        uu_od::OdOptions::new::h0c238bf8480e2d7e(&var_418, &var_3b0, var_490, var_488);
        int64_t r8_1 = var_418;
        result = result_2;
        void** const r14 = var_408;
        
        if (r8_1 != 2)
        {
            int64_t var_468_1 = *var_408[8];
            int64_t var_480 = r8_1;
            int64_t* result_1 = result;
            void** const var_470_1 = r14;
            int128_t var_3d0;
            int64_t rcx_3 = *var_3d0[8];
            int88_t var_3c0;
            char var_360_1 = *var_3c0[0xa];
            int64_t var_368_1 = rcx_3;
            void** const var_378 = r14;
            int64_t var_370_1 = var_468_1;
            uu_od::open_input_peek_reader::h114ec616b3c82f88(&var_418, var_3f8, *var_3f8[8], rcx_3, 
                r8_1, result);
            int128_t var_310;
            _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h1c962bd1b88deb3c(&var_310, var_3c0 + 4);
            int64_t* var_340_1 = &var_418;
            int128_t var_358 = var_310;
            int64_t var_300;
            int64_t var_348_1 = var_300;
            int64_t var_338_1 = 4;
            int128_t var_330_1 = {0};
            char var_320_1 = *var_3c0[9];
            int128_t var_3e0;
            uu_od::output_info::OutputInfo::new::hafb4075cd97b7856(&var_310, var_3c0, *var_3e0[8], 
                var_3d0, *var_3c0[8]);
            int32_t* result_3;
            void** rdx_7;
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
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hbff2e96ca9f96176(&var_3b0);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(result_2);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hb97e612f004e4252(
        &var_498);
    return result;
}
