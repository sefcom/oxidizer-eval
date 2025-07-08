
  fn uu_tsort::uu_app::he13fe654e24171eb(arg1: i64) -> i64

{
    let mut var_2e0: ();
    clap_builder::builder::command::Command::new::h0f7f76504b62bfdd(&var_2e0, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_7f8: ();
    clap_builder::builder::command::Command::version::hc65d08eaa2967e22(&var_7f8, &var_2e0, 
        "0.0.28{} [OPTIONS] FILETopologic…");
    let mut var_530: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_530, "{} [OPTIONS] FILETopological sor…", 0x11);
    clap_builder::builder::command::Command::override_usage::h6100217c1dd68ad3(&var_2e0, &var_7f8, 
        &var_530);
    clap_builder::builder::command::Command::about::h80931b9713114aa4(&var_7f8, &var_2e0, 
        "Topological sort the strings in …", 0x135);
    memcpy(&var_2e0, &var_7f8, 0x2bc);
    let var_53c: i64;
    let var_24: i64 = 0x8000000080 | var_53c;
    let var_534: i32;
    let var_1c: i32 = var_534;
    clap_builder::builder::arg::Arg::new::h56a5d743255bfec1(&var_7f8, 
        "filei128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::default_value::h90c7bf8cefc20dbd(&var_530, &var_7f8);
    memcpy(&var_7f8, &var_530, 0x248);
    let var_2e8: i32;
    let var_5b0: i32 = var_2e8 | 4;
    let var_2e4: i32;
    let var_5ac: i32 = var_2e4;
    clap_builder::builder::arg::Arg::value_hint::h2431f684e8007877(&var_530, &var_7f8, 3);
    clap_builder::builder::command::Command::arg::h807438ac2cd7a4f6(arg1, &var_2e0, &var_530);
    arg1
}
