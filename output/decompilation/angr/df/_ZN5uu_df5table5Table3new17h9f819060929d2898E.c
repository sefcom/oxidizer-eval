long long uu_df::table::Table::new(unsigned long a0, struct_0 *a1, unsigned long long a2)
{
    struct_2 *v0;  // [bp-0x588]
    unsigned int v1;  // [bp-0x57c]
    unsigned long long v2;  // [bp-0x578]
    unsigned long long v3;  // [bp-0x568]
    struct_2 *v4;  // [bp-0x560]
    unsigned long long v5;  // [bp-0x558]
    char *v6;  // [bp-0x550]
    struct_0 *v7;  // [bp-0x548]
    char v8;  // [bp-0x540]
    int v9;  // [bp-0x538]
    unsigned long long v10;  // [bp-0x528]
    struct_1 *v11;  // [bp-0x520]
    char v12;  // [bp-0x518]
    unsigned long long *v13;  // [bp-0x510]
    unsigned long long v14;  // [bp-0x508]
    int v15;  // [bp-0x500], Other Possible Types: char
    unsigned long v16;  // [bp-0x4f0]
    unsigned long v17;  // [bp-0x4e8]
    unsigned long long v18;  // [bp-0x4e0]
    void* v19;  // [bp-0x4d8]
    char *v20;  // [bp-0x4d0]
    char v21;  // [bp-0x4c8]
    int v22;  // [bp-0x4a8], Other Possible Types: char
    unsigned long v23;  // [bp-0x4a8]
    unsigned long long v24;  // [bp-0x4a0]
    void* v25;  // [bp-0x498], Other Possible Types: unsigned long long
    char *v26;  // [bp-0x3b8], Other Possible Types: unsigned long long
    int v27;  // [bp-0x3b8]
    struct_0 *v28;  // [bp-0x3b0], Other Possible Types: unsigned long long [3]
    char v29;  // [bp-0x3a8], Other Possible Types: unsigned long long
    int v30;  // [bp-0x300]
    int v31;  // [bp-0x2c8], Other Possible Types: char
    unsigned long long v32;  // [bp-0x2b8]
    char v33;  // [bp-0x1d8]
    char v34;  // [bp-0x108]
    struct_2 *v36;  // r14
    unsigned long long v37[3];  // rdx
    unsigned long long v38[3];  // rax
    unsigned long long v39;  // rax
    unsigned long long v40;  // r15
    unsigned long long v41[3];  // r12
    unsigned long long v42;  // rax

    v15.get_headers(a1);
    v17 = a1->field_8;
    v18 = a1->field_10 + a1->field_8;
    v19 = 0;
    v20 = &v15;
    v12.from_iter(&v17, &g_59c9d8);
    v36 = ::0x4b00d0::alloc::alloc::Global::alloc_impl();
    if (!v36)
        alloc::alloc::handle_alloc_error(8, 24); /* do not return */
    v36->field_10 = v16;
    *((void*)&v36->field_0) = v15;
    v3 = 1;
    v4 = v36;
    v5 = 1;
    uucore::mods::locale::get_message(&v22, "df-totalESTRPIPEdf-about", 8);
    v1 = (int)v33.new(v24, v25) & 0xffffff00 | 1;
    ::0x4af890::core::ptr::drop_in_place<alloc::string::String>(&v22);
    v0 = v4;
    v2 = a2;
    v21.into_iter(a2);
    v31.next(&v21);
    if (!((char)(((0 ^ *((long long *)&v31)) & (0 ^ -(*((long long *)&v31)))) >> 63)))
    {
        if (a1->field_51)
        {
            do
            {
                memcpy(&v26, &v31, 232);
                memcpy(&v22, &v31, 232);
                v34.from(&v22);
                v6 = &v34;
                v7 = a1;
                v8 = 0;
                v9.get_values(&v6);
                memcpy(&v22, &v34, 208);
                v33.add_assign(&v22);
                v25 = v10;
                v22 = v9;
                v3.push(&v22, &g_59ca20);
                v31.next(&v21);
            } while (*((long long *)&v31) != 0x8000000000000000);
        }
        else
        {
            do
            {
                memcpy(&v26, &v31, 232);
                if (!(long long)v30)
                {
                    ::0x4af920::core::ptr::drop_in_place<uu_df::filesystem::Filesystem>(&v26);
                }
                else
                {
                    memcpy(&v22, &v31, 232);
                    v34.from(&v22);
                    v6 = &v34;
                    v7 = a1;
                    v8 = 0;
                    v9.get_values(&v6);
                    memcpy(&v22, &v34, 208);
                    v33.add_assign(&v22);
                    v25 = v10;
                    v22 = v9;
                    v3.push(&v22, &g_59ca20);
                }
                v31.next(&v21);
            } while (*((long long *)&v31) != 0x8000000000000000);
        }
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_df::filesystem::Filesystem>>(&v21);
    if (a1->field_53)
    {
        v26 = &v33;
        v28 = a1;
        v29 = 1;
        v22.get_values(&v26);
        v3.push(&v22, &g_59c9f0);
    }
    v26 = v3.into_iter();
    v28[0] = v37;
    if (v26.next())
    {
        do
        {
            v23 = v38[1];
            v24 = v38[1] + v38[2] * 24;
            v25 = 0;
            v39 = v23.next();
            if (v37)
            {
                v40 = v39;
                v41 = v37;
                do
                {
                    v42 = v41[1].rfold(v41[2] + v41[1]);
                    if (v40 >= v14)
                        core::panicking::panic_bounds_check(v40, v14, &g_59ca08); /* do not return */
                    if (v42 > v13[v40])
                        v13[v40] = v41[1].rfold(v41[2] + v41[1]);
                    v40 = v23.next();
                    v41 = v37;
                } while (v37);
            }
            v38 = v26.next();
        } while (v38);
    }
    v32 = 1;
    memcpy(&v31, &v3, 16);
    v29 = v14;
    *((int128_t *)&v27) = *((int128_t *)&v12);
    v22.get_alignments(a1);
    v11->field_10 = v25;
    v11->field_0 = (int128_t)v22;
    *((void*)&(&v11->field_10)[1]) = v31;
    *((unsigned long long *)((char *)&v11->field_18 + 8)) = 1;
    *((int128_t *)&v11->field_28) = (int128_t)v27;
    *((unsigned long long *)&v11->field_30) = v29;
    core::ptr::drop_in_place<uu_df::table::Row>(&v33);
    return v11;
}
