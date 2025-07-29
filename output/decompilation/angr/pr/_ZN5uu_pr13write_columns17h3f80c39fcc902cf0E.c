long long uu_pr::write_columns(unsigned long long a0, unsigned long long a1, struct_0 *a2, unsigned long long a3)
{
    char v0;  // [bp-0x1f1]
    unsigned long v1;  // [bp-0x1f0]
    unsigned long long v2;  // [bp-0x1e0]
    unsigned long v3;  // [bp-0x1c8]
    unsigned long v4;  // [bp-0x1c0]
    unsigned long long v5;  // [bp-0x1b0]
    unsigned long long v7;  // [bp-0x1a8]
    unsigned long long v8;  // [bp-0x1a0]
    int v9;  // [bp-0x198]
    unsigned long long v10;  // [bp-0x190]
    unsigned long long v11;  // [bp-0x188]
    char v12;  // [bp-0x178]
    int v13;  // [bp-0x178]
    int v14;  // [bp-0x178]
    unsigned long long v15;  // [bp-0x168]
    unsigned long v16;  // [bp-0x160]
    unsigned long v17;  // [bp-0x158]
    void* v18;  // [bp-0x150]
    unsigned long long v19;  // [bp-0x148]
    void* v20;  // [bp-0x140]
    unsigned long long v21;  // [bp-0x138]
    unsigned long long v22;  // [bp-0x130]
    void* v23;  // [bp-0x128]
    unsigned long v24;  // [bp-0x120]
    unsigned long long v25;  // [bp-0x118]
    unsigned long long v26;  // [bp-0x110]
    void* v27;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v28;  // [bp-0x100]
    void* v29;  // [bp-0xf8]
    uint128_t v30;  // [bp-0xf0]
    uint128_t v31;  // [bp-0xe0]
    void* v32;  // [bp-0xd0]
    char v33;  // [bp-0xc8]
    unsigned long long v34;  // [bp-0xa8]
    unsigned long long v35;  // [bp-0xa0]
    void* v36;  // [bp-0x98]
    unsigned long long v37;  // [bp-0x90]
    unsigned long long v38;  // [bp-0x88]
    struct_0 *v39;  // [bp-0x80]
    unsigned long v40;  // [bp-0x78]
    unsigned long long v41;  // [bp-0x70]
    char v42;  // [bp-0x68]
    void* v43;  // [bp-0x60]
    unsigned long long v44;  // [bp-0x58]
    char v45;  // [bp-0x48]
    unsigned long v47;  // r15
    unsigned long long v48;  // rbx
    void* v49;  // rax
    void* v50;  // r15
    void* v51;  // r12
    unsigned long long v52;  // r12
    unsigned long long v53;  // rax
    struct_1 *v55;  // rax
    void* v56;  // r15
    unsigned long long v57;  // rax
    unsigned long long *v58;  // rdx
    unsigned long long v59;  // rax
    unsigned long long *v60;  // rdx
    unsigned long long *v61;  // rdx
    unsigned long long *v62;  // rdx

    v47 = a2->field_10;
    v17 = a2->field_68;
    v16 = a2->field_70;
    v48 = a2->field_138 >> (a2->field_140 & 63);
    if (v47)
    {
        v1 = a2->field_18;
        v49 = 0;
        if (!((char)(((0 ^ a2->field_100) & (0 ^ -(a2->field_100))) >> 63)))
            goto LABEL_5aed73;
    }
    else
    {
        v1 = uu_pr::get_columns(a2);
        v49 = 0;
        if (!((char)(((0 ^ a2->field_100) & (0 ^ -(a2->field_100))) >> 63)))
        {
LABEL_5aed73:
            v49 = a2->field_128;
        }
    }
    v25 = v49;
    v4 = a2->field_20;
    v3 = a2->field_28;
    v0 = a2->field_142;
    v18 = 0;
    v19 = 8;
    v20 = 0;
    v24 = v47;
    if ((v1 & (char)v47) == 1)
    {
        v26 = a1 * 64 + a0;
        v50 = 0;
        v51 = 0;
        do
        {
            v52 = v51;
            v53 = v52.forward_unchecked();
            if (v50 > a1)
                core::slice::index::slice_start_index_len_fail(v50, a1, &g_755f88); /* do not return */
            v2 = v50;
            v27 = v50 * 64 + a0;
            v28 = v26;
            v56 = 0;
            if (v27.next())
            {
                while (v55->field_18 == v52)
                {
                    v18.push(v55, &g_755f58);
                    v56 += 1;
                    if (!v27.next())
                        break;
                }
            }
            v50 = v2 + v56;
            while (v56 < v48)
            {
                v56 = v56.forward_unchecked();
                v18.push(0, &g_755f70);
            }
            v51 = v53;
        } while (v51 < v1);
    }
    v36 = 0;
    v34 = v18;
    v35 = 8;
    v43 = 0;
    v44 = v48;
    v37 = a0;
    v38 = a1;
    v39 = a2;
    v40 = v1;
    v41 = v48;
    v42 = v25;
    v45.from_iter(&v34, &g_755b50);
    v27 = 0;
    v30 = 0;
    v31 = 0;
    v28 = 1;
    v29 = 0;
    v32 = 0;
    v33.into_iter(&v45);
    v12.next(&v33);
    if (*((long long *)&v12) != 0x8000000000000000)
    {
        if (v24)
        {
            do
            {
                v9 = v13;
                v11 = v15;
                v21 = v10;
                v22 = v10 + v11 * 8;
                v23 = 0;
                while (true)
                {
                    v57 = v21.next();
                    if (!v58)
                        break;
                    if (*(v58))
                    {
                        uu_pr::get_line_for_printing(&v5, a2, *(v58), v1, v57, v4, v3, v11);
                        if (!(!a3.write_all(v7, v8)))
                            goto LABEL_5af32e;
                        ::0x5a6940::core::ptr::drop_in_place<alloc::string::String>(&v5);
                    }
                    else
                    {
                        uu_pr::get_line_for_printing(&v5, a2, &v27, v1, v57, v4, v3, v11);
                        if (!a3.write_all(v7, v8))
                        {
                            ::0x5a6940::core::ptr::drop_in_place<alloc::string::String>(&v5);
                        }
                        else
                        {
                            ::0x5a6940::core::ptr::drop_in_place<alloc::string::String>(&v5);
                            goto LABEL_5af344;
                        }
                    }
                }
                if (!(!a3.write_all(v17, v16)))
                    goto LABEL_5af344;
                (char)v9.drop_in_place<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>();
                v12.next(&v33);
            } while (*((long long *)&v12) != 0x8000000000000000);
            goto LABEL_5af344;
        }
        else
        {
            v2 = 0;
            while (true)
            {
                v9 = v14;
                v11 = v15;
                v21 = v10;
                v22 = v10 + v11 * 8;
                v23 = 0;
                v59 = v21.next();
                if (v60)
                {
                    while (true)
                    {
                        v62 = v61;
                        if (!*(v62))
                        {
                            v2 = v59 & 0xffffffffffffff00 | 1;
                            if (!(!v0))
                                goto LABEL_5af382;
                            goto LABEL_5af2d3;
                        }
                        uu_pr::get_line_for_printing(&v5, a2, *(v62), v1, v59, v4, v3, v11);
                        if (a3.write_all(v7, v8))
                            break;
                        ::0x5a6940::core::ptr::drop_in_place<alloc::string::String>(&v5);
                        v59 = v21.next();
                        v61 = v60;
                        if (!v61)
                            goto LABEL_5af2b1;
                    }
LABEL_5af32e:
                    ::0x5a6940::core::ptr::drop_in_place<alloc::string::String>(&v5);
LABEL_5af344:
                    (char)v9.drop_in_place<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>();
                    v33.drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>>();
                    ::0x5a6830::core::ptr::drop_in_place<uu_pr::FileLine>(&v27);
                    return 1;
                }
LABEL_5af2b1:
                if (((char)v2 & v0))
                    break;
LABEL_5af2d3:
                if (!(!a3.write_all(v17, v16)))
                    goto LABEL_5af344;
                (char)v9.drop_in_place<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>();
                v12.next(&v33);
                if ((long long)v14 == 0x8000000000000000)
                {
                    v33.drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>>();
                    ::0x5a6830::core::ptr::drop_in_place<uu_pr::FileLine>(&v27);
                    return 0;
                }
            }
LABEL_5af382:
            (char)v9.drop_in_place<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>();
        }
    }
    v33.drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>>();
    ::0x5a6830::core::ptr::drop_in_place<uu_pr::FileLine>(&v27);
    return 0;
}
