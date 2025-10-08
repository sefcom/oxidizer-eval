long long fish::reader::Reader::backward_token(void* a0)
{
    char v0;  // [bp-0x30]
    char v1;  // [bp-0x20]
    void* v3;  // rdx
    unsigned long v4;  // rbx

    a0.active_edit_line();
    v4 = (long long)v3[120];
    if (!v4)
        return 0;
    fish::parse_util::parse_util_token_extent(&v0, (long long)v3[40], (long long)v3[48], v4);
    if (*((long long *)&v0) != v4)
    {
        return 1;
    }
    else if (*((long long *)&v1) != v4)
    {
        return 1;
    }
    else if (1 <= fish::parse_util::parse_util_cmdsubst_extent((long long)v3[40], (long long)v3[48], v4))
    {
        return 1;
    }
    else
    {
        return 1;
    }
}
