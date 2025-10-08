long long fish::function::add(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    int v3;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x60]
    unsigned long v5;  // [bp-0x58], Other Possible Types: unsigned long long
    uint128_t v6;  // [bp-0x50]
    unsigned long long v9;  // rax
    unsigned long v10;  // r13
    unsigned long v11;  // r12
    struct_0 *v13;  // rcx
    char v14;  // dl

    v1 = a1;
    (char)v3.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    v9 = (char)v3.unwrap(&g_14d8e70);
    v10 = a0->field_8;
    if (!v10)
    {
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v9, v14 & 1);
        core::ptr::drop_in_place<alloc::sync::Arc<fish::function::FunctionProperties>>(&v1);
        return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
    }
    v0 = v9;
    v11 = v9 + 8;
    v11.remove(a0->field_0[1], v10);
    a1 + 118.store(v0 + 104.autoload_in_progress(a0->field_0[1], v10));
    v13 = a0;
    v5 = a0->field_8;
    *((unsigned long long [2])&v3) = a0->field_0;
    v2 = v11.insert(&(char)v3, a1);
    if (v2)
    {
        v3 = &g_14d8e60;
        v4 = 1;
        v5 = 8;
        v6 = 0;
        core::panicking::panic_fmt(&v3, &g_14d8e88); /* do not return */
    }
    core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::function::FunctionProperties>>>(&v2);
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v0, v14 & 1);
}
