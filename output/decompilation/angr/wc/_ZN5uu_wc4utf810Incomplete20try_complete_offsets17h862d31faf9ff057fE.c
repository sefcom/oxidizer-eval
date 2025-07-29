long long uu_wc::utf8::Incomplete::try_complete_offsets(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    char v4;  // [bp-0x37]
    unsigned long v6;  // rcx
    unsigned long long v7;  // r13
    unsigned long long v8;  // r14
    unsigned long long v9;  // rax
    unsigned long v10;  // r15
    unsigned long long v12;  // rdx
    unsigned long long v14;  // r14
    unsigned long long v15;  // r12

    v6 = a0->field_4;
    if (v6 > 4)
        core::slice::index::slice_start_index_len_fail(v6, 4, &g_59f698); /* do not return */
    v7 = 4 - v6;
    v0 = v6;
    v8 = ::0x4bba20::core::cmp::min_by(v7, a2);
    v9 = v8.index_mut(&a0->padding_0[v6], v7, &g_59f608);
    v10 = v0;
    core::slice::<impl [T]>::copy_from_slice(v9, v12, v8.index(a1, a2, &g_59f620), v12, &g_59f638);
    core::str::converts::from_utf8(&v1, v8 + v10.index(a0, 4, &g_59f650), a2);
    if ((v1 & 1))
    {
        if (v2)
        {
            v14 = v2;
            v8 = v14 - v10;
            if (v14 < v10)
                core::option::unwrap_failed(&g_59f680); /* do not return */
            v15 = v14 & 4294967295;
        }
        else if ((v3 & 1))
        {
            v15 = v4;
            if ((v15 & 255) < (v10 & 255))
                core::option::unwrap_failed(&g_59f668); /* do not return */
            v8 = (v15 & 255) - v10;
        }
    }
    a0->field_4 = v15;
    return v8;
}
