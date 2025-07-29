long long uu_fold::fold_file(unsigned long long a0[2], unsigned int a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x1d8]
    void* v1;  // [bp-0xb8]
    unsigned long long v2;  // [bp-0xb0]
    void* v3;  // [bp-0xa8]
    unsigned int v4;  // [bp-0x94]
    void* v5;  // [bp-0x88]
    unsigned long long v6;  // [bp-0x80]
    void* v7;  // [bp-0x78]
    unsigned long v8;  // [bp-0x70]
    void* v9;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x68]
    int v11;  // [bp-0x60]
    unsigned long long v12;  // [bp-0x40]
    unsigned long long v13;  // [bp-0x38]
    unsigned long long v15;  // r14
    void* v16;  // r15
    unsigned long long v17;  // rbx
    unsigned long long v19;  // rdx
    char *v20;  // rax
    unsigned long v21;  // rax
    unsigned long long v22;  // r15
    unsigned long v24;  // r13
    unsigned long v26;  // r13
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    unsigned long long v30;  // r15
    char v31;  // al
    unsigned long long v32;  // r14
    unsigned long long v33;  // rbx
    unsigned long long v34;  // rcx
    unsigned long long v36;  // rcx
    unsigned long long v37;  // rcx
    unsigned long v38;  // rbx
    unsigned long long v39;  // rcx
    unsigned long long v40;  // rax
    unsigned long long v41;  // rax
    unsigned long long v55;  // rax
    unsigned long long v56;  // rax
    unsigned long long v57;  // rax

    v5 = 0;
    v6 = 1;
    v7 = 0;
    v1 = 0;
    v2 = 1;
    v3 = 0;
    v4 = a1;
    v8 = a1;
    v15 = 0;
    v16 = 0;
    while (true)
    {
        v9.map_err_context(std::io::read_until(a0, 10, &v5), a2);
        if (!v9)
        {
            if (!(long long)v11)
            {
                ::0x49f1b0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v1);
                ::0x49f1b0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v5);
                v9 = 0;
                break;
            }
            v12 = v5.into_iter();
            v13 = v19;
            while (true)
            {
                v20 = v12.next();
                if (!v20)
                {
                    if (!v3)
                        goto LABEL_4a1160;
                    goto LABEL_4a112f;
                }
                v21 = *(v20);
                if ((char)v21 == 10)
                {
                    v10 = std::io::stdio::stdout();
                    v55 = v10.write_all(0.index(v3, v2, v3, &g_576b60), a2);
                    if (!v55)
                    {
                        v9 = std::io::stdio::stdout();
                        v56 = v9.write_all("\ncapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/vec/mod.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/mod.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/boxed.rs", 1);
                        if (!v56)
                        {
                            v9.drain(&v1, v3);
                            core::ptr::drop_in_place<alloc::vec::drain::Drain<u8>>(&v9);
                            v15 = 0;
                            v16 = v3;
                            if (!v3)
                                goto LABEL_4a1160;
LABEL_4a112f:
                            v9 = std::io::stdio::stdout();
                            v57 = v9.write_all(v2, v3);
                            if (!v57)
                            {
                                v1.truncate(0);
                            }
                            else
                            {
                                v9 = v57.from();
                                goto LABEL_4a1185;
                            }
LABEL_4a1160:
                            v5.truncate(0);
                            break;
                        }
                        else
                        {
                            v9 = v56.from();
LABEL_4a1185:
                            goto LABEL_4a118b;
                        }
                    }
                    else
                    {
                        v9 = v55.from();
                        goto LABEL_4a1185;
                    }
                }
                v22 = v16;
                if (v22 >= a2)
                {
                    if (v15)
                        v24 = v17 + 1;
                    else
                        v24 = v3;
                    v26 = v24;
                    v10 = std::io::stdio::stdout();
                    v27 = v10.write_all(0.index(v26, v2, v3, &g_576b18), a2);
                    if (v27)
                    {
                        v9 = v27.from();
                        goto LABEL_4a1185;
                    }
                    v9 = std::io::stdio::stdout();
                    v28 = v9.write_all("\ncapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/vec/mod.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/mod.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/boxed.rs", 1);
                    if (!v28)
                    {
                        v9.drain(&v1, v26);
                        core::ptr::drop_in_place<alloc::vec::drain::Drain<u8>>(&v9);
                        v21 = *(v20);
                        v15 = 0;
                        v22 = v3;
                    }
                    else
                    {
                        v9 = v28.from();
                        goto LABEL_4a1185;
                    }
                }
                v30 = v22;
                if ((char)v21 == 8)
                {
                    v16 = v30 - 1;
                    if (v30 < 1)
                        v16 = 0;
                    v31 = 8;
                    v32 = v15;
                    v33 = v17;
                }
                else
                {
                    v34 = v21 & 4294967295;
                    if ((unsigned int)v34 == 9)
                    {
                        v16 = (v30 & 18446744073709551608) + 8;
                        v31 = 9;
                        v36 = v3;
                        v37 = v36;
                        if (v16 > a2)
                        {
                            if (v36)
                            {
                                v38 = v17 + 1;
                                if (!v15)
                                    v39 = v36;
                                else
                                    v39 = v38;
                                v10 = std::io::stdio::stdout();
                                v40 = v10.write_all(0.index(v39, v2, v3, &g_576b30), a2);
                                if (v40)
                                {
                                    v9 = v40.from();
                                    goto LABEL_4a1185;
                                }
                                v9 = std::io::stdio::stdout();
                                v41 = v9.write_all("\ncapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/vec/mod.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/mod.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/boxed.rs", 1);
                                if (!v41)
                                {
                                    v9.drain(&v1, v39);
                                    core::ptr::drop_in_place<alloc::vec::drain::Drain<u8>>(&v9);
                                    v37 = v3;
                                }
                                else
                                {
                                    v9 = v41.from();
                                    goto LABEL_4a1185;
                                }
                            }
                            else
                            {
                                v37 = 0;
                            }
                        }
                        v32 = v8;
                        v33 = v37;
                    }
                    else if ((unsigned int)v34 == 13)
                    {
                        v16 = 0;
                        v32 = v15;
                        v33 = v17;
                    }
                    else if ((char)v4 && (v21 & 255) <= 32)
                    {
                        v0 = 0x100003400;
                        if (!((*((char *)&v0 + ((v34 & 63) >> 3)) >> ((char)v34 & 63 & 7) & 1)))
                            goto LABEL_4a105e;
                        v16 = v30 + 1;
                        v32 = 1;
                        v33 = v3;
                    }
                    else
                    {
LABEL_4a105e:
                        v16 = v30 + 1;
                        v32 = v15;
                        v33 = v17;
                    }
                }
                v17 = v33;
                v15 = v32;
                v1.push(v31);
            }
            goto LABEL_4a118b;
        }
        else
        {
LABEL_4a118b:
            ::0x49f1b0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v1);
            ::0x49f1b0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v5);
            break;
        }
    }
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut dyn std::io::Read>>(a0[0], a0[1]);
    return v9;
}
