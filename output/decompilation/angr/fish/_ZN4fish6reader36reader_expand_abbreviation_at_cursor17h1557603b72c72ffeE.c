long long fish::reader::reader_expand_abbreviation_at_cursor(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned long long a4)
{
    void* v0;  // [bp-0x120]
    unsigned int v1;  // [bp-0x118]
    unsigned int v2;  // [bp-0x114]
    unsigned long long v3;  // [bp-0x110]
    unsigned long long v4;  // [bp-0xf8]
    int v5;  // [bp-0xe8]
    int v7;  // [bp-0xd8]
    int v8;  // [bp-0xc8]
    char v9;  // [bp-0xb8]
    char v10;  // [bp-0x98]
    char v11;  // [bp-0x60]
    char v12;  // [bp-0x48]
    unsigned long long v14;  // r15
    char v15;  // r14b
    unsigned int v16;  // ebp
    unsigned int v17;  // r12d
    char v18;  // cc_dep1
    char v19;  // r13b
    unsigned long long v20;  // r14
    unsigned long long v21;  // rdx
    char v22;  // r13b
    unsigned int v23;  // ebp
    unsigned long long v24;  // rax
    unsigned long long v25;  // rbx
    unsigned long long v26;  // r12
    unsigned long long v27;  // r14
    unsigned long long v30;  // r14

    fish::reader::extract_tokens((unsigned int)&v11, a1, a2);
    (char)v5.into_iter(&v11);
    do
    {
        v1.next_back(&(char)v5);
        v15 = v3;
        if (v15 == 2)
        {
            core::ptr::drop_in_place<core::iter::adapters::rev::Rev<alloc::vec::into_iter::IntoIter<fish::reader::PositionedToken>>>(&(char)v5);
            *((unsigned long long *)v0) = 2;
            return a0;
        }
        v18 = v1.contains_inclusive(v2, a3);
        if (!v18)
        {
            v19 = 2;
            if (!v18)
                goto LABEL_1406782;
            goto LABEL_1406781;
        }
        else
        {
            v19 = v15;
            if (v18)
            {
LABEL_1406781:
                v14 = *((long long *)&v1);
                continue;
            }
            else
            {
LABEL_1406782:
            }
        }
    } while ((v19 != 2 & v15) != 1);
    core::ptr::drop_in_place<core::iter::adapters::rev::Rev<alloc::vec::into_iter::IntoIter<fish::reader::PositionedToken>>>(&(char)v5);
    if ((v19 & 1))
    {
        v20 = 0;
    }
    else
    {
        v20 = fish::reader::reader_expand_abbreviation_at_cursor::{{closure}}(a1, a2, v16, v17);
        v4 = v21;
        v22 = 1;
    }
    v24 = v14.from(v14 >> 32);
    v25 = v21 - v24;
    if (v21 >= v24 && v21 <= a2)
    {
        v26 = a1 + v24 * 4;
        if (v20)
            v27 = v20;
        else
            v27 = 4;
        if (!v20)
            v30 = v20;
        else
            v30 = v4;
        fish::abbrs::abbrs_match(&v12, v26, v25, v22 & 1, v27, v30);
        v9.into_iter(&v12);
        v10.next(&v9);
        if (!((char)(((0 ^ *((long long *)&v10)) & (0 ^ -(*((long long *)&v10)))) >> 63)))
        {
            do
            {
                fish::reader::expand_replacer(&(char)v5, v14, v23, v26, v25, &v10, a4);
                if ((int)v5 != 2)
                {
                    v0[32] = v8;
                    v0[16] = v7;
                    *(v0) = v5;
                    core::ptr::drop_in_place<fish::abbrs::Replacer>(&v10);
                    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::abbrs::Replacer>>(&v9);
                    return v0;
                }
                core::ptr::drop_in_place<core::option::Option<fish::abbrs::Replacement>>(&(char)v5);
                core::ptr::drop_in_place<fish::abbrs::Replacer>(&v10);
                v10.next(&v9);
            } while (*((long long *)&v10) != 0x8000000000000000);
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::abbrs::Replacer>>(&v9);
        *((unsigned long long *)v0) = 2;
        return a0;
    }
    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e0da0); /* do not return */
}
