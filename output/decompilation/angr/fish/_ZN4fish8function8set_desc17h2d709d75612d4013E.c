long long fish::function::set_desc(unsigned long long a0, unsigned long long a1, struct_1 *a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x138]
    int v1;  // [bp-0x130], Other Possible Types: char
    char v2;  // [bp-0x120]
    int v3;  // [bp-0x118], Other Possible Types: char
    unsigned long v4;  // [bp-0x108]
    int v5;  // [bp-0x100]
    int v6;  // [bp-0xf0]
    char v7;  // [bp-0xe0]
    unsigned long long v8;  // [bp-0xd0]
    char v9;  // [bp-0xc8]
    unsigned long long v10;  // [bp-0xb8]
    char v11;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0xa0]
    int v13;  // [bp-0x98], Other Possible Types: char
    char v14;  // [bp-0x88]
    char v15;  // [bp-0x78]
    int v16;  // [bp-0x68]
    int v17;  // [bp-0x58]
    char v18;  // [bp-0x48]
    unsigned long long v19;  // [bp-0x38]
    unsigned long v22;  // r13
    struct_0 *v23;  // rax
    char v24;  // dl
    unsigned long long v25;  // rax

    fish::function::load(a0, a1, a3);
    v11.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    v0 = v11.unwrap(&g_14d8f10);
    v22 = v0 + 8;
    v23 = v22.get_inner(a0, a1);
    if (v23)
    {
        v1.clone(v23->field_18 + 16);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
        v4 = a2->field_10;
        *((uint128_t *)&v3) = a2->field_0;
        v11.to_vec(a0, a1);
        v10 = *((long long *)&v13);
        memcpy(&v9, &v11, 16);
        v19 = v8;
        memcpy(&v18, &v7, 16);
        v17 = v6;
        v16 = v5;
        memcpy(&v15, &v3, 16);
        memcpy(&v14, &v2, 16);
        v13 = v1;
        v11 = 1;
        v12 = 1;
        v11 = v22.insert(&v9, v11.new());
        core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::function::FunctionProperties>>>(&v11);
    }
    v25 = core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v0, v24 & 1);
    return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a2);
}
