long long uu_yes::uu_app::he708a882494a8d90(struct_0 *a0)
{
    char v0;  // [bp-0xa48]
    char v1;  // [bp-0x78c]
    char v2;  // [bp-0x784]
    char v3;  // [bp-0x780]
    char v4;  // [bp-0x530]
    unsigned long long v5;  // [sp-0x268]
    unsigned long long v7;  // rdx
    unsigned int v8;  // ecx

    clap_builder::builder::command::Command::new::h4136bba7276c3d15(&v0, uucore::util_name::h60d842bf27b05e82(), v7);
    clap_builder::builder::command::Command::version::heeae237705f6760d(&v4, &v0, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h5208c568fd344ef5(&v0, &v4, "Repeatedly display a line with STRING (or 'y')", 46);
    uucore::format_usage::h76fcb2d15fbabc58(&v3, "{} [STRING]...", 14);
    clap_builder::builder::command::Command::override_usage::h404a480372021b18(&v4, &v0, &v3);
    clap_builder::builder::arg::Arg::new::hb6e5126fac425e19(&v0, "STRING", 6);
    v5 = 2;
    clap_builder::builder::arg::Arg::value_parser::h23dd186edb3427c3(&v3, &v0, &v5);
    clap_builder::builder::arg::Arg::action::ha46d941798abb8f4(&v5, &v3);
    clap_builder::builder::command::Command::arg::h875451c49d14dbcb(&v0, &v4, &v5);
    memcpy(a0, &v0, 700);
    v8 = *((int *)&v2);
    *((long long *)&(&a0->padding_0)[1]) = 549755814016 | *((long long *)&v1);
    *((unsigned int *)((char *)&a0->field_2bc + 4)) = v8;
    return a0;
}
