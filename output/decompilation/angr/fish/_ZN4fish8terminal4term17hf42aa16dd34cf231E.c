long long fish::terminal::term()
{
    char v0;  // [bp-0x30]
    struct_0 *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long v4;  // cc_ndep
    char v5;  // dl

    v0.lock();
    v2 = v0.expect(&g_14e2b38);
    v3 = v2->field_8;
    if (!v3)
        core::option::unwrap_failed(&g_14e2b50); /* do not return */
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v3) + 1, 0, _ccall(20, v3, 0, v4))))
    {
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v2, v5 & 1);
        return v2->field_8;
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 21056021()
}
