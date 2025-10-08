long long ruff_python_formatter::string::docstring::Indentation::trim_start_str(unsigned int *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v3;  // rax
    void* v4;  // rbp
    unsigned int v5;  // edx
    unsigned int v6;  // r13d
    unsigned int v7;  // r13d
    unsigned long long v8;  // r13

    v3 = (unsigned long long)a0.columns();
    v0 = a1;
    v1 = a1 + a2;
    if (!((char)core::str::validations::next_code_point(&v0) & 1))
        return a1;
    v4 = 0;
    while (true)
    {
        v7 = v6;
        if (v4 >= v3)
            return a1;
        switch (v7)
        {
        case 32:
            v4 += 1;
            v8 = 1;
            goto LABEL_726929;
        case 9:
            a1 = 1.get(a1, a2);
            if (!a1)
                core::str::slice_error_fail(a1, a2, 1, a2, &g_97f578); /* do not return */
            v4 = (v4 & 18446744073709551608) + 8;
LABEL_726940:
            v6 = v5;
            if (!((char)core::str::validations::next_code_point(&v0) & 1))
                return a1;
            break;
        default:
            if (v7 - 9 >= 5)
            {
                if (v7 < 128)
                {
                    return a1;
                }
                else if (!(char)::0x6eca90::core::unicode::unicode_data::white_space::lookup(v7))
                {
                    return a1;
                }
                else if (v7 < 0x800)
                {
                    v4 += 2;
                    v8 = 2;
                }
                else
                {
                    v8 = 4 - (v7 < 0x10000);
                    v4 += v8;
                }
LABEL_726929:
                a1 = v8.get(a1, a2);
                if (!a1)
                    core::str::slice_error_fail(a1, a2, v8, a2, &g_97f590); /* do not return */
                goto LABEL_726940;
            }
        }
    }
}
