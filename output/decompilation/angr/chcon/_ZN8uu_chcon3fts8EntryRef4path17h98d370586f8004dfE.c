long long uu_chcon::fts::EntryRef::path(struct_0 *a0)
{
    char v0;  // [bp-0x18]
    char v1;  // [bp-0x10]
    unsigned long v3;  // rdx

    v3 = a0->field_40;
    if (!v3)
    {
        return 0;
    }
    else if (a0->field_30)
    {
        v0.from_bytes_with_nul(a0->field_30, v3 + 1);
        if (*((int *)&v0) != 1)
            return *((long long *)&v1);
        return 0;
    }
    else
    {
        return 0;
    }
}
