char fish::function::copy(unsigned long long a0, unsigned long long a1, struct_0 *a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x16c]
    unsigned long long v1;  // [bp-0x168]
    unsigned long long v2;  // [bp-0x160]
    unsigned long long v3;  // [bp-0x158]
    int v4;  // [bp-0x150], Other Possible Types: char
    int v5;  // [bp-0x140]
    int v6;  // [bp-0x130]
    int v7;  // [bp-0x120]
    int v8;  // [bp-0x110]
    char v9;  // [bp-0x100]
    char v10;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned int v11;  // [bp-0xf0]
    char v12;  // [bp-0xeb]
    char v13;  // [bp-0xea]
    unsigned long long v14;  // [bp-0xe8]
    int v15;  // [bp-0xe8]
    char v16;  // [bp-0xe0]
    char v17;  // [bp-0xd8]
    unsigned long long v18;  // [bp-0xc8]
    char v19;  // [bp-0xc0], Other Possible Types: unsigned long long
    char v20;  // [bp-0xb8], Other Possible Types: unsigned long long
    int v21;  // [bp-0xb0], Other Possible Types: char
    int v22;  // [bp-0xa0], Other Possible Types: char
    int v23;  // [bp-0x90]
    int v24;  // [bp-0x80]
    int v25;  // [bp-0x70]
    char v26;  // [bp-0x60]
    unsigned long long v27;  // [bp-0x50]
    int v28;  // [bp-0x48]
    unsigned long v29;  // [bp-0x38]
    unsigned long v32;  // r14
    char v34;  // r13b
    char v35;  // dl

    v2 = a3.current_filename();
    v0 = a3.get_lineno();
    v19.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    v1 = v19.unwrap(&g_14d8f28);
    v32 = v1 + 8;
    v19 = v32.get_props(a0, a1);
    if (v19)
    {
        v3 = v19;
        v4.clone(v3 + 16);
        v13.store(0);
        v12 = 1;
        core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<widestring::utfstring::Utf32String>>>(&v10);
        v10 = v2;
        v11 = v0;
        v29 = a2->field_10;
        *((uint128_t *)&v28) = a2->field_0;
        v19.rustc_entry(v32, &v28);
        if ((char)(((0 ^ v19) & (0 ^ -(v19))) >> 63))
        {
            memcpy(&v16, &v20, 16);
            v14 = 0x8000000000000000;
        }
        else
        {
            v18 = *((long long *)&v22);
            memcpy(&v17, &v21, 16);
            memcpy(&v14, &v19, 16);
        }
        v27 = *((long long *)&v11);
        memcpy(&v26, &v9, 16);
        v25 = v8;
        v24 = v7;
        v23 = v6;
        v22 = v5;
        v21 = v4;
        v19 = 1;
        v20 = 1;
        v15.or_insert(v19.new());
        core::ptr::drop_in_place<alloc::sync::Arc<fish::function::FunctionProperties>>(&v3);
    }
    else
    {
        core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::function::FunctionProperties>>>(&v19);
        v34 = 1;
    }
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v1, v35 & 1);
    if (v34)
    {
        core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<widestring::utfstring::Utf32String>>>(&v2);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a2);
    }
    return v3;
}
