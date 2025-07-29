long long uu_nl::helper::parse_options(struct_3 *a0, struct_2 *a1, unsigned long long a2)
{
    int v0;  // [bp-0x158]
    unsigned long long v1;  // [bp-0x158]
    unsigned long long v2;  // [bp-0x150]
    char *v3;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x140]
    void* v5;  // [bp-0x138]
    char *v6;  // [bp-0x128]
    unsigned long long v7;  // [bp-0x120]
    unsigned long long v8;  // [bp-0x118]
    void* v9;  // [bp-0x108]
    unsigned long long v10;  // [bp-0x100]
    void* v11;  // [bp-0xf8]
    struct_0 *v12;  // [bp-0xf0]
    unsigned long long v13;  // [bp-0xe8]
    unsigned long long v14;  // [bp-0xe0]
    unsigned long long v15;  // [bp-0xd8]
    unsigned long long v16;  // [bp-0xd0]
    unsigned long long v17;  // [bp-0xc8]
    unsigned long long v18;  // [bp-0xc0]
    unsigned long long v19;  // [bp-0xb8]
    unsigned long long v20;  // [bp-0xb0]
    unsigned long long v21;  // [bp-0xa8]
    int v22;  // [bp-0xa0], Other Possible Types: char
    unsigned long long v23;  // [bp-0x90]
    char v24;  // [bp-0x88]
    unsigned long long v25;  // [bp-0x78]
    char v26;  // [bp-0x70]
    unsigned long long v27;  // [bp-0x60]
    char v28;  // [bp-0x58]
    unsigned long long v29;  // [bp-0x48]
    char v30;  // [bp-0x40]
    unsigned long long v31;  // [bp-0x30]
    struct_0 *v33;  // rax
    unsigned long v34;  // r12
    unsigned long long v35;  // rax
    unsigned long long v36;  // rax
    char v37;  // al
    unsigned long long v38[3];  // rax
    unsigned long long v39;  // rax
    unsigned long long v40[3];  // rax
    unsigned long long v41;  // rax
    unsigned long long v42[3];  // rax
    unsigned long long v43;  // rax
    unsigned long long *v44;  // rax
    unsigned long long *v45;  // rax
    unsigned long long *v46;  // rax
    unsigned long long *v47;  // rax

    v9 = 0;
    v10 = 8;
    v11 = 0;
    a1->field_80 = a2.get_flag("no-renumbersection-delimiternumber-formatsrc/uu/nl/src/helper.rs", 11);
    (char)v1.try_get_one(a2, "section-delimiternumber-formatsrc/uu/nl/src/helper.rs", 17);
    v33 = "section-delimiternumber-formatsrc/uu/nl/src/helper.rs".unwrap(17, &(char)v1);
    if (v33)
    {
        v12 = v33;
        if (v33->field_10 == 1)
        {
            v6 = &v12;
            v7 = <&T as core::fmt::Display>::fmt;
            v1 = &g_724970;
            v2 = 2;
            v5 = 0;
            v3 = &v6;
            v4 = 1;
            v22.map_or_else(&v1);
            v0 = v22;
            v3 = v23;
        }
        else
        {
            (char)v1.clone(v33);
        }
        v34 = &a1->field_30;
        ::0x5a28d0::core::ptr::drop_in_place<alloc::string::String>(v34);
        *((unsigned long long *)(v34 + 16)) = v3;
        *((int128_t *)v34) = *((int128_t *)&v1);
    }
    (char)v1.try_get_one(a2, "number-separator", 16);
    v35 = "number-separator".unwrap(16, &(char)v1);
    if (v35)
        a1->padding_48.clone_from(v35);
    (char)v1.try_get_one(a2, "number-formatsrc/uu/nl/src/helper.rs", 13);
    v36 = "number-formatsrc/uu/nl/src/helper.rs".unwrap(13, &(char)v1);
    if (v36)
        v36.call_once();
    else
        v37 = 1;
    a1->field_81 = v37;
    (char)v1.try_get_one(a2, "header-numbering", 16);
    v38 = "header-numbering".unwrap(16, &(char)v1);
    if (v38)
    {
        v39 = v38[1].call_once(v38[2]);
        if (v39)
        {
            (char)v1.call_once(v39, a2);
            if (v1 != 9223372036854775809)
            {
                if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
                {
                    ::0x5a28e0::core::ptr::drop_in_place<uu_nl::NumberingStyle>(a1->field_0, a1->field_8);
                    a1->field_0 = v2;
                    a1->field_8 = v3;
                }
                else
                {
                    v13 = v1;
                    v14 = v2;
                    v15 = v3;
                    v9.push(&v13, &g_724990);
                }
            }
        }
    }
    (char)v1.try_get_one(a2, "body-numberingnumber-widthnl-error-invalid-line-widthnl-error-invalid-blank-linesline-incrementstarting-line-numbercapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs/root/", 14);
    v40 = "body-numberingnumber-widthnl-error-invalid-line-widthnl-error-invalid-blank-linesline-incrementstarting-line-numbercapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs/root/".unwrap(14, &(char)v1);
    if (v40)
    {
        v41 = v40[1].call_once(v40[2]);
        if (v41)
        {
            (char)v1.call_once(v41, a2);
            if (v1 != 9223372036854775809)
            {
                if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
                {
                    ::0x5a28e0::core::ptr::drop_in_place<uu_nl::NumberingStyle>(a1->field_10, a1->field_18);
                    a1->field_10 = v2;
                    a1->field_18 = v3;
                }
                else
                {
                    v16 = v1;
                    v17 = v2;
                    v18 = v3;
                    v9.push(&v16, &g_7249a8);
                }
            }
        }
    }
    (char)v1.try_get_one(a2, "footer-numbering", 16);
    v42 = "footer-numbering".unwrap(16, &(char)v1);
    if (v42)
    {
        v43 = v42[1].call_once(v42[2]);
        if (v43)
        {
            (char)v1.call_once(v43, a2);
            if (v1 != 9223372036854775809)
            {
                if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
                {
                    ::0x5a28e0::core::ptr::drop_in_place<uu_nl::NumberingStyle>(a1->field_20, a1->field_28);
                    a1->field_20 = v2;
                    a1->field_28 = v3;
                }
                else
                {
                    v19 = v1;
                    v20 = v2;
                    v21 = v3;
                    v9.push(&v19, &g_7249c0);
                }
            }
        }
    }
    (char)v1.try_get_one(a2, "number-widthnl-error-invalid-line-widthnl-error-invalid-blank-linesline-incrementstarting-line-numbercapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs/root/.rustup/toolch", 12);
    v44 = "number-widthnl-error-invalid-line-widthnl-error-invalid-blank-linesline-incrementstarting-line-numbercapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs/root/.rustup/toolch".unwrap(12, &(char)v1);
    if (v44)
    {
        if (*(v44))
        {
            a1->field_78 = *(v44);
        }
        else
        {
            (char)v1.to_vec("value0no-renumbersection-delimiternumber-formatsrc/uu/nl/src/helper.rs", 5);
            v8 = v3;
            memcpy(&v6, &(char)v1, 16);
            (char)v1.to_vec("0no-renumbersection-delimiternumber-formatsrc/uu/nl/src/helper.rs", 1);
            v27 = v3;
            memcpy(&v26, &v1, 16);
            memcpy(&v24, &v6, 16);
            v25 = v8;
            (char)v1.from_iter(&v24);
            uucore::mods::locale::get_message_with_args(&v6, "nl-error-invalid-line-widthnl-error-invalid-blank-linesline-incrementstarting-line-numbercapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs/root/.rustup/toolchains/nightly", 27, &(char)v1);
            v9.push(&v6, &g_7249d8);
        }
    }
    (char)v1.try_get_one(a2, "join-blank-lines", 16);
    v45 = "join-blank-lines".unwrap(16, &(char)v1);
    if (v45)
    {
        if (*(v45))
        {
            a1->field_70 = *(v45);
        }
        else
        {
            (char)v1.to_vec("value0no-renumbersection-delimiternumber-formatsrc/uu/nl/src/helper.rs", 5);
            v8 = v3;
            memcpy(&v6, &(char)v1, 16);
            (char)v1.to_vec("0no-renumbersection-delimiternumber-formatsrc/uu/nl/src/helper.rs", 1);
            v31 = v3;
            memcpy(&v30, &v1, 16);
            memcpy(&v28, &v6, 16);
            v29 = v8;
            (char)v1.from_iter(&v28);
            uucore::mods::locale::get_message_with_args(&v6, "nl-error-invalid-blank-linesline-incrementstarting-line-numbercapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-", 28, &(char)v1);
            v9.push(&v6, &g_7249f0);
        }
    }
    (char)v1.try_get_one(a2, "line-incrementstarting-line-numbercapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/ru", 14);
    v46 = "line-incrementstarting-line-numbercapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/ru".unwrap(14, &(char)v1);
    if (v46)
        a1->field_68 = *(v46);
    (char)v1.try_get_one(a2, "starting-line-numbercapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/builders.rs", 20);
    v47 = "starting-line-numbercapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.1/src/builders.rs".unwrap(20, &(char)v1);
    if (v47)
        a1->field_60 = *(v47);
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v9);
    return a0;
}
