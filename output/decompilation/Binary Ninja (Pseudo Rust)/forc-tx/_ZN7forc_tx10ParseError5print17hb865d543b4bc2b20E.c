
  fn forc_tx::ParseError::print::hb865d543b4bc2b20(arg1: *mut c_void) -> *mut i32

{
    let rax: i64 = -0x8000000000000000 ^ *arg1;
    let mut rcx: i64 = 3;
    
    if rax < 5
    {
        rcx = rax;
    }
    
    let mut var_328: *mut c_void = arg1;
    let mut var_320: *mut i64;
    let mut var_310: *mut c_void;
    
    match rcx
    {
        0 | 1 | 2 =>
        {
            let rax_1: i64 =
                clap_builder::error::Error$LT$F$GT$::print::h2cc09af8dae9814c(arg1.byte_offset(8));
            
            if rax_1 != 0
            {
                /* tailcall */
                return clap_builder::error::Error$LT$F$GT$::raw::h6324afda71327f4d(rax_1);
            }
            
            0
        }
        3 =>
        {
            var_320 = &var_328;
            let var_318_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7933eed99947e274;
            var_310 = &data_5d12d8;
            let var_308_2: i64 = 2;
            let var_2f0_2: i64 = 0;
            let var_300_2: *mut *mut i64 = &var_320;
            let var_2f8_2: i64 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_310);
            _$LT$forc_tx..ParseError..print..ForcTxIo$u20$as$u20$clap_builder..derive..CommandFactory$GT$::command::h69fa259739eabd51(&var_310);
            let rax_4: i64 =
                clap_builder::builder::command::Command::print_long_help::h62b7ff64fb3527d1(
                &var_310);
            
            if rax_4 == 0
            {
                core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h17541cdd6651dd53(&var_310);
                return 0;
            }
            
            let result: *mut i32 =
                clap_builder::error::Error$LT$F$GT$::raw::h6324afda71327f4d(rax_4);
            core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h17541cdd6651dd53(&var_310);
            result
        }
        4 =>
        {
            var_320 = &var_328;
            let var_318_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7933eed99947e274;
            var_310 = &data_5d12f8;
            let var_308_1: i64 = 2;
            let var_2f0_1: i64 = 0;
            let var_300_1: *mut *mut i64 = &var_320;
            let var_2f8_1: i64 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_310);
            0
        }
    }
}
