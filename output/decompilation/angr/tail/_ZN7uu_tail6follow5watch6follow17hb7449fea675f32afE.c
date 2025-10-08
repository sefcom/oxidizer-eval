long long uu_tail::follow::watch::follow(struct_2 *a0, struct_3 *a1)
{
    char v0;  // [bp-0x2b9]
    void* v1;  // [bp-0x2b8]
    char v2;  // [bp-0x2a9]
    unsigned long long v3;  // [bp-0x2a8]
    void* v4;  // [sp-0x2a0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x298]
    int v6;  // [bp-0x298]
    unsigned long long v7;  // [bp-0x290]
    void* v8;  // [sp-0x288], Other Possible Types: char *
    unsigned int v9;  // [bp-0x274]
    void* v10;  // [bp-0x270], Other Possible Types: char, unsigned long long
    unsigned long long v11;  // [bp-0x268]
    unsigned long long v12[3];  // [bp-0x260], Other Possible Types: unsigned long long
    char v13;  // [bp-0x258]
    unsigned long long v14;  // [bp-0x250]
    unsigned long long v15[3];  // [bp-0x248]
    unsigned long long v16;  // [bp-0x240]
    char *v17;  // [sp-0x238], Other Possible Types: unsigned long long
    int v18;  // [bp-0x238]
    unsigned long long v19;  // [sp-0x230]
    char *v20;  // [sp-0x228], Other Possible Types: unsigned long long
    unsigned int v21;  // [bp-0x220], Other Possible Types: unsigned long long
    void* v22;  // [bp-0x218]
    unsigned int v23;  // [bp-0x204]
    unsigned int v24;  // [bp-0x200]
    unsigned int v25;  // [bp-0x1fc]
    int v26;  // [bp-0x1f8], Other Possible Types: unsigned long long
    int v27;  // [bp-0x1f8], Other Possible Types: unsigned long long
    unsigned long long v28;  // [bp-0x1f0]
    int v29;  // [bp-0x1e8], Other Possible Types: char *, unsigned long long
    unsigned int v30;  // [bp-0x1e0], Other Possible Types: unsigned long long
    void* v31;  // [sp-0x1d8]
    unsigned long long v32;  // [bp-0x1c8]
    char *v33;  // [bp-0x140], Other Possible Types: char
    unsigned long long v34;  // [bp-0x138]
    unsigned long v35;  // [bp-0x130]
    int v36;  // [bp-0x128], Other Possible Types: char
    unsigned long long v37;  // [bp-0x118]
    int v38;  // [bp-0x110], Other Possible Types: char
    unsigned long long v39;  // [bp-0x100]
    int v40;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v41;  // [bp-0xe8]
    int v42;  // [bp-0xe0]
    char v43;  // [bp-0xa8]
    unsigned long v45;  // r15
    unsigned long long v46;  // r12
    struct_2 *v47;  // r12
    unsigned int v48;  // eax
    unsigned long v49;  // r13
    void* v50;  // r14
    struct_0 *v51;  // rbx
    unsigned long long v53;  // rdx
    unsigned long long v54;  // rbx
    char *v55;  // rbp
    unsigned long long v56[3];  // rbx
    unsigned long long v58;  // rbp
    unsigned long long v59[3];  // r13
    char v60;  // r14b
    int v61;  // xmm0

    v45 = &a0->padding_38;
    if ((char)v45.no_files_remaining(a1->field_48) && !(char)v45.only_stdin_remaining())
    {
        v10.to_vec("no files remaining \ndirectory containing watched file was removed\n cannot be used, reverting to polling\n", 18);
        v29 = v12;
        *((int128_t *)&v26) = *((int128_t *)&v10);
        v30 = 1;
        v46 = (char)v26.new();
        core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(a0);
        return v46;
    }
    v47 = a0;
    v48 = v47->field_88;
    v2 = a1->field_4a;
    v35 = a1->field_30;
    v25 = a1->field_38;
    v24 = v48;
    v0 = a1->field_4c;
    if (a1->field_4c == 2)
        goto LABEL_4a523f;
    while (!v48 || !(char)v24.is_dead())
    {
        while (true)
        {
LABEL_4a523f:
            v9 = v2;
            if (v47->field_8e != 2 && (v47->field_8e & 1) && a0->field_8c == 1 && a0->field_30)
            {
                v49 = a0->field_28;
                v4 = a0->field_30 * 24;
                v50 = 0;
                do
                {
                    std::fs::metadata(&v26, *((long long *)(8 + v49 + (char *)v50)), *((long long *)(16 + v49 + (char *)v50)));
                    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v26);
                    if ((unsigned int)v26 != 2)
                    {
                        v51 = v45.get(*((long long *)(8 + v49 + (char *)v50)), *((long long *)(16 + v49 + (char *)v50)));
                        std::fs::metadata(&v26, *((long long *)(8 + v49 + (char *)v50)), *((long long *)(16 + v49 + (char *)v50)));
                        v42.unwrap(&v26);
                        if (((*((int *)&v43) & 0xf000) == 0x1000 || (*((int *)&v43) & 0xf000) == 0x8000 || (*((int *)&v43) & 0xf000) == 0x2000) && !v51->field_c8)
                        {
                            v10 = uucore::util_name();
                            v11 = v53;
                            v17 = &v10;
                            v19 = <&T as core::fmt::Display>::fmt;
                            v26 = &g_5734a0;
                            v28 = 2;
                            v31 = 0;
                            v29 = &v17;
                            v30 = 1;
                            std::io::stdio::_eprint(&v26);
                            v10 = 0;
                            v11 = v51->field_b8;
                            v12[0] = v51->field_c0;
                            v13 = 1;
                            v17 = &v10;
                            v19 = <os_display::Quoted as core::fmt::Display>::fmt;
                            v26 = &g_5735d0;
                            v28 = 2;
                            v31 = 0;
                            v29 = &v17;
                            v30 = 1;
                            std::io::stdio::_eprint(&v26);
                            v45.update_metadata(*((long long *)(8 + v49 + (char *)v50)), *((long long *)(16 + v49 + (char *)v50)), &v42);
                            v46 = v45.update_reader(*((long long *)(8 + v49 + (char *)v50)), *((long long *)(16 + v49 + (char *)v50)));
                            if (v46)
                            {
                                core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(a0);
                                return v46;
                            }
                            v26.tail_file(v45, *((long long *)(8 + v49 + (char *)v50)), *((long long *)(16 + v49 + (char *)v50)), v9);
                            if (v26)
                            {
                                core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(a0);
                                return v26;
                            }
                            else if (*((int *)v1) != 3)
                            {
                                v46 = (long long)v1[16].watch_with_parent((long long)v1[24], *((long long *)(8 + v49 + (char *)v50)), *((long long *)(16 + v49 + (char *)v50)));
                                if (v46)
                                {
                                    core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(a0);
                                    return v46;
                                }
                            }
                            else
                            {
                                core::option::unwrap_failed(&g_5738a8); /* do not return */
                            }
                        }
                    }
                    v50 += 24;
                } while (v4 != v50);
            }
            if (*((long long *)v1) == 3)
                core::option::unwrap_failed(&g_5738c0); /* do not return */
            v10.recv_timeout(*((long long *)v1), (long long)v1[8], v35, v25);
            v5 = 0;
            v7 = 8;
            v8 = 0;
            v4 = v10;
            switch (v10)
            {
            case 1:
                if ((char)v11.kind())
                    goto LABEL_4a58d6;
                if (v16 && v45.contains_key(v15[1], v15[2]))
                {
                    if (*((int *)v1) != 3)
                    {
                        *((long long *)((long long)v1[24] + 32))(&(unsigned long long)v27, (long long)v1[16], v15[1], v15[2]);
                        core::ptr::drop_in_place<core::result::Result<bool,notify::error::Error>>(&(unsigned long long)v27);
                    }
                    else
                    {
                        core::option::unwrap_failed(&g_5738d8); /* do not return */
                    }
                }
                core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v14);
                v54 = 8;
                v55 = 0;
                v3 = 0;
                v56 = 8;
                if (v0 != 2)
                    goto LABEL_4a571c;
                break;
            case 5:
                v17 = &g_573510;
                v19 = <&T as core::fmt::Display>::fmt;
                *((unsigned long long **)&v27) = &g_573850;
                v28 = 2;
                v31 = 0;
                v29 = &v17;
                v30 = 1;
                v36.map_or_else(&(unsigned long long)v27);
                v30 = 1;
                v27 = v36;
                v29 = v37;
                v46 = (unsigned long long)v27.new();
                v3 = (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v5) & 0xffffffffffffff00 | 1;
LABEL_4a5845:
                core::ptr::drop_in_place<notify::error::ErrorKind>(&v10);
LABEL_4a584f:
                if (!(char)v3)
                {
                    core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(a0);
                    return v46;
                }
                core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v14);
                core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(a0);
                return v46;
            case 6:
                v54 = 8;
                if (*((long long *)&v13) && v45.contains_key(v12[1], v12[2]))
                {
                    (unsigned long long)v27.handle_event(v1, &v11, v23);
                    v54 = v28;
                    v55 = v29;
                    if ((char)(((0 ^ v26) & (0 ^ -(v26))) >> 63))
                    {
                        core::ptr::drop_in_place<notify_types::event::Event>(&v11);
                        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v5);
                        core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(a0);
                        return v54;
                    }
                    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v5);
                    v5 = v26;
                    v7 = v54;
                    v8 = v55;
                }
                else
                {
                    v55 = 0;
                }
                v3 = (unsigned long long)core::ptr::drop_in_place<notify_types::event::Event>(&v11) & 0xffffffffffffff00 | 1;
                v56 = v54;
                if (v0 != 2)
                    goto LABEL_4a571c;
                break;
            case 7:
                if ((char)v11)
                {
                    v33 = v11;
                    v17 = &v33;
                    v19 = <std::sync::mpsc::RecvTimeoutError as core::fmt::Display>::fmt;
                    v27 = &g_573880;
                    v28 = 1;
                    v31 = 0;
                    v29 = &v17;
                    v30 = 1;
                    v40.map_or_else(&v27);
                    v30 = 1;
                    v26 = v40;
                    v29 = v41;
                    v54 = v27.new();
                    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v5);
                    core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(a0);
                    return v54;
                }
                v3 = 1;
                v54 = 8;
                v55 = 0;
                v56 = 8;
                if (v0 != 2)
                {
LABEL_4a571c:
                    v56 = v54;
                    if ((char)v1[141])
                    {
                        (unsigned long long)v27.keys(v45);
                        v17.collect(&(unsigned long long)v27);
                        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v5);
                        v55 = v20;
                        v8 = v55;
                        *((int128_t *)&v6) = *((int128_t *)&v17);
                        v56[0] = v7;
                        break;
                    }
                }
                break;
            default:
LABEL_4a58d6:
                v32 = v16;
                v61 = *((int128_t *)&v10);
                memcpy(&v31, &v14, 16);
                *((int128_t *)&v29) = *((int128_t *)&v12);
                v27 = v61;
                v33 = &(unsigned long long)v27;
                v34 = <notify::error::Error as core::fmt::Display>::fmt;
                v17 = &g_573870;
                v19 = 1;
                v22 = 0;
                v20 = &v33;
                v21 = 1;
                v38.map_or_else(&v17);
                v21 = 1;
                v18 = v38;
                v20 = v39;
                v46 = v17.new();
                core::ptr::drop_in_place<notify::error::Error>(&(unsigned long long)v27);
                v3 = 0;
LABEL_4a582b:
                core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v5);
                if (!((char)~((unsigned int)v4) & 6))
                {
                    core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(a0);
                    return v46;
                }
                if (!v60)
                    goto LABEL_4a584f;
                goto LABEL_4a5845;
            }
            v58 = (char *)v56 + 0x18 * v55;
            v59 = v56 + 1;
            if (v56 == v58)
            {
                v59 = v56;
                if (v56 == v58)
                    goto LABEL_4a57e0;
            }
            else if (v56 == v58)
            {
                goto LABEL_4a57e0;
            }
            if (v56)
            {
                (unsigned long long)v27.tail_file(v45, v56[1], v56[2], v9);
                v46 = v26;
                v56 = v59;
                if (!v26)
                    continue;
                v60 = 1;
                goto LABEL_4a582b;
            }
            else
            {
LABEL_4a57e0:
                core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v5);
                v47 = a0;
                if (((char)~((unsigned int)v4) & 6))
                    core::ptr::drop_in_place<notify::error::ErrorKind>(&v10);
                v48 = v47->field_88;
                if (v0 != 2)
                    break;
            }
        }
    }
    core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(a0);
    return 0;
}
