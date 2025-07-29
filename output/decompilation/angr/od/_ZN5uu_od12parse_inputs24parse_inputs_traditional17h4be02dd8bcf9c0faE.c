long long uu_od::parse_inputs::parse_inputs_traditional(struct_1 *a0, unsigned long long a1[8], unsigned long a2)
{
    int v0;  // [bp-0x188]
    unsigned long long v1[8];  // [bp-0x180]
    unsigned long long v2;  // [bp-0x178]
    struct_0 *v3;  // [bp-0x168], Other Possible Types: int, char
    char v4;  // [bp-0x158]
    char v5;  // [bp-0x138], Other Possible Types: unsigned long
    unsigned long long v6[8];  // [bp-0x130], Other Possible Types: unsigned long
    char v7;  // [bp-0x128], Other Possible Types: unsigned long
    unsigned long long v8[8];  // [bp-0x120]
    char v9;  // [bp-0x118], Other Possible Types: unsigned long
    unsigned long long v10[8];  // [bp-0x110]
    char v11;  // [bp-0x108], Other Possible Types: unsigned long
    unsigned long v12;  // [bp-0x100]
    char v13;  // [bp-0xf8]
    unsigned long long v14;  // [bp-0xe8]
    char v15;  // [bp-0xe0]
    unsigned long long v16;  // [bp-0xd0]
    char v17;  // [bp-0xc8]
    unsigned long long v18;  // [bp-0xb8]
    char v19;  // [bp-0xb0]
    unsigned long long v20;  // [bp-0xa0]
    char v21;  // [bp-0x98]
    unsigned long long v22;  // [bp-0x88]
    int v23;  // [bp-0x80]
    unsigned long long v24;  // [bp-0x70]
    char v25;  // [bp-0x68]
    unsigned long long v26;  // [bp-0x58]
    int v27;  // [bp-0x50]
    unsigned long long v28;  // [bp-0x40]
    struct_0 *v30;  // rax
    struct_0 *v31;  // r14
    unsigned long long v32;  // rax
    char *v33;  // r14
    char *v34;  // rsi
    unsigned long long v35;  // rax
    unsigned long long v36;  // rsi
    unsigned long long v37;  // rdx
    unsigned long long v38;  // rax
    unsigned long long v39;  // rax
    unsigned long long v40[8];  // 4096
    unsigned long long v41;  // rax

    switch (a2)
    {
    case 0:
        v30 = ::0x4b72b0::alloc::alloc::Global::alloc_impl();
        if (!v30)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v31 = v30;
        v3.to_vec("-traditionaladdress-radixread-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1);
        v2 = *((long long *)&v4);
        v0 = v3;
        v31->field_10 = v2;
        *((void*)&v31->field_0) = v3;
        a0->field_0 = 1;
        *((struct_0 **)&a0->padding_8[0]) = v31;
        a0->field_10 = 1;
        a0->field_20 = 2;
        return v2;
    case 1:
        uu_od::parse_inputs::parse_offset_operand(&(char)v0, a1[0], a1[1]);
        if ((long long)v0)
        {
            (char)v3.from_iter(a1, &a1[2], &g_595d30);
            v39 = 2;
            v40 = a1;
        }
        else
        {
            (char)v3.to_vec("-traditionaladdress-radixread-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1);
            v39 = 0;
            v40[0] = v1;
        }
        a0->field_10 = *((long long *)&v4);
        a0->field_0 = v3;
        a0->field_18 = &v40[0];
        a0->field_20 = v39;
        return v39;
    case 2:
        uu_od::parse_inputs::parse_offset_operand(&v7, a1[0], a1[1]);
        uu_od::parse_inputs::parse_offset_operand(&v5, a1[2], a1[3]);
        if (!v7 && !v5)
        {
            v32 = a0.to_vec("-traditionaladdress-radixread-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1);
            a0->field_18 = &v8[0];
            a0->field_20 = 1;
            a0->field_28 = v6;
            return v32;
        }
        if (!v5)
        {
            v35 = a0.to_vec(a1[0], a1[1]);
            a0->field_18 = &v6[0];
            a0->field_20 = 0;
            return v35;
        }
        (char)v0.to_vec("offsetlabelod-error-invalid-offsetod-error-invalid-labelod-error-too-many-inputs0x0Xod-error-parse-failed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs -0", 6);
        v3.to_vec(a1[2], a1[3]);
        v16 = *((long long *)&v4);
        memcpy(&v15, &v3, 16);
        memcpy(&v13, &v0, 16);
        v14 = v2;
        v33 = &v3;
        v34 = &v13;
        goto LABEL_4b7808;
        goto LABEL_4b7808;
    case 3:
        uu_od::parse_inputs::parse_offset_operand(&v9, a1[2], a1[3]);
        uu_od::parse_inputs::parse_offset_operand(&v11, a1[4], a1[5]);
        if (v9)
        {
            (char)v0.to_vec("offsetlabelod-error-invalid-offsetod-error-invalid-labelod-error-too-many-inputs0x0Xod-error-parse-failed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs -0", 6);
            v3.to_vec(a1[2], a1[3]);
            v20 = *((long long *)&v4);
            memcpy(&v19, &v3, 16);
            memcpy(&v17, &v0, 16);
            v18 = v2;
            v33 = &v3;
            v34 = &v17;
LABEL_4b7808:
            v33.from_iter(v34);
            v36 = "od-error-invalid-offsetod-error-invalid-labelod-error-too-many-inputs0x0Xod-error-parse-failed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs -0";
            v37 = 23;
            break;
        }
        else if (v11)
        {
            (char)v0.to_vec("labelod-error-invalid-offsetod-error-invalid-labelod-error-too-many-inputs0x0Xod-error-parse-failed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs -0", 5);
            v3.to_vec(a1[4], a1[5]);
            v24 = *((long long *)&v4);
            v23 = v3;
            memcpy(&v21, &v0, 16);
            v22 = v2;
            v33 = &v3;
            v3.from_iter(&v21);
            v36 = "od-error-invalid-labelod-error-too-many-inputs0x0Xod-error-parse-failed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs -0";
            v37 = 22;
            break;
        }
        else
        {
            v38 = a0.to_vec(a1[0], a1[1]);
            a0->field_18 = &v10[0];
            a0->field_20 = 1;
            a0->field_28 = v12;
            return v38;
        }
    default:
        (char)v0.to_vec("inputoffsetlabelod-error-invalid-offsetod-error-invalid-labelod-error-too-many-inputs0x0Xod-error-parse-failed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs -0", 5);
        v3.to_vec(a1[6], a1[7]);
        v28 = *((long long *)&v4);
        v27 = v3;
        memcpy(&v25, &v0, 16);
        v26 = v2;
        v33 = &v3;
        v3.from_iter(&v25);
        v36 = "od-error-too-many-inputs0x0Xod-error-parse-failed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs -0";
        v37 = 24;
        break;
    }
    v41 = uucore::mods::locale::get_message_with_args(a0, v36, v37, v33);
    a0->field_20 = 3;
    return v41;
}
