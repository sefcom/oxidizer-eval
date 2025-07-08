
  fn uu_yes::uu_app::he708a882494a8d90(arg1: *mut c_void) -> *mut c_void

{
    let mut var_a48: ();
    clap_builder::builder::command::Command::new::h4136bba7276c3d15(&var_a48, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_530: ();
    clap_builder::builder::command::Command::version::heeae237705f6760d(&var_530, &var_a48, 
        "0.0.28Repeatedly display a line …");
    clap_builder::builder::command::Command::about::h5208c568fd344ef5(&var_a48, &var_530, 
        "Repeatedly display a line with S…", 0x2e);
    let mut var_780: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_780, "{} [STRING]...STRINGassertion fa…", 0xe);
    clap_builder::builder::command::Command::override_usage::h404a480372021b18(&var_530, &var_a48, 
        &var_780);
    clap_builder::builder::arg::Arg::new::hb6e5126fac425e19(&var_a48, 
        "STRINGassertion failed: !buf.is_…");
    let mut var_268: i64 = 2;
    clap_builder::builder::arg::Arg::value_parser::h23dd186edb3427c3(&var_780, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::action::ha46d941798abb8f4(&var_268, &var_780);
    clap_builder::builder::command::Command::arg::h875451c49d14dbcb(&var_a48, &var_530, &var_268);
    memcpy(arg1, &var_a48, 0x2bc);
    let var_78c: i64;
    *arg1.byte_offset(0x2bc) = 0x8000000080 | var_78c;
    let var_784: i32;
    *arg1.byte_offset(0x2c4) = var_784;
    arg1
}
