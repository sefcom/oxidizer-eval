long long ruff_python_formatter::string::docstring::CodeExampleDoctest::new(struct_2 *a0, void* a1)
{
    unsigned long v0;  // [bp-0x38]
    unsigned long long v2;  // r15
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rbp
    unsigned long long v6;  // rbp
    struct_0 *v7;  // rax
    struct_0 *v8;  // r12
    int v9;  // xmm0
    unsigned long long v10;  // rax

    v2 = (long long)a1[8];
    v0 = *((long long *)a1);
    v4 = ">>> VS78VS20VS21Repr:".strip_prefix_of(4, core::str::<impl str>::trim_start_matches(*((long long *)a1), v2), v3);
    if (!v4)
    {
        a0->field_0 = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v5 = v2;
    v6 = v5 - v3;
    if (v5 < v3)
        core::option::expect_failed("suffix is <= original.. ::/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/lazy_lock.rs", 21, &g_97f258); /* do not return */
    v7 = 8.alloc_impl(56);
    if (!v7)
        alloc::alloc::handle_alloc_error(8, 56); /* do not return */
    v8 = v7;
    v8->field_20 = (long long)a1[32];
    v9 = *((int128_t *)a1);
    v8->field_10 = (int128_t)a1[16];
    *((void*)&v8->field_0) = v9;
    v8->field_28 = v4;
    v8->field_30 = v3;
    v10 = v6.get(v0, v2);
    if (!v10)
        core::str::slice_error_fail(v0, v2, 0, v6, &g_97f240); /* do not return */
    a0->field_0 = 1;
    a0->field_8 = v8;
    a0->field_10 = 1;
    a0->field_18 = v10;
    a0->field_20 = v3;
    return v10;
}
