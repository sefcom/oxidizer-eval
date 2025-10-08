long long bat::config::get_args_from_env_opts_var(unsigned long long *a0)
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x28]
    unsigned long long v5;  // rax

    std::env::var(&v0, "BAT_OPTS", 8);
    if ((v0 & 1))
    {
        v5 = (unsigned long long)core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
    }
    else
    {
        v5 = v1;
        memcpy(&v3, &v2, 16);
        if (v5 != 0x8000000000000000)
        {
            memcpy(&v1, &v3, 16);
            v0 = v5;
            return (unsigned long long)bat::config::get_args_from_env_opts_var::{{closure}}(a0, &v0);
        }
    }
    *(a0) = 9223372036854775809;
    return v5;
}
