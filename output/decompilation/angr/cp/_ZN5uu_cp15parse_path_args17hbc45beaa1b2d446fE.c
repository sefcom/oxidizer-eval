long long uu_cp::parse_path_args(struct_0 *a0, struct_2 *a1, struct_3 *a2)
{
    struct_2 *v0;  // [bp-0x160]
    int v1;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x150]
    unsigned long long v3;  // [bp-0x148]
    int v4;  // [bp-0x138], Other Possible Types: char, unsigned long
    int v5;  // [bp-0x130], Other Possible Types: char
    unsigned long long v6;  // [bp-0x128]
    struct_1 *v7;  // [bp-0x118], Other Possible Types: int, char
    unsigned long v8;  // [bp-0x108], Other Possible Types: unsigned long long
    char v9;  // [bp-0x100], Other Possible Types: unsigned long
    unsigned long v10;  // [bp-0xf8]
    unsigned long long v11;  // [bp-0xf0]
    void* v12;  // [bp-0xd0], Other Possible Types: unsigned long long
    int v13;  // [bp-0xc8]
    unsigned long long v14;  // [bp-0xc0]
    char v15;  // [bp-0xb8]
    struct_0 *v16;  // [bp-0xb0]
    int v17;  // [bp-0xa8]
    char v18;  // [bp-0x98]
    unsigned long long v19;  // [bp-0x88]
    int v20;  // [bp-0x80]
    unsigned long long v21;  // [bp-0x70]
    char v22;  // [bp-0x68]
    unsigned long long v23;  // [bp-0x58]
    int v24;  // [bp-0x50]
    unsigned long long v25;  // [bp-0x40]
    unsigned long long v27;  // rax
    unsigned long v28;  // rax
    struct_1 *v29;  // rcx
    unsigned long long v30;  // rdx
    struct_0 *v31;  // 4096
    struct_2 *v32;  // 4096
    unsigned long long v33;  // rdx
    struct_4 *v34;  // rax
    struct_4 *v35;  // r15

    v27 = a1->field_10;
    if (v27 == 1)
    {
        if (!(a2->field_18 == 0x8000000000000000))
            goto LABEL_4db890;
        v7.to_vec("sourceoperandcp-error-missing-file-operandcp-error-missing-destination-operandcp-error-extra-operand: file_type: warning: cannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux", 6);
        v3 = v8;
        v1 = v7;
        if (!a1->field_10)
            core::panicking::panic_bounds_check(0, 0, &g_5fb6d8); /* do not return */
        *((int128_t *)&v17) = *((int128_t *)&a1->padding_8[8]);
        v4.spec_to_string(&v17);
        v12 = 0;
        *((int128_t *)&v13) = (int128_t)v5;
        v15 = 1;
        v7.spec_to_string(&v12);
        v19 = v3;
        memcpy(&v18, &v1, 16);
        v20 = v7;
        v21 = v8;
        v7.from_iter(&v18);
        uucore::mods::locale::get_message_with_args(&(char)v1, "cp-error-missing-destination-operandcp-error-extra-operand: file_type: warning: cannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/", 36, &v7);
        *((unsigned long long *)((char *)&a0->field_8 + 8)) = v3;
        *((int128_t *)&(&a0->field_0)[1]) = (int128_t)v1;
        a0->field_0 = 9223372036854775811;
        ::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&v4);
    }
    else if (!v27)
    {
        uucore::mods::locale::get_message(&v7, "cp-error-missing-file-operandcp-error-missing-destination-operandcp-error-extra-operand: file_type: warning: cannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rust", 29);
        *((unsigned long *)((char *)&a0->field_8 + 8)) = v8;
        *((void*)&(&a0->field_0)[1]) = v7;
        a0->field_0 = 9223372036854775811;
    }
    else if ((a2->field_18 == 0x8000000000000000 & a2->field_5a))
    {
        if (v27 <= 2)
            goto LABEL_4db84f;
        v7.to_vec("operandcp-error-missing-file-operandcp-error-missing-destination-operandcp-error-extra-operand: file_type: warning: cannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/l", 7);
        v3 = v8;
        v1 = v7;
        if (a1->field_10 < 3)
            core::panicking::panic_bounds_check(2, a1->field_10, &g_5fb708); /* do not return */
        *((int128_t *)&v17) = *((int128_t *)&a1->padding_8[56]);
        v4.spec_to_string(&v17);
        v12 = 0;
        *((int128_t *)&v13) = *((int128_t *)&v5);
        v15 = 1;
        v7.spec_to_string(&v12);
        v23 = v3;
        memcpy(&v22, &v1, 16);
        v24 = v7;
        v25 = v8;
        v7.from_iter(&v22);
        uucore::mods::locale::get_message_with_args(&(char)v1, "cp-error-extra-operand: file_type: warning: cannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/local.rs", 22, &v7);
        *((unsigned long long *)((char *)&a0->field_8 + 8)) = v3;
        *((int128_t *)&(&a0->field_0)[1]) = (int128_t)v1;
        a0->field_0 = 9223372036854775811;
        ::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&v4);
    }
    else
    {
        if (a2->field_18 == 0x8000000000000000)
        {
LABEL_4db84f:
            v28 = v27 - 1;
            a1->field_10 = v28;
            v29 = a1->padding_8;
            v30 = v28 * 3;
            *((int128_t *)&v7) = *((int128_t *)&(&v29->padding_0)[1 + v30]);
            if (*((long long *)&(&v29->padding_0)[v30]) == 0x8000000000000000)
                core::option::unwrap_failed(&g_5fb6f0); /* do not return */
            v4 = *((long long *)&(&v29->padding_0)[v30]);
            v5 = v7;
            v31 = a0;
            v32 = a1;
            if (!(!a2->field_5d))
                goto LABEL_4db8c4;
        }
        else
        {
LABEL_4db890:
            (char)v7.clone(&a2->field_18);
            v6 = v8;
            v4 = v7;
            v31 = a0;
            v32 = a1;
            if (a2->field_5d)
            {
LABEL_4db8c4:
                v1 = a1.into_iter();
                v2 = v33;
                v34 = v1.next();
                if (v34)
                {
                    v35 = v34;
                    do
                    {
                        v7.components(*((long long *)&v35->padding_1[7]), v35->field_10);
                        std::sys::pal::unix::os::split_paths::bytes_to_path(&v12, v7.as_path(), a2);
                        ::0x4d38d0::core::ptr::drop_in_place<std::path::PathBuf>(v35);
                        v35->field_10 = v14;
                        *((int128_t *)&v35->field_0) = *((int128_t *)&v12);
                        v35 = v1.next();
                    } while (v35);
                }
                v31 = v16;
                v32 = v0;
            }
        }
        v8 = v32->field_10;
        *((int128_t *)&v7) = *((int128_t *)&v32->field_0);
        v11 = v6;
        memcpy(&v9, &v4, 16);
        *((int128_t *)&(&v31->field_0)[1]) = *((int128_t *)&v32->field_0);
        *((unsigned long *)((char *)&v31->field_8 + 8)) = v8;
        v31->field_18 = v9;
        v31->field_20 = v10;
        v31->field_28 = v11;
        v31->field_0 = 9223372036854775820;
        return v31;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(a1);
    return a0;
}
