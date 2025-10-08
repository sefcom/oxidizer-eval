long long fish::expand::expand_string(unsigned long long a0, struct_0 *a1, unsigned int a2, struct_1 *a3, unsigned long long a4)
{
    int v0;  // [bp-0x88], Other Possible Types: void*
    unsigned long long v1;  // [bp-0x80]
    void* v2;  // [bp-0x78]
    unsigned long v3;  // [bp-0x70]
    void* v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x58]
    void* v6;  // [bp-0x50]
    int v7;  // [bp-0x48], Other Possible Types: char
    void* v8;  // [bp-0x38]
    unsigned long v10;  // rax
    unsigned int v11;  // eax

    v4 = 0;
    v5 = 8;
    v6 = 0;
    core::intrinsics::typed_swap_nonoverlapping(&v4, a1);
    v10 = a3->field_30;
    v2 = 0;
    *((int128_t *)&v0) = *((int128_t *)&v4);
    v3 = v10;
    v11 = fish::expand::expand_to_receiver(a0, &(char)v0, a2, a3, a4);
    v8 = 0;
    memcpy(&v7, &v0, 16);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    core::ptr::drop_in_place<alloc::vec::Vec<fish::complete::Completion>>(a1);
    a1->field_10 = 0;
    *((void*)&a1->field_0) = v7;
    core::ptr::drop_in_place<fish::complete::CompletionReceiver>(&v0);
    return v11;
}
