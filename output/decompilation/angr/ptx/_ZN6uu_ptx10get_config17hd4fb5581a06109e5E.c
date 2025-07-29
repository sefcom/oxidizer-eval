long long uu_ptx::get_config(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0xc8]
    unsigned long v1;  // [bp-0xc8], Other Possible Types: char
    unsigned int v2;  // [bp-0xc7]
    unsigned int v3;  // [bp-0xc4]
    int v4;  // [bp-0xc0], Other Possible Types: unsigned long long
    char *v5;  // [bp-0xb8], Other Possible Types: unsigned long long
    uint128_t v6;  // [bp-0xb0]
    unsigned int v7;  // [bp-0x98]
    unsigned int v8;  // [bp-0x95]
    char v9;  // [bp-0x90]
    char v10;  // [bp-0x88]
    int v11;  // [bp-0x88]
    unsigned long long v12;  // [bp-0x78]
    int v13;  // [bp-0x70], Other Possible Types: char
    unsigned long long v14;  // [bp-0x68]
    unsigned long long v15;  // [bp-0x60]
    int v16;  // [bp-0x58], Other Possible Types: char
    char v17;  // [bp-0x48]
    unsigned long long v18;  // [bp-0x40]
    unsigned long long v19;  // [bp-0x38]
    char v20;  // [bp-0x30]
    char v21;  // [bp-0x2f]
    char v22;  // [bp-0x2e]
    char v23;  // [bp-0x2d]
    char v24;  // [bp-0x2c]
    char v25;  // [bp-0x2b]
    char v26;  // [bp-0x2a]
    unsigned long long v28;  // rax
    unsigned long long v29;  // rax
    unsigned long long v31;  // rax
    unsigned long long v32[3];  // rax
    int v33;  // xmm0
    unsigned long long v34[3];  // rax
    int v35;  // xmm0
    unsigned long long v36[3];  // rax
    char v37;  // cl
    int v38;  // xmm1
    int v39;  // xmm2

    v10.default();
    if ((char)a1.get_flag(_ZN6uu_ptx7options11TRADITIONAL17hcddd6359eb5d9aaeE, g_73bfc0))
    {
        v20 = 0;
        v25 = 1;
        v16.clone_into();
        if ((char)a1.contains_id(_ZN6uu_ptx7options15SENTENCE_REGEXP17h42a0e238e9ae0296E, g_73c010))
        {
            v4 = "-S:assertion failed: beg <= end";
            v5 = 2;
            v1 = 1;
            v28 = v1.new();
        }
        else
        {
            v21 = a1.get_flag(_ZN6uu_ptx7options14AUTO_REFERENCE17hdd8addcc16e3f236E, g_73bfb0);
            v22 = a1.get_flag(_ZN6uu_ptx7options10REFERENCES17h5de22a127a33fe64E, g_73c080);
            v23 &= (char)a1.get_flag(_ZN6uu_ptx7options15RIGHT_SIDE_REFS17h5919f2978ef3dbffE, g_73c000);
            v24 = a1.get_flag(_ZN6uu_ptx7options11IGNORE_CASE17hef5a8ddebe674ab3E, g_73c040);
            if ((char)a1.contains_id(_ZN6uu_ptx7options10MACRO_NAME17hbcad16fcc2055b17E, g_73bfe0))
            {
                v1.try_get_one(a1, _ZN6uu_ptx7options10MACRO_NAME17hbcad16fcc2055b17E, g_73bfe0);
                v29 = _ZN6uu_ptx7options10MACRO_NAME17hbcad16fcc2055b17E.unwrap(g_73bfe0, &v1);
                if (!v29)
                    core::option::expect_failed("parsing options failedGNU extensions-S:assertion failed: beg <= end", 22, &g_73b5c8); /* do not return */
                v1.clone(v29);
                ::0x59dd00::core::ptr::drop_in_place<alloc::string::String>(&v10);
                v12 = v5;
                memcpy(&v10, &v1, 16);
            }
            if ((char)a1.contains_id(_ZN6uu_ptx7options15FLAG_TRUNCATION17h7f4ddb7be9e03604E, g_73bfd0))
            {
                v0.try_get_one(a1, _ZN6uu_ptx7options15FLAG_TRUNCATION17h7f4ddb7be9e03604E, g_73bfd0);
                v31 = _ZN6uu_ptx7options15FLAG_TRUNCATION17h7f4ddb7be9e03604E.unwrap(g_73bfd0, &v0);
                if (!v31)
                    core::option::expect_failed("parsing options failedGNU extensions-S:assertion failed: beg <= end", 22, &g_73b5e0); /* do not return */
                v0.clone(v31);
                ::0x59dd00::core::ptr::drop_in_place<alloc::string::String>(&v13);
                v15 = v5;
                *((int128_t *)&v13) = *((int128_t *)&v1);
            }
            if ((char)a1.contains_id(_ZN6uu_ptx7options5WIDTH17h46ca0cce1289ed37E, g_73c090))
            {
                v0.try_get_one(a1, _ZN6uu_ptx7options5WIDTH17h46ca0cce1289ed37E, g_73c090);
                v32 = _ZN6uu_ptx7options5WIDTH17h46ca0cce1289ed37E.unwrap(g_73c090, &v0);
                if (!v32)
                    core::option::expect_failed("parsing options failedGNU extensions-S:assertion failed: beg <= end", 22, &g_73b5f8); /* do not return */
                ::0x59d5b0::core::num::<impl u64>::from_str_radix(&v0, v32[1], v32[2]);
                if (v0 == 1)
                {
                    v0.call_once((&v0)[1]);
                    v7 = *((int *)&(&v0)[1]);
                    v8 = v3;
                    if (v0 == 3)
                        goto LABEL_5a125c;
                    v33 = *((int128_t *)&(&v0)[8]);
                    v3 = v8;
                    v2 = v7;
                    v1 = v0;
                    v4 = v33;
                    v28 = v1.new();
                }
                else
                {
LABEL_5a125c:
                    v18 = v4;
                    goto LABEL_5a1269;
                }
            }
            else
            {
LABEL_5a1269:
                if ((char)a1.contains_id(_ZN6uu_ptx7options8GAP_SIZE17h20ac7fdee6e00507E, g_73c050))
                {
                    v0.try_get_one(a1, _ZN6uu_ptx7options8GAP_SIZE17h20ac7fdee6e00507E, g_73c050);
                    v34 = _ZN6uu_ptx7options8GAP_SIZE17h20ac7fdee6e00507E.unwrap(g_73c050, &v0);
                    if (!v34)
                        core::option::expect_failed("parsing options failedGNU extensions-S:assertion failed: beg <= end", 22, &g_73b610); /* do not return */
                    ::0x59d5b0::core::num::<impl u64>::from_str_radix(&v0, v34[1], v34[2]);
                    if (v0 == 1)
                    {
                        v0.call_once((&v0)[1]);
                        v7 = *((int *)&(&v0)[1]);
                        v8 = v3;
                        if (v0 == 3)
                            goto LABEL_5a12fd;
                        v35 = *((int128_t *)&v4);
                        v3 = v8;
                        v2 = v7;
                        v4 = v35;
                        v28 = v0.new();
                    }
                    else
                    {
LABEL_5a12fd:
                        v19 = v4;
                        goto LABEL_5a130a;
                    }
                }
                else
                {
LABEL_5a130a:
                    v0.try_get_one(a1, _ZN6uu_ptx7options6FORMAT17hdfc5deaacb4bffdcE, g_73bff0);
                    v36 = _ZN6uu_ptx7options6FORMAT17hdfc5deaacb4bffdcE.unwrap(g_73bff0, &v0);
                    if (v36)
                    {
                        v37 = 1;
                        if (!(char)v36[1].equal(v36[2], "roffj", 4))
                        {
                            v37 = 2;
                            if (!(char)v36[1].equal(v36[2], "texinternal error: entered unreachable code: should be caught by clap", 3))
                            {
                                v1 = &g_73b530;
                                v4 = 1;
                                v5 = &v9;
                                v6 = 0;
                                core::panicking::panic_fmt(&v0, &g_73b628); /* do not return */
                            }
                        }
                        v25 = v37;
                    }
                    if ((char)a1.get_flag(_ZN6uu_ptx7options6format4ROFF17h29d2ed8ab5e288daE, g_73c780))
                        v25 = 1;
                    if ((char)a1.get_flag(_ZN6uu_ptx7options6format3TEX17hb6c8db373bb7142eE, g_73c790))
                        v25 = 2;
                    a0->field_50 = v19;
                    a0->field_58 = *((int *)&v20);
                    a0->field_5c = v24;
                    a0->field_5d = v25;
                    a0->field_5e = *((short *)&v26);
                    a0->field_40 = *((int128_t *)&v17);
                    v38 = *((int128_t *)&v12);
                    v39 = *((int128_t *)&v14);
                    *((void*)&a0->field_30) = v16;
                    *((void*)&a0->field_20) = v39;
                    *((void*)&a0->field_10) = v38;
                    *((void*)&a0->field_0) = v11;
                    return a0;
                }
            }
        }
    }
    else
    {
        v4 = "GNU extensions-S:assertion failed: beg <= end";
        v5 = 14;
        v0 = 1;
        v28 = v0.new();
    }
    *((unsigned long long *)&a0->padding_1[7]) = v28;
    *((char **)&a0->field_10) = &g_73b560;
    *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
    core::ptr::drop_in_place<uu_ptx::Config>(&v10);
    return a0;
}
