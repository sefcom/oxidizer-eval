void just::justfile::Justfile::public_groups(unsigned long long a0, unsigned long long a1[90], unsigned int a2)
{
    unsigned int v0;  // [bp-0x154]
    void* v1;  // [bp-0x150]
    unsigned long long v2;  // [bp-0x148]
    void* v3;  // [bp-0x140]
    int v4;  // [bp-0x138]
    unsigned long long v5;  // [bp-0x138]
    void* v6;  // [bp-0x130]
    int v7;  // [bp-0x128], Other Possible Types: unsigned long
    int v8;  // [bp-0x120]
    unsigned long v9;  // [bp-0x120]
    unsigned long long v10;  // [bp-0x118]
    void* v11;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned long v12;  // [bp-0x108]
    unsigned long v13;  // [bp-0x100]
    unsigned long v14;  // [bp-0xf8]
    unsigned long long v15;  // [bp-0xd8]
    void* v16;  // [bp-0xd0]
    unsigned long v17;  // [bp-0xc8]
    unsigned long v18;  // [bp-0xc0]
    unsigned long long v19;  // [bp-0xb8]
    void* v20;  // [bp-0xb0]
    unsigned long v21;  // [bp-0xa8]
    unsigned long v22;  // [bp-0xa0]
    unsigned long v23;  // [bp-0x98]
    int v24;  // [bp-0x90], Other Possible Types: char
    char v25;  // [bp-0x88]
    unsigned long long v26;  // [bp-0x80]
    unsigned long long v27;  // [bp-0x78]
    int v28;  // [bp-0x70]
    int v29;  // [bp-0x60]
    int v30;  // [bp-0x48], Other Possible Types: char
    unsigned long v32;  // rax
    unsigned long v33;  // rax
    struct_1 *v35;  // rdx
    unsigned long long v36;  // rax
    unsigned long long v37;  // rcx
    unsigned long v38;  // rax
    unsigned long v39;  // rax
    unsigned long v41;  // rbx
    unsigned long long v42;  // r15
    unsigned long long v43;  // r15
    unsigned long v44;  // r15
    int v45;  // xmm0

    v0 = a2;
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v32 = a1[87];
    v33 = v32;
    if (v33)
        v33 = a1[89];
    v5 = v32;
    v6 = 0;
    v7 = v32;
    v9 = a1[88];
    v10 = v5;
    v11 = 0;
    v12 = v32;
    v13 = a1[88];
    v14 = v33;
    while (v5.next() && v35)
    {
        if (!v35->field_0->padding_e0[36] && !v35->field_0->padding_e0.contains(15))
        {
            v29.groups(&v35->field_0->padding_0[16]);
            v15.into_iter(&v29);
            while (true)
            {
                v24.next(&v15);
                v36 = *((long long *)&v24);
                if ((char)(((0 ^ v36) & (0 ^ -(v36))) >> 63))
                    break;
                memcpy(&v30, &v25, 16);
                v37 = *((long long *)&v35->field_0->padding_58[120]);
                *((int128_t *)&v24) = *((int128_t *)&(&v35->field_0->padding_0)[1]);
                v26 = v37;
                v27 = v36;
                v28 = v30;
                v1.push(&v24, &g_830358);
            }
            core::ptr::drop_in_place<alloc::collections::btree::set::IntoIter<alloc::string::String>>(&v15);
        }
    }
    v38 = a1[84];
    v39 = v38;
    if (v39)
        v39 = a1[86];
    v15 = v38;
    v16 = 0;
    v17 = v38;
    v18 = a1[85];
    v19 = v15;
    v20 = 0;
    v21 = v38;
    v22 = a1[85];
    v23 = v39;
    while (v15.next() && v35)
    {
        if (!v35->field_10)
            continue;
        v41 = v35->field_8;
        v42 = v35->field_10 * 24;
        do
        {
            v43 = v42;
            if (v35->field_230 == 37)
                core::option::unwrap_failed(&g_830328); /* do not return */
            v24.clone(v41);
            v5 = 8;
            v6 = 0;
            v7 = v35->field_228;
            v11 = v26;
            *((int128_t *)&v8) = (int128_t)v24;
            v1.push(&v5, &g_830340);
            v41 += 24;
            v44 = v43 - 24;
            v42 = v44;
        } while (v43 != 24);
    }
    if (((char)v0 & 1))
        alloc::slice::stable_sort(8, 0);
    else
        alloc::slice::<impl [T]>::sort_by(8, 0);
    v15.default();
    v45 = *((int128_t *)&v15);
    memcpy(&v10, &v19, 16);
    *((int128_t *)&v7) = *((int128_t *)&v17);
    v4 = v45;
    v1.retain(&v5);
    v15.into_iter(&v1);
    a0.collect(&v15);
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(&v5);
    return;
}
