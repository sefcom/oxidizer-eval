long long uu_join::parse_separator(struct_0 *a0, char *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    char v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0xa0]
    unsigned long long v4;  // [bp-0x98]
    unsigned int v5;  // [bp-0x90]
    int v6;  // [bp-0x78], Other Possible Types: char
    unsigned long long v7;  // [bp-0x68]
    unsigned int v8;  // [bp-0x60]
    int v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x48]
    char v11;  // [bp-0x40]
    unsigned long long v12;  // [bp-0x30]
    unsigned long v14;  // rax
    char *v15;  // rdi
    unsigned int v16;  // edx

    if (!a2)
    {
        a0->field_0 = 9223372036854775810;
        return 9223372036854775810;
    }
    else if (a2 == 1)
    {
        v14 = *(a1);
        a0->field_0 = 0x8000000000000000;
        a0->field_8 = v14;
        return v14;
    }
    else
    {
        v2.try_from(a1, a2);
        if ((v2 & 1))
        {
            uucore::mods::locale::get_message(&v2, "join-error-non-utf8-tabvaj12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-", 23);
            v5 = 1;
            v15 = &v2;
        }
        else
        {
            v0 = v3;
            v1 = v0 + v4;
            if (!((int)core::str::validations::next_code_point(&v0) && v16 != 0x110000))
            {
                core::option::expect_failed("valid string with at least one bytevaluejoin-error-multi-character-tabjoin-error-non-utf8-tabvaj12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-he", 35, &g_594520); /* do not return */
            }
            else if ((int)core::str::validations::next_code_point(&v0))
            {
                if (!(v16 ^ 92) && !(v16 ^ 48))
                {
                    a0->field_0 = 0x8000000000000000;
                    a0->field_8 = 0;
                    return 0x8000000000000000;
                }
                v6.to_vec("valuejoin-error-multi-character-tabjoin-error-non-utf8-tabvaj12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoi", 5);
                v2.to_vec(v0, v4);
                v12 = v4;
                memcpy(&v11, &v2, 16);
                v9 = v6;
                v10 = v7;
                v2.from_iter(&v9);
                uucore::mods::locale::get_message_with_args(&v6, "join-error-multi-character-tabjoin-error-non-utf8-tabvaj12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-hel", 30, &v2);
                v8 = 1;
                v15 = &v6;
            }
            else
            {
                return a0.from(v0, v4);
            }
        }
        *((double *)&a0->field_8) = v15.new();
        a0->field_10 = &g_594360;
        a0->field_0 = 9223372036854775812;
        return 9223372036854775812;
    }
}
