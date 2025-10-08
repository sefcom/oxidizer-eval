long long starship::modules::git_status::RepoStatus::set_ahead_behind_for_each_ref(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    struct_0 *v0;  // [bp-0x108]
    struct_0 *v1;  // [bp-0x100]
    void* v2;  // [bp-0xf8], Other Possible Types: char, unsigned long, unsigned long long
    void* v3;  // [bp-0xf0], Other Possible Types: unsigned long long
    struct_0 *v4;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long v5;  // [bp-0xe0], Other Possible Types: unsigned long long
    int v6;  // [bp-0xd0]
    int v7;  // [bp-0xc0]
    unsigned short v8;  // [bp-0xb0]
    unsigned long long v9;  // [bp-0xa8]
    unsigned long long v10;  // [bp-0xa0]
    int v11;  // [bp-0x98]
    int v12;  // [bp-0x88]
    void* v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x70]
    char v15;  // [bp-0x68]
    unsigned short v16;  // [bp-0x38]
    struct_0 *v18;  // rbx
    unsigned long long v19;  // rax
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rdx
    unsigned long long v25;  // rbp
    unsigned long v26;  // rbx
    unsigned long long v27;  // rax
    unsigned long long v28;  // r12
    unsigned long long v29;  // rax
    struct_1 *v34;  // rax

    v18 = a0;
    v19 = a1.equal(a2, " =\n/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rayon-1.11.0/src/iter/extend.rsfatal runtime error: thread local panicked on drop, aborting\n/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/string.rs/rustc/bf64d66bd58", 1);
    if (!(char)v19)
    {
        v19 = core::slice::<impl [T]>::ends_with(a1, a2, " [gone]aheadbehindError parsing format string `", 7);
        if (!(char)v19)
        {
            core::str::<impl str>::split_once(&v2, a1, a2, 32);
            if (!v2)
                core::option::unwrap_failed(&g_11f4be8); /* do not return */
            v15.into_searcher(44, core::str::<impl str>::trim_matches(v4, v5), v21);
            v13 = 0;
            v14 = v21;
            v16 = 1;
            if (v13.next())
            {
                v0 = &a0->field_10;
                v1 = a0;
                do
                {
                    v9.into_searcher(32, core::str::<impl str>::trim_matches(v22, v23), v21);
                    v3 = 0;
                    v4 = v21;
                    v7 = v12;
                    v6 = v11;
                    memcpy(&v5, &v9, 16);
                    v8 = 1;
                    v2 = 1;
                    v25 = v3.next();
                    v26 = v18;
                    v2 = 0;
                    v27 = v3.get_end();
                    v28 = v27;
                    v26 = v18;
                    if (!!v28 && !!v25)
                    {
                        if (!(char)v25.equal(v21, "aheadbehindError parsing format string `", 5))
                        {
                            v29 = v25.equal(v21, "behindError parsing format string `", 6);
                            v18 = v0;
                            if (!(char)v29)
                                return v29;
                        }
                        ::0xa6d750::core::num::<impl usize>::from_ascii_radix(&v9, v28, v21);
                        v18->field_0 = (char)v9 ^ 1;
                        v18->field_8 = v10;
                        v26 = v1;
                    }
                    v18 = v26;
                    v22 = v13.next();
                } while (v22);
            }
            v2 = 0;
            v3 = 2;
            v4 = v18;
            v5 = &v18->field_10;
            v34 = v2.next();
            if (!v34)
                return v34;
            do
            {
                if (!v34->field_0)
                {
                    v34->field_0 = 1;
                    v34->field_8 = 0;
                }
                v34 = v2.next();
            } while (v34);
            return v34;
        }
    }
    a0->field_0 = 0;
    a0->field_10 = 0;
    return v19;
}
