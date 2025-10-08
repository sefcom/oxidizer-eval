long long starship::configure::handle_update_configuration(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long a4, unsigned long a5)
{
    unsigned long long v0;  // [bp-0x230]
    unsigned long long v1;  // [bp-0x228]
    void* v2;  // [bp-0x220]
    unsigned long long v3;  // [bp-0x218]
    int v4;  // [bp-0x210], Other Possible Types: char
    int v5;  // [bp-0x200]
    int v6;  // [bp-0x1f0]
    unsigned short v7;  // [bp-0x1e0]
    char v8;  // [bp-0x1d8]
    int v9;  // [bp-0x1c8]
    int v10;  // [bp-0x1b8]
    int v11;  // [bp-0x1a8]
    unsigned long long v12;  // [bp-0x198]
    int v13;  // [bp-0x190], Other Possible Types: char
    int v14;  // [bp-0x180]
    char v15;  // [bp-0x170]
    char v16;  // [bp-0xe0]
    unsigned long long v18;  // rax
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rsi
    unsigned long long v21;  // rdx
    unsigned long long *v23;  // rax
    char *v24;  // rbp
    unsigned long long v25;  // rax
    unsigned long long v26;  // r12
    unsigned long v27;  // rax
    unsigned long v28;  // rax
    unsigned long v30;  // rcx
    struct_3 *v31;  // r15
    uint128_t v33[3];  // rbx

    v4.into_searcher(46, a2, a3);
    v2 = 0;
    v3 = a3;
    v7 = 1;
    v18 = v2.next();
    if ((!v19 | !v18) == 1)
    {
        v20 = "Empty table keys are not supportedThis command can only index into TOML tables# Warning: This config does not include keys that have an unset value\n\n# $all is shorthand for # $custom (excluding any modules already listed in `format`) is shorthand for ";
        v21 = 34;
    }
    else
    {
        v13.entry(a1.as_table_mut(), v18, v19);
        v23 = v13.or_insert_with();
        v12 = *((long long *)&v7);
        v11 = v6;
        v10 = v5;
        v9 = v4;
        memcpy(&v8, &v2, 16);
        v24 = &v8;
        while (true)
        {
            v25 = v24.next();
            if (!v25)
            {
                v13.from_str(v0, v1);
                v16.map_or_else(&v13, v0, v1);
                if (*(v23) - 8 >= 4)
                {
                    v13.clone(v23.decor(), a2);
                    if (*((long long *)&v16) - 8 < 4)
                        core::option::unwrap_failed(&g_11f29c8); /* do not return */
                    v33 = v16.decor();
                    core::ptr::drop_in_place<toml_edit::repr::Decor>(v33);
                    v33[2] = *((int128_t *)&v15);
                    *((void*)&v33[1]) = v14;
                    *((void*)&v33[0]) = v13;
                }
                memcpy(&v13, &v16, 176);
                core::ptr::drop_in_place<toml_edit::item::Item>(v23);
                memcpy(v23, &v13, 176);
                *(a0) = 0x8000000000000000;
                return 0x8000000000000000;
            }
            v26 = v25;
            if (!v23.is_table_like())
            {
                v20 = "This command can only index into TOML tables# Warning: This config does not include keys that have an unset value\n\n# $all is shorthand for # $custom (excluding any modules already listed in `format`) is shorthand for ";
                v21 = 44;
                goto LABEL_b6b52f;
            }
            else if (v19)
            {
                v27 = *(v23) - 8;
                if (v27 < 4)
                    v28 = v27;
                else
                    v28 = 1;
                v30 = v28;
                if (v30 == 1)
                {
                    v31 = &g_11f29e0.padding_0[0];
                    if (v27 >= -6)
                        core::option::unwrap_failed(&g_11f2b78); /* do not return */
                }
                else if (v30 == 2)
                {
                    v23 += 1;
                    v31 = &g_11f2aa0.padding_0[0];
                }
                else
                {
                    core::option::unwrap_failed(&g_11f2b78); /* do not return */
                }
                if (!(char)v31->field_70(v23, v26, v19))
                {
                    toml_edit::item::table(&v13);
                    v24 = &v8;
                    v31->field_78(&v16, v23, v26, v19, &v13);
                    core::ptr::drop_in_place<core::option::Option<toml_edit::item::Item>>(&v16);
                }
                v23 = v31->field_58(v23, v26, v19);
                if (!v23)
                    core::option::unwrap_failed(&g_11f2b60); /* do not return */
            }
            else
            {
                v20 = "Empty table keys are not supportedThis command can only index into TOML tables# Warning: This config does not include keys that have an unset value\n\n# $all is shorthand for # $custom (excluding any modules already listed in `format`) is shorthand for ";
                v21 = 34;
LABEL_b6b52f:
                break;
            }
        }
    }
    return a0.to_vec(v20, v21);
}
