
  fn uu_hashsum::uu_app_custom::h3a63177c817a427e(arg1: i64) -> i64

{
    let mut var_2f8: ();
    uu_hashsum::uu_app_common::he3603fb037840435(&var_2f8);
    let mut var_888: ();
    uu_hashsum::uu_app_opt_bits::hd6aa31a29dfb5e22(&var_888, &var_2f8);
    let mut var_5c0: ();
    uu_hashsum::uu_app_b3sum_opts::h5c3cae50ae21738f(&var_5c0, &var_888);
    
    for let mut i: i64 = 0x18; i != 0x1f8; i += 0x20
    {
        memcpy(&var_2f8, &var_5c0, 0x2c8);
        let rbp_1: i64 = *(i + &data_5519b0);
        *(i + &data_5519b8);
        clap_builder::builder::arg::Arg::new::h6aa2bb62d5e3b990(&var_888, rbp_1);
        let mut var_b08: ();
        clap_builder::builder::arg::Arg::long::h289d326220dea97b(&var_b08, &var_888, rbp_1);
        clap_builder::builder::arg::Arg::help::h2bc0660901b2ceb5(&var_888, &var_b08, 
            *(i + &data_5519c0), *(i + &data_5519c8));
        clap_builder::builder::arg::Arg::action::ha30e37a18dbb74d5(&var_b08, &var_888, 2);
        clap_builder::builder::command::Command::arg::h6ab44b22cd7561c2(&var_5c0, &var_2f8, 
            &var_b08);
    }
    
    memcpy(arg1, &var_5c0, 0x2c8);
    arg1
}
