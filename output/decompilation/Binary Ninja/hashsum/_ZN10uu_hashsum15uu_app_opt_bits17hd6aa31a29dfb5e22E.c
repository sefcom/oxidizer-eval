
  int64_t uu_hashsum::uu_app_opt_bits::hd6aa31a29dfb5e22(int64_t arg1, int64_t arg2)

{
    void var_2e8;
    memcpy(&var_2e8, arg2, 0x2c8);
    void var_7e8;
    clap_builder::builder::arg::Arg::new::h6aa2bb62d5e3b990(&var_7e8, 
        "bitsBOLDBlue\x1b[4mtextSomedumb\x1b…");
    void var_568;
    clap_builder::builder::arg::Arg::long::h400c12573ef6d75c(&var_568, &var_7e8, 
        "bitsBOLDBlue\x1b[4mtextSomedumb\x1b…");
    clap_builder::builder::arg::Arg::help::h2bc0660901b2ceb5(&var_7e8, &var_568, 
        "set the size of the output (only…", 0x2b);
    clap_builder::builder::arg::Arg::value_name::h58de39279c54d2fa(&var_568, &var_7e8, 
        &data_411db8[0x14]);
    clap_builder::builder::arg::Arg::value_parser::hdf8697f3f325e074(&var_7e8, &var_568);
    return clap_builder::builder::command::Command::arg::h6ab44b22cd7561c2(arg1, &var_2e8, 
        &var_7e8);
}
