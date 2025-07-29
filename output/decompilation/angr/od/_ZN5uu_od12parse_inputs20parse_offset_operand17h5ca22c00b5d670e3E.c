long long uu_od::parse_inputs::parse_offset_operand(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x68]
    struct_0 *v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    unsigned long long v5;  // r12
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rax
    unsigned int v9;  // eax
    unsigned long long v10;  // r13
    unsigned long long v11;  // rax
    unsigned long long v12;  // rbx
    unsigned long v13;  // rax
    unsigned int v14;  // ebp
    unsigned long long v16;  // r13
    unsigned long long v17;  // r8
    unsigned long long v19;  // rax
    unsigned long long v20;  // rbx
    void* v21;  // rax

    v0 = 0;
    v5 = (unsigned int)core::slice::<impl [T]>::starts_with(a1, a2, ::0x4b71b0::core::char::methods::encode_utf8_raw(43, &v0), 1);
    v6 = v5.get(a2, a1, a2);
    if (!v6)
        core::str::slice_error_fail(a1, a2, v5, a2, &g_595d48); /* do not return */
    if (!(char)core::slice::<impl [T]>::starts_with(v6, v7, "0x0Xod-error-parse-failed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs -0", 2))
    {
        v8 = v5.get(a2, a1, a2);
        if (!v8)
            core::str::slice_error_fail(a1, a2, v5, a2, &g_595d60); /* do not return */
        if (!(!(char)core::slice::<impl [T]>::starts_with(v8, v7, "0Xod-error-parse-failed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs -0", 2)))
            goto LABEL_4b7a7a;
        v0 = 0;
        v9 = core::slice::<impl [T]>::ends_with(v8, v7, ::0x4b71b0::core::char::methods::encode_utf8_raw(98, &v0), 1);
        v10 = a2 - v9;
        v11 = v5.get(v10, a1, a2);
        if (v11)
        {
            v12 = (!(v9 & 255) ? 1 : 0x200);
            v0 = 0;
            v13 = (unsigned int)core::slice::<impl [T]>::ends_with(v11, v7, ::0x4b71b0::core::char::methods::encode_utf8_raw(46, &v0), 1);
            v14 = (unsigned int)v13 * 2 + 8;
            v16 = v10 - v13;
LABEL_4b7b2a:
            v10 = v16;
            v19 = v5.get(v10, a1, a2);
            if (v19)
            {
                ::0x4b6f70::core::num::<impl u64>::from_str_radix(&v2, v19, a2, v14);
                if (v2)
                {
                    uucore::mods::locale::get_message(&v0, "od-error-parse-failed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs -0", 21);
                }
                else
                {
                    v20 = *((long long *)&v3) * v12;
                    v21 = 0;
                }
                v1->field_0 = v21;
                v1->field_8 = v20;
                return v21;
            }
            v17 = &g_595d90;
        }
        else
        {
            v17 = &g_595d78;
        }
        core::str::slice_error_fail(a1, a2, v5, v10, v17); /* do not return */
    }
LABEL_4b7a7a:
    v5 |= 2;
    v14 = 16;
    v12 = 1;
    v16 = a2;
    goto LABEL_4b7b2a;
}
