long long uu_wc::utf8::Incomplete::try_complete_offsets(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x37]
    unsigned long v5;  // r15
    unsigned long long v6;  // rbp
    unsigned long long v7;  // r14
    unsigned long long v8;  // rax
    unsigned long long v10;  // rdx
    unsigned long long v12;  // r14
    unsigned long long v13;  // r12

    v5 = a0->field_4;
    if (v5 > 4)
        core::slice::index::slice_start_index_len_fail(v5, 4, &g_4f9048); /* do not return */
    v6 = 4 - v5;
    v7 = v6.min(a2);
    v8 = v7.index_mut(&a0->padding_0[v5], v6, &g_4f8fb8);
    core::slice::<impl [T]>::copy_from_slice(v8, v10, 0.index(v7, a1, a2, &g_4f8fd0), v10, &g_4f8fe8);
    core::str::converts::from_utf8(&v0, 0.index(v7 + v5, a0, 4, &g_4f9000), a2);
    if ((v0 & 1))
    {
        if (v1)
        {
            v12 = v1;
            v7 = v12 - v5;
            if (v12 < v5)
                core::option::unwrap_failed(&g_4f9030); /* do not return */
            v13 = v12 & 4294967295;
        }
        else if ((v2 & 1))
        {
            v13 = v3;
            if ((v13 & 255) < (v5 & 255))
                core::option::unwrap_failed(&g_4f9018); /* do not return */
            v7 = (v13 & 255) - v5;
        }
    }
    a0->field_4 = v13;
    return v7;
}
