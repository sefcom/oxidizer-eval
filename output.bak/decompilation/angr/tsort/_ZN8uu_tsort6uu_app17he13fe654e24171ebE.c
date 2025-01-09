long long uu_tsort::uu_app::he13fe654e24171eb(unsigned long long a0)
{
    char v0;  // [bp-0x7f8]
    unsigned int v1;  // [sp-0x5b0]
    unsigned int v2;  // [sp-0x5ac]
    char v3;  // [bp-0x53c]
    char v4;  // [bp-0x534]
    char v5;  // [bp-0x530]
    char v6;  // [bp-0x2e8]
    char v7;  // [bp-0x2e4]
    char v8;  // [bp-0x2e0]
    unsigned long long v9;  // [sp-0x24]
    unsigned int v10;  // [sp-0x1c]
    unsigned long long v12;  // rdx

    clap_builder::builder::command::Command::new::h0f7f76504b62bfdd(&v8, uucore::util_name::h60d842bf27b05e82(), v12);
    clap_builder::builder::command::Command::version::hc65d08eaa2967e22(&v0, &v8, "0.0.28", 6);
    uucore::format_usage::h76fcb2d15fbabc58(&v5, "{} [OPTIONS] FILE", 17);
    clap_builder::builder::command::Command::override_usage::h6100217c1dd68ad3(&v8, &v0, &v5);
    clap_builder::builder::command::Command::about::h80931b9713114aa4(&v0, &v8, "Topological sort the strings in FILE.\nStrings are defined as any sequence of tokens separated by whitespace (tab, space, or newline), ordering them based on dependencies in a directed acyclic graph (DAG). \nUseful for scheduling and determining execution order.\nIf FILE is not passed in, stdin is used instead.", 309);
    memcpy(&v8, &v0, 700);
    v9 = 549755814016 | *((long long *)&v3);
    v10 = *((int *)&v4);
    clap_builder::builder::arg::Arg::new::h56a5d743255bfec1(&v0, "filei128", 4);
    clap_builder::builder::arg::Arg::default_value::h90c7bf8cefc20dbd(&v5, &v0);
    memcpy(&v0, &v5, 584);
    v1 = *((int *)&v6) | 4;
    v2 = *((int *)&v7);
    clap_builder::builder::arg::Arg::value_hint::h2431f684e8007877(&v5, &v0, 3);
    clap_builder::builder::command::Command::arg::h807438ac2cd7a4f6(a0, &v8, &v5);
    return a0;
}
