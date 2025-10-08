
  int64_t uu_test::uu_app::hdf268f15ca51f7b3(int64_t arg1)

{
    void var_5a8;
    clap_builder::builder::command::Command::new::ha27412a4008333fc(&var_5a8, 
        uucore::util_name::h074417a1e6395129());
    void var_2e0;
    clap_builder::builder::command::Command::version::h9f7ca3910ad8d927(&var_2e0, &var_5a8);
    clap_builder::builder::command::Command::about::h5919a34b24ebb911(&var_5a8, &var_2e0);
    void var_5c0;
    uucore::format_usage::he053403a896311ed(&var_5c0, "test EXPRESSION\n[\n[ EXPRESSION…", 0x2f);
    clap_builder::builder::command::Command::override_usage::h9ec33c467833209d(&var_2e0, &var_5a8, 
        &var_5c0);
    clap_builder::builder::command::Command::after_help::h811f8143390e0fea(arg1, &var_2e0);
    return arg1;
}
