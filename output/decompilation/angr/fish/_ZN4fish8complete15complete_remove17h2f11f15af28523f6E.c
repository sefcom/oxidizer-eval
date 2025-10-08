long long fish::complete::complete_remove(struct_0 *a0, char a1, unsigned long long a2, unsigned long long a3, char a4)
{
    int v0;  // [bp-0x78]
    unsigned long v1;  // [bp-0x68]
    char v2;  // [bp-0x60]
    char v3;  // [bp-0x50]
    unsigned long long v5[3];  // rbx
    void* v6;  // rax
    char v7;  // dl

    v3.lock();
    v5 = v3.expect("mutex poisoned -%lc %ls --%ls %ls -%lc --%lspoisoned mutex", &g_14d62c0);
    v1 = a0->field_10;
    *((uint128_t *)&v0) = a0->field_0;
    v2 = a1;
    v6 = v5[1].get_mut(v5[2], &v0);
    if (v6 && v6.remove_option(a2, a3, a4))
    {
        v3.remove(&v5[1], &v0);
        core::ptr::drop_in_place<core::option::Option<fish::complete::CompletionEntry>>(&v3);
    }
    core::ptr::drop_in_place<fish::path::BaseDirectory>(&v0);
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v5, v7 & 1);
}
