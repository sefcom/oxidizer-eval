long long fish::tty_handoff::TtyHandoff::to_job_group(unsigned long long *a0, unsigned long long *a1)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    uint128_t v3;  // [bp-0x28]
    unsigned long long v5;  // r14
    unsigned long long v6;  // rax
    unsigned long v7;  // cc_ndep
    unsigned long long v8;  // rax

    if (*(a0))
    {
        v0 = &g_14e4220;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14e4230); /* do not return */
    }
    v5 = *(a1);
    v6 = v5 + 16.try_transfer();
    if (!(char)v6)
        return v6;
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v5) + 1, 0, _ccall(17, v6 & 255, 0, v7))))
    {
        v8 = core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::job_group::JobGroup>>>(a0);
        *(a0) = v5;
        return v8;
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 21103745()
}
