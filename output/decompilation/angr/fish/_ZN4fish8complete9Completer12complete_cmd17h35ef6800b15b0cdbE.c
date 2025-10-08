void fish::complete::Completer::complete_cmd(struct_0 *a0, struct_2 *a1)
{
    char v0;  // [bp-0x78], Other Possible Types: unsigned int, unsigned long long
    unsigned long v1;  // [bp-0x70]
    char v2;  // [bp-0x68]
    int v3;  // [bp-0x58]
    unsigned int v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x40]
    unsigned long long v7;  // [bp-0x38]
    unsigned int v9;  // eax
    unsigned int *v10;  // r15
    unsigned long long v11;  // r12
    unsigned long v12;  // rdx
    unsigned int v13;  // eax
    unsigned long long v14[4];  // rcx
    unsigned long v15;  // rdx
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rcx
    char v18;  // al
    unsigned long long v19;  // [bp-0x78]

    v9 = a0.expand_flags();
    v10 = a1->field_8;
    v11 = a1->field_10;
    fish::builtins::fish_indent::fish_indent::{{closure}}(&v0, v10, v11);
    v5 = *((long long *)&v2);
    *((int128_t *)&v3) = *((int128_t *)&v0);
    fish::expand::expand_to_receiver(&(char)v3, a0, v9 | 8344, a0->field_38, 0);
    if ((char)v12 != 2)
    {
        if ((unsigned int)v12 == 3)
        {
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a1);
            return;
        }
    }
    else
    {
        if (a0->field_71)
            a0.complete_cmd_desc(v10, v11);
    }
    v13 = a0.expand_flags();
    fish::builtins::fish_indent::fish_indent::{{closure}}(&v0, v10, v11);
    v5 = *((long long *)&v2);
    memcpy(&(char)v3, &v0, 16);
    fish::expand::expand_to_receiver(&(char)v3, a0, v13 | 168, a0->field_38, 0);
    if (v11)
    {
        v0 = 47;
        if (v0.slice_contains(v10, v11))
        {
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a1);
            return;
        }
        if (*(v10) == 126)
        {
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a1);
            return;
        }
        v18 = *(v10) == 95;
        v14 = a0->field_38;
        v15 = v14[0];
        if (v15)
            goto LABEL_138c381;
LABEL_138c361:
        v16 = 472 + v14[1];
        v17 = &g_14c7518;
    }
    else
    {
        v14 = a0->field_38;
        v15 = v14[0];
        if (!v15)
            goto LABEL_138c361;
LABEL_138c381:
        if ((unsigned int)v15 == 1)
        {
            v16 = v14[1];
            v17 = v14[2];
        }
        else
        {
            v16 = v14[2];
            v17 = v14[3];
        }
    }
    fish::function::get_names(&(char)v3, v18, v16, v17);
    v19.into_iter(&(char)v3);
    (char)v3.collect(&v19);
    v0 = alloc::boxed::Box<T>::new();
    v1 = &g_14d5d78;
    a0.complete_strings(v10, v11, &v0, v4, v5, 0, 0);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn core::ops::function::Fn<(&widestring::utfstr::Utf32Str,)>+Output = widestring::utfstring::Utf32String>>(&v0);
    v0.collect();
    v6 = alloc::boxed::Box<T>::new();
    v7 = &g_14d5da8;
    a0.complete_strings(v10, v11, &v6, &g_14d5d78, *((long long *)&v2), 0, 0);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn core::ops::function::Fn<(&widestring::utfstr::Utf32Str,)>+Output = widestring::utfstring::Utf32String>>(&v6);
    core::ptr::drop_in_place<alloc::vec::Vec<fish::complete::Completion>>(&v0);
    core::ptr::drop_in_place<alloc::vec::Vec<fish::complete::Completion>>(&(char)v3);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a1);
    return;
}
