
  int64_t uu_basenc::uu_app::hfbf1ac7160545103(int64_t arg1)

{
    void var_cb0;
    uu_base32::base_common::base_app::ha21d2a66676032ef(&var_cb0, 
        "Encode/decode data and print to …", 0x129, "{} [OPTION]... [FILE]", 0x15);
    char const (** const var_cc0)[0xf4] = &data_54fab0;
    void** const var_cb8 = &data_54fbf0;
    int64_t* i_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h86bd5f729982ba3c(&var_cc0);
    
    if (i_2)
    {
        int64_t* i_1 = i_2;
        int64_t* i;
        
        do
        {
            int64_t r15_1 = *i_1;
            i_1[1];
            void var_2f8;
            clap_builder::builder::arg::Arg::new::hd3b1b2715557d506(&var_2f8, r15_1);
            void var_798;
            clap_builder::builder::arg::Arg::long::h1e54b164c00deb30(&var_798, &var_2f8, r15_1);
            clap_builder::builder::arg::Arg::help::h3663629a520cf311(&var_2f8, &var_798, i_1[3], 
                i_1[4]);
            void var_9e8;
            clap_builder::builder::arg::Arg::action::h3a70dcd1ad8d9a87(&var_9e8, &var_2f8);
            void var_548;
            _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hd6435d6f64c66af2(&var_548, &var_9e8);
            memcpy(&var_2f8, &var_cb0, 0x2c8);
            clap_builder::builder::command::Command::arg::h7e432bbe18d5085d(&var_cb0, &var_2f8, 
                &var_548);
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h86bd5f729982ba3c(&var_cc0);
            i_1 = i;
        } while (i);
    }
    
    memcpy(arg1, &var_cb0, 0x2c8);
    return arg1;
}
