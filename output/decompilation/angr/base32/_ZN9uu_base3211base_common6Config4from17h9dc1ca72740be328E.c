long long uu_base32::base_common::Config::from(struct_0 *a0, unsigned long long a1)
{
    int v0;  // [bp-0x220], Other Possible Types: char
    unsigned long long v1;  // [bp-0x210]
    unsigned int v2;  // [bp-0x208]
    char v3;  // [bp-0x200]
    unsigned long long v4;  // [bp-0x200]
    unsigned long v5;  // [bp-0x1f0]
    void* v6;  // [bp-0x1e8], Other Possible Types: unsigned long long
    int v7;  // [bp-0x1e0], Other Possible Types: unsigned long
    unsigned long v8;  // [bp-0x1d8]
    char v9;  // [bp-0x1d0]
    int v10;  // [bp-0x1c8]
    unsigned long long v11;  // [bp-0x1b8]
    char v12;  // [bp-0x1b0]
    unsigned long long v13;  // [bp-0x1a0]
    int v14;  // [bp-0x198]
    unsigned long long v15;  // [bp-0x188]
    char v16;  // [bp-0x180]
    unsigned long long v17;  // [bp-0x170]
    char v18;  // [bp-0x168]
    unsigned long long v19;  // [bp-0x168]
    unsigned long long v20;  // [bp-0x160]
    unsigned long long v21;  // [bp-0x160]
    char v22;  // [bp-0x158]
    int v23;  // [bp-0xb8]
    int v24;  // [bp-0xa8]
    int v25;  // [bp-0x98]
    char v26;  // [bp-0x88]
    int v27;  // [bp-0x70], Other Possible Types: char
    int v28;  // [bp-0x60]
    int v29;  // [bp-0x50]
    char v30;  // [bp-0x40]
    unsigned long long v32[3];  // rax
    unsigned long long v33[3];  // r15
    struct_1 *v34;  // rax
    unsigned long long v35;  // rax
    unsigned long v36;  // r12
    unsigned long v37;  // r15
    unsigned long long v39[3];  // rax
    unsigned long long v40;  // r12
    char v41;  // al
    char v42;  // al

    v18.try_get_many(a1, _ZN9uu_base3211base_common7options4FILE17h296142de6aadc755E, g_5a2c08);
    v27.unwrap(_ZN9uu_base3211base_common7options4FILE17h296142de6aadc755E, g_5a2c08, &v18);
    if (*((long long *)&v27))
    {
        memcpy(&v26, &v30, 16);
        v25 = v29;
        v24 = v28;
        v23 = v27;
        v32 = v23.next();
        if (!v32)
            core::option::unwrap_failed(&g_5a24d8); /* do not return */
        v33 = v32;
        v34 = v23.next();
        if (v34)
        {
            v0.to_vec("operand", 7);
            v6 = 0;
            *((int128_t *)&v7) = *((int128_t *)&(&v34->padding_0)[1]);
            v9 = 1;
            v18.spec_to_string(&v6);
            v11 = v1;
            v10 = v0;
            memcpy(&v12, &v18, 16);
            v13 = *((long long *)&v22);
            v18.from_iter(&v10);
            uucore::mods::locale::get_message_with_args(&v0, "base-common-extra-operand-base-common-no-such-filebase-common-invalid-wrap-sizedefault(uutils coreutils) 0.1.0base-common-help-decodebase-common-help-ignore-garbagebase-common-help-wrapabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789+/=", 25, &v18);
            v2 = 1;
            *((double *)&a0->field_8) = v0.new();
            v35 = &g_5a2510;
        }
        else
        {
            if (!(!(char)v33[1].equal(v33[2], "-base-common-no-such-filebase-common-invalid-wrap-sizedefault(uutils coreutils) 0.1.0base-common-help-decodebase-common-help-ignore-garbagebase-common-help-wrapabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789+/=", 1)))
                goto LABEL_4ad532;
            v36 = v33[1];
            v37 = v33[2];
            std::fs::metadata(&v18, v36, v37);
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v19, v20);
            if (v19 == 2)
            {
                (char)v0.to_vec("filesizei128", 4);
                v6 = 1;
                v7 = v36;
                v8 = v37;
                v9 = 0;
                v18.spec_to_string(&v6);
                v15 = v1;
                v14 = v0;
                memcpy(&v16, &v18, 16);
                v17 = *((long long *)&v22);
                v18.from_iter(&v14);
                uucore::mods::locale::get_message_with_args(&(char)v0, "base-common-no-such-filebase-common-invalid-wrap-sizedefault(uutils coreutils) 0.1.0base-common-help-decodebase-common-help-ignore-garbagebase-common-help-wrapabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789+/=", 24, &v18);
                v2 = 1;
                *((double *)&a0->field_8) = (char)v0.new();
                v35 = &g_5a2598;
            }
            else
            {
                std::sys::pal::unix::os::split_paths::bytes_to_path(&v3, v36, v37);
LABEL_4ad541:
                v18.try_get_one(a1, _ZN9uu_base3211base_common7options4WRAP17h12eb99400841a458E, g_5a2be8);
                v39 = _ZN9uu_base3211base_common7options4WRAP17h12eb99400841a458E.unwrap(g_5a2be8, &v18);
                if (v39)
                {
                    uu_base32::base_common::Config::from::{{closure}}(&v18, v39[1], v39[2]);
                    if (v19)
                    {
                        v40 = v19;
                        v21 = v20;
                        if (v19)
                        {
                            a0->field_8 = v40;
                            *((unsigned long long *)&a0->field_10) = v20;
                            a0->field_0 = 2;
                            core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v3);
                            return a0;
                        }
                    }
                    else
                    {
                        v40 = 1;
                        v21 = v20;
                        if (v19)
                        {
                            a0->field_8 = 1;
                            *((unsigned long long *)&a0->field_10) = v20;
                            a0->field_0 = 2;
                            core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v3);
                            return a0;
                        }
                    }
                }
                else
                {
                    v40 = 0;
                    v21 = _ZN9uu_base3211base_common7options4WRAP17h12eb99400841a458E;
                }
                v41 = a1.get_flag(_ZN9uu_base3211base_common7options6DECODE17h9a8e163711363833E, g_5a2bd8);
                v42 = a1.get_flag(_ZN9uu_base3211base_common7options14IGNORE_GARBAGE17hd80a9a40432d6fddE, g_5a2bf8);
                a0->field_20 = v5;
                *((int128_t *)&a0->field_10) = *((int128_t *)&v4);
                a0->field_0 = v40;
                a0->field_8 = v21;
                a0->field_28 = v41;
                a0->field_29 = v42;
                return a0;
            }
        }
        *((unsigned long long *)&a0->field_10) = v35;
        a0->field_0 = 2;
        return a0;
    }
LABEL_4ad532:
    v4 = 0x8000000000000000;
    goto LABEL_4ad541;
}
