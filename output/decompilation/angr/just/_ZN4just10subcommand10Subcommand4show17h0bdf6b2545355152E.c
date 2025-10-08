long long just::subcommand::Subcommand::show(unsigned long a0, unsigned long a1, unsigned long long a2[86], unsigned long long a3[3])
{
    struct_0 *v0;  // [bp-0xb8]
    unsigned long v1;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xa8]
    char *v3;  // [bp-0xa0]
    int v4;  // [bp-0x99]
    unsigned long long v5;  // [bp-0x98]
    void* v6;  // [bp-0x90]
    char *v7;  // [bp-0x80]
    unsigned long long v8;  // [bp-0x78]
    unsigned long v9;  // [bp-0x70]
    char *v10;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x58]
    char v12;  // [bp-0x50]
    struct_2 *v13;  // [bp-0x38]
    unsigned long long v15;  // r15
    unsigned long long v16;  // r12
    unsigned long long v17[3];  // rbp
    unsigned long v18;  // rdx
    unsigned long long v19[86];  // 4096
    unsigned long long v20;  // r14
    unsigned long long v21[3];  // rsi
    unsigned long long v22[86];  // 4096
    unsigned long long v23[3];  // rbp
    unsigned long long v24[86];  // rax
    unsigned long long v25[3];  // rbp
    unsigned long long v27[86];  // rax
    unsigned long long v28;  // rcx
    unsigned long v29;  // r12
    void* v30;  // r14
    unsigned long long v31[86];  // r15
    struct_2 *v32;  // rax
    unsigned long long v33;  // rax
    unsigned long long v34;  // rax
    int v35;  // xmm1
    char *v36;  // rax

    v15 = a3[1];
    v16 = a3[2];
    v17 = v16 - 1.index(v15, v16, &g_831448);
    if (!v17 || !v18)
    {
        v19 = a2;
    }
    else
    {
        v20 = &v17[v18];
        v21 = v17 + 1;
        v22 = a2;
        do
        {
            v23 = v21;
            v24 = v22[84].get(v22[85], v17[1], v17[2]);
            if (!v24)
            {
                (char)v1.spec_to_string(a3);
                *((int128_t *)&v0->field_1[15]) = *((int128_t *)&v2);
                v0->field_0 = 53;
                *((unsigned long *)&v0->field_1[7]) = v1;
                return v1;
            }
            if (v23 == v20)
            {
                v25 = v23;
                v19 = v24;
                if (v25 == v20)
                    break;
                continue;
            }
            else
            {
                v25 = v23 + 1;
                v19 = v24;
                if (v23 == v20)
                    break;
                continue;
            }
            v21 = v25;
            v19 = v24;
            v17 = v23;
            v22 = v24;
        } while (v17);
    }
    v27 = v19;
    if (v16)
    {
        v28 = v16 * 3;
        v29 = v15 + v28 * 8 - 24;
        if (v29)
        {
            v30 = v15 + v28 * 8;
            v31 = v27;
            v32 = v27[77].get_alias(v27[78], (long long)v30[16], (long long)v30[8]);
            if (v32)
            {
                v13 = v32;
                v33 = v31.get_recipe(160 + v32->field_18.lexeme(), a2);
                if (!v33)
                    core::option::unwrap_failed(&g_831478); /* do not return */
                v10 = &v13;
                v11 = <&T as core::fmt::Display>::fmt;
                v1 = &g_82dbd8;
                v2 = 2;
                v6 = 0;
                v3 = &v10;
                v5 = 1;
                std::io::stdio::_print(&v1);
                v12.stdout(a1 + 388);
                v10 = v33;
                v11 = &g_830370;
                v7 = &v10;
                v8 = <just::color_display::Wrapper as core::fmt::Display>::fmt;
                v1 = &g_82dbd8;
                v2 = 2;
                v6 = 0;
                v3 = &v7;
                v5 = 1;
                std::io::stdio::_print(&v1);
            }
            else
            {
                v34 = v31.get_recipe((long long)v30[16], (long long)v30[8]);
                if (!v34)
                {
                    (char)v7.clone(v29);
                    (char)v10.suggest_recipe(v31, (long long)v30[16], (long long)v30[8]);
                    *((unsigned long *)&v0->field_10[16]) = v9;
                    *((int128_t *)&v0->field_10[0]) = *((int128_t *)&v7);
                    memcpy(&(char)v1, &(char)v10, 16);
                    *((int128_t *)&v4) = *((int128_t *)&v12);
                    v0->field_0 = 52;
                    v35 = *((int128_t *)&v3);
                    *((int128_t *)&v0->field_1[0]) = *((int128_t *)&v1);
                    *((void*)&v0->field_1[16]) = v35;
                    v36 = *((long long *)((char *)&(&v3)[1] + 7));
                    *((char **)&v0->field_8) = v36;
                    return v36;
                }
                v12.stdout(a1 + 388);
                v10 = v34;
                v11 = &g_830370;
                v7 = &v10;
                v8 = <just::color_display::Wrapper as core::fmt::Display>::fmt;
                v1 = &g_82dbd8;
                v2 = 2;
                v6 = 0;
                v3 = &v7;
                v5 = 1;
                std::io::stdio::_print(&v1);
            }
            v0->field_0 = 56;
            return a0;
        }
    }
    core::option::unwrap_failed(&g_831460); /* do not return */
}
