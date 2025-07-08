
  int64_t uu_more::uu_app::h63e8d97b108584c5(int64_t arg1)

{
    void var_7f8;
    clap_builder::builder::command::Command::new::h4cd9e3569d13970e(&var_7f8, 
        uucore::util_name::h60d842bf27b05e82());
    void var_530;
    clap_builder::builder::command::Command::about::h9ff2bbb321d67a8d(&var_530, &var_7f8, 
        "Display the contents of a text f…", 0x23);
    void var_a48;
    uucore::format_usage::h76fcb2d15fbabc58(&var_a48, "{} [OPTIONS] FILE...0.0.28Do not…", 0x14);
    clap_builder::builder::command::Command::override_usage::h47a621d79ce17eab(&var_7f8, &var_530, 
        &var_a48);
    clap_builder::builder::command::Command::version::h24b63b7e8d28daa3(&var_530, &var_7f8, 
        "0.0.28Do not scroll, display tex…");
    memcpy(&var_7f8, &var_530, 0x2bc);
    int64_t var_274;
    int64_t var_53c = 0x8000000080 | var_274;
    int32_t var_26c;
    int32_t var_534 = var_26c;
    clap_builder::builder::arg::Arg::new::h96a7073f8f8824a0(&var_530, 
        "print-oversilentsqueezeDisplay t…");
    clap_builder::builder::arg::Arg::short::h97a1ce4c8b6bf8e1(&var_a48, &var_530, 0x63);
    clap_builder::builder::arg::Arg::long::h12f0ba76cb7eb328(&var_530, &var_a48, 
        "print-oversilentsqueezeDisplay t…");
    clap_builder::builder::arg::Arg::help::h94ea6279b4aa990d(&var_a48, &var_530, 
        "Do not scroll, display text and …", 0x2f);
    int64_t var_268;
    clap_builder::builder::arg::Arg::action::h4bee5205dd7d4073(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h27b36f6dc0b01fdc(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h96a7073f8f8824a0(&var_7f8, 
        "silentsqueezeDisplay the content…");
    clap_builder::builder::arg::Arg::short::h97a1ce4c8b6bf8e1(&var_a48, &var_7f8, 0x64);
    clap_builder::builder::arg::Arg::long::h12f0ba76cb7eb328(&var_7f8, &var_a48, 
        "silentsqueezeDisplay the content…");
    clap_builder::builder::arg::Arg::help::h94ea6279b4aa990d(&var_a48, &var_7f8, 
        "Display help instead of ringing …", 0x24);
    clap_builder::builder::arg::Arg::action::h4bee5205dd7d4073(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h27b36f6dc0b01fdc(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h96a7073f8f8824a0(&var_530, 
        "clean-printprint-oversilentsquee…");
    clap_builder::builder::arg::Arg::short::h97a1ce4c8b6bf8e1(&var_a48, &var_530, 0x70);
    clap_builder::builder::arg::Arg::long::h12f0ba76cb7eb328(&var_530, &var_a48, 
        "clean-printprint-oversilentsquee…");
    clap_builder::builder::arg::Arg::help::h94ea6279b4aa990d(&var_a48, &var_530, 
        "Do not scroll, clean screen and …", 0x2c);
    clap_builder::builder::arg::Arg::action::h4bee5205dd7d4073(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h27b36f6dc0b01fdc(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h96a7073f8f8824a0(&var_7f8, 
        "squeezeDisplay the contents of a…");
    clap_builder::builder::arg::Arg::short::h97a1ce4c8b6bf8e1(&var_a48, &var_7f8, 0x73);
    clap_builder::builder::arg::Arg::long::h12f0ba76cb7eb328(&var_7f8, &var_a48, 
        "squeezeDisplay the contents of a…");
    clap_builder::builder::arg::Arg::help::h94ea6279b4aa990d(&var_a48, &var_7f8, 
        "Squeeze multiple blank lines int…", 0x25);
    clap_builder::builder::arg::Arg::action::h4bee5205dd7d4073(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h27b36f6dc0b01fdc(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h96a7073f8f8824a0(&var_530, 
        "plainDisplay file beginning from…");
    clap_builder::builder::arg::Arg::short::h97a1ce4c8b6bf8e1(&var_a48, &var_530, 0x75);
    clap_builder::builder::arg::Arg::long::h12f0ba76cb7eb328(&var_530, &var_a48, 
        "plainDisplay file beginning from…");
    clap_builder::builder::arg::Arg::action::h4bee5205dd7d4073(&var_a48, &var_530, 2);
    memcpy(&var_268, &var_a48, 0x248);
    int32_t var_800;
    int32_t var_20 = var_800 | 4;
    int32_t var_7fc;
    int32_t var_1c = var_7fc;
    clap_builder::builder::command::Command::arg::h27b36f6dc0b01fdc(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h96a7073f8f8824a0(&var_7f8, 
        "patternclean-printprint-oversile…");
    clap_builder::builder::arg::Arg::short::h97a1ce4c8b6bf8e1(&var_a48, &var_7f8, 0x50);
    clap_builder::builder::arg::Arg::long::h12f0ba76cb7eb328(&var_7f8, &var_a48, 
        "patternclean-printprint-oversile…");
    memcpy(&var_a48, &var_7f8, 0x248);
    int32_t var_5b0;
    int32_t var_800_1 = (var_5b0 & 0xffffffde) | 0x20;
    int32_t var_5ac;
    int32_t var_7fc_1 = var_5ac;
    clap_builder::builder::arg::Arg::value_name::hd3aae3acca850dc6(&var_7f8, &var_a48, 
        "patternclean-printprint-oversile…");
    clap_builder::builder::arg::Arg::help::h94ea6279b4aa990d(&var_a48, &var_7f8, 
        "Display file beginning from patt…", 0x29);
    clap_builder::builder::command::Command::arg::h27b36f6dc0b01fdc(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::h96a7073f8f8824a0(&var_530, 
        "from-linepatternclean-printprint…");
    clap_builder::builder::arg::Arg::short::h97a1ce4c8b6bf8e1(&var_a48, &var_530, 0x46);
    clap_builder::builder::arg::Arg::long::h12f0ba76cb7eb328(&var_530, &var_a48, 
        "from-linepatternclean-printprint…");
    clap_builder::builder::arg::Arg::num_args::hab109f783006334e(&var_a48, &var_530);
    clap_builder::builder::arg::Arg::value_name::hd3aae3acca850dc6(&var_530, &var_a48, 
        "numberfrom-linepatternclean-prin…");
    char* (** rax_7)(char* arg1, char* arg2, int64_t arg3) =
        alloc::boxed::Box$LT$T$GT$::new::hfae2bfb329dafdab();
    var_268 = 4;
    char* (** var_260)(char* arg1, char* arg2, int64_t arg3) = rax_7;
    void* const var_258 = &data_5628d0;
    clap_builder::builder::arg::Arg::value_parser::h875608cf92624eed(&var_a48, &var_530, &var_268);
    clap_builder::builder::arg::Arg::help::h94ea6279b4aa990d(&var_268, &var_a48, 
        "Display file beginning from line…", 0x27);
    clap_builder::builder::command::Command::arg::h27b36f6dc0b01fdc(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h96a7073f8f8824a0(&var_7f8, 
        "linesnumberfrom-linepatternclean…");
    clap_builder::builder::arg::Arg::short::h97a1ce4c8b6bf8e1(&var_a48, &var_7f8, 0x6e);
    clap_builder::builder::arg::Arg::long::h12f0ba76cb7eb328(&var_7f8, &var_a48, 
        "linesnumberfrom-linepatternclean…");
    clap_builder::builder::arg::Arg::value_name::hd3aae3acca850dc6(&var_a48, &var_7f8, 
        "numberfrom-linepatternclean-prin…");
    clap_builder::builder::arg::Arg::num_args::hab109f783006334e(&var_7f8, &var_a48);
    _$LT$u16$u20$as$u20$clap_builder..builder..value_parser..ValueParserFactory$GT$::value_parser::h14857a0c9fe853b0(&var_a48);
    clap_builder::builder::value_parser::RangedI64ValueParser$LT$T$GT$::range::h9002732387942f74(
        &var_268, &var_a48, 0);
    clap_builder::builder::arg::Arg::value_parser::hf8e0a5c2eae1e03c(&var_a48, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::help::h94ea6279b4aa990d(&var_268, &var_a48, 
        "The number of lines per screen f…", 0x23);
    clap_builder::builder::command::Command::arg::h27b36f6dc0b01fdc(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h96a7073f8f8824a0(&var_530, 
        "numberfrom-linepatternclean-prin…");
    clap_builder::builder::arg::Arg::long::h12f0ba76cb7eb328(&var_a48, &var_530, 
        "numberfrom-linepatternclean-prin…");
    clap_builder::builder::arg::Arg::num_args::hab109f783006334e(&var_530, &var_a48);
    _$LT$u16$u20$as$u20$clap_builder..builder..value_parser..ValueParserFactory$GT$::value_parser::h14857a0c9fe853b0(&var_a48);
    clap_builder::builder::value_parser::RangedI64ValueParser$LT$T$GT$::range::h9002732387942f74(
        &var_268, &var_a48, 0);
    clap_builder::builder::arg::Arg::value_parser::hf8e0a5c2eae1e03c(&var_a48, &var_530, &var_268);
    clap_builder::builder::arg::Arg::help::h94ea6279b4aa990d(&var_268, &var_a48, 
        "Same as --linesfilesPath to the …", 0xf);
    clap_builder::builder::command::Command::arg::h27b36f6dc0b01fdc(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h96a7073f8f8824a0(&var_7f8, 
        "filesPath to the files to be rea…");
    memcpy(&var_a48, &var_7f8, 0x248);
    int32_t var_800_2 = var_5b0 & 0xfffffffe;
    int32_t var_7fc_2 = var_5ac;
    clap_builder::builder::arg::Arg::action::h4bee5205dd7d4073(&var_7f8, &var_a48, 1);
    clap_builder::builder::arg::Arg::help::h94ea6279b4aa990d(&var_a48, &var_7f8, 
        "Path to the files to be readsrc/…", 0x1c);
    clap_builder::builder::arg::Arg::value_hint::h0d53a1b77a8e0b73(&var_7f8, &var_a48, 3);
    clap_builder::builder::command::Command::arg::h27b36f6dc0b01fdc(arg1, &var_530, &var_7f8);
    return arg1;
}
