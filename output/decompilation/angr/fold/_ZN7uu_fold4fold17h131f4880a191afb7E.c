long long uu_fold::fold(unsigned long long a0, unsigned long a1, char a2, unsigned int a3, unsigned long long a4)
{
    unsigned int v0;  // [bp-0xac]
    unsigned long long v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    unsigned long long v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x90]
    unsigned long long v5;  // [bp-0x88]
    unsigned long long v6;  // [bp-0x80]
    int v7;  // [bp-0x78]
    char v8;  // [bp-0x68]
    unsigned long long v10;  // rbx
    unsigned long long v11[3];  // rax
    char *v12;  // r15
    unsigned long v13;  // r14
    unsigned long v14;  // r12
    char v15;  // r13b
    unsigned long long v16;  // rcx
    char *v17;  // rdx
    unsigned long long v18;  // rbx
    unsigned long long v20;  // rax
    unsigned long v22;  // r14
    unsigned long v23;  // r12
    unsigned long long v24;  // rcx
    char *v25;  // rdx
    unsigned long long v26;  // rbx

    v10 = a4;
    v5 = a0;
    v6 = a0 + a1 * 24;
    if (!v5.next())
        return 0;
    v4 = a4;
    v12 = &v8;
    if (a2)
    {
        while (true)
        {
            v13 = v11[1];
            v14 = v11[2];
            v15 = v13.equal(v14, "-\ncapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/vec/mod.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/mod.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/boxed.rs", 1);
            if (v15)
            {
                v1 = std::io::stdio::stdin();
                v16 = &g_576a80;
                v17 = &v1;
                v18 = v10;
            }
            else
            {
                v7.open(v13, v14);
                v2.map_err_context(&v7, v13, v14);
                if (v2)
                    return v2;
                v0 = v3;
                v16 = &g_576a28;
                v17 = &v0;
                v18 = v4;
            }
            v10 = v18;
            v8.with_capacity(0x2000, v17, v16);
            if (uu_fold::fold_file_bytewise(&v8, a3, v10))
                break;
            if (!v15)
                core::ptr::drop_in_place<std::fs::File>(&v0);
            v11 = v5.next();
            if (!v11)
                return 0;
        }
    }
    else
    {
        while (true)
        {
            v22 = v11[1];
            v23 = v11[2];
            v15 = v22.equal(v23, "-\ncapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/vec/mod.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/mod.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/boxed.rs", 1);
            if (v15)
            {
                v1 = std::io::stdio::stdin();
                v24 = &g_576a80;
                v25 = &v1;
                v26 = v10;
            }
            else
            {
                v7.open(v22, v23);
                v2.map_err_context(&v7, v22, v23);
                if (v2)
                {
                    return v2;
                }
                v0 = v3;
                v24 = &g_576a28;
                v25 = &v0;
                v26 = v4;
            }
            v10 = v26;
            v12.with_capacity(0x2000, v25, v24);
            if (uu_fold::fold_file(v12, a3, v10))
                break;
            if (!v15)
                core::ptr::drop_in_place<std::fs::File>(&v0);
            v11 = v5.next();
            if (!v11)
                return 0;
        }
    }
    if (!v15)
    {
        core::ptr::drop_in_place<std::fs::File>(&v0);
        return v20;
    }
    return v20;
}
