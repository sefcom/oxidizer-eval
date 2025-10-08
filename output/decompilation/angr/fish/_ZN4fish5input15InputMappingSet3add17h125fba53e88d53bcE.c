long long fish::input::InputMappingSet::add(struct_1 *a0, unsigned long long a1[3], unsigned int a2, void* a3, unsigned long long a4[3], void* a5, char a6)
{
    unsigned int v0;  // [bp-0xc4]
    struct_2 *v1;  // [bp-0xc0]
    struct_3 *v2;  // [bp-0xb8]
    struct_1 *v3;  // [bp-0xb0]
    struct_0 *v4;  // [bp-0xa8]
    unsigned long v5;  // [bp-0xa0]
    char v6;  // [bp-0x98]
    struct_1 *v7;  // rax
    struct_1 *v8;  // 4096
    unsigned long long v9[3];  // rcx
    unsigned long v10;  // rbp
    void* v11;  // r13
    void* v12;  // rcx

    v0 = a2;
    v7 = a0 + 1;
    if (a6)
        v8 = a0;
    else
        v8 = v7;
    v3 = v8;
    if (v8->field_10)
    {
        v9 = a4;
        v5 = a4[1];
        v4 = v3->field_8;
        v10 = &v3->field_8->field_40;
        v11 = 0;
        do
        {
            if ((char)*((long long *)(v10 - 64)).eq(*((long long *)(v10 - 56)), a1[1], a1[2]) && (char)*((long long *)(v10 - 16)).eq(*((long long *)(v10 - 8)), v5, a4[2]))
            {
                core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(v4 - v11 + 24);
                *((unsigned long long *)(v10 - 32)) = v1->field_10;
                *((uint128_t *)(v10 - 48)) = v1->field_0;
                core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(v10);
                v12 = a5;
                *((unsigned long long *)(v10 + 16)) = v2->field_10;
                *((uint128_t *)v10) = v2->field_0;
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a4);
                return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<fish::key::Key>>(a1);
            }
            v11 -= 104;
            v10 += 104;
        } while (v8->field_10 * -104 != v11);
    }
    v6.new(a1, a3, a4, a5, v0);
    return fish::input::input_mapping_insert_sorted(v3, &v6);
}
