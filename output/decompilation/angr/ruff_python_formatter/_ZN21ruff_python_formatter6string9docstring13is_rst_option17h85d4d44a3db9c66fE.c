long long ruff_python_formatter::string::docstring::is_rst_option(unsigned long long a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0x28], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x20]
    char v2;  // [bp-0x18]
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rdx

    v4 = core::str::<impl str>::trim_start_matches(a0, a1);
    v0 = 0;
    if (!(char)core::slice::<impl [T]>::starts_with(v4, v5, ::0x6e6590::core::char::methods::encode_utf8_raw(58, &v0), v5))
        return 0;
    v0 = v4;
    v1 = v5 + v4;
    v2 = 0;
    return v0.try_fold().eq(1);
}
