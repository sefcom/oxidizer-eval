long long fish::wutil::gettext::gettext(struct_2 *a0)
{
    char v0;  // [bp-0x7a]
    char v1;  // [bp-0x79]
    unsigned long long v2[4];  // [bp-0x78]
    struct_0 *v3;  // [bp-0x70]
    int v4;  // [bp-0x68], Other Possible Types: char
    int v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    int v8;  // [bp-0x48], Other Possible Types: char
    char v9;  // [bp-0x38]
    unsigned long long v11;  // r14
    unsigned long long v12;  // r15
    char v14;  // dl
    unsigned long v15;  // rbx
    unsigned long long v16;  // r14
    unsigned long long v17;  // r15
    unsigned long v19;  // rdx
    unsigned long long v20;  // r12
    unsigned long long v21;  // r13
    struct_0 *v24;  // rax
    unsigned long long *v25;  // rbp
    unsigned long long v26;  // r14
    unsigned long long *v27;  // rbp
    unsigned long long v30;  // rax
    unsigned long v31;  // rbx
    unsigned long long v32;  // rax
    struct_3 *v33;  // rax
    unsigned long long v34;  // rbx

    v11 = a0->field_8;
    v12 = a0->field_10;
    v4.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    v1 = v14 & 1;
    v7 = v4.unwrap();
    v15 = v7 + 8;
    if (!v15.get_inner(v11, v12))
    {
        v16 = v11;
        v17 = v12;
        if ((a0->field_0 & 1))
        {
            v16 = v11.from_slice(v12);
            v17 = v19;
        }
        v20 = v17;
        v21 = v16;
        v8.to_string(v21, v20);
        v6 = *((long long *)&v9);
        v5 = v8;
        v15.insert(v21, v20, v5.into_boxed_slice(&g_14c1168), v19);
    }
    v2[0] = v15.get_inner(v11, v12);
    if (!v2)
        core::option::unwrap_failed(&g_14c1180); /* do not return */
    v4.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    v24 = v4.unwrap(&g_14c1198);
    v0 = (char)v19 & 1;
    v25 = v24->field_10;
    v3 = v24;
    v26 = &v24->field_10[v24->field_18];
    do
    {
        v27 = v25;
        if (v27 == v26)
        {
            core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v3, v0);
            core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v7, v1);
            return v2[0];
        }
        v25 = &v27[v27 != v26];
    } while (!v19 || !*(v27).get_entry(v2[2], v2[3]));
    v4.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    v30 = v4.unwrap();
    v31 = v30 + 8;
    if (!v31.get_inner(v19))
    {
        v8.from_str(*((long long *)v19), *((long long *)(v19 + 8)));
        v6 = *((long long *)&v9);
        v4 = v8;
        v32 = v4.into_boxed_slice();
        v31.insert(*((long long *)v19), *((long long *)(v19 + 8)), v32, v19);
    }
    v33 = v31.get_inner(v19);
    if (!v33)
        core::option::unwrap_failed(&g_14c11c8); /* do not return */
    v34 = v33->field_10;
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v30, (char)v19 & 1);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v3, v0);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v7, v1);
    return v34;
}
