
  int64_t uu_unlink::uu_app::hdbcae0fc1396218f(int64_t arg1)

{
    void var_538;
    clap_builder::builder::command::Command::new::h0612242c1aea96b0(&var_538, 
        uucore::util_name::h60d842bf27b05e82());
    void var_800;
    clap_builder::builder::command::Command::version::h62767f57d7e778ba(&var_800, &var_538);
    clap_builder::builder::command::Command::about::h0008fc200e6dd216(&var_538, &var_800);
    void var_270;
    uucore::format_usage::h76fcb2d15fbabc58(&var_270, "{} [FILE]\n{} OPTIONdescription(…", 0x13);
    clap_builder::builder::command::Command::override_usage::h9afbce5b934cea29(&var_800, &var_538, 
        &var_270);
    memcpy(&var_538, &var_800, 0x2bc);
    int64_t var_544;
    int64_t var_27c = 0x8000000080 | var_544;
    int32_t var_53c;
    int32_t var_274 = var_53c;
    clap_builder::builder::arg::Arg::new::h3131ba4629097389(&var_800);
    memcpy(&var_270, &var_800, 0x248);
    int32_t var_5b8;
    int32_t var_28 = var_5b8 | 5;
    int32_t var_5b4;
    int32_t var_24 = var_5b4;
    int64_t var_818 = 2;
    clap_builder::builder::arg::Arg::value_parser::h2fdfdff095e21063(&var_800, &var_270, &var_818);
    clap_builder::builder::arg::Arg::value_hint::hf1e0ee7812d8c3f9(&var_270, &var_800);
    clap_builder::builder::command::Command::arg::h6ba96fa9d71a8bbf(arg1, &var_538, &var_270);
    return arg1;
}
