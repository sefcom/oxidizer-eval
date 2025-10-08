long long fish::input_common::InputEventQueuer::promote_interruptions_to_front(unsigned int a0)
{
    char v0;  // [bp-0xa1]
    void* v1;  // [bp-0xa0]
    struct_0 *v2;  // [bp-0x98], Other Possible Types: char
    unsigned long long v3;  // [bp-0x90]
    unsigned long long v4;  // [bp-0x88]
    unsigned long long v5;  // [bp-0x80]
    unsigned long long v6;  // [bp-0x78]
    char v7;  // [bp-0x70]
    char v8;  // [bp-0x40]
    struct_0 *v10;  // rbx
    unsigned long long v11;  // rax
    unsigned long long v12;  // rdx
    char v13;  // al
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rcx

    v10 = a0.get_input_data_mut();
    v2.iter(v10);
    v1 = 0;
    v11 = v2.try_fold(&v0, &v1);
    if (!((char)v11 & 1))
        return v11;
    v2.range(v10, v12);
    v1 = 0;
    v13 = v2.try_fold(&v1);
    v14 = v13 & 1.map_or(v12, v10->field_18, v12);
    v15 = core::slice::index::range(v12, v14, v10->field_18, &g_14db478);
    v16 = v12 - v15;
    v17 = v10->field_18;
    v10->field_18 = v15;
    v2 = v10;
    v3 = v16;
    v4 = v15;
    v5 = v17 - v16;
    v6 = v16;
    v8.collect(&v2);
    v2.into_iter(&v8);
    v7.next_back(&v2);
    if (*((long long *)&v7) == 9223372036854775812)
        return (unsigned long long)core::ptr::drop_in_place<core::iter::adapters::rev::Rev<alloc::vec::into_iter::IntoIter<fish::input_common::CharEvent>>>(&v2);
    do
    {
        v10.push_front(&v7, &g_14db490);
        v7.next_back(&v2);
    } while (*((long long *)&v7) != 9223372036854775812);
    return (unsigned long long)core::ptr::drop_in_place<core::iter::adapters::rev::Rev<alloc::vec::into_iter::IntoIter<fish::input_common::CharEvent>>>(&v2);
}
