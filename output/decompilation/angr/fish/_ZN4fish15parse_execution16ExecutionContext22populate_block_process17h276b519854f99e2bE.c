long long fish::parse_execution::ExecutionContext::populate_block_process(unsigned long long a0, unsigned long long a1, struct_2 *a2, struct_0 *a3)
{
    void* v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    void* v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    uint128_t v6;  // [bp-0x40]
    unsigned long v8;  // rcx
    unsigned long long v9;  // rcx
    unsigned long long v10;  // cc_ndep
    unsigned long long v11;  // rax

    v8 = a3->field_0;
    v9 = v8 - 3;
    if ((unsigned int)(v8 - 2) >= 5)
        v9 = 18446744073709551614;
    if (v9 >= 4)
    {
        v3 = &g_14dcea0;
        v4 = 1;
        v5 = 8;
        v6 = 0;
        core::panicking::panic_fmt(&v3, &g_14dceb0); /* do not return */
    }
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v11 = a0.determine_redirections(a1, *((long long *)(a3->field_8 + g_54df08[v9])), *((long long *)(a3->field_8 + g_54df08[v9] + 8)), &v0);
    if ((char)v11)
    {
        core::ptr::drop_in_place<alloc::vec::Vec<fish::redirection::RedirectionSpec>>(&v0);
    }
    else if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(a0) + 1, 0, _ccall(17, v11 & 255, 0, v10))))
    {
        core::ptr::drop_in_place<fish::proc::ProcessType>(a2);
        a2->field_0 = 3;
        a2->field_8 = a0;
        a2->field_10 = a3;
        a2.set_redirection_specs(&v0);
    }
    else
    {
        [D] Unsupported jumpkind Ijk_NoDecode at address 20832007()
    }
    return v11 & 4294967295;
}
