long long uu_du::StatPrinter::print_stats(struct_3 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x1dc]
    char v1;  // [bp-0x1db]
    char v2;  // [bp-0x1da]
    char v3;  // [bp-0x1d9]
    unsigned long long v4;  // [bp-0x1d8]
    struct_1 *v5;  // [bp-0x1d0]
    unsigned long v6;  // [bp-0x1c0]
    unsigned long v7;  // [bp-0x1b8]
    unsigned long v8;  // [bp-0x1b0]
    char *v9;  // [bp-0x1a8]
    unsigned long long v10;  // [bp-0x1a0]
    char *v11;  // [bp-0x198]
    unsigned long long v12;  // [bp-0x190]
    unsigned long long v13;  // [bp-0x188]
    unsigned long long v14;  // [bp-0x180]
    char *v15;  // [bp-0x178], Other Possible Types: unsigned long long
    struct_1 *v16;  // [bp-0x170], Other Possible Types: unsigned long long
    int v17;  // [bp-0x168], Other Possible Types: void*
    int v18;  // [bp-0x158]
    int v19;  // [bp-0x148]
    int v20;  // [bp-0x138]
    unsigned long long v21;  // [bp-0x130]
    int v22;  // [bp-0x128]
    int v23;  // [bp-0x108]
    int v24;  // [bp-0xf8]
    unsigned long long v25;  // [bp-0xe8]
    unsigned long long v26;  // [bp-0xe0]
    char *v27;  // [bp-0xd8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v28;  // [bp-0xd8]
    unsigned long long v29;  // [bp-0xd0]
    unsigned long long v30;  // [bp-0xd0]
    unsigned long v31;  // [bp-0xc8], Other Possible Types: unsigned long long
    struct_1 *v32;  // [bp-0xc0], Other Possible Types: unsigned long long
    int v33;  // [bp-0xb8]
    int v34;  // [bp-0xa8]
    int v35;  // [bp-0x98]
    int v36;  // [bp-0x88]
    int v37;  // [bp-0x78]
    int v38;  // [bp-0x68]
    int v39;  // [bp-0x58]
    char v40;  // [bp-0x48]
    int v42;  // xmm0
    int v43;  // ymm0
    uint256_t v44;  // ymm0
    void* v45;  // r12
    char *v46;  // rbx
    unsigned long long v47;  // rcx
    unsigned long long v48;  // rax
    unsigned long long v49;  // rdi
    struct_1 *v50;  // rdx
    unsigned long v51;  // rsi
    unsigned long long v53;  // rdx
    uint256_t v54;  // ymm0
    int v55;  // xmm0
    int v56;  // xmm0
    unsigned long long v58;  // rdx
    unsigned long long v59;  // rax
    unsigned long long v60;  // rbx
    unsigned long long v61;  // rdx
    int v62;  // xmm0
    int v63;  // [bp-0x120]

    v27.recv(a1, a2);
    v42 = CmpEQV(*((int128_t *)&v27), 3);
    v44 = (v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v27)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42;
    if (UnaryOp GetMSBs == 65535)
    {
        v45 = 0;
    }
    else
    {
        v3 = a0->field_61;
        v1 = a0->field_62;
        v8 = a0->field_10;
        v6 = a0->field_18;
        v2 = a0->field_0;
        v7 = a0->field_8;
        v0 = a0->field_63;
        v45 = 0;
        v46 = &v27;
        v28 = v27;
        v30 = v29;
        do
        {
            v47 = v30;
            v48 = v28;
            v49 = v31;
            v50 = v32;
            v51 = v48 ^ 2;
            if (!v51 && !v47)
            {
                v4 = v49;
                v5 = v50;
                uucore::mods::error::set_exit_code(v50->field_58(v49, v51 | v47, v50));
                v25 = uucore::util_name();
                v26 = v53;
                v9 = &v25;
                v10 = <&T as core::fmt::Display>::fmt;
                v11 = &v4;
                v12 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v13 = &g_5e4b48;
                v14 = 3;
                v17 = 0;
                v15 = &v9;
                v16 = 2;
                std::io::stdio::_eprint(&v13);
                ::0x4d9ad0::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v4, v5);
                continue;
            }
            v13 = v48;
            v14 = v47;
            v15 = v49;
            v16 = v50;
            v54 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v40);
            memcpy(&v24, &v40, 16);
            v55 = v39;
            v23 = v55;
            memcpy(&(char)v63, &v38, 16);
            v22 = v37;
            v56 = v33;
            v44 = (((v54 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56;
            v20 = v36;
            v19 = v35;
            v18 = v34;
            v17 = v56;
            if ((v3 & 1))
                v21 = (long long)(&v22)[8];
            v58 = v21;
            v59 = (long long)v24;
            if (v8)
            {
                if (!(!(v8 == 1) || v58 <= v6))
                    goto LABEL_4dd920;
            }
            else
            {
                if (v58 < v6)
                    goto LABEL_4dd920;
            }
            if (!((v59 <= v7 ^ 1) & v2) && !(v59 & v0))
            {
                v60 = a0.print_stat(&v13, v58);
                if (v60)
                {
                    ::0x4d9e20::core::ptr::drop_in_place<uu_du::StatPrintInfo>(&v13);
                    return v60;
                }
            }
LABEL_4dd920:
            v45 += (!v59 ? v58 : 0);
            ::0x4d9e20::core::ptr::drop_in_place<uu_du::StatPrintInfo>(&v13);
            v46 = &v27;
            v46.recv(a1, v61);
            v62 = CmpEQV(*((int128_t *)&v28), 3);
            v44 = (v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v28)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
            v28 = v27;
            v30 = v29;
        } while (UnaryOp GetMSBs != 65535);
    }
    if (!a0->field_60)
        return 0;
    v9.convert_size(a0, v45);
    v27 = &v9;
    v29 = <alloc::string::String as core::fmt::Display>::fmt;
    v31 = &a0->padding_20[40];
    v32 = <alloc::string::String as core::fmt::Display>::fmt;
    v13 = &g_5e4b78;
    v14 = 2;
    v17 = 0;
    v15 = &v27;
    v16 = 2;
    std::io::stdio::_print(&v13);
    ::0x4d9e40::core::ptr::drop_in_place<alloc::string::String>(&v9);
    v27 = &a0[1].padding_1;
    v29 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v13 = &g_418bc0;
    v14 = 1;
    v17 = 0;
    v15 = &v27;
    v16 = 1;
    std::io::stdio::_print(&v13);
    return 0;
}
