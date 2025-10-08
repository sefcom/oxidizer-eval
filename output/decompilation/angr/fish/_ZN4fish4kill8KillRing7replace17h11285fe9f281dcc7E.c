long long fish::kill::KillRing::replace(unsigned long long a0, unsigned long long a1, unsigned long long a2, struct_0 *a3)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    void* v2;  // [bp-0x50]
    char v3;  // [bp-0x38]

    v0 = a1;
    v1 = a2;
    v3.iter(a0);
    v2 = 0;
    if (((char)v3.try_fold(&v0, &v2) & 1))
    {
        v2.remove(a0, a2);
        core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v2);
    }
    return (!a3->field_10 ? (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a3) : a0.add(a3));
}
