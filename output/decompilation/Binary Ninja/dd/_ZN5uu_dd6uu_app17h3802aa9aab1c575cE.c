
  int64_t uu_dd::uu_app::h3802aa9aab1c575c(int64_t arg1)

{
    void var_7f8;
    clap_builder::builder::command::Command::new::hf97bd87459802514(&var_7f8, 
        uucore::util_name::h60d842bf27b05e82());
    void var_530;
    clap_builder::builder::command::Command::version::h6f458816302443ee(&var_530, &var_7f8, 
        "0.0.28Copy, and optionally conve…");
    clap_builder::builder::command::Command::about::hd0a67f39e5f79877(&var_7f8, &var_530, 
        "Copy, and optionally convert, a …", 0x34);
    void var_268;
    uucore::format_usage::h76fcb2d15fbabc58(&var_268, "{} [OPERAND]...\n{} OPTION### Op…", 0x19);
    clap_builder::builder::command::Command::override_usage::hf9cdd864c2ccec31(&var_530, &var_7f8, 
        &var_268);
    clap_builder::builder::command::Command::after_help::h7c32531b2b18b3b1(&var_7f8, &var_530, 
        "### Operands\n\n- bs=BYTES : rea…", 0x13b7);
    memcpy(&var_530, &var_7f8, 0x2bc);
    int64_t var_53c;
    int64_t var_274 = 0x8000000080 | var_53c;
    int32_t var_534;
    int32_t var_26c = var_534;
    clap_builder::builder::arg::Arg::new::h6fd0ebadb6d2a465(&var_7f8, 
        "operandsESTRPIPENotFoundTimedOut");
    clap_builder::builder::arg::Arg::num_args::hf9a6d8997dc166ec(&var_268, &var_7f8);
    clap_builder::builder::command::Command::arg::h29f22bc80a5408b1(arg1, &var_530, &var_268);
    return arg1;
}
