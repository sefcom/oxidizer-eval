long long uu_od::OdOptions::new(struct_0 *a0, unsigned long long a1, unsigned long long a2[3], unsigned int a3)
{
    int v0;  // [bp-0x178], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [bp-0x178]
    unsigned long long v2;  // [bp-0x178]
    unsigned long long v3;  // [bp-0x170]
    char *v4;  // [bp-0x168], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v5;  // [bp-0x160], Other Possible Types: unsigned int
    void* v6;  // [bp-0x158]
    unsigned long long v7;  // [bp-0x150]
    char *v8;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x148]
    char *v10;  // [bp-0x148]
    unsigned long v11;  // [bp-0x140], Other Possible Types: unsigned long long
    unsigned long v12;  // [bp-0x138], Other Possible Types: unsigned long long
    void* v13;  // [bp-0x130], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v14;  // [bp-0x120]
    unsigned long v15;  // [bp-0x118]
    void* v16;  // [bp-0x110]
    unsigned long long v17;  // [bp-0x108]
    unsigned int v18;  // [bp-0xfc]
    unsigned long long v19[1][2];  // [bp-0xf8]
    unsigned long long v20;  // [bp-0xf0]
    char v21;  // [bp-0xe8], Other Possible Types: unsigned long, unsigned long long
    unsigned int v22;  // [bp-0xe0]
    void* v23;  // [bp-0xd8]
    unsigned long long v24;  // [bp-0xd0]
    int v25;  // [bp-0xc8]
    unsigned long long v26;  // [bp-0xc8]
    struct_2 *v27;  // [bp-0xc0]
    unsigned long long v28;  // [bp-0xb8]
    void* v29;  // [bp-0xb0]
    unsigned long long v30;  // [bp-0xa8]
    unsigned long v31;  // [bp-0xa0]
    unsigned long long v32;  // [bp-0x98]
    unsigned long long v33[3];  // [bp-0x90]
    char *v34;  // [bp-0x88]
    unsigned long long v35;  // [bp-0x80]
    char v36;  // [bp-0x78]
    unsigned long long v37;  // [bp-0x68]
    int v38;  // [bp-0x60], Other Possible Types: char
    unsigned long long v39;  // [bp-0x50]
    int v40;  // [bp-0x48], Other Possible Types: char
    char v41;  // [bp-0x38]
    unsigned long long v43[3];  // rax
    unsigned int v44;  // ecx
    unsigned int v45;  // ecx
    unsigned long v46;  // rax
    unsigned int v47;  // ecx
    void* v49;  // rax
    struct_2 *v51;  // rax
    int v52;  // xmm0
    unsigned long v53;  // r14
    void* v54;  // r15
    void* v55;  // rbp
    unsigned long long v56;  // rbp
    unsigned long v57;  // rax
    unsigned long long v58;  // rdx
    char v59;  // al
    void* v60;  // r13
    unsigned long long v61;  // r13
    struct_3 *v62;  // rax
    char v63;  // cl
    unsigned long v64;  // rax

    v0.try_get_one(a1, "endiansrc/uu/od/src/od.rs", 6);
    v43 = "endiansrc/uu/od/src/od.rs".unwrap(6, &v0);
    if (v43)
    {
        v33[0] = v43;
        if ((char)v43[1].equal(v43[2], "littlebigInvalid argument --endian=: warning: invalid width  instead\n", 6))
        {
            v44 = 0;
        }
        else
        {
            v44 = v45 & 0xffffff00 | 1;
            if (!(char)v43[1].equal(v43[2], "bigInvalid argument --endian=: warning: invalid width  instead\n", 3))
            {
                v8 = &v33;
                v11 = <&T as core::fmt::Display>::fmt;
                v0 = &g_503910;
                v3 = 1;
                v6 = 0;
                v4 = &v8;
                v5 = 1;
                v19.map_or_else(&v0);
                v22 = 1;
                v46 = v19.new();
                a0->field_8 = v46;
                a0->field_10 = &g_503990;
                a0->field_0 = 2;
                return a0;
            }
        }
    }
    else
    {
        v44 = v47 & 0xffffff00 | 2;
    }
    v18 = v44;
    v0.try_get_one(a1, "skip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 10);
    v49 = "skip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ".unwrap(10, &v0);
    if (v49)
    {
        uu_od::parse_nrofbytes::parse_number_of_bytes(&v19, (long long)v49[8], (long long)v49[16]);
        if ((int)v19[0] != 4)
        {
            uu_od::format_error_message(&v36, v19[0], (long long)v49[8], (long long)v49[16], "skip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 10);
            v5 = 1;
            memcpy(&v0, &v36, 16);
            v4 = v37;
            *((double *)&a0->field_8) = v0.new();
            a0->field_10 = &g_503990;
            a0->field_0 = 2;
            core::ptr::drop_in_place<uucore::features::parser::parse_size::ParseSizeError>(&v19);
            return a0;
        }
        v17 = v20;
    }
    else
    {
        v17 = 0;
    }
    uu_od::parse_inputs::parse_inputs(&v0, a1);
    if (v6 == 3)
    {
        v12 = v4;
        memcpy(&(char)v8, &v0, 16);
        a0->field_8 = uu_od::OdOptions::new::{{closure}}(&(char)v8);
        a0->field_10 = &g_503990;
        a0->field_0 = 2;
        return a0;
    }
    memcpy(&v21, &(char)v4, 16);
    *((int128_t *)&v19[0]) = *((int128_t *)&v0);
    v23 = v6;
    v32 = v7;
    v24 = v32;
    v16 = v23;
    if (v23 == 2)
    {
        v28 = v21;
        *((unsigned long long [1][2])&v25) = v19;
        v29 = 0;
    }
    else
    {
        v17 = *((long long *)&v22);
        v51 = 8.alloc_impl(24);
        if (!v51)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v52 = v19;
        v51->field_10 = v21;
        *((void*)&v51->field_0) = v52;
        v26 = 1;
        v27 = v51;
        v28 = 1;
        v29 = v16;
    }
    uu_od::parse_formats::parse_format_flags(&(char)v10, a2, a3);
    if ((int)v8 == 1)
    {
        v4 = v13;
        *((int128_t *)&v0) = *((int128_t *)&v11);
        v5 = 1;
        v53 = v0.new();
        v54 = &g_503990;
    }
    else
    {
        v53 = v12;
        v54 = v13;
        v15 = v11;
        if (!((char)(((0 ^ v11) & (0 ^ -(v11))) >> 63)))
        {
            v0.try_get_one(a1, "widthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 5);
            v55 = "widthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ".unwrap(5, &v0);
            if (!v55 || (char)a1.value_source("widthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 5) != 2)
            {
                v14 = 16;
                v56 = 16;
                goto LABEL_46bd78;
            }
            uu_od::parse_nrofbytes::parse_number_of_bytes(&(char)v10, (long long)v55[8], (long long)v55[16]);
            if ((int)v8 != 4)
            {
                uu_od::format_error_message(&v38, v8, (long long)v55[8], (long long)v55[16], "widthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 5);
                v5 = 1;
                v0 = v38;
                v4 = v39;
                v57 = v0.new();
LABEL_46c026:
                a0->field_8 = v57;
                a0->field_10 = &g_503990;
                a0->field_0 = 2;
                core::ptr::drop_in_place<uucore::features::parser::parse_size::ParseSizeError>(&(char)v10);
                core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(v15, v53);
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v25);
                return a0;
            }
            v56 = v11;
            v14 = v56;
LABEL_46bd78:
            v30 = v53.fold(v53 + v54 * 40);
            if (v56)
            {
                if (!v30)
                    core::panicking::panic_const::panic_const_rem_by_zero(&g_5039f8); /* do not return */
                if ((v30 | v56) >> 32)
                {
                    if (!((unsigned long long)((0 CONCAT v56) % v30) CONCAT (unsigned long long)((0 CONCAT v56) / v30)) >> 64)
                        goto LABEL_46be9a;
                }
                else
                {
                    if (!((unsigned int)((0 CONCAT (unsigned int)v56) % (v30 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v56) / (v30 & 4294967295))) >> 32)
                        goto LABEL_46be9a;
                }
            }
            v9 = uucore::util_name();
            v11 = v58;
            v34 = &v9;
            v35 = <&T as core::fmt::Display>::fmt;
            v1 = &g_503920;
            v3 = 2;
            v6 = 0;
            v4 = &v34;
            v5 = 1;
            std::io::stdio::_eprint(&v1);
            v10 = &v14;
            v11 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
            v12 = &v30;
            v13 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
            v2 = &g_503940;
            v3 = 3;
            v6 = 0;
            v4 = &v10;
            v5 = 2;
            std::io::stdio::_eprint(&v2);
            v14 = v30;
LABEL_46be9a:
            v59 = a1.get_flag("output-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 17);
            v0.try_get_one(a1, "read-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 10);
            v60 = "read-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ".unwrap(10, &v0);
            if (v60)
            {
                uu_od::parse_nrofbytes::parse_number_of_bytes(&(char)v10, (long long)v60[8], (long long)v60[16]);
                if ((int)v10 == 4)
                {
                    v31 = v11;
                    v61 = 1;
                    goto LABEL_46bf19;
                }
                else
                {
                    uu_od::format_error_message(&v40, v10, (long long)v60[8], (long long)v60[16], "read-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 10);
                    v5 = 1;
                    v0 = v40;
                    v4 = *((long long *)&v41);
                    v57 = v0.new();
                    goto LABEL_46c026;
                }
            }
            else
            {
                v61 = 0;
LABEL_46bf19:
                v0.try_get_one(a1, "address-radixread-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 13);
                v62 = "address-radixread-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ".unwrap(13, &v0);
                v63 = 2;
                if (!v62)
                    goto LABEL_46c08f;
                if (v62->field_10)
                {
                    switch (v62->field_8->field_0)
                    {
                    case 110:
                        v63 = 3;
                        break;
                    case 120:
                        v63 = 1;
                        break;
                    case 111:
LABEL_46c08f:
                        a0->field_30 = v28;
                        a0->field_20 = (int128_t)v25;
                        a0->field_0 = v61;
                        a0->field_8 = v31;
                        a0->field_10 = v29;
                        a0->field_18 = v32;
                        a0->field_38 = v15;
                        a0->field_40 = v53;
                        a0->field_48 = v54;
                        a0->field_50 = v17;
                        a0->field_58 = v14;
                        a0->field_60 = v59;
                        a0->field_61 = v18;
                        a0->field_62 = v63;
                        return a0;
                    default:
                        (char)v10.to_vec("Radix must be one of [o, d, x, n]Radix cannot be empty, and must be one of [o, d, x, n]endiansrc/uu/od/src/od.rs", 33);
                        v4 = v12;
                        *((int128_t *)&v0) = *((int128_t *)&v10);
                        v5 = 1;
                        v64 = v0.new();
                    }
                }
                else
                {
                    (char)v10.to_vec("Radix cannot be empty, and must be one of [o, d, x, n]endiansrc/uu/od/src/od.rs", 54);
                    v4 = v12;
                    *((int128_t *)&v0) = *((int128_t *)&v10);
                    v5 = 1;
                    v64 = v0.new();
                }
                a0->field_8 = v64;
                a0->field_10 = &g_503990;
                a0->field_0 = 2;
                core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(v15, v53);
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v25);
                return a0;
            }
        }
    }
    a0->field_8 = v53;
    a0->field_10 = v54;
    a0->field_0 = 2;
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v25);
    return a0;
}
