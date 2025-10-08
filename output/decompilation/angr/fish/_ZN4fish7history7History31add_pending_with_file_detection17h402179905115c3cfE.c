long long fish::history::History::add_pending_with_file_detection(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    char v0;  // [bp-0x1f5]
    unsigned int v1;  // [bp-0x1f4]
    void* v2;  // [bp-0x1f0]
    unsigned long long v3;  // [bp-0x1e8]
    unsigned long long v4;  // [bp-0x1d8]
    int v5;  // [bp-0x1d8]
    int v6;  // [bp-0x1d8]
    int v7;  // [bp-0x1d8]
    void* v8;  // [bp-0x1c8], Other Possible Types: struct_1 *, int
    unsigned long long v9;  // [bp-0x1c0]
    int v10;  // [bp-0x1b8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x1b0]
    int v12;  // [bp-0x1a8], Other Possible Types: unsigned long long
    char v13;  // [bp-0x1a0], Other Possible Types: unsigned long long
    int v14;  // [bp-0x198], Other Possible Types: unsigned long long
    char v15;  // [bp-0x190]
    unsigned int v16;  // [bp-0x18f]
    unsigned short v17;  // [bp-0x18b]
    char v18;  // [bp-0x189]
    int v19;  // [bp-0x188]
    unsigned long long v20;  // [bp-0x180]
    struct_1 *v21;  // [bp-0x178]
    void* v22;  // [bp-0x170]
    unsigned long long v23;  // [bp-0x168]
    void* v24;  // [bp-0x160]
    unsigned long long v25;  // [bp-0x158]
    unsigned int v26;  // [bp-0x150]
    unsigned long long v27;  // [bp-0x148]
    char v28;  // [bp-0x140]
    unsigned int v29;  // [bp-0x13f]
    unsigned short v30;  // [bp-0x13b]
    char v31;  // [bp-0x139]
    unsigned long long v32;  // [bp-0x130]
    void* v33;  // [bp-0x128]
    unsigned long long v34;  // [bp-0x120]
    void* v35;  // [bp-0x118]
    int v36;  // [bp-0x108]
    unsigned long long v37;  // [bp-0xf8]
    unsigned long long v38;  // [bp-0xe8]
    struct_1 *v39;  // [bp-0xe0]
    int v40;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v41;  // [bp-0xc8]
    unsigned long long v42;  // [bp-0xc0]
    int v43;  // [bp-0xb8]
    unsigned long long v44;  // [bp-0xa8]
    int v45;  // [bp-0xa0]
    char v46;  // [bp-0x90]
    char v47;  // [bp-0x48]
    unsigned long long v49;  // rbx
    struct_1 *v50;  // rdx
    unsigned long long v51;  // rax
    struct_1 *v53;  // rbx
    struct_1 *v54;  // rbx
    unsigned long v55;  // r14
    struct_1 *v56;  // rax
    unsigned long long v57;  // r15
    struct_1 *v59;  // rbx
    struct_1 *v60;  // rbx
    char v61;  // al
    char v62;  // bpl
    unsigned long v63;  // r15
    unsigned long long v64;  // rax
    unsigned long long v65;  // rbx
    char v66;  // bpl
    int v67;  // xmm0
    int v68;  // xmm1
    int v69;  // xmm2
    char v70;  // cl
    int v71;  // xmm0
    int v72;  // xmm1
    int v73;  // xmm2
    unsigned long long v74;  // rax
    char v75;  // 4098
    unsigned long long v76;  // rax

    v32 = a0;
    if (!a2)
        return core::ptr::drop_in_place<alloc::sync::Arc<fish::history::History>>(&v32);
    fish::ast::parse(&v46, a1, a2, 0, 0);
    v1 = a4;
    v33 = 0;
    v34 = 8;
    v35 = 0;
    v40.new(&v47, &g_14c2660);
    v37 = v41;
    v36 = v40;
    v2 = 0;
    while (true)
    {
        v49 = v36.next();
        if (!v49)
        {
            core::ptr::drop_in_place<fish::ast::Traversal>(&v36);
            v62 = !v35;
            v3 = a0 + 16.imp();
            v0 = (char)v50 & 1;
            v63 = v3 + 8;
            v64 = v63.timestamp_now();
            v65 = v63.next_identifier();
            v4.to_vec(a1, a2);
            v66 = v62 | (char)v2;
            v21 = v8;
            memcpy(&(char)v19, &v4, 16);
            v25 = v64;
            v26 = (unsigned int)v50;
            v22 = 0;
            v23 = 8;
            v24 = 0;
            v27 = v65;
            v28 = v1;
            if (((v62 | (char)v2) & 1))
            {
                v14 = v27;
                v15 = v28;
                v16 = v29;
                v17 = v30;
                v18 = v31;
                v67 = (int128_t)v19;
                v68 = *((int128_t *)&v21);
                v69 = *((int128_t *)&v23);
                *((int128_t *)&v12) = *((int128_t *)&v25);
                v10 = v69;
                v8 = v68;
                v5 = v67;
                v63.add(&v4, 1, !v28);
                if ((!v28 & (char)v2))
                    v63.save(0);
                core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v3, v0);
                core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v33);
            }
            else
            {
                v63.disable_automatic_saving();
                v70 = !(char)v1;
                *((int128_t *)&v14) = *((int128_t *)&v27);
                v71 = (int128_t)v19;
                v72 = *((int128_t *)&v21);
                v73 = *((int128_t *)&v23);
                *((int128_t *)&v12) = *((int128_t *)&v25);
                v10 = v73;
                v8 = v72;
                v6 = v71;
                v63.add(&v4, 1, v70);
                core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v3, v0);
                v74 = a3.snapshot();
                v75 = v1;
                v8 = v35;
                *((int128_t *)&v7) = *((int128_t *)&v33);
                v9 = v74;
                v10 = &g_14d6790;
                v11 = a0;
                v12 = v27;
                v13 = !v75;
                fish::threads::iothread_perform(&v4);
            }
            v76 = (unsigned long long)core::ptr::drop_in_place<fish::ast::Ast>(&v46);
            if (!(v66 & 1))
                return v76;
            break;
        }
        v50->field_40(&v42, v49);
        if ((int)v42 == 35)
        {
            v51 = (long long)v43.try_source(a1, a2);
            if (!v51)
                v53 = 0;
            else
                v53 = v50;
            v54 = v53;
            if (!v51)
                v51 = 4;
            if ((char)fish::history::string_could_be_path(v51, v54))
            {
                v4.to_vec(v51, v54);
                v21 = v8;
                *((int128_t *)&v19) = *((int128_t *)&v4);
                v33.push(&(char)v19, &g_14da048);
                continue;
            }
        }
        v50->field_40(&v44, v49);
        if ((int)v44 != 24)
            continue;
        v55 = (unsigned int)(long long)v45.decoration();
        v56 = (long long)v45.try_source(a1, a2);
        if (!v56)
        {
            v57 = 4;
            if (v56)
                goto LABEL_13c3622;
            goto LABEL_13c3621;
        }
        else
        {
            v57 = v56;
            if (!v56)
            {
LABEL_13c3621:
                v59 = v56;
                goto LABEL_13c3624;
            }
            else
            {
LABEL_13c3622:
                v59 = v50;
LABEL_13c3624:
                v60 = v59;
                fish::common::unescape_string(&(char)v19, v57, v60, 0, 0);
                if (!((char)(((0 ^ (long long)v19) & (0 ^ -((long long)v19))) >> 63)))
                {
                    v57 = v20;
                    v60 = v21;
                }
                v38 = v57;
                v39 = v60;
                v4 = "e";
                v4 = 4;
                v8 = &"r";
                v9 = 6;
                v10 = "r";
                v11 = 7;
                v12 = "e";
                v13 = 4;
                v61 = v38.slice_contains(&v4, 4);
                core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&(char)v19);
                v2 = ((unsigned int)v55 & 0xffffff00 | (char)v55 == 3) & 0xffffff00 | (char)v55 == 3 | v61 | (char)v2;
            }
        }
    }
    return core::ptr::drop_in_place<alloc::sync::Arc<fish::history::History>>(&v32);
}
