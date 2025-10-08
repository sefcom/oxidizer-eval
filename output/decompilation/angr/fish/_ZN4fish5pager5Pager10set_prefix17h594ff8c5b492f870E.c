long long fish::pager::Pager::set_prefix(struct_0 *a0, unsigned long long a1, unsigned long long a2, char a3)
{
    int v0;  // [bp-0x28], Other Possible Types: char
    char v1;  // [bp-0x18]
    unsigned long long v3;  // rax

    v0.to_vec(a1, a2);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(&a0->padding_0)[1]);
    v3 = *((long long *)&v1);
    *((unsigned long long *)((char *)&a0->field_c8 + 8)) = v3;
    *((void*)&(&a0->padding_0)[1]) = v0;
    a0->padding_e0[43] = a3;
    return v3;
}
