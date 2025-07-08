
  int64_t uu_hashsum::uu_app_opt_bits::h1604bb86d678b504(int64_t arg1, int64_t arg2)

{
    void var_2d0;
    memcpy(&var_2d0, arg2, 0x2c8);
    void var_770;
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&var_770, "bitsFA");
    void var_520;
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&var_520, &var_770, "bitsFA");
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&var_770, &var_520, 
        "set the size of the output (only…", 0x2b);
    clap_builder::builder::arg::Arg::value_name::h91d0b43819df8b7b(&var_520, &var_770, 
        &data_468ec4[4]);
    clap_builder::builder::arg::Arg::value_parser::h06bfe84f71006afc(&var_770, &var_520);
    return clap_builder::builder::command::Command::arg::h001132be747f46b6(arg1, &var_2d0, 
        &var_770);
}
