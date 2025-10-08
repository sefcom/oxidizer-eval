long long fish::history::History::with_name(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x68]
    char v1;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x50]
    char v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x38]
    unsigned long long v6[3];  // rbx
    unsigned long long *v7;  // rax
    unsigned long v8;  // cc_ndep
    unsigned long v9;  // r14
    unsigned long v10;  // cc_ndep
    char v12;  // dl

    v1.lock();
    v6 = v1.unwrap(&g_14da030);
    v7 = v6[1].get(v6[2], a0, a1);
    if (!v7)
    {
        v9 = a0.new(a1);
        v0 = v9;
        v1.to_vec(a0, a1);
        v4 = v2;
        memcpy(&v3, &v1, 16);
        if ((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v9) + 1, 0, _ccall(20, v7, 0, v10)))
            [D] Unsupported jumpkind Ijk_NoDecode at address 20722269()
        v1 = v6[1].insert(&v3, v9);
        core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::history::History>>>(&v1);
    }
    else if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(*(v7)) + 1, 0, _ccall(20, v7, 0, v8))))
    {
        v9 = *(v7);
    }
    else
    {
        [D] Unsupported jumpkind Ijk_NoDecode at address 20722269()
    }
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v6, v12 & 1);
    return v9;
}
