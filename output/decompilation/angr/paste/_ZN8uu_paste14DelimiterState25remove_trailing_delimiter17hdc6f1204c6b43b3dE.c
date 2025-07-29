long long uu_paste::DelimiterState::remove_trailing_delimiter(unsigned long a0, unsigned long a1, struct_0 *a2)
{
    unsigned long v0;  // [bp-0x38]
    void* v1;  // [bp-0x30]
    unsigned long v3;  // rcx
    unsigned long v4;  // rax

    if ((!a1 | !a0) == 1)
        return v4 & 0xffffffffffffff00 | !a0;
    v3 = a2->field_10;
    v0 = a2->field_10;
    if (v0 >= a1)
    {
        return (unsigned long long)a2.truncate(v0 - a1);
    }
    else if (!v0)
    {
        return v0 - a1;
    }
    else
    {
        v1 = 0;
        core::panicking::assert_failed(0, &v0, &g_4138c0, &v1, &g_570200); /* do not return */
    }
}
