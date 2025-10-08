long long fish::env::environment_impl::EnvScopedImpl::export_array(void* a0)
{
    int v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x48]
    int v2;  // [bp-0x38], Other Possible Types: char
    unsigned long v3;  // [bp-0x28]
    void* v5;  // r14
    unsigned long v6;  // rbx
    unsigned long long v7;  // cc_op
    void* v8;  // cc_dep1
    unsigned long v9;  // cc_ndep

    if (fish::threads::is_forked_child())
        core::panicking::panic("assertion failed: !is_forked_child()Locals should not be globalsUnknown scopeAttempt to pop last local scopeShould have exactly one element in PWDNode should contain key", 36, &g_14d6bc0); /* do not return */
    if ((char)a0.export_array_needs_regeneration())
    {
        v5 = a0.create_export_array();
        core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::null_terminated_array::OwningNullTerminatedArray>>>(a0 + 96);
        *((void* *)&a0[96]) = v5;
        v1 = (long long)a0[72];
        *((int128_t *)&v0) = (int128_t)a0[56];
        *((unsigned long long *)&a0[56]) = 0;
        *((unsigned long long *)&a0[64]) = 8;
        *((unsigned long long *)&a0[72]) = 0;
        (long long)a0[80].enumerate_generations((long long)a0[88], &v0);
        v6 = a0 + 56;
        v3 = v1;
        memcpy(&v2, &v0, 16);
        v7 = 19;
        v8 = 0;
        core::ptr::drop_in_place<alloc::vec::Vec<f64>>(0, 8);
        *((unsigned long *)(v6 + 16)) = v3;
        *((void*)v6) = v2;
    }
    else
    {
        v5 = (long long)a0[96];
        v7 = 20;
        v8 = v5;
        if (!v5)
            core::option::unwrap_failed(&g_14d6ba8); /* do not return */
    }
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v5) + 1, 0, _ccall(v7, v8, 0, v9))))
        return v5;
    [D] Unsupported jumpkind Ijk_NoDecode at address 20547814()
}
