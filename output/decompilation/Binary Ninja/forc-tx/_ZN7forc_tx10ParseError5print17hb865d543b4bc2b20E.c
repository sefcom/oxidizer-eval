
  int32_t* forc_tx::ParseError::print::hb865d543b4bc2b20(void* arg1)

{
    int64_t rax = -0x8000000000000000 ^ *arg1;
    int64_t rcx = 3;
    
    if (rax < 5)
        rcx = rax;
    
    void* var_328 = arg1;
    int64_t* var_320;
    void* const var_310;
    
    switch (rcx)
    {
        case 0:
        case 1:
        case 2:
        {
            int64_t rax_1 = clap_builder::error::Error$LT$F$GT$::print::h2cc09af8dae9814c(arg1 + 8);
            
            if (rax_1)
                /* tailcall */
                return clap_builder::error::Error$LT$F$GT$::raw::h6324afda71327f4d(rax_1);
            
            return 0;
            break;
        }
        case 3:
        {
            var_320 = &var_328;
            int64_t (* var_318_2)(int64_t* arg1, int64_t* arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7933eed99947e274;
            var_310 = &data_5d12d8;
            int64_t var_308_2 = 2;
            int64_t var_2f0_2 = 0;
            int64_t** var_300_2 = &var_320;
            int64_t var_2f8_2 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_310);
            _$LT$forc_tx..ParseError..print..ForcTxIo$u20$as$u20$clap_builder..derive..CommandFactory$GT$::command::h69fa259739eabd51(&var_310);
            int64_t rax_4 =
                clap_builder::builder::command::Command::print_long_help::h62b7ff64fb3527d1(
                &var_310);
            
            if (!rax_4)
            {
                core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h17541cdd6651dd53(&var_310);
                return 0;
            }
            
            int32_t* result = clap_builder::error::Error$LT$F$GT$::raw::h6324afda71327f4d(rax_4);
            core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h17541cdd6651dd53(&var_310);
            return result;
            break;
        }
        case 4:
        {
            var_320 = &var_328;
            int64_t (* var_318_1)(int64_t* arg1, int64_t* arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7933eed99947e274;
            var_310 = &data_5d12f8;
            int64_t var_308_1 = 2;
            int64_t var_2f0_1 = 0;
            int64_t** var_300_1 = &var_320;
            int64_t var_2f8_1 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_310);
            return 0;
            break;
        }
    }
}
