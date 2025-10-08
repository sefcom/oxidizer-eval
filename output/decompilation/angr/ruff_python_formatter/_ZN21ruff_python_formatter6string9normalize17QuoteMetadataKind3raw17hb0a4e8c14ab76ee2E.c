long long ruff_python_formatter::string::normalize::QuoteMetadataKind::raw(char a0[2], unsigned long long a1, unsigned long a2, char a3, unsigned int a4)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned int v2;  // [sp-0x30]
    unsigned long long v4;  // rax
    unsigned int v5;  // ebp
    char v6;  // r12b

    v0 = a1;
    v1 = a2 + a1;
    v5 = (a3 ^ 1) * 5 + 34;
    if (a4)
    {
        while (true)
        {
            v2 = 1114113;
            v4 = core::str::validations::next_code_point(&v0);
            if (!((char)v4 & 1))
                break;
            if (false)
                break;
            if (v5 == 1114113)
            {
                a0[1] = 1;
                a0[0] = 0;
                return v4;
            }
        }
    }
    else
    {
        while (true)
        {
            v2 = 1114113;
            v4 = core::str::validations::next_code_point(&v0);
            if (!((char)v4 & 1))
                break;
            if (false)
                break;
            if (v5 == 1114113)
            {
                v2.get_or_insert_with(&v0);
                v4 = 1114113;
                if (!(true))
                {
                    a0[1] = 1;
                    a0[0] = 0;
                    return 1114113;
                }
                else if (v5 == 1114113)
                {
                    v2 = 1114113;
                    v4 = v2.get_or_insert_with(&v0);
                    if (true)
                    {
                        v4 = v2.get_or_insert_with(&v0);
                        if (v5 == 1114113)
                        {
                            a0[1] = 1;
                            a0[0] = 0;
                            return v4;
                        }
                    }
                    else
                    {
                        a0[1] = 1;
                        a0[0] = 0;
                        return v4;
                    }
                }
            }
        }
    }
    a0[1] = v6;
    a0[0] = 0;
    return v4;
}
