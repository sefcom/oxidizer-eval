long long uu_join::parse_field_number(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v1;  // [bp-0xa8]
    unsigned int v2;  // [bp-0xa0]
    char v3;  // [bp-0x98]
    char v4;  // [bp-0x97]
    unsigned long v5;  // [bp-0x90]
    char v6;  // [bp-0x88]
    void* v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    char v10;  // [bp-0x50]
    int v11;  // [bp-0x48]
    unsigned long long v12;  // [bp-0x38]
    char v13;  // [bp-0x30]
    unsigned long long v14;  // [bp-0x20]
    unsigned long long v16;  // rax

    v16 = ::0x4b1840::core::num::<impl u64>::from_str_radix(&v3, a1, a2);
    if (v3)
    {
        if (!(v4 == 2))
            goto LABEL_4b5ba4;
        a0->field_8 = 18446744073709551615;
    }
    else if (v5)
    {
        v16 = v5 - 1;
        a0->field_8 = v16;
    }
    else
    {
LABEL_4b5ba4:
        v0.to_vec("valuejoin-error-multi-character-tabjoin-error-non-utf8-tabvaj12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoi", 5);
        v7 = 0;
        v8 = a1;
        v9 = a2;
        v10 = 1;
        v3.spec_to_string(&v7);
        v12 = v1;
        v11 = v0;
        memcpy(&v13, &v3, 16);
        v14 = *((long long *)&v6);
        v3.from_iter(&v11);
        uucore::mods::locale::get_message_with_args(&v0, "join-error-invalid-field-numberjoin-error-invalid-file-number-simpleerrorjoin-error-io", 31, &v3);
        v2 = 1;
        *((double *)&a0->field_0) = v0.new();
        a0->field_8 = &g_594360;
        return &g_594360;
    }
    a0->field_0 = 0;
    return v16;
}
