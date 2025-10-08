long long uu_du::StatPrinter::print_stats(struct_2 *a0, unsigned long long a1[2])
{
    char v0;  // [bp-0x1e4]
    char v1;  // [bp-0x1e3]
    char v2;  // [bp-0x1e2]
    char v3;  // [bp-0x1e1]
    unsigned long long v4;  // [bp-0x1e0]
    struct_1 *v5;  // [bp-0x1d8]
    unsigned long v6;  // [bp-0x1c8]
    unsigned long v7;  // [bp-0x1c0]
    unsigned long v8;  // [bp-0x1b8]
    unsigned long v9;  // [bp-0x1b0]
    char *v10;  // [bp-0x1a8]
    unsigned long long v11;  // [bp-0x1a0]
    char *v12;  // [bp-0x198]
    unsigned long long v13;  // [bp-0x190]
    unsigned long long v14;  // [bp-0x188]
    unsigned long long v15;  // [bp-0x180]
    char *v16;  // [bp-0x178], Other Possible Types: unsigned long long
    struct_1 *v17;  // [bp-0x170], Other Possible Types: unsigned long long
    int v18;  // [bp-0x168], Other Possible Types: void*
    int v19;  // [bp-0x158]
    int v20;  // [bp-0x148]
    int v21;  // [bp-0x138]
    unsigned long long v22;  // [bp-0x130]
    int v23;  // [bp-0x128]
    int v24;  // [bp-0x108]
    int v25;  // [bp-0xf8]
    unsigned long long v26;  // [bp-0xe8]
    unsigned long long v27;  // [bp-0xe0]
    char v28;  // [bp-0xd8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v29;  // [bp-0xd8]
    unsigned long long v30;  // [bp-0xd0]
    unsigned long long v31;  // [bp-0xd0]
    unsigned long long v32;  // [bp-0xc8]
    struct_1 *v33;  // [bp-0xc0]
    int v34;  // [bp-0xb8]
    int v35;  // [bp-0xa8]
    int v36;  // [bp-0x98]
    int v37;  // [bp-0x88]
    int v38;  // [bp-0x78]
    int v39;  // [bp-0x68]
    int v40;  // [bp-0x58]
    char v41;  // [bp-0x48]
    unsigned long v43;  // r15
    unsigned long long v44;  // r12
    int v45;  // xmm0
    int v46;  // ymm0
    uint256_t v47;  // ymm0
    void* v48;  // r13
    unsigned long long v49;  // rcx
    unsigned long long v50;  // rax
    unsigned long long v51;  // rdi
    struct_1 *v52;  // rdx
    unsigned long v53;  // rsi
    unsigned long long v55;  // rdx
    unsigned long v56;  // r15
    uint256_t v57;  // ymm0
    int v58;  // xmm0
    int v59;  // xmm0
    unsigned long long v60;  // rdx
    unsigned long long v61;  // rax
    unsigned long long v62;  // rbx
    int v64;  // xmm0
    int v69;  // [bp-0x120]

    v43 = a1[0];
    v44 = a1[1];
    (char)v29.recv(v43, v44);
    v45 = CmpEQV(*((int128_t *)&v28), 3);
    v47 = (v46 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v28)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
    if (UnaryOp GetMSBs == 65535)
    {
        v48 = 0;
    }
    else
    {
        v3 = a0->field_49;
        v2 = a0->field_4a;
        v7 = a0->field_10;
        v8 = a0->field_18;
        v0 = a0->field_0;
        v6 = a0->field_8;
        v1 = a0->field_4b;
        v48 = 0;
        v9 = v43;
        v29 = v28;
        v31 = v30;
        do
        {
            v49 = v31;
            v50 = v29;
            v51 = v32;
            v52 = v33;
            v53 = v50 ^ 2;
            if (!v53 && !v49)
            {
                v4 = v51;
                v5 = v52;
                uucore::mods::error::set_exit_code(v52->field_58(v51, v53 | v49, v52));
                v26 = uucore::util_name();
                v27 = v55;
                v10 = &v26;
                v11 = <&T as core::fmt::Display>::fmt;
                v12 = &v4;
                v13 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v14 = &g_545df8;
                v15 = 3;
                v18 = 0;
                v16 = &v10;
                v17 = 2;
                std::io::stdio::_eprint(&v14);
                core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v4, v5);
                v56 = v43;
                continue;
            }
            v14 = v50;
            v15 = v49;
            v16 = v51;
            v17 = v52;
            v57 = v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v41);
            memcpy(&v25, &v41, 16);
            v58 = v40;
            v24 = v58;
            memcpy(&(char)v69, &v39, 16);
            v23 = v38;
            v59 = v34;
            v47 = (((v57 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
            v21 = v37;
            v20 = v36;
            v19 = v35;
            v18 = v59;
            v60 = (!(v3 & 1) ? (!(v2 & 1) ? (long long)v23 * 0x200 : v22) : (long long)(&v23)[8]);
            v61 = (long long)v25;
            if (v7 == 2)
            {
                if (((v61 <= v6 ^ 1) & v0))
                    goto LABEL_497c70;
            }
            else
            {
                if ((v61 > v6 & v0) || (((char)v7 & 1) ? v60 > v8 : v60 < v8))
                    goto LABEL_497c70;
            }
            if (!v61 || !(v1 & 1))
            {
                v62 = a0.print_stat(&v14, v60);
                if (v62)
                {
                    core::ptr::drop_in_place<uu_du::StatPrintInfo>(&v14);
                    return v62;
                }
            }
LABEL_497c70:
            v48 += (!v61 ? v60 : 0);
            core::ptr::drop_in_place<uu_du::StatPrintInfo>(&v14);
            v56 = v9;
            v43 = v56;
            (char)v29.recv(v43, v44);
            v64 = CmpEQV(*((int128_t *)&v29), 3);
            v47 = (v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v29)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
            v29 = v28;
            v31 = v30;
        } while (UnaryOp GetMSBs != 65535);
    }
    if (!a0->field_48)
        return 0;
    (char)v29.convert_size(a0, v48);
    v10 = &(char)v29;
    v11 = <alloc::string::String as core::fmt::Display>::fmt;
    v14 = &g_545e28;
    v15 = 2;
    v18 = 0;
    v16 = &v10;
    v17 = 1;
    std::io::stdio::_print(&v14);
    core::ptr::drop_in_place<alloc::string::String>(&(char)v29);
    v28 = &a0[1].padding_1;
    v30 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v14 = &g_41d7a0;
    v15 = 1;
    v18 = 0;
    v16 = &v28;
    v17 = 1;
    std::io::stdio::_print(&v14);
    return 0;
}
