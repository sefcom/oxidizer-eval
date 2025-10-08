long long bat::style::ComponentAction::extract_from_str(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x2c]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned int v4;  // edx
    unsigned long long v5;  // rdx
    char v6;  // al
    unsigned long long v7;  // rax
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rdx

    v1 = a1;
    v2 = a1 + a2;
    if (!((char)core::str::validations::next_code_point(&v1) & 1))
        goto LABEL_842cd4;
    switch (v4)
    {
    case 43:
        v0 = 0;
        a1 = ::0x80cb00::core::char::methods::encode_utf8_raw(43, &v0, 4).strip_prefix_of(v9, a1, a2);
        if (!a1)
            core::option::unwrap_failed(&g_acec90); /* do not return */
        v6 = 1;
        v7 = a1 & 0xffffffffffffff00 | 1;
        v8 = v9;
        break;
    case 45:
        v0 = 0;
        a1 = ::0x80cb00::core::char::methods::encode_utf8_raw(45, &v0, 4).strip_prefix_of(v5, a1, a2);
        if (!a1)
            core::option::unwrap_failed(&g_acec78); /* do not return */
        v6 = 2;
        v7 = a1 & 0xffffffffffffff00 | 2;
        v8 = v5;
        break;
    default:
LABEL_842cd4:
        v7 = 0;
        v8 = a2;
        break;
    }
    a0->field_0 = v6;
    a0->field_8 = a1;
    a0->field_10 = v8;
    return v7;
}
