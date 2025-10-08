long long fish::wutil::dir_iter::DirEntry::check_type(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long v2;  // rax
    unsigned long long v3;  // rbx

    v2 = a0->field_41;
    if (!(char)v2)
    {
        v0 = v3;
        a0.do_stat();
        return a0->field_41;
    }
    return v2;
}
