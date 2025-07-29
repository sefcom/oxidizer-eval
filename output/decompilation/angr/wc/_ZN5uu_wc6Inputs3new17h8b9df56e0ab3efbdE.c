long long uu_wc::Inputs::new(struct_0 *a0, unsigned long long a1)
{
    int v0;  // [bp-0x118], Other Possible Types: char
    char v1;  // [bp-0x108]
    int v2;  // [bp-0xf8], Other Possible Types: char
    int v3;  // [bp-0xe8]
    int v4;  // [bp-0xd8]
    char v5;  // [bp-0xc8]
    int v6;  // [bp-0xb8], Other Possible Types: char
    unsigned long v7;  // [bp-0xb0]
    int v8;  // [bp-0xa8]
    int v9;  // [bp-0x98]
    char v10;  // [bp-0x88]
    int v11;  // [bp-0x68]
    int v12;  // [bp-0x58]
    int v13;  // [bp-0x48]
    char v14;  // [bp-0x38]
    unsigned long long v16;  // rax
    unsigned long long v17[3];  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rcx

    v6.try_get_many(a1, "files-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rssrc/uu/wc/src/wc.rs", 5);
    v2.unwrap("files-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rssrc/uu/wc/src/wc.rs", 5, &v6);
    v6.try_get_one(a1, _ZN5uu_wc7options11FILES0_FROM17h8fc2e84e76cada7aE, g_59f6d8);
    v16 = _ZN5uu_wc7options11FILES0_FROM17h8fc2e84e76cada7aE.unwrap(g_59f6d8, &v6);
    if (*((long long *)&v2))
    {
        if (v16)
        {
            memcpy(&v10, &v5, 16);
            v9 = v4;
            v8 = v3;
            v6 = v2;
            v17 = v6.next();
            if (!v17)
                core::option::unwrap_failed(&g_59efb0); /* do not return */
            v0.files_disabled(v17[1], v17[2]);
            *((double *)&a0->field_8) = v0.new();
            *((char **)&a0->padding_9[7]) = &g_59efe8;
            a0->field_0 = 3;
            return a0;
        }
        else
        {
            memcpy(&v14, &v5, 16);
            v13 = v4;
            v12 = v3;
            v11 = v2;
            a0->field_8.from_iter(&v11, &g_59ef98);
            a0->field_0 = 1;
            return a0;
        }
    }
    else
    {
        if (v16)
        {
            v0.from(v16);
            v6.try_as_files0(&v0);
            v18 = (long long)v6;
            if ((char)(((0 ^ v18) & (0 ^ -(v18))) >> 63))
            {
                a0->field_18 = *((long long *)&v1);
                *((void*)&a0->field_8) = v0;
                a0->field_0 = 2;
                return a0;
            }
            v19 = (long long)v8;
            if (v18 == 9223372036854775809)
            {
                *((unsigned long *)&a0->field_8) = v7;
                *((unsigned long long *)&a0->padding_9[7]) = v19;
                a0->field_0 = 3;
            }
            else
            {
                a0->field_0 = 1;
                *((unsigned long long *)&a0->field_8) = v18;
                *((unsigned long *)&a0->padding_9[7]) = v7;
                a0->field_18 = v19;
            }
            ::0x4acb10::core::ptr::drop_in_place<uu_wc::Input>(&v0);
            return a0;
        }
        else
        {
            a0->field_0 = 0;
            return a0;
        }
    }
}
