double bat::config::config_file(long long a0)
{
    char v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    int v2;  // [bp-0x28]
    int v3;  // [bp-0x18]
    unsigned long v5;  // xmm0lq

    std::env::var(&v0, "BAT_CONFIG_PATH# This is `bat`s configuration file. Each line either contains a comment or\n# a command-line option that you want to pass to `bat` by default. You can\n# run `bat --help` to get a list of all possible configuration options.\n\n# Specify desired", 15);
    if ((v0 & 1))
    {
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
        bat::config::config_file::{{closure}}(a0);
        return v5;
    }
    v3 = v2;
    if (!((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63)))
    {
        *((void*)&(&a0->field_0)[1]) = v3;
        a0->field_0 = v1;
        return (unsigned long long)v3;
    }
    bat::config::config_file::{{closure}}(a0);
    return (unsigned long long)v2;
}
