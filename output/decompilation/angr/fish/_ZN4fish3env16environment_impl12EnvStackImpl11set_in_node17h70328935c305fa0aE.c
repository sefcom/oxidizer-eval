void fish::env::environment_impl::EnvStackImpl::set_in_node(struct_1 *a0, unsigned long long a1, unsigned long long a2, struct_0 *a3, unsigned int a4)
{
    unsigned int v0;  // [bp-0xac]
    unsigned long v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    char v3;  // [sp-0x98]
    int v4;  // [bp-0x90], Other Possible Types: char
    unsigned long long v5;  // [bp-0x80]
    int v6;  // [bp-0x78], Other Possible Types: char
    unsigned long long v7;  // [bp-0x68]
    int v8;  // [bp-0x58], Other Possible Types: unsigned long long
    int v9;  // [bp-0x50]
    int v10;  // [bp-0x48]
    unsigned long long v11;  // [bp-0x38]
    unsigned long v13;  // r14
    void* v14;  // r12
    unsigned int v15;  // ebp
    char v16;  // al
    unsigned int v17;  // ebp
    char v18;  // r13b
    unsigned long v19;  // rbp

    v0 = a4;
    if (a0->field_10)
        core::cell::panic_already_borrowed(&g_14d6d98); /* do not return */
    v1 = &a0->field_10;
    a0->field_10 = 18446744073709551615;
    (char)v2.to_vec(a1, a2);
    v13 = a0 + 1;
    v7 = *((long long *)&v4);
    memcpy(&v6, &(char)v2, 16);
    (char)v2.rustc_entry(v13, &v6);
    if ((char)(((0 ^ v2) & (0 ^ -(v2))) >> 63))
    {
        *((int128_t *)&v9) = *((int128_t *)&v3);
        v8 = 0x8000000000000000;
    }
    else
    {
        v11 = v5;
        v10 = v4;
        *((int128_t *)&v8) = *((int128_t *)&v2);
    }
    v14 = v8.or_default();
    v15 = v0 & &g_ffffff;
    v16 = v15 >> 8;
    v17 = v15 >> 16;
    if (v17 == 2)
        v17 = (int)v14[16];
    if (v16 == 2)
    {
        if (fish::env::environment_impl::variable_should_auto_pathvar(a1, a2))
            goto LABEL_1399dfc;
LABEL_1399df3:
    }
    else
    {
        if (!(v16 & 1))
            goto LABEL_1399df3;
LABEL_1399dfc:
        fish::env::environment_impl::colon_split(&(char)v2, a3->field_0[1], a3->field_8);
        core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(a3);
        a3->field_8 = *((long long *)&(&v3)[8]);
        *((int128_t *)&a3->field_0[0]) = *((int128_t *)&v2);
        v18 = 1;
    }
    (char)v2.setting_vals(v14, a3);
    v19 = v17;
    v8.setting_exports(&(char)v2, (unsigned int)v19 & 1);
    v6.setting_pathvar(&v8, v18);
    core::ptr::drop_in_place<fish::env::var::EnvVar>(v14);
    *((unsigned long long *)&v14[16]) = v7;
    *(v14) = v6;
    core::ptr::drop_in_place<fish::env::var::EnvVar>(&v8);
    core::ptr::drop_in_place<fish::env::var::EnvVar>(&(char)v2);
    if (((char)v19 & 1) || ((char)v0 & 1))
        v13.changed_exported();
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v1);
    return;
}
