long long uu_split::line_bytes(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x1b2]
    char v1;  // [bp-0x1b1]
    unsigned long long v2;  // [bp-0x1b0]
    int v3;  // [sp-0x1a8]
    void* v4;  // [bp-0x1a8]
    int v5;  // [sp-0x1a8]
    unsigned long long v6;  // [bp-0x1a0]
    unsigned long long v7;  // [bp-0x1a0]
    int v9;  // [bp-0x198]
    unsigned long long v10;  // [bp-0x198]
    char v11;  // [bp-0x190]
    char *v12;  // [sp-0x180], Other Possible Types: unsigned long
    unsigned long long v15;  // [bp-0x178]
    unsigned long long v16;  // [bp-0x170]
    int v17;  // [bp-0x168], Other Possible Types: char, unsigned long long
    void* v18;  // [bp-0x168]
    unsigned long long v19;  // [sp-0x160]
    unsigned long long v20;  // [bp-0x160]
    int v21;  // [sp-0x158], Other Possible Types: unsigned long long
    char *v22;  // [bp-0x158]
    char v23;  // [bp-0x150], Other Possible Types: unsigned int, unsigned long long
    void* v25;  // [bp-0x148]
    int v26;  // [bp-0x140]
    char v27;  // [bp-0x130]
    unsigned long long v28;  // [bp-0x118]
    unsigned long long v29;  // [bp-0x110]
    unsigned long v30;  // [bp-0x108]
    unsigned int v31;  // [bp-0xfc]
    void* v33;  // [bp-0xf8], Other Possible Types: unsigned long
    unsigned long long v34;  // [bp-0xf0]
    char v35;  // [bp-0xe8]
    char v36;  // [bp-0xd8]
    int v37;  // [bp-0xc8]
    int v38;  // [bp-0xb8]
    unsigned long long v39;  // [bp-0xa8]
    unsigned long long v40;  // [bp-0xa0]
    unsigned long long v41;  // [bp-0x90]
    unsigned long long v42;  // [bp-0x88]
    char *v43;  // [bp-0x80]
    char v44;  // [bp-0x78]
    int v45;  // [bp-0x68]
    char v46;  // [bp-0x58]
    char v47;  // [bp-0x48]
    unsigned long long v48;  // [bp-0x48]
    unsigned long long v49;  // [bp-0x40]
    char v50;  // [bp-0x38]
    unsigned long long v52;  // r15
    unsigned int v54;  // ebx
    char *v55;  // rdi
    char *v56;  // rbp
    unsigned long long v57;  // r14
    int v58;  // xmm0
    int v59;  // xmm1
    unsigned long long v60;  // r14
    int v61;  // xmm0
    int v62;  // xmm1
    unsigned long long v63;  // r12
    unsigned long long v69;  // rbx
    unsigned long long v70;  // rbx
    unsigned long long v71;  // rax
    char *v72;  // [bp-0x180]

    v52 = a2;
    v17.new(*((long long *)&a0->field_30), a0->field_38, &a0->padding_40);
    v40 = 9223372036854775809;
    if (v17 == 9223372036854775809)
        return v19;
    memcpy(&v46, &v27, 16);
    v45 = v26;
    memcpy(&v44, &v23, 16);
    v41 = v17;
    v42 = v19;
    v43 = v22;
    v18 = 0;
    v20 = 1;
    *((uint128_t *)&v21) = 0;
    (char)v33.with_capacity(v18.new(), &g_50b0c0);
    v0 = a0->field_a0;
    v30 = a0->field_88;
    v39 = -(a2);
    v60 = 0;
    v1 = a0->field_a2;
    v55 = &v47;
    v29 = a2;
    v31 = v1;
    while (true)
    {
        v55.next(a1, v54);
        if (v48 == 9223372036854775809)
        {
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&(char)v33);
            core::ptr::drop_in_place<uu_split::filenames::FilenameIterator>(v41, v42);
            return 0;
        }
        v2 = v49;
        if (v48 == 0x8000000000000000)
        {
            v70 = v2.from();
            break;
        }
        v28 = v48;
        v69 = *((long long *)&v50);
        if (v60)
        {
            if (!v52 <= v60 && !v69 != v60)
            {
                v60 = v69;
                if (*((char *)(v2 + v69 - 1)) != v1)
                    goto LABEL_471bc2;
            }
            if (v69 <= v60)
                goto LABEL_47207c;
            goto LABEL_471bb9;
        }
        v72.next(&v41);
        v56 = v72;
        if (v72 == 0x8000000000000000)
        {
LABEL_4720df:
            v4.to_vec("output file suffixes exhaustedcreating file at file descriptor limit, but no file descriptor left to close. Closed  writers before.\n: cannot read from input : ", 30);
            v21 = v10;
            *((int128_t *)&v17) = (int128_t)v3;
            v23 = 1;
            v70 = (unsigned long long)v17.new();
            goto LABEL_472156;
        }
        v57 = v15;
        v12 = v72;
        if ((v0 & 1))
        {
            v4 = 0;
            v6 = v57;
            v10 = v16;
            v11 = 1;
            v12 = &v4;
            v15 = <os_display::Quoted as core::fmt::Display>::fmt;
            v18 = &g_50af08;
            v20 = 2;
            v25 = 0;
            v22 = &v12;
            v23 = 1;
            std::io::stdio::_print(&v18);
        }
        v18.instantiate_current_writer(a0, v6, v16, 1);
        if (v18 != 0x8000000000000000)
        {
            v58 = (int128_t)v21;
            v59 = *((int128_t *)&v25);
            v5 = v58;
            v9 = v59;
            v38 = v59;
            v37 = v58;
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&(char)v33);
            v33 = v18;
            v34 = v20;
            memcpy(&v36, &v9, 16);
            memcpy(&v35, &v5, 16);
            core::ptr::drop_in_place<alloc::string::String>(v72, v6);
            v52 = v29;
            v60 = v52;
            v72 = v12;
            if (v69 <= v60)
            {
LABEL_47207c:
                v63 = v2;
                goto LABEL_47208b;
            }
LABEL_471bb9:
            if (v60 == v52)
                goto LABEL_471d1b;
LABEL_471bc2:
            v72.next(&v41);
            v56 = v72;
            if (v72 == 0x8000000000000000)
                goto LABEL_4720df;
            v57 = v15;
            v12 = v72;
            if ((v0 & 1))
            {
                v4 = 0;
                v7 = v57;
                v10 = v16;
                v11 = 1;
                v12 = &v4;
                v15 = <os_display::Quoted as core::fmt::Display>::fmt;
                v18 = &g_50af08;
                v20 = 2;
                v25 = 0;
                v22 = &v12;
                v23 = 1;
                std::io::stdio::_print(&v18);
            }
            v72 = v12;
            v18.instantiate_current_writer(a0, v7, v16, 1);
            if (v18 == 0x8000000000000000)
                goto LABEL_472127;
            v61 = (int128_t)v21;
            v62 = *((int128_t *)&v25);
            v3 = v61;
            v9 = v62;
            v38 = v62;
            v37 = v61;
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&(char)v33);
            v33 = v18;
            v34 = v20;
            memcpy(&v36, &v9, 16);
            memcpy(&v35, &v5, 16);
            core::ptr::drop_in_place<alloc::string::String>(v72, v7);
            v52 = v29;
            if (v69 > v52)
            {
LABEL_471d1b:
                uu_split::custom_write_all(&v18, 0.index(v52, v2, v69, &g_50b110), a2, &(char)v33, v30);
                if (!(char)(unsigned long long)v17)
                {
                    v69 += v39;
                    v63 = v2 + v52;
                    continue;
                }
                v71 = v20.from();
                goto LABEL_472150;
            }
            v63 = v2;
            v60 = v52;
LABEL_47208b:
            uu_split::custom_write_all(&v18, v63, v69, &v33, v30);
            if ((char)(unsigned long long)v17 != 1)
            {
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v28, v2);
                v60 -= v69;
                v54 = v31;
                v55 = &v47;
            }
            else
            {
                v71 = v20.from();
LABEL_472150:
                v70 = v71;
LABEL_472156:
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v28, v2);
                break;
            }
        }
        else
        {
LABEL_472127:
            v70 = v20.from();
            core::ptr::drop_in_place<alloc::string::String>(v56, v57);
            goto LABEL_472156;
        }
    }
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&(char)v33);
    core::ptr::drop_in_place<uu_split::filenames::FilenameIterator>(v41, v42);
    return v70;
}
