long long ruff_python_formatter::string::normalize::QuoteMetadataKind::regular(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned int v3;  // ebp
    unsigned int v4;  // r15d
    unsigned long long v5;  // rax
    unsigned int v6;  // edx

    v0 = a1;
    v1 = a2 + a1;
    v3 = 0;
    v4 = 0;
    while (true)
    {
        if (!((char)core::str::validations::next_code_point(&v0) & 1))
            break;
        switch (v6)
        {
        case 34:
            v3 += 1;
            break;
        case 39:
            v4 += 1;
            break;
        default:
            continue;
        }
    }
    a0->field_4 = v4;
    a0->field_8 = v3;
    a0->field_0 = 2;
    return v5;
}
