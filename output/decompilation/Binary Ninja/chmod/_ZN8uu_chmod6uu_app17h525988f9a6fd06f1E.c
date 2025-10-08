
  int64_t uu_chmod::uu_app::h525988f9a6fd06f1(int64_t arg1)

{
    void var_ab0;
    clap_builder::builder::command::Command::new::h40f6847594470505(&var_ab0, 
        uucore::util_name::h074417a1e6395129());
    void var_7e8;
    clap_builder::builder::command::Command::version::hd6e16cc63664f77a(&var_7e8, &var_ab0);
    clap_builder::builder::command::Command::about::hd97b4a9162a6e358(&var_ab0, &var_7e8);
    void var_520;
    uucore::format_usage::he053403a896311ed(&var_520, "{} [OPTION]... MODE[,MODE]... FI…", 0x70);
    clap_builder::builder::command::Command::override_usage::h66844063a605b8a4(&var_7e8, &var_ab0, 
        &var_520);
    memcpy(&var_ab0, &var_7e8, 0x2bc);
    int64_t var_52c;
    int64_t var_7f4 = 0x408008804080088 | var_52c;
    int32_t var_524;
    int32_t var_7ec = var_524;
    clap_builder::builder::arg::Arg::new::h9f9bc2a7380a2594(&var_7e8, 
        "helpNoneshim\x1b[0mnameCyan    "…");
    clap_builder::builder::arg::Arg::long::h47a3124f19131cff(&var_520, &var_7e8, 
        "helpNoneshim\x1b[0mnameCyan    "…");
    clap_builder::builder::arg::Arg::help::h9d919827356d600d(&var_7e8, &var_520, 
        "Print help information.changesli…", 0x17);
    clap_builder::builder::arg::Arg::action::hf7b23a295ed8d235(&var_520, &var_7e8, 5);
    clap_builder::builder::command::Command::arg::hf65503a78355b4c7(&var_7e8, &var_ab0, &var_520);
    clap_builder::builder::arg::Arg::new::h9f9bc2a7380a2594(&var_ab0, 
        "changeslike verbose but report o…");
    clap_builder::builder::arg::Arg::long::h47a3124f19131cff(&var_520, &var_ab0, 
        "changeslike verbose but report o…");
    clap_builder::builder::arg::Arg::short::ha157f5519922c33a(&var_ab0, &var_520, 0x63);
    clap_builder::builder::arg::Arg::help::h9d919827356d600d(&var_520, &var_ab0, 
        "like verbose but report only whe…", 0x32);
    void var_2a0;
    clap_builder::builder::arg::Arg::action::hf7b23a295ed8d235(&var_2a0, &var_520, 2);
    clap_builder::builder::command::Command::arg::hf65503a78355b4c7(&var_ab0, &var_7e8, &var_2a0);
    clap_builder::builder::arg::Arg::new::h9f9bc2a7380a2594(&var_7e8, 
        "quietsilentsuppress most error m…");
    clap_builder::builder::arg::Arg::long::h47a3124f19131cff(&var_520, &var_7e8, 
        "quietsilentsuppress most error m…");
    clap_builder::builder::arg::Arg::visible_alias::hc999d6545e1faaf6(&var_7e8, &var_520);
    clap_builder::builder::arg::Arg::short::ha157f5519922c33a(&var_520, &var_7e8, 0x66);
    clap_builder::builder::arg::Arg::help::h9d919827356d600d(&var_7e8, &var_520, 
        "suppress most error messagesverb…", 0x1c);
    clap_builder::builder::arg::Arg::action::hf7b23a295ed8d235(&var_520, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::hf65503a78355b4c7(&var_7e8, &var_ab0, &var_520);
    clap_builder::builder::arg::Arg::new::h9f9bc2a7380a2594(&var_ab0, 
        "verboseoutput a diagnostic for e…");
    clap_builder::builder::arg::Arg::long::h47a3124f19131cff(&var_520, &var_ab0, 
        "verboseoutput a diagnostic for e…");
    clap_builder::builder::arg::Arg::short::ha157f5519922c33a(&var_ab0, &var_520, 0x76);
    clap_builder::builder::arg::Arg::help::h9d919827356d600d(&var_520, &var_ab0, 
        "output a diagnostic for every fi…", 0x2c);
    clap_builder::builder::arg::Arg::action::hf7b23a295ed8d235(&var_2a0, &var_520, 2);
    clap_builder::builder::command::Command::arg::hf65503a78355b4c7(&var_ab0, &var_7e8, &var_2a0);
    clap_builder::builder::arg::Arg::new::h9f9bc2a7380a2594(&var_7e8, "no-preserve-root");
    clap_builder::builder::arg::Arg::long::h47a3124f19131cff(&var_520, &var_7e8, 
        "no-preserve-root");
    clap_builder::builder::arg::Arg::help::h9d919827356d600d(&var_7e8, &var_520, 
        "do not treat '/' specially (the …", 0x28);
    clap_builder::builder::arg::Arg::action::hf7b23a295ed8d235(&var_520, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::hf65503a78355b4c7(&var_7e8, &var_ab0, &var_520);
    clap_builder::builder::arg::Arg::new::h9f9bc2a7380a2594(&var_ab0, 
        "preserve-rootfail to operate rec…");
    clap_builder::builder::arg::Arg::long::h47a3124f19131cff(&var_520, &var_ab0, 
        "preserve-rootfail to operate rec…");
    clap_builder::builder::arg::Arg::help::h9d919827356d600d(&var_ab0, &var_520, 
        "fail to operate recursively on '…", 0x22);
    clap_builder::builder::arg::Arg::action::hf7b23a295ed8d235(&var_520, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::hf65503a78355b4c7(&var_ab0, &var_7e8, &var_520);
    clap_builder::builder::arg::Arg::new::h9f9bc2a7380a2594(&var_7e8, 
        "recursivechange files and direct…");
    clap_builder::builder::arg::Arg::long::h47a3124f19131cff(&var_520, &var_7e8, 
        "recursivechange files and direct…");
    clap_builder::builder::arg::Arg::short::ha157f5519922c33a(&var_7e8, &var_520, 0x52);
    clap_builder::builder::arg::Arg::help::h9d919827356d600d(&var_520, &var_7e8, 
        "change files and directories rec…", 0x28);
    clap_builder::builder::arg::Arg::action::hf7b23a295ed8d235(&var_2a0, &var_520, 2);
    clap_builder::builder::command::Command::arg::hf65503a78355b4c7(&var_7e8, &var_ab0, &var_2a0);
    clap_builder::builder::arg::Arg::new::h9f9bc2a7380a2594(&var_ab0, 
        "RFILEreferenceuse RFILE's mode i…");
    clap_builder::builder::arg::Arg::long::h47a3124f19131cff(&var_520, &var_ab0, 
        "referenceuse RFILE's mode instea…");
    clap_builder::builder::arg::Arg::value_hint::he090b2a29b4cc6b5(&var_ab0, &var_520, 3);
    clap_builder::builder::arg::Arg::help::h9d919827356d600d(&var_520, &var_ab0, 
        "use RFILE's mode instead of MODE…", 0x27);
    clap_builder::builder::command::Command::arg::hf65503a78355b4c7(&var_ab0, &var_7e8, &var_520);
    clap_builder::builder::arg::Arg::new::h9f9bc2a7380a2594(&var_7e8, &data_4186e0[0x10]);
    clap_builder::builder::arg::Arg::required_unless_present::h43b0d2c529daa729(&var_520, &var_7e8, 
        "RFILEreferenceuse RFILE's mode i…");
    clap_builder::builder::command::Command::arg::hf65503a78355b4c7(&var_7e8, &var_ab0, &var_520);
    clap_builder::builder::arg::Arg::new::h9f9bc2a7380a2594(&var_ab0, 
        "FILEchar -> \x1b[2mAnsi -- \x1b[…");
    clap_builder::builder::arg::Arg::required_unless_present::h43b0d2c529daa729(&var_520, &var_ab0, 
        &data_4186e0[0x10]);
    clap_builder::builder::arg::Arg::action::hf7b23a295ed8d235(&var_ab0, &var_520, 1);
    clap_builder::builder::arg::Arg::value_hint::he090b2a29b4cc6b5(&var_520, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::hf65503a78355b4c7(&var_ab0, &var_7e8, &var_520);
    uucore::features::perms::common_args::h624fd87efa47755f(&var_7e8);
    clap_builder::builder::command::Command::args::h1ddb64b5a313f38f(arg1, &var_ab0, &var_7e8);
    return arg1;
}
