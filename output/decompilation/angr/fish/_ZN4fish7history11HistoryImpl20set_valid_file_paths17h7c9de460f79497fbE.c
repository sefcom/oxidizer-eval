long long fish::history::HistoryImpl::set_valid_file_paths(unsigned long long a0, unsigned long a1, struct_1 *a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    struct_0 *v3;  // rax
    struct_0 *v4;  // r14
    unsigned long long v5;  // rax

    if (!a3)
        return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(a2);
    v0 = a0;
    v1 = a1 * 80 + a0;
    while (true)
    {
        v3 = v0.next_back();
        if (!v3)
            break;
        if (*((long long *)&v3->padding_30[8]) == a3)
        {
            v4 = v3;
            core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&(&v3->padding_0)[1]);
            v5 = a2->field_10;
            *((unsigned long long *)((char *)&v4->field_18 + 8)) = v5;
            *((uint128_t *)&(&v4->padding_0)[1]) = a2->field_0;
            return v5;
        }
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(a2);
}
