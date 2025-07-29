long long uu_join::Spec::parse(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x138], Other Possible Types: char
    unsigned long long v1;  // [bp-0x128]
    unsigned int v2;  // [bp-0x120]
    void* v3;  // [bp-0x118]
    unsigned long long v4;  // [bp-0x110]
    unsigned long long v5;  // [bp-0x108]
    char v6;  // [bp-0x100]
    unsigned long long v7;  // [bp-0xf8]
    unsigned long long v8;  // [bp-0xf0]
    char v9;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long v10;  // [bp-0xe0]
    char v11;  // [bp-0xd8]
    char v12;  // [bp-0xb8]
    unsigned long long v13;  // [bp-0xa8]
    char v14;  // [bp-0xa0]
    unsigned long long v15;  // [bp-0x90]
    int v16;  // [bp-0x88]
    unsigned long long v17;  // [bp-0x78]
    char v18;  // [bp-0x70]
    unsigned long long v19;  // [bp-0x60]
    char v20;  // [bp-0x58]
    unsigned long long v21;  // [bp-0x48]
    char v22;  // [bp-0x40]
    unsigned long long v23;  // [bp-0x30]
    unsigned int v25;  // edx
    char v26;  // bpl
    unsigned long long v28;  // rax
    char *v29;  // r14
    char *v30;  // rsi
    unsigned long long v31;  // rsi
    unsigned long long v32;  // rdx

    v7 = a1;
    v8 = a1 + a2;
    if ((int)core::str::validations::next_code_point(&v7))
    {
        if (v25 != 48)
        {
            if (v25 != 49)
            {
                if (!(v25 == 50))
                    goto LABEL_4b3a73;
                v26 = 1;
                if (!(!(int)core::str::validations::next_code_point(&v7)))
                    goto LABEL_4b3b1a;
            }
            else if ((int)core::str::validations::next_code_point(&v7))
            {
LABEL_4b3b1a:
                if (v25 == 46)
                {
                    uu_join::parse_field_number(&v9, v7, v8 - v7);
                    if (!v9)
                    {
                        a0->field_8 = 1;
                        a0->padding_9[0] = v26;
                        a0->field_10 = v10;
                        a0->field_0 = 0;
                        return v10;
                    }
                    *((unsigned long long *)&a0->field_8) = v9;
                    a0->field_10 = v10;
                    a0->field_0 = 1;
                    return v9;
                }
            }
            v0.to_vec("speci128", 4);
            v3 = 0;
            v4 = a1;
            v5 = a2;
            v6 = 1;
            (char)v9.spec_to_string(&v3);
            v21 = v1;
            memcpy(&v20, &v0, 16);
            memcpy(&v22, &v9, 16);
            v23 = *((long long *)&v11);
            v29 = &(char)v9;
            v30 = &v20;
        }
        else
        {
            v28 = core::str::validations::next_code_point(&v7);
            if (!(unsigned int)v28)
            {
                a0->field_8 = 0;
                a0->field_0 = 0;
                return v28;
            }
            v0.to_vec("speci128", 4);
            v3 = 0;
            v4 = a1;
            v5 = a2;
            v6 = 1;
            (char)v9.spec_to_string(&v3);
            v13 = v1;
            memcpy(&v12, &v0, 16);
            memcpy(&v14, &v9, 16);
            v15 = *((long long *)&v11);
            v29 = &(char)v9;
            v30 = &v12;
        }
        v29.from_iter(v30);
        v31 = "join-error-invalid-field-specifierjoin-error-invalid-file-number-valid string with at least one bytevaluejoin-error-multi-character-tabjoin-error-non-utf8-tabvaj12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-he";
        v32 = 34;
    }
    else
    {
LABEL_4b3a73:
        v0.to_vec("speci128", 4);
        v3 = 0;
        v4 = a1;
        v5 = a2;
        v6 = 1;
        (char)v9.spec_to_string(&v3);
        v17 = v1;
        v16 = v0;
        memcpy(&v18, &v9, 16);
        v19 = *((long long *)&v11);
        v29 = &(char)v9;
        (char)v9.from_iter(&v16);
        v31 = "join-error-invalid-file-number-valid string with at least one bytevaluejoin-error-multi-character-tabjoin-error-non-utf8-tabvaj12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eign";
        v32 = 30;
    }
    uucore::mods::locale::get_message_with_args(&v0, v31, v32, v29);
    v2 = 1;
    *((double *)&a0->field_8) = v0.new();
    a0->field_10 = &g_594360;
    a0->field_0 = 1;
    return 5849952;
}
