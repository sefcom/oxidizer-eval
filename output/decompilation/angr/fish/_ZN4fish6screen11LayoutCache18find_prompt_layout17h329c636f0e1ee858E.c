long long fish::screen::LayoutCache::find_prompt_layout(struct_1 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long v0;  // [bp-0x128]
    unsigned long long v1;  // [bp-0x120]
    char v2;  // [bp-0x110]
    int v3;  // [bp-0xf8], Other Possible Types: char
    int v4;  // [bp-0xe8]
    int v5;  // [bp-0xd8]
    char v6;  // [bp-0xc8]
    int v7;  // [bp-0xb8]
    char v8;  // [bp-0xa8]
    int v9;  // [bp-0x98]
    int v10;  // [bp-0x88]
    int v11;  // [bp-0x78]
    char v12;  // [bp-0x68]
    int v13;  // [bp-0x58]
    char v14;  // [bp-0x48]
    struct_0 *v16;  // rbp
    unsigned long v17;  // rax
    void* v18;  // r13
    struct_0 *v19;  // rbp
    unsigned long v20;  // r14
    unsigned long long v21;  // rax
    void* v22;  // rdx
    void* v23;  // rdx

    v16 = a0->field_18;
    if (!a0->field_18 || !a0->field_28)
        return (v17 & 0xffffffffffffff00 | !v1) & 0xffffffffffffff00 | v1;
    v0 = &a0->field_18;
    v1 = a0->field_28;
    v18 = 0;
    do
    {
        v19 = v16;
        v20 = v19->field_60;
        v21 = v19->field_8.equal(v19->field_10, a1, a2);
        if ((char)v21)
        {
            v21 = a3;
            if (v19->field_58 == a3)
                break;
        }
        v22 = v18 + 1;
        v18 = v22;
        if (!v19->field_60)
            break;
        continue;
        v16 = v20;
        v18 = v22;
    } while (v1 - 1 != v18);
    v23 = v18;
    if (!(v23 < v1 & v23))
        return v21 & 0xffffffffffffff00 | v23 < v1;
    v2.split_off(v0, v23);
    v3.pop_front(&v2);
    if ((char)(((0 ^ *((long long *)&v3)) & (0 ^ -(*((long long *)&v3)))) >> 63))
        core::option::unwrap_failed(&g_14e1eb8); /* do not return */
    memcpy(&v14, &v8, 16);
    v13 = v7;
    memcpy(&v12, &v6, 16);
    v11 = v5;
    v10 = v4;
    v9 = v3;
    v0.append(&v2);
    v0.push_front(&v9);
    core::ptr::drop_in_place<alloc::collections::linked_list::LinkedList<fish::screen::PromptCacheEntry>>(&v2);
    return (v21 & 0xffffffffffffff00 | v23 < v1) & 4294967295;
}
