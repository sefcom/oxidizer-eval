long long uu_numfmt::format::parse_suffix(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xe0]
    unsigned long long v1;  // [bp-0xd8]
    void* v2;  // [bp-0xd0], Other Possible Types: char
    unsigned long v3;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xc0]
    char v5;  // [bp-0xb8]
    unsigned int v6;  // [bp-0xb0]
    unsigned long v7;  // [bp-0xa8]
    char v8;  // [bp-0xa0]
    int v9;  // [bp-0x80], Other Possible Types: char
    unsigned long long v10;  // [bp-0x70]
    int v11;  // [bp-0x68]
    unsigned long long v12;  // [bp-0x58]
    char v13;  // [bp-0x50]
    unsigned long long v14;  // [bp-0x40]
    unsigned long long v16;  // rdx
    unsigned long v17;  // rbp
    char v18;  // r13b
    unsigned long long v19;  // r12
    char v20;  // bpl
    unsigned long long v21;  // r12
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24;  // rcx

    if (!a2)
        return uucore::mods::locale::get_message(a0, "numfmt-error-invalid-number-emptysrc/uu/numfmt/src/format.rs", 33);
    v6 = 0;
    v17 = (unsigned int)core::slice::<impl [T]>::ends_with(a1, a2, ::0x4abfe0::core::char::methods::encode_utf8_raw(105, &v6), v16);
    v0 = a1;
    v1 = a1 + a2;
    if ((char)v17)
        ::0x4ab750::core::str::validations::next_code_point_reverse(&v0);
    if (!(int)::0x4ab750::core::str::validations::next_code_point_reverse(&v0))
    {
LABEL_4acd9c:
        v9.to_vec("inputnumfmt-error-invalid-number-emptysrc/uu/numfmt/src/format.rs", 5);
        v2 = 0;
        v3 = a1;
        v4 = a2;
        v5 = 1;
        v6.spec_to_string(&v2);
        v12 = v10;
        v11 = v9;
        memcpy(&v13, &v6, 16);
        v14 = *((long long *)&v8);
        v6.from_iter(&v11);
        return uucore::mods::locale::get_message_with_args(a0, "numfmt-error-invalid-suffixnumfmt-error-invalid-numbernumbersuffixnumfmt-error-missing-i-suffixinumfmt-error-rejecting-suffixnumfmt-error-suffix-unsupported-for-unitnumfmt-error-unit-auto-not-supported-with-to", 27, &v6);
    }
    switch ((unsigned int)v16)
    {
    case 69:
        v18 = 5;
        break;
    case 71:
        v18 = 2;
        break;
    case 75:
        break;
    case 77:
        v18 = 1;
        break;
    case 80:
        v18 = 4;
        break;
    case 84:
        v18 = 3;
        break;
    case 89:
        v18 = 7;
        break;
    case 90:
        v18 = 6;
        break;
    default:
        if (!(!(char)v17 && !(unsigned int)v16 - 58 < -10))
            goto LABEL_4acd9c;
        v20 = 2;
        v19 = 0;
        goto LABEL_4ace67;
    }
    v19 = ~(v17 & 4294967295);
LABEL_4ace67:
    v21 = v19 + a2;
    v22 = v21.get(a1, a2);
    if (!v22)
        core::str::slice_error_fail(a1, a2, 0, v21, &g_58e340); /* do not return */
    v2.from_str(v22, a2);
    if (!v2)
    {
        a0->field_8 = v3;
        a0->field_10 = v18;
        *((char *)&a0[1].field_0) = v20;
        a0->field_0 = 0x8000000000000000;
        return 0x8000000000000000;
    }
    uu_numfmt::format::parse_suffix::{{closure}}(&v6, a1, a2);
    v23 = *((long long *)&v6);
    v24 = *((long long *)&v8);
    a0->field_0 = v23;
    a0->field_8 = v7;
    *((unsigned long long *)&a0->field_10) = v24;
    return v23;
}
