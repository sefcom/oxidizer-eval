long long uu_unlink::uu_app::hdbcae0fc1396218f(unsigned long long a0)
{
    unsigned long long v0;  // [sp-0x818]
    char v1;  // [bp-0x800]
    char v2;  // [bp-0x5b8]
    char v3;  // [bp-0x5b4]
    char v4;  // [bp-0x544]
    char v5;  // [bp-0x53c]
    char v6;  // [bp-0x538]
    unsigned long long v7;  // [sp-0x27c]
    unsigned int v8;  // [sp-0x274]
    char v9;  // [bp-0x270]
    unsigned int v10;  // [sp-0x28]
    unsigned int v11;  // [sp-0x24]
    unsigned long long v13;  // rdx

    clap_builder::builder::command::Command::new::h0612242c1aea96b0(&v6, uucore::util_name::h60d842bf27b05e82(), v13);
    clap_builder::builder::command::Command::version::h62767f57d7e778ba(&v1, &v6);
    clap_builder::builder::command::Command::about::h0008fc200e6dd216(&v6, &v1);
    uucore::format_usage::h76fcb2d15fbabc58(&v9, "{} [FILE]\n{} OPTION", 19);
    clap_builder::builder::command::Command::override_usage::h9afbce5b934cea29(&v1, &v6, &v9);
    memcpy(&v6, &v1, 700);
    v7 = 549755814016 | *((long long *)&v4);
    v8 = *((int *)&v5);
    clap_builder::builder::arg::Arg::new::h3131ba4629097389(&v1);
    memcpy(&v9, &v1, 584);
    v10 = *((int *)&v2) | 5;
    v11 = *((int *)&v3);
    v0 = 2;
    clap_builder::builder::arg::Arg::value_parser::h2fdfdff095e21063(&v1, &v9, &v0);
    clap_builder::builder::arg::Arg::value_hint::hf1e0ee7812d8c3f9(&v9, &v1);
    clap_builder::builder::command::Command::arg::h6ba96fa9d71a8bbf(a0, &v6, &v9);
    return a0;
}
