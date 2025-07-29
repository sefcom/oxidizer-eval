long long uu_od::OdOptions::new(unsigned long a0, unsigned long long a1, char *a2)
{
    struct_1 *v0;  // [bp-0x290]
    int v1;  // [bp-0x288], Other Possible Types: char, unsigned long long
    int v3;  // [bp-0x288]
    int v4;  // [bp-0x288]
    char *v5;  // [bp-0x288]
    char v6;  // [bp-0x280], Other Possible Types: unsigned long long
    int v7;  // [bp-0x278], Other Possible Types: char *, unsigned long long
    int v8;  // [bp-0x270], Other Possible Types: unsigned int
    unsigned long long v9;  // [bp-0x268]
    char *v10;  // [bp-0x260]
    int v11;  // [bp-0x258], Other Possible Types: char
    unsigned long long v12;  // [bp-0x258]
    int v13;  // [bp-0x258]
    unsigned long long v14;  // [bp-0x258]
    unsigned long long v15;  // [bp-0x250]
    int v16;  // [bp-0x248], Other Possible Types: char *, unsigned long long
    unsigned long long v17;  // [bp-0x240], Other Possible Types: unsigned int
    int v18;  // [bp-0x238], Other Possible Types: void*, unsigned long long
    unsigned long long v19;  // [bp-0x230]
    int v20;  // [bp-0x228]
    char *v21;  // [bp-0x218]
    unsigned long long v22;  // [bp-0x210]
    unsigned long long v23;  // [bp-0x208]
    char *v24;  // [bp-0x200]
    unsigned long long v25;  // [bp-0x1f8]
    unsigned int v26;  // [bp-0x1ec]
    char v27;  // [bp-0x1e8]
    char *v28;  // [bp-0x1e8]
    int v29;  // [bp-0x1e8]
    char *v30;  // [bp-0x1e0]
    char *v31;  // [bp-0x1d8], Other Possible Types: char
    int v32;  // [bp-0x1d0]
    char *v33;  // [bp-0x1c0]
    char *v34;  // [bp-0x1b0]
    int v35;  // [bp-0x1a8]
    unsigned long long v36;  // [bp-0x1a8]
    struct_0 *v37;  // [bp-0x1a0]
    unsigned long long v38;  // [bp-0x198]
    void* v39;  // [bp-0x190]
    unsigned long long v40;  // [bp-0x188]
    char *v41;  // [bp-0x180]
    unsigned long long v42;  // [bp-0x178]
    unsigned long long v43;  // [bp-0x170]
    int v44;  // [bp-0x168]
    int v45;  // [bp-0x158]
    char *v46;  // [bp-0x150]
    unsigned long long v47;  // [bp-0x148]
    unsigned long long v48;  // [bp-0x140]
    unsigned long long v49;  // [bp-0x130]
    int v50;  // [bp-0x128], Other Possible Types: char
    char *v51;  // [bp-0x118]
    char v52;  // [bp-0x110]
    unsigned long long v53;  // [bp-0x100]
    int v54;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v55;  // [bp-0xe8]
    int v56;  // [bp-0xe0], Other Possible Types: char
    unsigned long long v57;  // [bp-0xd0]
    int v58;  // [bp-0xc8], Other Possible Types: char
    unsigned long long v59;  // [bp-0xb8]
    int v60;  // [bp-0xb0], Other Possible Types: char
    unsigned long long v61;  // [bp-0xa0]
    char v62;  // [bp-0x98]
    unsigned long long v63;  // [bp-0x88]
    char v64;  // [bp-0x80]
    unsigned long long v65;  // [bp-0x70]
    char v66;  // [bp-0x68]
    char *v67;  // [bp-0x58]
    char v68;  // [bp-0x50]
    char *v69;  // [bp-0x40]
    char *v71;  // r12
    unsigned long long v72[3];  // rax
    unsigned long long v73;  // rbp
    unsigned int v74;  // ebp
    char *v75;  // rax
    unsigned long long v76[3];  // rax
    int v77;  // xmm0
    struct_0 *v78;  // rax
    unsigned long long v79;  // rcx
    char *v80;  // rax
    unsigned long long v81;  // rcx
    unsigned long long v82[3];  // r15
    unsigned long long v83;  // r15
    int v84;  // xmm0
    unsigned long long v85;  // rdx
    int v86;  // xmm2
    int v87;  // xmm3
    char v88;  // al
    unsigned long long v89[3];  // r15
    unsigned long long v90;  // r15
    int v91;  // xmm0
    struct_3 *v92;  // r14
    char v93;  // al
    char *v94;  // rax

    v71 = a2;
    v11.try_get_one(a1, "endianbig: warning: widthmin\nradixod-error-invalid-endianskip-bytessrc/uu/od/src/od.rs", 6);
    v72 = "endianbig: warning: widthmin\nradixod-error-invalid-endianskip-bytessrc/uu/od/src/od.rs".unwrap(6, &v11);
    if (v72)
    {
        v73 = v72[1];
        if ((char)v73.equal(v72[2], "littleendianbig: warning: widthmin\nradixod-error-invalid-endianskip-bytessrc/uu/od/src/od.rs", 6))
        {
            v74 = 0;
        }
        else
        {
            v74 = (unsigned int)v73 & 0xffffff00 | 1;
            if (!(char)v73.equal(v72[2], "big: warning: widthmin\nradixod-error-invalid-endianskip-bytessrc/uu/od/src/od.rs", 3))
            {
                v1.to_vec("endianbig: warning: widthmin\nradixod-error-invalid-endianskip-bytessrc/uu/od/src/od.rs", 6);
                v11.clone(v72);
                v63 = v7;
                memcpy(&v62, &v1, 16);
                memcpy(&v64, &v11, 16);
                v65 = v16;
                v11.from_iter(&v62);
                uucore::mods::locale::get_message_with_args(&v1, "od-error-invalid-endianskip-bytessrc/uu/od/src/od.rs", 23, &v11);
                v8 = 1;
                v75 = v1.new();
                v0->field_8 = v75;
                v0->field_10 = &g_5956f8;
                v0->field_0 = 2;
                return a0;
            }
        }
    }
    else
    {
        v74 = vvar_218{reg 56} & 0xffffff00 | 2;
    }
    v11.try_get_one(a1, "skip-bytessrc/uu/od/src/od.rs", 10);
    v76 = "skip-bytessrc/uu/od/src/od.rs".unwrap(10, &v11);
    if (v76)
    {
        uu_od::parse_nrofbytes::parse_number_of_bytes(&v27, v76[1], v76[2]);
        if (*((int *)&v27) != 4)
        {
            memcpy(&(char)v7, &v31, 16);
            *((int128_t *)&v1) = *((int128_t *)&v27);
            uu_od::format_error_message(&v52, v1, v76[1], v76[2], "skip-bytessrc/uu/od/src/od.rs", 10);
            v17 = 1;
            memcpy(&v11, &v52, 16);
            v16 = v53;
            *((double *)&v0->field_8) = v11.new();
            v0->field_10 = &g_5956f8;
            v0->field_0 = 2;
            core::ptr::drop_in_place<uucore::features::parser::parse_size::ParseSizeError>(&(char)v1);
            return a0;
        }
        v26 = v74;
        v34 = v30;
    }
    else
    {
        v26 = v74;
        v34 = 0;
    }
    uu_od::parse_inputs::parse_inputs(&v11, a1, &g_595760);
    if (v18 == 3)
    {
        v7 = v16;
        memcpy(&(char)v1, &v11, 16);
        v0->field_8 = uu_od::OdOptions::new::{{closure}}(&(char)v1);
        v0->field_10 = &g_5956f8;
        v0->field_0 = 2;
        return a0;
    }
    v77 = *((int128_t *)&v11);
    *((int128_t *)&v45) = *((int128_t *)&v16);
    v44 = v77;
    v47 = v18;
    v49 = v19;
    v48 = v49;
    if (v47 == 2)
    {
        v38 = (long long)v45;
        v35 = v44;
        v39 = 0;
    }
    else
    {
        v16 = (long long)v45;
        v11 = v44;
        v34 = v46;
        v78 = 24.alloc_impl();
        if (!v78)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v78->field_10 = (long long)v45;
        *((void*)&v78->field_0) = v44;
        v36 = 1;
        v37 = v78;
        v38 = 1;
        v39 = v47;
    }
    uu_od::parse_formats::parse_format_flags(&(char)v1, a2, v79);
    if ((int)v1 == 1)
    {
        v16 = *((long long *)&v8);
        *((int128_t *)&v11) = *((int128_t *)&v6);
        v17 = 1;
        v80 = v11.new();
        v81 = &g_5956f8;
    }
    else
    {
        v80 = v7;
        v81 = *((long long *)&v8);
        if (!((char)(((0 ^ v6) & (0 ^ -(v6))) >> 63)))
        {
            v40 = v6;
            v41 = v80;
            v42 = v81;
            v11.try_get_one(a1, "widthmin\nradixod-error-invalid-endianskip-bytessrc/uu/od/src/od.rs", 5);
            v82 = "widthmin\nradixod-error-invalid-endianskip-bytessrc/uu/od/src/od.rs".unwrap(5, &v11);
            if (v82 && (char)a1.value_source("widthmin\nradixod-error-invalid-endianskip-bytessrc/uu/od/src/od.rs", 5) == 2)
            {
                uu_od::parse_nrofbytes::parse_number_of_bytes(&v27, v82[1], v82[2]);
                if (*((int *)&v27) != 4)
                {
                    v84 = *((int128_t *)&v27);
                    *((int128_t *)&v7) = *((int128_t *)&v31);
                    v1 = v84;
                    uu_od::format_error_message(&v54, v1, v82[1], v82[2], "widthmin\nradixod-error-invalid-endianskip-bytessrc/uu/od/src/od.rs", 5);
                    v17 = 1;
                    v11 = v54;
                    v16 = v55;
                    *((double *)&v0->field_8) = v11.new();
                    v0->field_10 = &g_5956f8;
                    v0->field_0 = 2;
                    core::ptr::drop_in_place<uucore::features::parser::parse_size::ParseSizeError>(&(char)v1);
                    ::0x4aab70::core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(&v40);
                    ::0x4aa750::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v36);
                    return a0;
                }
                v83 = v30;
                v25 = v83;
            }
            else
            {
                v25 = 16;
                v83 = 16;
            }
            v43 = v41.fold(&v41[40 * v42]);
            if (v83)
            {
                if (!v43)
                    core::panicking::panic_const::panic_const_rem_by_zero(&g_595788); /* do not return */
                if ((v43 | v83) >> 32)
                {
                    if (!((unsigned long long)((0 CONCAT v83) % v43) CONCAT (unsigned long long)((0 CONCAT v83) / v43)) >> 64)
                        goto LABEL_4aba07;
                }
                else
                {
                    if (!((unsigned int)((0 CONCAT (unsigned int)v83) % (v43 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v83) / (v43 & 4294967295))) >> 32)
                        goto LABEL_4aba07;
                }
            }
            *((long long *)&v4) = uucore::util_name();
            v6 = v85;
            v28 = &(unsigned long long)v4;
            v30 = &<&T as core::fmt::Display>::fmt;
            v12 = &g_595698;
            v15 = 2;
            v18 = 0;
            v16 = &v28;
            v17 = 1;
            std::io::stdio::_eprint(&v12);
            v12.to_vec("widthmin\nradixod-error-invalid-endianskip-bytessrc/uu/od/src/od.rs", 5);
            v7 = v16;
            *((int128_t *)&v3) = *((int128_t *)&v12);
            v12.spec_to_string(&v25);
            v31 = v7;
            *((int128_t *)&v29) = (int128_t)v3;
            *((int128_t *)&v32) = *((int128_t *)&v12);
            v33 = v16;
            v12.to_vec("min\nradixod-error-invalid-endianskip-bytessrc/uu/od/src/od.rs", 3);
            v51 = v16;
            memcpy(&v50, &v12, 16);
            v12.spec_to_string(&v43);
            v7 = v51;
            v4 = v50;
            *((int128_t *)&v8) = *((int128_t *)&v12);
            v10 = v16;
            v86 = *((int128_t *)&v31);
            v87 = (int128_t)(&v32)[8];
            *((int128_t *)&v13) = (int128_t)v29;
            v16 = v86;
            v18 = v87;
            v23 = v9;
            v24 = v10;
            v21 = v7;
            v22 = (long long)v8;
            v20 = v50;
            (unsigned long long)v4.from_iter(&v12);
            uucore::mods::locale::get_message_with_args(&v28, "od-error-invalid-widthoutput-duplicatesread-bytesaddress-radixod-error-radix-invalidod-error-radix-emptymsgod-error-invalid-inputs(uutils coreutils) 0.1.0od-after-helpod-help-helpod-help-address-radixRADIXod-help-skip-bytesBYTESod-help-read-bytesod-help-en", 22, &(unsigned long long)v4);
            v5 = &v28;
            v6 = <alloc::string::String as core::fmt::Display>::fmt;
            v14 = &g_5956b8;
            v15 = 2;
            v18 = 0;
            v16 = &v5;
            v17 = 1;
            std::io::stdio::_eprint(&v14);
            ::0x4aa180::core::ptr::drop_in_place<alloc::string::String>(&v28);
            v25 = v43;
LABEL_4aba07:
            v88 = a1.get_flag("output-duplicatesread-bytesaddress-radixod-error-radix-invalidod-error-radix-emptymsgod-error-invalid-inputs(uutils coreutils) 0.1.0od-after-helpod-help-helpod-help-address-radixRADIXod-help-skip-bytesBYTESod-help-read-bytesod-help-endianbig|littlestringsN", 17);
            v11.try_get_one(a1, "read-bytesaddress-radixod-error-radix-invalidod-error-radix-emptymsgod-error-invalid-inputs(uutils coreutils) 0.1.0od-after-helpod-help-helpod-help-address-radixRADIXod-help-skip-bytesBYTESod-help-read-bytesod-help-endianbig|littlestringsNotImplemented: ou", 10);
            v89 = "read-bytesaddress-radixod-error-radix-invalidod-error-radix-emptymsgod-error-invalid-inputs(uutils coreutils) 0.1.0od-after-helpod-help-helpod-help-address-radixRADIXod-help-skip-bytesBYTESod-help-read-bytesod-help-endianbig|littlestringsNotImplemented: ou".unwrap(10, &v11);
            if (v89)
            {
                uu_od::parse_nrofbytes::parse_number_of_bytes(&v27, v89[1], v89[2]);
                if (*((int *)&v27) != 4)
                {
                    v91 = (int128_t)v29;
                    *((int128_t *)&v7) = *((int128_t *)&v31);
                    v1 = v91;
                    uu_od::format_error_message(&v56, v5, v89[1], v89[2], "read-bytesaddress-radixod-error-radix-invalidod-error-radix-emptymsgod-error-invalid-inputs(uutils coreutils) 0.1.0od-after-helpod-help-helpod-help-address-radixRADIXod-help-skip-bytesBYTESod-help-read-bytesod-help-endianbig|littlestringsNotImplemented: ou", 10);
                    v17 = 1;
                    v11 = v56;
                    v16 = v57;
                    *((double *)&v0->field_8) = v11.new();
                    v0->field_10 = &g_5956f8;
                    v0->field_0 = 2;
                    core::ptr::drop_in_place<uucore::features::parser::parse_size::ParseSizeError>(&(char)v1);
                    ::0x4aab70::core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(&v40);
                    ::0x4aa750::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v36);
                    return a0;
                }
                v71 = v30;
                v90 = 1;
            }
            else
            {
                v90 = 0;
            }
            v11.try_get_one(a1, "address-radixod-error-radix-invalidod-error-radix-emptymsgod-error-invalid-inputs(uutils coreutils) 0.1.0od-after-helpod-help-helpod-help-address-radixRADIXod-help-skip-bytesBYTESod-help-read-bytesod-help-endianbig|littlestringsNotImplemented: output strin", 13);
            v92 = "address-radixod-error-radix-invalidod-error-radix-emptymsgod-error-invalid-inputs(uutils coreutils) 0.1.0od-after-helpod-help-helpod-help-address-radixRADIXod-help-skip-bytesBYTESod-help-read-bytesod-help-endianbig|littlestringsNotImplemented: output strin".unwrap(13, &v11);
            v93 = 2;
            if (!v92)
                goto LABEL_4abc7c;
            if (v92->field_10)
            {
                switch (v92->field_8->field_0)
                {
                case 110:
                    v93 = 3;
                    break;
                case 120:
                    v93 = 1;
                    break;
                case 111:
LABEL_4abc7c:
                    v0->field_30 = v38;
                    v0->field_20 = (int128_t)v35;
                    *((int128_t *)&(&v0->field_30)[1]) = *((int128_t *)&v40);
                    *((unsigned long long *)((char *)&v0->field_38 + 8)) = v42;
                    v0->field_0 = v90;
                    v0->field_8 = v71;
                    v0->field_10 = v39;
                    v0->field_18 = v49;
                    v0->field_48 = v34;
                    v0->field_50 = v25;
                    *((char *)&v0->field_58) = v88;
                    *((char *)&v0->field_58 + 1) = v26;
                    *((char *)&v0->field_58 + 2) = v93;
                    return a0;
                default:
                    v11.to_vec("radixod-error-invalid-endianskip-bytessrc/uu/od/src/od.rs", 5);
                    v7 = v16;
                    *((int128_t *)&v1) = (int128_t)v11;
                    v11.clone(v92);
                    v67 = v7;
                    memcpy(&v66, &v1, 16);
                    memcpy(&v68, &v12, 16);
                    v69 = v16;
                    v11.from_iter(&v66);
                    uucore::mods::locale::get_message_with_args(&v58, "od-error-radix-invalidod-error-radix-emptymsgod-error-invalid-inputs(uutils coreutils) 0.1.0od-after-helpod-help-helpod-help-address-radixRADIXod-help-skip-bytesBYTESod-help-read-bytesod-help-endianbig|littlestringsNotImplemented: output strings of at leas", 22, &v11);
                    v17 = 1;
                    v11 = v58;
                    v16 = v59;
                    v94 = v11.new();
                }
            }
            else
            {
                uucore::mods::locale::get_message(&v60, "od-error-radix-emptymsgod-error-invalid-inputs(uutils coreutils) 0.1.0od-after-helpod-help-helpod-help-address-radixRADIXod-help-skip-bytesBYTESod-help-read-bytesod-help-endianbig|littlestringsNotImplemented: output strings of at least BYTES graphic chars.", 20);
                v17 = 1;
                v11 = v60;
                v16 = v61;
                v94 = v11.new();
            }
            v0->field_8 = v94;
            v0->field_10 = &g_5956f8;
            v0->field_0 = 2;
            ::0x4aab70::core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(&v40);
            ::0x4aa750::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v36);
            return a0;
        }
    }
    v0->field_8 = v80;
    v0->field_10 = v81;
    v0->field_0 = 2;
    ::0x4aa750::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v36);
    return a0;
}
