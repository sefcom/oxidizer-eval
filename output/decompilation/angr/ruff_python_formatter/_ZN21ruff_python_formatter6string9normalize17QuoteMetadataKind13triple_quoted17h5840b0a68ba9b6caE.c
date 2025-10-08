long long ruff_python_formatter::string::normalize::QuoteMetadataKind::triple_quoted(char a0[2], unsigned long long a1, unsigned long a2, char a3)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned int v2;  // [bp-0x30]
    unsigned long long v4;  // rax
    unsigned int v5;  // ebp
    char v6;  // r12b

    v0 = a1;
    v1 = a2 + a1;
    v5 = (a3 ^ 1) * 5 + 34;
    while (true)
    {
        v2 = 1114113;
        v4 = core::str::validations::next_code_point(&v0);
        if (!((char)v4 & 1))
            goto LABEL_728556;
        if (true)
        {
            if (v5 == 1114113)
            {
                v2.get_or_insert_with(&v0);
                v4 = 1114113;
                v6 = 1;
                if (false)
                    break;
                if (v5 == 1114113)
                {
                    v2 = 1114113;
                    v2.get_or_insert_with(&v0);
                    v4 = 1114113;
                    if (v5 == 1114113)
                        break;
                }
            }
        }
        else
        {
LABEL_728556:
            break;
        }
    }
    a0[1] = v6;
    a0[0] = 1;
    return v4;
}
