long long uu_split::line_bytes(struct_1 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x1ca]
    char v1;  // [bp-0x1c9]
    int v2;  // [bp-0x1c8]
    int v3;  // [bp-0x1c8]
    unsigned long long v4;  // [bp-0x1c0]
    int v5;  // [bp-0x1b8]
    char v6;  // [bp-0x1b0]
    unsigned long long v9;  // [bp-0x198]
    char *v10;  // [bp-0x190]
    unsigned long long v11;  // [sp-0x188]
    unsigned long long v12;  // [sp-0x180]
    int v13;  // [bp-0x178], Other Possible Types: char, unsigned long long
    void* v14;  // [bp-0x178]
    unsigned long long v15;  // [bp-0x170]
    char *v16;  // [bp-0x168], Other Possible Types: unsigned long long
    int v17;  // [bp-0x168]
    char v18;  // [bp-0x160], Other Possible Types: unsigned int, unsigned long long
    int v20;  // [bp-0x150]
    char v21;  // [bp-0x140]
    unsigned long v22;  // [bp-0x128]
    unsigned int v23;  // [bp-0x11c]
    unsigned long long v25;  // [bp-0x118]
    unsigned long long v26;  // [bp-0x118]
    unsigned long long v27;  // [sp-0x110]
    char v28;  // [bp-0x108]
    char v29;  // [bp-0xf8]
    int v30;  // [sp-0xe8]
    int v31;  // [sp-0xd8]
    unsigned long long v32;  // [bp-0xc0]
    unsigned long long v33;  // [bp-0xb8]
    unsigned long long v34;  // [bp-0xa8]
    unsigned long long v35;  // [bp-0xa0]
    unsigned long long v36;  // [bp-0x98]
    struct struct_0 v37[8];  // [bp-0x90]
    unsigned long long v38;  // [bp-0x90]
    unsigned long long v39;  // [bp-0x88]
    unsigned long long v40;  // [bp-0x80]
    unsigned long long v41;  // [bp-0x78]
    unsigned long long v42;  // [bp-0x70]
    char *v43;  // [bp-0x68]
    char v44;  // [bp-0x60]
    int v45;  // [bp-0x50]
    char v46;  // [bp-0x40]
    void* v49;  // rbx, Other Possible Types: unsigned long long
    unsigned long v50;  // rdx
    char *v51;  // rdi
    unsigned long long v52;  // r13
    unsigned long long v53;  // rbp
    unsigned long long v54;  // rdx
    unsigned long long v55;  // rcx
    int v56;  // xmm0
    int v57;  // xmm1
    unsigned long long v58;  // rdx
    unsigned long long v59;  // rcx
    int v60;  // xmm0
    int v61;  // xmm1
    unsigned long long v69;  // r14
    unsigned long long v70;  // rax
    void* v71;  // [bp-0x1c8]
    unsigned long long v72;  // [bp-0x1b8]
    char *v73;  // [bp-0x1a8]
    unsigned long long v74;  // [bp-0x1a0]
    void* v75;  // [bp-0x158]

    v13.new(a0->field_30, a0->field_38, &a0->padding_40);
    v33 = 9223372036854775809;
    if (v13 == 9223372036854775809)
        return v15;
    memcpy(&v46, &v21, 16);
    v45 = v20;
    memcpy(&v44, &v18, 16);
    v41 = v13;
    v42 = v15;
    v43 = v16;
    v14 = 0;
    v15 = 1;
    *((uint128_t *)&v17) = 0;
    (char)v25.with_capacity(0x2000, v14.new(), &g_5a7008);
    v0 = a0->field_a0;
    v22 = a0->field_88;
    v32 = -(a2);
    v49 = 0;
    v1 = a0->field_a2;
    v50 = a0->field_a2;
    v51 = &v37;
    v23 = v50;
    while (true)
    {
        v51.next(a1, v50);
        if (v38 == 9223372036854775809)
        {
            ::0x4ad640::core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&(char)v25);
            ::0x4add20::core::ptr::drop_in_place<uu_split::filenames::FilenameIterator>(&v41);
            return 0;
        }
        v52 = v39;
        if (v38 == 0x8000000000000000)
        {
            v69 = v52.from();
            break;
        }
        v53 = v40;
        v34 = v38;
        v35 = v52;
        v36 = v53;
        if (v49)
        {
            if (!a2 <= v49 && !v53 != v49)
            {
                v49 = v53;
                if (!(*((char *)(v52 + v53 - 1)) == v1))
                    goto LABEL_4b3554;
            }
            if (!(v53 <= v49))
                goto LABEL_4b354b;
        }
        else
        {
            v73.next(&v41);
            if (v73 == 0x8000000000000000)
            {
LABEL_4b38f0:
                uucore::mods::locale::get_message(&v71, "split-error-output-file-suffixes-exhaustederrorsplit-error-cannot-read-from-inputsplit-error-input-output-errorsplit-error-multi-character-separatorsplit-error-multiple-separator-characterssplit-error-filter-with-kth-chunksplit-error-invalid-io-block-size", 42);
                v18 = 1;
                *((int128_t *)&v13) = (int128_t)v3;
                v16 = v72;
                v69 = (unsigned long long)v13.new();
                goto LABEL_4b3967;
            }
            v54 = v74;
            v55 = v9;
            v10 = v73;
            v11 = v54;
            v12 = v55;
            if ((v0 & 1))
            {
                v71 = 0;
                v4 = v54;
                v72 = v55;
                v6 = 1;
                v73 = &v71;
                v74 = <os_display::Quoted as core::fmt::Display>::fmt;
                v14 = &g_5a6eb8;
                v15 = 2;
                v75 = 0;
                v16 = &v73;
                v18 = 1;
                std::io::stdio::_print(&v14);
                v54 = v11;
                v55 = v12;
            }
            v14.instantiate_current_writer(a0, v54, v55, 1);
            if (v14 != 0x8000000000000000)
            {
                v56 = (int128_t)v17;
                v57 = *((int128_t *)&v75);
                v2 = v56;
                v5 = v57;
                v31 = v57;
                v30 = v56;
                ::0x4ad640::core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&(char)v25);
                v25 = v14;
                v27 = v15;
                memcpy(&v29, &v5, 16);
                memcpy(&v28, &v2, 16);
                ::0x4ad8c0::core::ptr::drop_in_place<alloc::string::String>(&v10);
                v49 = a2;
                if (v53 > v49)
                {
LABEL_4b354b:
                    if (v49 == a2)
                        goto LABEL_4b36ac;
LABEL_4b3554:
                    v73.next(&v41);
                    if (v73 == 0x8000000000000000)
                        goto LABEL_4b38f0;
                    v58 = v74;
                    v59 = v9;
                    v10 = v73;
                    v11 = v58;
                    v12 = v59;
                    if ((v0 & 1))
                    {
                        v71 = 0;
                        v4 = v58;
                        v72 = v59;
                        v6 = 1;
                        v73 = &v71;
                        v74 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v14 = &g_5a6eb8;
                        v15 = 2;
                        v75 = 0;
                        v16 = &v73;
                        v18 = 1;
                        std::io::stdio::_print(&v14);
                        v58 = v11;
                        v59 = v12;
                    }
                    v14.instantiate_current_writer(a0, v58, v59, 1);
                    if (v14 == 0x8000000000000000)
                        goto LABEL_4b3939;
                    v60 = (int128_t)v17;
                    v61 = *((int128_t *)&v75);
                    v3 = v60;
                    v5 = v61;
                    v31 = v61;
                    v30 = v60;
                    ::0x4ad640::core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&(char)v25);
                    v26 = v14;
                    v27 = v15;
                    memcpy(&v29, &v5, 16);
                    memcpy(&v28, &v2, 16);
                    ::0x4ad8c0::core::ptr::drop_in_place<alloc::string::String>(&v10);
                    if (v53 > a2)
                    {
LABEL_4b36ac:
                        uu_split::custom_write_all(&v14, 0.index(a2, v52, v53, &g_5a7058), a2, &(char)v25, v22);
                        if (!(char)(unsigned long long)v13)
                        {
                            v53 += v32;
                            v52 += a2;
                            continue;
                        }
                        v70 = v15.from();
                        goto LABEL_4b3961;
                    }
                    else
                    {
                        v49 = a2;
                    }
                }
            }
            else
            {
LABEL_4b3939:
                v69 = v15.from();
                ::0x4ad8c0::core::ptr::drop_in_place<alloc::string::String>(&v10);
                goto LABEL_4b3967;
            }
        }
        uu_split::custom_write_all(&v14, v52, v53, &(char)v25, v22);
        if (!(char)(unsigned long long)v13)
        {
            ::0x4ad900::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v34);
            v49 -= v53;
            v50 = v23;
            v51 = &v37;
        }
        else
        {
            v70 = v15.from();
LABEL_4b3961:
            v69 = v70;
LABEL_4b3967:
            ::0x4ad900::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v34);
            break;
        }
    }
    ::0x4ad640::core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&(char)v25);
    ::0x4add20::core::ptr::drop_in_place<uu_split::filenames::FilenameIterator>(&v41);
    return v69;
}
