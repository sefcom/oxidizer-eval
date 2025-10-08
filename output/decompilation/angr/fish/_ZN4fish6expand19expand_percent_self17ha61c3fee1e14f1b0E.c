long long fish::expand::expand_percent_self(struct_0 *a0)
{
    unsigned int v0;  // [bp-0x5c]
    char v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    unsigned long v3;  // [bp-0x48]
    char v4;  // [bp-0x40]
    unsigned long v6;  // rax

    if (!a0->field_10)
    {
        return v6;
    }
    else if (a0->field_8->field_0 == 64977)
    {
        v0 = fish::nix::getpid();
        v1.to_wstring(&v0);
        v4.splice(a0, 0, 1, v2, v2 + v3 * 4);
        core::ptr::drop_in_place<alloc::vec::splice::Splice<core::iter::adapters::copied::Copied<core::slice::iter::Iter<u32>>>>(&v4);
        return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
    }
    else
    {
        return a0->field_8;
    }
}
