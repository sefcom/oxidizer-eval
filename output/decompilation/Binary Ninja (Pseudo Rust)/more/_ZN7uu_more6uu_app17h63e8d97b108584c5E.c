
  fn uu_more::uu_app::h63e8d97b108584c5(arg1: i64) -> i64

{
    let mut var_7f8: ();
    clap_builder::builder::command::Command::new::h4cd9e3569d13970e(&var_7f8, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_530: ();
    clap_builder::builder::command::Command::about::h9ff2bbb321d67a8d(&var_530, &var_7f8, 
        "Display the contents of a text f…", 0x23);
    let mut var_a48: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_a48, "{} [OPTIONS] FILE...0.0.28Do not…", 0x14);
    clap_builder::builder::command::Command::override_usage::h47a621d79ce17eab(&var_7f8, &var_530, 
        &var_a48);
    clap_builder::builder::command::Command::version::h24b63b7e8d28daa3(&var_530, &var_7f8, 
        "0.0.28Do not scroll, display tex…");
    memcpy(&var_7f8, &var_530, 0x2bc);
    let var_274: i64;
    let var_53c: i64 = 0x8000000080 | var_274;
    let var_26c: i32;
    let var_534: i32 = var_26c;
    clap_builder::builder::arg::Arg::new::h96a7073f8f8824a0(&var_530, 
        "print-oversilentsqueezeDisplay t…");
    clap_builder::builder::arg::Arg::short::h97a1ce4c8b6bf8e1(&var_a48, &var_530, 0x63);
    clap_builder::builder::arg::Arg::long::h12f0ba76cb7eb328(&var_530, &var_a48, 
        "print-oversilentsqueezeDisplay t…");
    clap_builder::builder::arg::Arg::help::h94ea6279b4aa990d(&var_a48, &var_530, 
        "Do not scroll, display text and …", 0x2f);
    let mut var_268: i64;
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
    let var_800: i32;
    let var_20: i32 = var_800 | 4;
    let var_7fc: i32;
    let var_1c: i32 = var_7fc;
    clap_builder::builder::command::Command::arg::h27b36f6dc0b01fdc(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h96a7073f8f8824a0(&var_7f8, 
        "patternclean-printprint-oversile…");
    clap_builder::builder::arg::Arg::short::h97a1ce4c8b6bf8e1(&var_a48, &var_7f8, 0x50);
    clap_builder::builder::arg::Arg::long::h12f0ba76cb7eb328(&var_7f8, &var_a48, 
        "patternclean-printprint-oversile…");
    memcpy(&var_a48, &var_7f8, 0x248);
    let var_5b0: i32;
    let var_800_1: i32 = (var_5b0 & 0xffffffde) | 0x20;
    let var_5ac: i32;
    let var_7fc_1: i32 = var_5ac;
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
    let rax_7: *mut fn(arg1: *mut i8, arg2: *mut i8, arg3: i64) -> *mut i8 =
        alloc::boxed::Box$LT$T$GT$::new::hfae2bfb329dafdab();
    var_268 = 4;
    let var_260: *mut fn(arg1: *mut i8, arg2: *mut i8, arg3: i64) -> *mut i8 = rax_7;
    let var_258: *mut c_void = &data_5628d0;
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
    let var_800_2: i32 = var_5b0 & 0xfffffffe;
    let var_7fc_2: i32 = var_5ac;
    clap_builder::builder::arg::Arg::action::h4bee5205dd7d4073(&var_7f8, &var_a48, 1);
    clap_builder::builder::arg::Arg::help::h94ea6279b4aa990d(&var_a48, &var_7f8, 
        "Path to the files to be readsrc/…", 0x1c);
    clap_builder::builder::arg::Arg::value_hint::h0d53a1b77a8e0b73(&var_7f8, &var_a48, 3);
    clap_builder::builder::command::Command::arg::h27b36f6dc0b01fdc(arg1, &var_530, &var_7f8);
    arg1
}
