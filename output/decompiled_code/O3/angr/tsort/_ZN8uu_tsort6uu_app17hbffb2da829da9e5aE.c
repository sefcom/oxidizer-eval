long long uu_tsort::uu_app::hbffb2da829da9e5a(unsigned long long a0, unsigned long a1, unsigned long a2)
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

    clap_builder::builder::command::Command::new::h13c3b6fcf8969480(&v8, uucore::util_name::h412db5e565a079f3(), v12);
    clap_builder::builder::command::Command::version::h19a797645bac9e85(&v0, &v8, "0.0.28{} [OPTIONS] FILETopological sort the strings in FILE.\nStrings are defined as any sequence of tokens separated by whitespace (tab, space, or newline), ordering them based on dependencies in a directed acyclic graph (DAG). \nUseful for scheduling and d", 6);
    uucore::format_usage::h00b69bae12d8ac9c(&v5, "{} [OPTIONS] FILETopological sort the strings in FILE.\nStrings are defined as any sequence of tokens separated by whitespace (tab, space, or newline), ordering them based on dependencies in a directed acyclic graph (DAG). \nUseful for scheduling and determi", 17);
    clap_builder::builder::command::Command::override_usage::h8449d0540b762c28(&v8, &v0, &v5);
    clap_builder::builder::command::Command::about::h3638fb80208dc3ef(&v0, &v8, "Topological sort the strings in FILE.\nStrings are defined as any sequence of tokens separated by whitespace (tab, space, or newline), ordering them based on dependencies in a directed acyclic graph (DAG). \nUseful for scheduling and determining execution order.\nIf FILE is not passed in, stdin is used instead.", 309);
    memcpy(&v8, &v0, 700);
    v9 = 549755814016 | *((long long *)&v3);
    v10 = *((int *)&v4);
    clap_builder::builder::arg::Arg::new::he83b18e05e501614(&v0, "filei128", 4);
    clap_builder::builder::arg::Arg::default_value::haffc97f399ff0719(&v5, &v0, v12);
    memcpy(&v0, &v5, 584);
    v1 = *((int *)&v6) | 4;
    v2 = *((int *)&v7);
    clap_builder::builder::arg::Arg::value_hint::h4237bd3bb02d916c(&v5, &v0, 3);
    clap_builder::builder::command::Command::arg::hf36abbcbbb0dfd26(a0, &v8, &v5);
    return a0;
}
