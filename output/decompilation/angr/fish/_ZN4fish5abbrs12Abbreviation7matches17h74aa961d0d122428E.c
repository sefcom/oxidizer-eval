long long fish::abbrs::Abbreviation::matches(struct_0 *a0, unsigned long long a1, unsigned long long a2, char a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x48]
    char v2;  // al
    unsigned long long v3[7];  // rax

    if (((a0->field_81 ^ 1) & a0->field_81 != a3))
        return 0;
    if (a0->field_40)
    {
        v0.to_vec(a4, a5);
        v2 = v0.slice_contains(a0->field_38, a0->field_40);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
        if (!v2)
            return 0;
    }
    v3 = a0->field_78;
    if (!v3)
        return a0->field_20.equal(a0->field_28, a1, a2);
    v0.is_match_at(v3[3], v3[6], a1, a2);
    return v0.expect();
}
