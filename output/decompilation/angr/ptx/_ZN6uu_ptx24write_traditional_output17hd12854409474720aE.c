long long uu_ptx::write_traditional_output(struct_0 *a0, unsigned long long a1, unsigned long long a2[3], unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x150]
    unsigned long long v1;  // [bp-0x138]
    int v2;  // [bp-0x130]
    char v3;  // [bp-0x120], Other Possible Types: unsigned long, unsigned long long
    char v4;  // [bp-0x120]
    unsigned long v5;  // [bp-0x118], Other Possible Types: unsigned long long
    char *v6;  // [bp-0x110]
    unsigned long long v7;  // [bp-0x108]
    void* v8;  // [bp-0x100]
    char *v9;  // [bp-0xf0]
    unsigned long long v10;  // [bp-0xe8]
    char v11;  // [bp-0xe0], Other Possible Types: unsigned long long
    void* v12;  // [bp-0xd8]
    unsigned long v13;  // [bp-0xd0]
    unsigned long v14;  // [bp-0xc8]
    unsigned long long v15;  // [bp-0xc0]
    void* v16;  // [bp-0xb8]
    unsigned long v17;  // [bp-0xb0]
    unsigned long v18;  // [bp-0xa8]
    unsigned long v19;  // [bp-0xa0]
    char v20;  // [bp-0x98]
    char v21;  // [bp-0x78]
    char v22;  // [bp-0x48]
    unsigned long long v24;  // rax
    unsigned long long v25;  // rdx
    unsigned long v26;  // rax
    unsigned long v27;  // rax
    unsigned int v29;  // r15d
    uint256_t v30;  // ymm0
    unsigned long long v31[10];  // rbx
    unsigned long long v32[9];  // r14
    unsigned long long v33;  // rcx
    uint256_t v34;  // ymm0
    unsigned long v35;  // rdi
    unsigned long v36;  // rsi
    unsigned long long v37;  // rdx
    unsigned long long v38;  // rdx
    void* v39;  // rbx

    if ((char)a3.equal(a4, "-[^]+", 1))
    {
        v24 = std::io::stdio::stdout().new();
        v25 = &g_651d38;
    }
    else
    {
        v11.create(a3, a4);
        v3.map_err_context(&v11, a3, a4);
        if (v3)
            return v3;
        v24 = v5 & 4294967295.new();
        v25 = &g_651ce8;
    }
    v21.with_capacity(v24, v25);
    v11.new(a0->field_38, a0->field_40);
    v20.unwrap(&v11, &g_651d88);
    v26 = a2[0];
    v27 = v26;
    if (v27)
        v27 = a2[2];
    v11 = v26;
    v12 = 0;
    v13 = v26;
    v14 = a2[1];
    v15 = v11;
    v16 = 0;
    v17 = v26;
    v18 = a2[1];
    v19 = v27;
    v29 = a0->field_5d;
    v0 = &g_651e00;
    while (true)
    {
        v31 = v11.next();
        if (!v31)
        {
            v39 = v21.flush().map_err_context();
            if (v39)
            {
                goto LABEL_52de36;
            }
            else
            {
                core::ptr::drop_in_place<regex::regex::string::Regex>(&v20);
                v39 = 0;
                break;
            }
        }
        v32 = a1.get_inner(&v31[3]);
        if (!v32)
            core::option::expect_failed("Missing file in file map\nwrite failedauto-referencetraditionalflag-truncationmacro-nameformatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index,", 24, &g_651da0); /* do not return */
        if (v31[7] >= v32[5])
            core::panicking::panic_bounds_check(v31[7], v32[5], &g_651db8); /* do not return */
        v33 = v31[7] * 3;
        v34 = v30 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v20);
        uu_ptx::get_reference(&v1, a0->field_59, a0->field_5a, v31, *((long long *)(v32[4] + v33 * 8 + 8)), *((long long *)(v32[4] + v33 * 8 + 16)), *((int128_t *)&v20), *((int128_t *)&v20));
        if (v29 == 1)
        {
            v35 = v31[7];
            if (v35 >= v32[5])
            {
                v0 = &g_651dd0;
                core::panicking::panic_bounds_check(v35, v36, v0); /* do not return */
            }
            if (v35 < v32[8])
            {
                v38 = v35 * 24;
                v30 = v34 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)(v32[7] + v38 + 8));
                uu_ptx::format_roff_line(&v22, a0, v31[8], v31[9], *((long long *)(v32[4] + v38 + 8)), *((long long *)(v32[4] + v38 + 16)), *((int128_t *)(v32[7] + v38 + 8)), *((int128_t *)(v32[7] + v38 + 8)), (unsigned long long)v2, (unsigned long long)v2);
            }
            else
            {
                v0 = &g_651de8;
                core::panicking::panic_bounds_check(v35, v36, v0); /* do not return */
            }
        }
        else if (v29 == 2)
        {
            v35 = v31[7];
            if (v35 >= v32[5])
            {
                v0 = &g_651e00;
                core::panicking::panic_bounds_check(v35, v32[5], &g_651e00); /* do not return */
            }
            else if (v35 < v32[8])
            {
                v37 = v35 * 24;
                v30 = v34 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)(v32[7] + v37 + 8));
                uu_ptx::format_tex_line(&v22, a0, v31[8], v31[9], *((long long *)(v32[4] + v37 + 8)), *((long long *)(v32[4] + v37 + 16)), *((int128_t *)(v32[7] + v37 + 8)), *((int128_t *)(v32[7] + v37 + 8)), (unsigned long long)v2, (unsigned long long)v2);
            }
            else
            {
                v0 = &g_651e18;
                core::panicking::panic_bounds_check(v35, v36, v0); /* do not return */
            }
        }
        else
        {
            v4 = 0;
            v39 = v4.new();
LABEL_52de2c:
            core::ptr::drop_in_place<alloc::string::String>(&v1);
LABEL_52de36:
            core::ptr::drop_in_place<regex::regex::string::Regex>(&v20);
            break;
        }
        v9 = &v22;
        v10 = <alloc::string::String as core::fmt::Display>::fmt;
        v3 = &g_651cc8;
        v5 = 2;
        v8 = 0;
        v6 = &v9;
        v7 = 1;
        v39 = v21.write_fmt(&v3).map_err_context();
        core::ptr::drop_in_place<alloc::string::String>(&v22);
        if (!v39)
            core::ptr::drop_in_place<alloc::string::String>(&v1);
        else
            goto LABEL_52de2c;
    }
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v21);
    return v39;
}
