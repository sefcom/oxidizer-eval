long long uu_paste::parse_delimiters(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0xf4]
    unsigned long long v1;  // [bp-0xf0]
    unsigned long long v2;  // [bp-0xe8]
    void* v3;  // [bp-0xe0]
    int v4;  // [bp-0xd8], Other Possible Types: char
    void* v5;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned int v6;  // [bp-0xc0]
    unsigned long long v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0xa0]
    int v9;  // [bp-0x98]
    unsigned long long v10;  // [bp-0x88]
    char v11;  // [bp-0x80]
    unsigned long long v12;  // [bp-0x70]
    int v13;  // [bp-0x68]
    unsigned long long v14;  // [bp-0x58]
    int v15;  // [bp-0x50]
    unsigned long long v16;  // [bp-0x40]
    unsigned long v18;  // rdx
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rdx
    char v21;  // al
    unsigned long long v23;  // rax

    v0 = 0;
    v1 = a2.with_capacity_in(8, 16, &g_570100);
    v2 = v18;
    v3 = 0;
    v7 = a1;
    v8 = a1 + a2;
    if ((int)core::str::validations::next_code_point(&v7))
    {
        do
        {
            v20 = v19;
            if ((unsigned int)v20 != 92)
            {
LABEL_49a7b0:
                uu_paste::parse_delimiters::{{closure}}(&v0, &v1, v20);
            }
            else
            {
                if (!(int)core::str::validations::next_code_point(&v7))
                {
                    v4.to_vec("delimiterspaste-help-delimiter\t-zero-terminatedpaste-help-zero-terminatedsrc/uu/paste/src/paste.rs", 10);
                    v10 = v5;
                    v9 = v4;
                    v4.to_vec(a1, a2);
                    v16 = v5;
                    v15 = v4;
                    v13 = v9;
                    v14 = v10;
                    v4.from_iter(&v13);
                    uucore::mods::locale::get_message_with_args(&v11, "paste-error-delimiter-unescaped-backslasherrorpaste-error-stdin-borrowcannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/local.rsreentrant init/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/cell/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/exact_size.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs", 41, &v4);
                    v6 = 1;
                    memcpy(&v4, &v11, 16);
                    v5 = v12;
                    *((double *)&a0->field_8) = v4.new();
                    a0->field_10 = &g_570150;
                    a0->field_0 = 1;
                    return ::0x498ef0::core::ptr::drop_in_place<alloc::vec::Vec<alloc::boxed::Box<[u8]>>>(&v1);
                }
                if ((unsigned int)v18 <= 109)
                {
                    if ((unsigned int)v18 == 48)
                    {
                        v1.push(alloc::boxed::Box<T>::new(), 0, &g_5701b8);
                        continue;
                    }
                    v21 = 92;
                    v20 = v18;
                    if ((unsigned int)v20 == 92)
                        goto LABEL_49a81b;
                    goto LABEL_49a7b0;
                }
                if ((unsigned int)v18 != 110)
                {
                    v20 = v18;
                    if ((unsigned int)v20 == 116)
                    {
                        v21 = 9;
                        goto LABEL_49a81b;
                    }
                }
                else
                {
                    v21 = 10;
LABEL_49a81b:
                    uu_paste::parse_delimiters::add_one_byte_single_char_delimiter(&v1, v21);
                }
            }
        } while ((int)core::str::validations::next_code_point(&v7));
    }
    v5 = 0;
    memcpy(&v4, &v1, 16);
    v23 = v4.into_boxed_slice(&g_570118);
    a0->field_8 = v23;
    a0->field_10 = v18;
    a0->field_0 = 0;
    return v23;
}
