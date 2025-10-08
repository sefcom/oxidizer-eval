long long uu_chroot::parse_group_list(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x164]
    unsigned long long v1[2];  // [bp-0x160]
    unsigned long v2;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned int v3;  // [bp-0x154]
    char v4;  // [bp-0x150]
    char *v5;  // [bp-0x150], Other Possible Types: unsigned long
    unsigned long long v6;  // [bp-0x14c], Other Possible Types: unsigned long
    unsigned long long v7;  // [bp-0x148]
    void* v8;  // [bp-0x140]
    unsigned short v9;  // [bp-0x120]
    int v10;  // [bp-0x118]
    int v11;  // [bp-0x110]
    char *v12;  // [bp-0x108], Other Possible Types: unsigned long long
    char *v13;  // [bp-0x100]
    unsigned long long v14;  // [bp-0xe8]
    unsigned long long v15;  // [bp-0xe0]
    char v16;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v17[2];  // [bp-0xd0]
    unsigned long v18;  // [bp-0xc8]
    void* v19;  // [bp-0xc0]
    unsigned long long v20;  // [bp-0xb8]
    void* v21;  // [bp-0xb0]
    char *v22;  // [bp-0xa8]
    unsigned long long v23;  // [bp-0xa0]
    char *v24;  // [bp-0x98]
    unsigned long long v25;  // [bp-0x90]
    char v26;  // [bp-0x88]
    unsigned long long v28[2];  // r14
    unsigned long long v29;  // r15
    unsigned long long v30;  // rdx
    struct_0 *v31;  // rax
    struct_0 *v32;  // r12
    int v33;  // xmm0
    struct_0 *v34;  // rax
    unsigned long long v35;  // rcx
    unsigned long long v36;  // rax
    unsigned long long v37;  // r13
    unsigned long long v38;  // rdx
    unsigned long long v39;  // rax
    unsigned int v40;  // eax
    unsigned long long v41;  // r15
    unsigned long long v42;  // rax
    unsigned int v43;  // [bp-0x118]

    v4.into_searcher(44, a1, a2);
    v1[0] = 0;
    v2 = a2;
    v9 = 1;
    v16.collect(&v1);
    if (v18 == 1)
    {
        v28 = v17;
        v29 = core::str::<impl str>::trim_matches(v28[0], v28[1]);
        if (v30)
        {
            v31 = 8.alloc_impl(24);
            if (!v31)
                alloc::alloc::handle_alloc_error(8, 24); /* do not return */
            v32 = v31;
            v1.to_vec(v29, v30);
            v12 = *((long long *)&v4);
            v33 = *((int128_t *)&v1);
            v10 = v33;
            v32->field_10 = v12;
            *((void*)&v32->field_0) = v33;
            *((unsigned long long *)&a0[8]) = 1;
            *((struct_0 **)&a0[16]) = v32;
            *((unsigned long long *)&a0[24]) = 1;
            *((unsigned int *)a0) = 14;
            v28 = v17;
        }
        else
        {
            v1.to_vec(v29, 0);
            memcpy(&(char)v1, &v1, 16);
            v6 = *((long long *)&v4);
            *((unsigned int *)a0) = 4;
LABEL_466c59:
            v34 = *((long long *)&v3);
            v35 = v6;
            *((int128_t *)&a0[4]) = *((int128_t *)&v1);
            *((struct_0 **)&a0[16]) = v34;
            *((unsigned long long *)&a0[24]) = v35;
        }
        return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v16, v28);
    }
    v28 = v17;
    v1[0] = v28;
    v2 = &v1[v18];
    if (v1.all())
    {
        v1.to_vec(a1, a2);
        memcpy(&(char)v1, &v1, 16);
        v6 = *((long long *)&v4);
        *((unsigned int *)a0) = 5;
        goto LABEL_466c59;
    }
    else
    {
        v19 = 0;
        v20 = 8;
        v21 = 0;
        v26.into_iter(&v16);
        v0 = 0;
        while (true)
        {
            v36 = v26.next();
            if (!v36)
                break;
            v37 = v36;
            v39 = core::str::<impl str>::trim_matches(v36, v38);
            if (!v38)
            {
                if (!v38)
                    continue;
                v1.to_vec(v37, v38);
                v13 = *((long long *)&v4);
                *((int128_t *)&v11) = *((int128_t *)&v1);
                v43 = 4;
                uucore::mods::error::set_exit_code(125);
                v14 = uucore::util_name();
                v15 = v38;
                v22 = &v14;
                v23 = <&T as core::fmt::Display>::fmt;
                v24 = &v43;
                v25 = <uu_chroot::error::ChrootError as core::fmt::Display>::fmt;
                v1[0] = &g_4fab48[0];
                v2 = 3;
                v8 = 0;
                v5 = &v22;
                v7 = 2;
                std::io::stdio::_eprint(&v1);
                v40 = core::ptr::drop_in_place<uu_chroot::error::ChrootError>(&v43);
            }
            else
            {
                v41 = v39;
                if (!(char)v39.is_prefix_of(v38) || !v41.is_suffix_of(v38))
                {
                    v1.to_vec(v41, v38);
                    v12 = v5;
                    *((int128_t *)&v10) = *((int128_t *)&v1);
                    v19.push(&(unsigned int)v10);
                    continue;
                }
                else
                {
                    v1.to_vec(v37, v38);
                    v13 = v5;
                    *((int128_t *)&v11) = *((int128_t *)&v1);
                    v43 = 4;
                    uucore::mods::error::set_exit_code(125);
                    v14 = uucore::util_name();
                    v15 = v38;
                    v22 = &v14;
                    v23 = <&T as core::fmt::Display>::fmt;
                    v24 = &v43;
                    v25 = <uu_chroot::error::ChrootError as core::fmt::Display>::fmt;
                    v1[0] = &g_4fab48[0];
                    v2 = 3;
                    v8 = 0;
                    v5 = &v22;
                    v7 = 2;
                    std::io::stdio::_eprint(&v1);
                    v40 = core::ptr::drop_in_place<uu_chroot::error::ChrootError>(&v43);
                }
            }
            v0 = v40 & 0xffffff00 | 1;
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(&v26);
        if (((char)v0 & 1))
        {
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v19);
            v42 = 3;
        }
        else
        {
            *((unsigned long long *)&a0[24]) = 0;
            *((int128_t *)&a0[8]) = *((int128_t *)&v19);
            v42 = 14;
        }
        *((unsigned int *)a0) = v42;
        return v42;
    }
}
