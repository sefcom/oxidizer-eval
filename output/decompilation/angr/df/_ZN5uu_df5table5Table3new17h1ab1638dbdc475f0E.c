long long uu_df::table::Table::new(unsigned long a0, struct_0 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x450]
    struct_1 *v1;  // [bp-0x448]
    unsigned long long v2;  // [bp-0x440]
    char v3;  // [bp-0x438], Other Possible Types: unsigned long
    unsigned long long *v4;  // [bp-0x430]
    unsigned long long v5;  // [bp-0x428]
    char *v6;  // [bp-0x420]
    struct_0 *v7;  // [bp-0x418]
    char v8;  // [bp-0x410]
    unsigned long long v9;  // [bp-0x408]
    struct_2 *v10;  // [bp-0x400]
    unsigned long v11;  // [bp-0x3f8]
    unsigned long v12;  // [bp-0x3f0]
    struct_1 *v13;  // [bp-0x3e8]
    int v14;  // [bp-0x3e0], Other Possible Types: char
    unsigned long v15;  // [bp-0x3d0]
    char v16;  // [bp-0x3c8]
    int v17;  // [bp-0x3a8]
    unsigned long v18;  // [bp-0x390]
    unsigned long long v19;  // [bp-0x388]
    void* v20;  // [bp-0x380]
    char *v21;  // [bp-0x378]
    int v22;  // [bp-0x2d8]
    char v23;  // [bp-0x2a8]
    char *v24;  // [bp-0x1d8], Other Possible Types: unsigned long long
    struct_0 *v25;  // [bp-0x1d0]
    char v26;  // [bp-0x1c8]
    char v27;  // [bp-0x108]
    unsigned long v29;  // r12
    struct_1 *v30;  // rax
    struct_1 *v31;  // r12
    struct_1 *v32;  // rax
    struct_1 *v33;  // r12
    unsigned long long v34;  // rax
    unsigned long long v35[3];  // rdx
    unsigned long long v36;  // r14
    unsigned long long v37[3];  // r15
    unsigned long long v38;  // rax

    v14.get_headers(a1);
    v29 = a1->field_8;
    v18 = v29;
    v19 = v29 + a1->field_10;
    v20 = 0;
    v21 = &v14;
    v3.collect(&v18);
    v30 = 8.alloc_impl(24);
    if (!v30)
        alloc::alloc::handle_alloc_error(8, 24); /* do not return */
    v11 = a1->field_10;
    v12 = v29;
    *((unsigned long *)&v30->field_8) = v15;
    *((void*)&v30->field_0[0]) = v14;
    v0 = 1;
    v1 = v30;
    v2 = 1;
    v23.new();
    v9 = a2;
    v16.into_iter(a2);
    v18.next(&v16);
    if (!((char)(((0 ^ v18) & (0 ^ -(v18))) >> 63)))
    {
        if (a1->field_51 == 1)
        {
            do
            {
                v27.from(&v18);
                v6 = &v27;
                v7 = a1;
                v8 = 0;
                v17.get_values(&v6);
                memcpy(&v24, &v27, 208);
                v23.add_assign(&v24);
                v0.push(&v17, &g_502f38);
                v18.next(&v16);
            } while (v18 != 0x8000000000000000);
        }
        else
        {
            do
            {
                if (!(long long)v22)
                {
                    core::ptr::drop_in_place<uu_df::filesystem::Filesystem>(&v18);
                }
                else
                {
                    v27.from(&v18);
                    v6 = &v27;
                    v7 = a1;
                    v8 = 0;
                    v17.get_values(&v6);
                    memcpy(&v24, &v27, 208);
                    v23.add_assign(&v24);
                    v0.push(&v17, &g_502f38);
                }
                v18.next(&v16);
            } while (v18 != 0x8000000000000000);
        }
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_df::filesystem::Filesystem>>(&v16);
    if (a1->field_53)
    {
        v24 = &v23;
        v25 = a1;
        v26 = 1;
        v18.get_values(&v24);
        v0.push(&v18, &g_502f08);
    }
    if (v2)
    {
        v31 = v1;
        v13 = (char *)v31 + 24 * v2;
        v32 = &v31->field_10;
        while (true)
        {
            v33 = v32;
            v18 = v31->field_0[1];
            v19 = v31->field_0[1] + *((long long *)&v31->field_8) * 24;
            v20 = 0;
            v34 = v18.next();
            if (v35)
            {
                v36 = v34;
                v37 = v35;
                do
                {
                    v38 = v37[1].rfold(v37[2] + v37[1]);
                    if (v36 >= v5)
                        core::panicking::panic_bounds_check(v36, v5, &g_502f20); /* do not return */
                    if (v38 > v4[v36])
                        v4[v36] = v37[1].rfold(v37[2] + v37[1]);
                    v36 = v18.next();
                    v37 = v35;
                } while (v35);
            }
            v32 = &v33->field_10;
            if (v33 == v13)
            {
                v32 = v33;
                v31 = v33;
                if (v31 == v13)
                    break;
            }
            else
            {
                v31 = v33;
                if (v31 == v13)
                    break;
            }
        }
    }
    v18.get_alignments(v12, v11);
    v10->field_10 = 0;
    v10->field_0 = *((int128_t *)&v18);
    *((int128_t *)&(&v10->field_10)[1]) = *((int128_t *)&v0);
    *((unsigned long long *)((char *)&v10->field_18 + 8)) = v2;
    v10->field_28 = v3;
    v10->field_30 = v4;
    v10->field_38 = v5;
    core::ptr::drop_in_place<uu_df::table::Row>(&v23);
    return v10;
}
