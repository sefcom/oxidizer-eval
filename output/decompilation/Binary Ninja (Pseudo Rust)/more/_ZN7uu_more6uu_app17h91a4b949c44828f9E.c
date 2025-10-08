
  fn uu_more::uu_app::h91a4b949c44828f9(arg1: i64) -> i64

{
    let mut var_838: ();
    clap_builder::builder::command::Command::new::h30f6ba13e97ee7b8(&var_838, 
        uucore::util_name::h074417a1e6395129());
    let mut var_570: ();
    clap_builder::builder::command::Command::about::h69937b26e7a4dc33(&var_570, &var_838);
    let mut var_ab8: ();
    uucore::format_usage::he053403a896311ed(&var_ab8, "{} [OPTIONS] FILE...(uutils core…", 0x14);
    clap_builder::builder::command::Command::override_usage::hf67b24ac5419c372(&var_838, &var_570, 
        &var_ab8);
    clap_builder::builder::command::Command::version::h5c3b9e434c95db22(&var_570, &var_838);
    memcpy(&var_838, &var_570, 0x2bc);
    let var_2b4: i64;
    let var_57c: i64 = 0x8000000080 | var_2b4;
    let var_2ac: i32;
    let var_574: i32 = var_2ac;
    clap_builder::builder::arg::Arg::new::h35c2f329dc6a9a7b(&var_570, 
        "print-oversilentsqueezeDisplay t…");
    clap_builder::builder::arg::Arg::short::h907209d848174291(&var_ab8, &var_570, 0x63);
    clap_builder::builder::arg::Arg::long::hd968281fcccab1b6(&var_570, &var_ab8, 
        "print-oversilentsqueezeDisplay t…");
    clap_builder::builder::arg::Arg::help::h15d351abe03d51b6(&var_ab8, &var_570, 
        "Do not scroll, display text and …", 0x2f);
    let mut var_2a8: i64;
    clap_builder::builder::arg::Arg::action::h491360c059fb3385(&var_2a8, &var_ab8, 2);
    clap_builder::builder::command::Command::arg::h9aa5a89359e32a76(&var_570, &var_838, &var_2a8);
    clap_builder::builder::arg::Arg::new::h35c2f329dc6a9a7b(&var_838, 
        "silentsqueezeDisplay the content…");
    clap_builder::builder::arg::Arg::short::h907209d848174291(&var_ab8, &var_838, 0x64);
    clap_builder::builder::arg::Arg::long::hd968281fcccab1b6(&var_838, &var_ab8, 
        "silentsqueezeDisplay the content…");
    clap_builder::builder::arg::Arg::help::h15d351abe03d51b6(&var_ab8, &var_838, 
        "Display help instead of ringing …", 0x24);
    clap_builder::builder::arg::Arg::action::h491360c059fb3385(&var_2a8, &var_ab8, 2);
    clap_builder::builder::command::Command::arg::h9aa5a89359e32a76(&var_838, &var_570, &var_2a8);
    clap_builder::builder::arg::Arg::new::h35c2f329dc6a9a7b(&var_570, 
        "clean-printprint-oversilentsquee…");
    clap_builder::builder::arg::Arg::short::h907209d848174291(&var_ab8, &var_570, 0x70);
    clap_builder::builder::arg::Arg::long::hd968281fcccab1b6(&var_570, &var_ab8, 
        "clean-printprint-oversilentsquee…");
    clap_builder::builder::arg::Arg::help::h15d351abe03d51b6(&var_ab8, &var_570, 
        "Do not scroll, clean screen and …", 0x2c);
    clap_builder::builder::arg::Arg::action::h491360c059fb3385(&var_2a8, &var_ab8, 2);
    clap_builder::builder::command::Command::arg::h9aa5a89359e32a76(&var_570, &var_838, &var_2a8);
    clap_builder::builder::arg::Arg::new::h35c2f329dc6a9a7b(&var_838, 
        "squeezeDisplay the contents of a…");
    clap_builder::builder::arg::Arg::short::h907209d848174291(&var_ab8, &var_838, 0x73);
    clap_builder::builder::arg::Arg::long::hd968281fcccab1b6(&var_838, &var_ab8, 
        "squeezeDisplay the contents of a…");
    clap_builder::builder::arg::Arg::help::h15d351abe03d51b6(&var_ab8, &var_838, 
        "Squeeze multiple blank lines int…", 0x25);
    clap_builder::builder::arg::Arg::action::h491360c059fb3385(&var_2a8, &var_ab8, 2);
    clap_builder::builder::command::Command::arg::h9aa5a89359e32a76(&var_838, &var_570, &var_2a8);
    clap_builder::builder::arg::Arg::new::h35c2f329dc6a9a7b(&var_570, 
        "plainDisplay file beginning from…");
    clap_builder::builder::arg::Arg::short::h907209d848174291(&var_ab8, &var_570, 0x75);
    clap_builder::builder::arg::Arg::long::hd968281fcccab1b6(&var_570, &var_ab8, 
        "plainDisplay file beginning from…");
    clap_builder::builder::arg::Arg::action::h491360c059fb3385(&var_ab8, &var_570, 2);
    memcpy(&var_2a8, &var_ab8, 0x278);
    let var_840: i32;
    let var_30: i32 = var_840 | 4;
    let var_83c: i32;
    let var_2c: i32 = var_83c;
    clap_builder::builder::command::Command::arg::h9aa5a89359e32a76(&var_570, &var_838, &var_2a8);
    clap_builder::builder::arg::Arg::new::h35c2f329dc6a9a7b(&var_838, 
        "patternclean-printprint-oversile…");
    clap_builder::builder::arg::Arg::short::h907209d848174291(&var_ab8, &var_838, 0x50);
    clap_builder::builder::arg::Arg::long::hd968281fcccab1b6(&var_838, &var_ab8, 
        "patternclean-printprint-oversile…");
    memcpy(&var_ab8, &var_838, 0x278);
    let var_5c0: i32;
    let var_840_1: i32 = (var_5c0 & 0xffffffde) | 0x20;
    let var_5bc: i32;
    let var_83c_1: i32 = var_5bc;
    clap_builder::builder::arg::Arg::value_name::h3e4c8569e32d7d7a(&var_838, &var_ab8, 
        "patternclean-printprint-oversile…");
    clap_builder::builder::arg::Arg::help::h15d351abe03d51b6(&var_ab8, &var_838, 
        "Display file beginning from patt…", 0x29);
    clap_builder::builder::command::Command::arg::h9aa5a89359e32a76(&var_838, &var_570, &var_ab8);
    clap_builder::builder::arg::Arg::new::h35c2f329dc6a9a7b(&var_570, 
        "from-linepatternclean-printprint…");
    clap_builder::builder::arg::Arg::short::h907209d848174291(&var_ab8, &var_570, 0x46);
    clap_builder::builder::arg::Arg::long::hd968281fcccab1b6(&var_570, &var_ab8, 
        "from-linepatternclean-printprint…");
    clap_builder::builder::arg::Arg::num_args::h4f759de10311f98c(&var_ab8, &var_570);
    clap_builder::builder::arg::Arg::value_name::h3e4c8569e32d7d7a(&var_570, &var_ab8, 
        "numberfrom-linepatternclean-prin…");
    let rax_7: u64 = alloc::boxed::Box$LT$T$GT$::new::h21f2183ad1d56373(core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::he7963e1397bf94db);
    var_2a8 = 4;
    let var_2a0: u64 = rax_7;
    let var_298: *mut c_void = &data_525228;
    clap_builder::builder::arg::Arg::value_parser::hb2f24d6413984688(&var_ab8, &var_570, &var_2a8);
    clap_builder::builder::arg::Arg::help::h15d351abe03d51b6(&var_2a8, &var_ab8, 
        "Display file beginning from line…", 0x27);
    clap_builder::builder::command::Command::arg::h9aa5a89359e32a76(&var_570, &var_838, &var_2a8);
    clap_builder::builder::arg::Arg::new::h35c2f329dc6a9a7b(&var_838, 
        "linesnumberfrom-linepatternclean…");
    clap_builder::builder::arg::Arg::short::h907209d848174291(&var_ab8, &var_838, 0x6e);
    clap_builder::builder::arg::Arg::long::hd968281fcccab1b6(&var_838, &var_ab8, 
        "linesnumberfrom-linepatternclean…");
    clap_builder::builder::arg::Arg::value_name::h3e4c8569e32d7d7a(&var_ab8, &var_838, 
        "numberfrom-linepatternclean-prin…");
    clap_builder::builder::arg::Arg::num_args::h4f759de10311f98c(&var_838, &var_ab8);
    _$LT$u16$u20$as$u20$clap_builder..builder..value_parser..ValueParserFactory$GT$::value_parser::hf6bd37019978ff12(&var_ab8);
    clap_builder::builder::value_parser::RangedI64ValueParser$LT$T$GT$::range::hc2282f1ad623b328(
        &var_2a8, &var_ab8);
    clap_builder::builder::arg::Arg::value_parser::h9ba99eb30652d3bb(&var_ab8, &var_838, &var_2a8);
    clap_builder::builder::arg::Arg::help::h15d351abe03d51b6(&var_2a8, &var_ab8, 
        "The number of lines per screen f…", 0x23);
    clap_builder::builder::command::Command::arg::h9aa5a89359e32a76(&var_838, &var_570, &var_2a8);
    clap_builder::builder::arg::Arg::new::h35c2f329dc6a9a7b(&var_570, 
        "numberfrom-linepatternclean-prin…");
    clap_builder::builder::arg::Arg::long::hd968281fcccab1b6(&var_ab8, &var_570, 
        "numberfrom-linepatternclean-prin…");
    clap_builder::builder::arg::Arg::num_args::h4f759de10311f98c(&var_570, &var_ab8);
    _$LT$u16$u20$as$u20$clap_builder..builder..value_parser..ValueParserFactory$GT$::value_parser::hf6bd37019978ff12(&var_ab8);
    clap_builder::builder::value_parser::RangedI64ValueParser$LT$T$GT$::range::hc2282f1ad623b328(
        &var_2a8, &var_ab8);
    clap_builder::builder::arg::Arg::value_parser::h9ba99eb30652d3bb(&var_ab8, &var_570, &var_2a8);
    clap_builder::builder::arg::Arg::help::h15d351abe03d51b6(&var_2a8, &var_ab8, 
        "Same as --linesfilesPath to the …", 0xf);
    clap_builder::builder::command::Command::arg::h9aa5a89359e32a76(&var_570, &var_838, &var_2a8);
    clap_builder::builder::arg::Arg::new::h35c2f329dc6a9a7b(&var_838, 
        "filesPath to the files to be rea…");
    memcpy(&var_ab8, &var_838, 0x278);
    let var_840_2: i32 = var_5c0 & 0xfffffffe;
    let var_83c_2: i32 = var_5bc;
    clap_builder::builder::arg::Arg::action::h491360c059fb3385(&var_838, &var_ab8, 1);
    clap_builder::builder::arg::Arg::help::h15d351abe03d51b6(&var_ab8, &var_838, 
        "Path to the files to be read\rsr…", 0x1c);
    clap_builder::builder::arg::Arg::value_hint::h6e3af0887a8b9f0e(&var_838, &var_ab8);
    clap_builder::builder::command::Command::arg::h9aa5a89359e32a76(arg1, &var_570, &var_838);
    arg1
}
