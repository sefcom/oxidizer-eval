long long fish::history::HistoryItem::merge(struct_0 *a0, struct_1 *a1)
{
    int v0;  // [bp-0x30], Other Possible Types: char
    char v1;  // [bp-0x20]
    unsigned long long v3;  // rax
    unsigned int v4;  // edx

    if (!(char)a0->field_8.eq(a0->field_10, a1->field_8, a1->field_10) || (char)a0->field_40 != a1->field_48)
        return 0;
    v3 = a0->field_28.max((unsigned int)a0->field_30, a1->field_30, a1->field_38);
    a0->field_28 = v3;
    *((unsigned int *)&a0->field_30) = v4;
    if (*((long long *)((char *)&a0->field_18 + 8)) < a1->field_28)
    {
        v0.clone(a1->field_20, a1->field_28);
        core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&(&a0->field_10)[1]);
        v3 = *((long long *)&v1);
        *((unsigned long long *)((char *)&a0->field_18 + 8)) = v3;
        *((void*)&(&a0->field_10)[1]) = v0;
    }
    if (*((long long *)&a0->field_38) >= a1->field_40)
        return v3 & 0xffffffffffffff00 | 1;
    *((unsigned long long *)&a0->field_38) = a1->field_40;
    return v3 & 0xffffffffffffff00 | 1;
    return 0;
}
