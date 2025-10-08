void fish::complete::unique_completions_retaining_order(unsigned long long a0[3])
{
    unsigned long long v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    char v2;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0xa0]
    unsigned long v4;  // [bp-0x98]
    char v5;  // [bp-0x90], Other Possible Types: unsigned long long
    char v6;  // [bp-0x88]
    void* v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    void* v9;  // [bp-0x50]
    unsigned long long v11;  // rax
    unsigned long long v12;  // rdx
    unsigned long long *v13;  // rax

    v11 = std::thread::local::LocalKey<T>::with();
    v5.with_capacity_and_hasher(a0[2], v11, v12);
    v7 = 0;
    v8 = 8;
    v9 = 0;
    v2.fold(a0[1], a0[2] * 56 + a0[1], &v7, &v5);
    v0 = v3;
    v1 = v0 + v4 * 8;
    if (v0.next_back())
    {
        do
        {
            v7.remove(a0, *(v13), &g_14d5b20);
            core::ptr::drop_in_place<fish::complete::Completion>(&v7);
            v13 = v0.next_back();
        } while (v13);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<f64>>(v2, v0);
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<&widestring::utfstring::Utf32String>>(v5, *((long long *)&v6));
    return;
}
