void fish::builtins::commandline::write_part(unsigned long long a0, unsigned long a1, unsigned long long a2, char a3, char a4, char a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long long a9)
{
    char v0;  // [bp-0xf9]
    int v1;  // [bp-0xf8], Other Possible Types: void*
    int v2;  // [bp-0xe8]
    unsigned long long v3;  // [bp-0xe0]
    void* v4;  // [bp-0xd8]
    int v5;  // [bp-0xd8]
    char v6;  // [bp-0xd0]
    void* v7;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned short v8;  // [bp-0xc0]
    unsigned int v9;  // [bp-0xbe]
    void* v10;  // [bp-0xb8]
    unsigned long long v11;  // [bp-0xb0]
    void* v12;  // [bp-0xa8]
    char *v13;  // [bp-0xa0]
    char *v14;  // [bp-0x98]
    unsigned long long v15;  // [bp-0x90]
    int v16;  // [bp-0x88]
    char v17;  // [bp-0x78]
    char v18;  // [bp-0x77]
    int v19;  // [bp-0x76]
    int v20;  // [bp-0x68]
    unsigned long long v21;  // [bp-0x58]
    char v22;  // [bp-0x50]
    unsigned long long v23;  // r13
    unsigned long long v24;  // rax
    char v25;  // r12b
    char v26;  // r12b
    char v27;  // bpl
    char v28;  // r12b
    char v30;  // bpl
    char v31;  // bpl
    char v32;  // al
    char v33;  // bpl
    int v35;  // xmm1
    unsigned long long v36;  // [bp-0xe8]

    v23 = a8 - a1;
    if (a8 < a1)
    {
        core::panicking::panic_const::panic_const_sub_overflow(&g_14c8088); /* do not return */
    }
    else if (a5 == 3)
    {
        if (a4)
        {
            a2 = v23 + a1;
            if ((char)__CFADD__(v23, a1))
                core::panicking::panic_const::panic_const_add_overflow(&g_14c80d0); /* do not return */
            if (a2 > a7)
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14c80e8); /* do not return */
        }
        else if (a2 < a1 || a2 > a7)
        {
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14c80b8); /* do not return */
        }
        a9.append(a6 + a1 * 4, a2 - a1);
        a9.push(10);
        return;
    }
    else
    {
        v0 = a5;
        v10 = 0;
        v11 = 8;
        v12 = 0;
        v13 = &v0;
        v14 = &v10;
        v15 = a0;
        v24 = a2 - a1;
        if (a2 >= a1 && a2 <= a7)
        {
            if (a3)
            {
                fish::builtins::commandline::write_part::{{closure}}(&v13, a6 + a1 * 4, v24);
            }
            else
            {
                v7 = 0;
                v36 = a6 + a1 * 4;
                v3 = v24;
                v8 = 257;
                v4 = 0;
                v6 = 1;
                v1 = 0;
                v9 = 0;
                if (a4)
                {
                    while (true)
                    {
                        v26 = v25;
                        v16.next(&v1);
                        if ((char)v19 == 2)
                            break;
                        v27 = v18;
                        if (v16.end() >= v23)
                            break;
                        v28 = v26 | v27 != 1;
                        if (((v26 | v27 != 1) & 1))
                        {
                            v25 = v27 == 8;
                        }
                        else
                        {
                            fish::builtins::commandline::write_part::{{closure}}(&v13, v1.text_of(&v16), a2);
                            v25 = v28;
                        }
                    }
                }
                else
                {
                    while (true)
                    {
                        v31 = v30;
                        v16.next(&v1);
                        if ((char)v19 == 2)
                            break;
                        v32 = v18;
                        v33 = v31 | v32 != 1;
                        if (((v31 | v32 != 1) & 1))
                        {
                            v30 = v32 == 8;
                        }
                        else
                        {
                            fish::builtins::commandline::write_part::{{closure}}(&v13, v1.text_of(&v16), a2);
                            v30 = v33;
                        }
                    }
                }
            }
            v22.into_iter(&v10);
            v16.next(&v22);
            if (!((char)(((0 ^ (long long)v16) & (0 ^ -((long long)v16))) >> 63)))
            {
                do
                {
                    v7 = v21;
                    v35 = *((int128_t *)&v17);
                    v5 = v20;
                    v2 = v35;
                    v1 = v16;
                    a9.appendln(&v16);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
                    v16.next(&v22);
                } while ((long long)v16 != 0x8000000000000000);
            }
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::complete::Completion>>(&v22);
            return;
        }
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14c80a0); /* do not return */
    }
}
