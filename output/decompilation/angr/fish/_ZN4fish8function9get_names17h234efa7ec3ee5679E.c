long long fish::function::get_names(unsigned long a0, unsigned int a1, unsigned long a2, struct_0 *a3)
{
    char v0;  // [bp-0x109]
    int v1;  // [bp-0x108], Other Possible Types: unsigned long long
    int v2;  // [bp-0x108]
    unsigned long v3;  // [bp-0x100]
    int v4;  // [bp-0xf8], Other Possible Types: unsigned long
    unsigned long long v5;  // [bp-0xe8]
    unsigned long long v6;  // [bp-0xd0]
    char v7;  // [bp-0xc8]
    unsigned int v8;  // [bp-0xc8]
    int v9;  // [bp-0xb8]
    char v10;  // [bp-0xa8]
    char v11;  // [bp-0x88]
    unsigned long long v12;  // [bp-0x78]
    unsigned long long v13;  // [bp-0x68]
    int v14;  // [bp-0x60], Other Possible Types: char
    int v15;  // [bp-0x50]
    char v16;  // [bp-0x40]
    unsigned long v18;  // r15
    char v20;  // dl
    unsigned long long v21[3];  // rax
    unsigned long long v22[3];  // rbp
    unsigned long long v23;  // rbp
    unsigned long long v24;  // rax
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rax
    unsigned long long v27;  // rbx
    unsigned long long v28;  // rbp
    unsigned long long v29;  // rdx
    unsigned long long v30;  // rax

    v18 = a1;
    v14.default();
    v7.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    v0 = v20 & 1;
    v6 = v7.unwrap(&g_14d8f40);
    fish::function::autoload_names(&v14, a2, a3->field_38, v18);
    v7.iter(v6 + 8);
    v5 = *((long long *)&v10);
    v4 = v9;
    *((int128_t *)&v1) = *((int128_t *)&v7);
    v21 = (char)v1.next();
    if (v21)
    {
        v22 = v21;
        if ((char)v18)
        {
            do
            {
                fish::builtins::fish_indent::fish_indent::{{closure}}(&v7, v22[1], v22[2]);
                v12 = (long long)v9;
                memcpy(&v11, &v7, 16);
                v14.insert(&v11);
                v22 = (char)v1.next();
            } while (v22);
        }
        else
        {
            do
            {
                if (v22[2] && (int)v22[1].char_at(v22[2], 0) != 95)
                {
                    fish::builtins::fish_indent::fish_indent::{{closure}}(&v7, v22[1], v22[2]);
                    v12 = (long long)v9;
                    memcpy(&v11, &v7, 16);
                    v14.insert(&v11);
                }
                v22 = (char)v1.next();
            } while (v22);
        }
    }
    if ((char)v18)
    {
        v23 = 8;
        do
        {
            v1 = 0x8000000000000000;
            v3 = *((long long *)(v23 - -21812680));
            v4 = *((long long *)&(&g_14cd5d0)[v23]);
            v24 = "functions/assertion failed: !success.preserve_failure_exit_statussrc/builtins/shared.rs".strip_prefix_of(10, *((long long *)(v23 - -21812680)), *((long long *)&(&g_14cd5d0)[v23]));
            if (v24)
            {
                v26 = ".fish/".strip_suffix_of(5, v24, v25);
                if (v26)
                {
                    v7.from_str(v26, a2);
                    v14.insert(&v7);
                }
            }
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v1);
            v23 += 16;
        } while (v23 != 21400);
    }
    else
    {
        v27 = 8;
        do
        {
            v1 = 0x8000000000000000;
            v3 = *((long long *)(v27 - -21812680));
            v4 = *((long long *)&(&g_14cd5d0)[v27]);
            v28 = "functions/assertion failed: !success.preserve_failure_exit_statussrc/builtins/shared.rs".strip_prefix_of(10, *((long long *)(v27 - -21812680)), *((long long *)&(&g_14cd5d0)[v27]));
            if (!!v29 && !!v28)
            {
                v8 = 0;
                if (!(char)core::slice::<impl [T]>::starts_with(v28, v29, ::0x128b500::core::char::methods::encode_utf8_raw(95, &v8), v29))
                {
                    v30 = ".fish/".strip_suffix_of(5, v28, v29);
                    if (v30)
                    {
                        v8.from_str(v30, a2);
                        v14.insert(&v8);
                    }
                }
            }
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v1);
            v27 += 16;
        } while (v27 != 21400);
    }
    memcpy(&v5, &v16, 16);
    v4 = v15;
    v2 = v14;
    v7.into_iter(&(unsigned long long)v2);
    v13.collect(&v7);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v6, v0);
    return a0;
}
