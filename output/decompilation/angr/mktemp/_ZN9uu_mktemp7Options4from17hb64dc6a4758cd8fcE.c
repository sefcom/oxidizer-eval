long long uu_mktemp::Options::from(struct_0 *a0, unsigned long long a1)
{
    int v0;  // [bp-0xf8], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [bp-0xf8]
    int v2;  // [bp-0xf0], Other Possible Types: char
    unsigned long long v3;  // [bp-0xe8]
    int v4;  // [bp-0xc8], Other Possible Types: unsigned long long
    int v5;  // [bp-0xc8]
    unsigned long long v6;  // [bp-0xb8]
    int v7;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v8;  // [bp-0xa8]
    unsigned long long v9;  // [bp-0xa0]
    unsigned long long v10;  // [bp-0x98]
    int v11;  // [bp-0x88]
    unsigned long long v12;  // [bp-0x88]
    char v13;  // [bp-0x80]
    unsigned long long v14;  // [bp-0x78]
    int v15;  // [bp-0x68], Other Possible Types: char
    unsigned long long v16;  // [bp-0x58]
    char v17;  // [bp-0x48]
    unsigned long long v18;  // [bp-0x48]
    char v19;  // [bp-0x40]
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    char v23;  // r13b
    char v24;  // al
    char v25;  // al
    char v26;  // al
    unsigned long long v27;  // rax
    char v28;  // al

    v0.try_get_one(a1, "tmpdirpt/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 6);
    v21 = "tmpdirpt/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs".unwrap(6, &v0).or_else(a1);
    if (v21)
        v17.clone(v21);
    else
        v18 = 0x8000000000000000;
    v0.try_get_one(a1, "template", 8);
    v22 = "template".unwrap(8, &v0);
    if (v22)
    {
        std::env::var(&v0, "TMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 6);
        if ((v0 & 1))
        {
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
LABEL_4a8506:
            if (v18 != 0x8000000000000000)
            {
                memcpy(&v15, &v19, 16);
            }
            else if (!(char)a1.get_flag("t/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 1))
            {
                v18 = 0x8000000000000000;
                v23 = 1;
                if (!(!(char)a1.contains_id("tmpdirpt/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 6)))
                    goto LABEL_4a8552;
            }
            else
            {
LABEL_4a8552:
                std::env::temp_dir(&v0);
LABEL_4a855f:
                memcpy(&v15, &v2, 16);
LABEL_4a856c:
                v23 = 1;
            }
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
            if (!(char)a1.get_flag("t/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 1))
                goto LABEL_4a8506;
            std::env::var_os(&v0, "TMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 6);
            v18 = v0;
            if (v18 == 0x8000000000000000)
                goto LABEL_4a856c;
            goto LABEL_4a855f;
        }
        v12 = v18;
        memcpy(&v13, &v15, 16);
        v7.clone(v22);
        v6 = v14;
        v4 = v11;
        memcpy(&v0, &v7, 16);
        v3 = v10;
    }
    else
    {
        if (v18 == 0x8000000000000000)
        {
            v0.call_once();
        }
        else
        {
            *((int128_t *)&v2) = *((int128_t *)&v19);
            v1 = v18;
        }
        v10 = v3;
        v8 = v1;
        v9 = (long long)v2;
        (char)v4.to_vec("tmp.XXXXXXXXXXdirectorydry-runquietsuffixtmpdirpt/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 14);
        v3 = v6;
        v0 = v4;
        memcpy(&(char)v4, &v8, 16);
        v6 = v10;
    }
    v16 = v6;
    v15 = v4;
    v14 = v3;
    memcpy(&v12, &v0, 16);
    v24 = a1.get_flag("directorydry-runquietsuffixtmpdirpt/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 9);
    v25 = a1.get_flag("dry-runquietsuffixtmpdirpt/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 7);
    v26 = a1.get_flag("quietsuffixtmpdirpt/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 5);
    v10 = v16;
    v7 = v15;
    v0.try_get_one(a1, "suffixtmpdirpt/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 6);
    v27 = "suffixtmpdirpt/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs".unwrap(6, &v0);
    if (v27)
    {
        v0.call_once(v27);
        v6 = v3;
        memcpy(&v4, &v0, 16);
    }
    else
    {
        v4 = 0x8000000000000000;
    }
    v28 = a1.get_flag("t/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 1);
    a0->field_10 = v14;
    *((void*)&a0->field_0) = v11;
    *((char *)&a0->field_30 + 8) = v24;
    *((char *)&a0->field_30 + 9) = v25;
    *((char *)&a0->field_30 + 10) = v26;
    *((int128_t *)&(&a0->field_10)[1]) = (int128_t)v7;
    *((unsigned long long *)((char *)&a0->field_18 + 8)) = v10;
    *((void*)&a0->field_28) = v5;
    *((unsigned long long *)&a0->field_30) = v6;
    *((char *)&a0->field_30 + 11) = v28;
    if (!v23)
        return a0;
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v17);
    return a0;
}
