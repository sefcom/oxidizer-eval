
  fn uu_basenc::uu_app::hfbf1ac7160545103(arg1: i64) -> i64

{
    let mut var_cb0: ();
    uu_base32::base_common::base_app::ha21d2a66676032ef(&var_cb0, 
        "Encode/decode data and print to …", 0x129, "{} [OPTION]... [FILE]", 0x15);
    let mut var_cc0: *mut *mut [i8; 0xf4] = &data_54fab0;
    let var_cb8: *mut *mut c_void = &data_54fbf0;
    let i_2: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h86bd5f729982ba3c(&var_cc0);
    
    if i_2 != 0
    {
        let mut i_1: *mut i64 = i_2;
        let mut i: *mut i64;
        
        do
        {
            let r15_1: i64 = *i_1;
            i_1[1];
            let mut var_2f8: ();
            clap_builder::builder::arg::Arg::new::hd3b1b2715557d506(&var_2f8, r15_1);
            let mut var_798: ();
            clap_builder::builder::arg::Arg::long::h1e54b164c00deb30(&var_798, &var_2f8, r15_1);
            clap_builder::builder::arg::Arg::help::h3663629a520cf311(&var_2f8, &var_798, i_1[3], 
                i_1[4]);
            let mut var_9e8: ();
            clap_builder::builder::arg::Arg::action::h3a70dcd1ad8d9a87(&var_9e8, &var_2f8);
            let mut var_548: ();
            _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hd6435d6f64c66af2(&var_548, &var_9e8);
            memcpy(&var_2f8, &var_cb0, 0x2c8);
            clap_builder::builder::command::Command::arg::h7e432bbe18d5085d(&var_cb0, &var_2f8, 
                &var_548);
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h86bd5f729982ba3c(&var_cc0);
            i_1 = i;
        } while i != 0;
    }
    
    memcpy(arg1, &var_cb0, 0x2c8);
    arg1
}
