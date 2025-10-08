long long fish::reader::ReaderData::kill(struct_0 *a0, unsigned int a1, unsigned long long a2, unsigned long long a3, char a4, unsigned int a5)
{
    unsigned int v0;  // [bp-0x84]
    int v1;  // [bp-0x80], Other Possible Types: char
    int v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x70]
    int v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x58]
    char v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    char v8;  // [bp-0x38]
    struct_0 *v11;  // 4096
    unsigned long long v12;  // r13
    unsigned long long v13;  // rbp
    unsigned long long v14;  // rax
    unsigned long v15;  // rdx
    unsigned long long v16;  // rcx
    unsigned long v17;  // r12
    unsigned long long v18;  // rdi
    unsigned long long v19;  // rax
    unsigned long long v20;  // rdx
    unsigned long v21;  // rdx
    unsigned long long v22;  // rbx
    unsigned long long v23;  // rax
    unsigned long v24;  // rdx

    v0 = a1;
    if (!a1)
        v11 = a0;
    else
        v11 = &a0->padding_38[312];
    v12 = v11->field_28;
    v13 = v11->field_30;
    if (a5)
    {
        v14 = a2.clone(a3);
        if (v15 < v14 || v15 > v13)
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14dffd0); /* do not return */
        v1.to_vec(v14 * 4 + v12, v15 - v14);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&a0->field_770);
        a0->field_778 = v3;
        *((void*)&a0->field_770[0]) = v1;
        fish::builtins::fish_indent::fish_indent::{{closure}}(&v1, a0->field_770[1], a0->field_778);
        fish::kill::kill_add(&v1);
        v16 = a3;
    }
    else
    {
        v17 = &a0->field_770;
        fish::builtins::fish_indent::fish_indent::{{closure}}(&v6, a0->field_770[1], a0->field_778);
        v18 = a2;
        if (a4)
        {
            v19 = a2.clone(a3);
            if (v21 < v19)
            {
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14dffb8); /* do not return */
            }
            else if (v21 <= v13)
            {
                (char)v2.to_vec(v19 * 4 + v12, v21 - v19);
                v5 = v3;
                v4 = v2;
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v17);
                *((unsigned long long *)(v17 + 16)) = v5;
                *((void*)v17) = v4;
                v22 = *((long long *)&v8);
                v17.spec_extend(v7, v7 + *((long long *)&v8) * 4);
            }
            else
            {
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14dffb8); /* do not return */
            }
        }
        else
        {
            v23 = a2.clone(a3);
            v20 = &g_14dffa0;
            if (v24 < v23)
            {
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14dffa0); /* do not return */
            }
            else if (v24 <= v13)
            {
                v17.spec_extend(v23 * 4 + v12, v24 * 4 + v12);
                v22 = *((long long *)&v8);
            }
            else
            {
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14dffa0); /* do not return */
            }
        }
        fish::builtins::fish_indent::fish_indent::{{closure}}(&(char)v2, a0->field_770[1], a0->field_778);
        v5 = v3;
        v4 = v2;
        fish::kill::kill_replace(v7, v22, &v4);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
        v16 = a3;
    }
    return a0.erase_substring((char)v0, a2, v16);
}
