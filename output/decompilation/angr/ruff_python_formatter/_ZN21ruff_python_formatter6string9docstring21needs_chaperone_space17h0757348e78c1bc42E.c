long long ruff_python_formatter::string::docstring::needs_chaperone_space(char a0, unsigned long long a1, unsigned long long a2, char a3)
{
    unsigned int v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x2c]
    unsigned int v3;  // ebx
    unsigned int v4;  // ebx
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx

    v4 = v3 & 0xffffff00 | 1;
    if (((char)ruff_python_formatter::string::docstring::count_consecutive_chars_from_end(a1, a2) & 1))
        return v4;
    if ((a3 & 1))
    {
        if ((a0 & 2))
        {
            v0 = 0;
            v6 = ::0x6e6590::core::char::methods::encode_utf8_raw((!(a0 & 1)) * 5 + 34, &v0).strip_suffix_of(v5, a1, a2);
            if (v6 && !((char)ruff_python_formatter::string::docstring::count_consecutive_chars_from_end(v6, v5) & 1))
                return v4;
        }
    }
    else
    {
        if ((a0 & 2))
        {
            v1 = 0;
            return (unsigned int)core::slice::<impl [T]>::ends_with(a1, a2, ::0x6e6590::core::char::methods::encode_utf8_raw((!(a0 & 1)) * 5 + 34, &v1), v7);
        }
    }
    return 0;
}
