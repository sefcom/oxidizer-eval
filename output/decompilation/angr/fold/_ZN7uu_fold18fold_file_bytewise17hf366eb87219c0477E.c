long long uu_fold::fold_file_bytewise(unsigned long long a0[2], char a1, unsigned long long a2)
{
    void* v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    void* v2;  // [bp-0x90]
    unsigned int v3;  // [bp-0x7c]
    void* v4;  // [bp-0x78]
    unsigned long long v5;  // [sp-0x78]
    unsigned long long v6;  // [bp-0x70]
    char v7;  // [bp-0x68], Other Possible Types: unsigned long long
    uint128_t v8;  // [bp-0x60]
    char *v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x40]
    void* v11;  // [bp-0x38]
    char *v13;  // rbx
    unsigned int v14;  // esi
    void* v16;  // rbx
    unsigned long long v17;  // rbp
    unsigned long long v18;  // 4096
    unsigned long long v19;  // rbp
    char *v20;  // r13
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rax
    unsigned long long v24;  // r15
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v13 = &v0;
    v3 = v14 & 0xffffff00 | a1 ^ 1;
    while (true)
    {
        v4.map_err_context(std::io::read_until(a0, 10, v13), a2);
        if (v4)
        {
LABEL_4a0d10:
            ::0x49f1b0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v0);
            break;
        }
        else if (v6)
        {
            if ((char)v1.equal(v2, "\ncapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/vec/mod.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/mod.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/boxed.rs", 1))
            {
                v4 = &g_576ad8;
                v6 = 1;
                v7 = 8;
                v8 = 0;
                std::io::stdio::_print(&v4);
            }
            else if (v2)
            {
                v16 = 0;
                while (true)
                {
                    v17 = v2 - v16;
                    if (a2 <= v17)
                        v18 = a2;
                    else
                        v18 = v17;
                    v19 = v18 + v16;
                    v20 = v16.index(v19, v1, v2, &g_576ae8);
                    v22 = v21;
                    if (!v2 <= v19 && !(char)v3)
                    {
                        v9 = v20;
                        v10 = &v20[v21];
                        v11 = 0;
                        v23 = v9.try_rfold();
                        v22 = v21;
                        if (v21)
                        {
                            v4 = 0;
                            v6 = v23;
                            v7 = 0;
                            v20 = v4.index(v20, v21);
                            v22 = v21;
                        }
                    }
                    v24 = v22;
                    if (v24 == 1 && *(v20) == 10)
                        break;
                    v16 += v24;
                    if (v16 >= v2)
                    {
                        v4 = std::io::stdio::stdout();
                        v27 = v4.write_all(v20, v24);
                        if (!v27)
                            break;
                        v4 = v27.from();
                        goto LABEL_4a0d0a;
                    }
                    v5 = std::io::stdio::stdout();
                    v25 = v5.write_all(v20, v24);
                    if (v25)
                    {
                        v4 = v25.from();
                        goto LABEL_4a0d0a;
                    }
                    v4 = std::io::stdio::stdout();
                    v26 = v4.write_all("\ncapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/vec/mod.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/mod.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/boxed.rs", 1);
                    if (v26)
                    {
                        v4 = v26.from();
LABEL_4a0d0a:
                        goto LABEL_4a0d10;
                    }
                }
            }
            v13 = &v0;
            v0.truncate(0);
        }
        else
        {
            ::0x49f1b0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v0);
            v4 = 0;
            break;
        }
    }
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut dyn std::io::Read>>(a0[0], a0[1]);
    return v4;
}
