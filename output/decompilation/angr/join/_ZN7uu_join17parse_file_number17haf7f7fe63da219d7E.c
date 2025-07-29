long long uu_join::parse_file_number(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v1;  // [bp-0xa8]
    unsigned int v2;  // [bp-0xa0]
    void* v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x90]
    unsigned long long v5;  // [bp-0x88]
    char v6;  // [bp-0x80]
    int v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x68]
    char v9;  // [bp-0x60]
    unsigned long long v10;  // [bp-0x50]
    char v11;  // [bp-0x48]
    char v12;  // [bp-0x38]
    unsigned long long v14;  // rax

    v14 = a1.equal(a2, "12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-ord", 1);
    if ((char)v14)
    {
        a0->field_8 = 0;
    }
    else
    {
        v14 = a1.equal(a2, "2itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orde", 1);
        if (!(char)v14)
        {
            v0.to_vec("valuejoin-error-multi-character-tabjoin-error-non-utf8-tabvaj12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoi", 5);
            v3 = 0;
            v4 = a1;
            v5 = a2;
            v6 = 1;
            v11.spec_to_string(&v3);
            v8 = v1;
            v7 = v0;
            memcpy(&v9, &v11, 16);
            v10 = *((long long *)&v12);
            v11.from_iter(&v7);
            uucore::mods::locale::get_message_with_args(&v0, "join-error-invalid-file-number-simpleerrorjoin-error-io", 37, &v11);
            v2 = 1;
            *((double *)&a0->field_0) = v0.new();
            *((char **)&a0->field_8) = &g_594360;
            return &g_594360;
        }
        a0->field_8 = 1;
    }
    a0->field_0 = 0;
    return v14;
}
