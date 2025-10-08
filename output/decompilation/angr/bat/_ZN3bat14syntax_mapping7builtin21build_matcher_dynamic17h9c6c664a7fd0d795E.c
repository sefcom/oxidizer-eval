long long bat::syntax_mapping::builtin::build_matcher_dynamic(struct_0 *a0, struct_1 *a1, unsigned long a2)
{
    void* v0;  // [bp-0xd8]
    unsigned long long v1;  // [bp-0xd0]
    void* v2;  // [bp-0xc8]
    unsigned long long v3;  // [bp-0xc0]
    int v4;  // [bp-0xb8]
    unsigned long long v5;  // [bp-0xb0]
    unsigned long long v6;  // [bp-0xa8]
    char v9;  // [bp-0x98]
    int v10;  // [bp-0x90]
    int v12;  // [bp-0x80]
    int v13;  // [bp-0x70]
    int v14;  // [bp-0x60]
    unsigned long v15;  // [bp-0x50]
    int v16;  // [bp-0x48], Other Possible Types: char
    unsigned long v18;  // r14
    unsigned long long v19;  // rbp
    unsigned long long v20;  // rbp
    unsigned long long v23;  // rax
    int v24;  // xmm0
    unsigned long long v25;  // [bp-0xa0]

    v0 = 0;
    v1 = 1;
    v2 = 0;
    if (a2)
    {
        v18 = &a1->field_8;
        v19 = a2 * 24;
        do
        {
            while (true)
            {
                v20 = v19;
                if ((*((char *)(v18 - 8)) & 1))
                    break;
                v0.spec_extend(*((long long *)v18), *((long long *)(v18 + 8)) + *((long long *)v18));
                v18 += 24;
                v19 = v20 - 24;
                if (!v20 - 24)
                    goto LABEL_8430b5;
            }
            std::env::var(&v6, v18);
            if (((char)v6 & 1))
            {
                core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v6);
                goto LABEL_843137;
            }
            memcpy(&v16, &v9, 16);
            if (v25 == 0x8000000000000000)
                goto LABEL_843137;
            v4 = v16;
            v3 = v25;
            v0.spec_extend((long long)v4, v5 + (long long)v4);
            core::ptr::drop_in_place<alloc::string::String>(&v3);
            v18 += 24;
            v19 = v20 - 24;
        } while (v20 != 24);
LABEL_8430b5:
    }
    bat::syntax_mapping::make_glob_matcher(&v6, 1, 0);
    v23 = v6;
    if (v6 == 0x8000000000000000)
    {
        core::ptr::drop_in_place<core::result::Result<globset::glob::GlobMatcher,bat::error::Error>>(&v6);
LABEL_843137:
        v23 = 0x8000000000000000;
    }
    else
    {
        *((unsigned long *)((char *)&a0->field_48 + 8)) = v15;
        *((void*)((char *)&a0->field_38 + 8)) = v14;
        v24 = *((int128_t *)&v25);
        *((void*)((char *)&a0->field_28 + 8)) = v13;
        *((void*)((char *)&a0->field_18 + 8)) = v12;
        *((void*)((char *)&a0->field_8 + 8)) = v10;
        *((void*)&(&a0->field_0)[1]) = v24;
    }
    a0->field_0 = v23;
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
