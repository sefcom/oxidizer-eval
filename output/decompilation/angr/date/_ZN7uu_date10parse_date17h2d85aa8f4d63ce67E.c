void uu_date::parse_date(void* a0, unsigned long long a1[3])
{
    char v0;  // [bp-0x68], Other Possible Types: unsigned long
    int v1;  // [bp-0x60]
    int v2;  // [bp-0x50], Other Possible Types: char
    int v3;  // [bp-0x40]
    char v4;  // [bp-0x30]
    unsigned long long v7;  // rdx

    parse_datetime::parse_datetime(&v0, a1[1].as_ref(a1[2]), v7);
    if (v0 == 9223372036854775810)
    {
        a0[8] = v1;
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        uu_date::parse_date::{{closure}}(&v2, a1[1], a1[2], &v0);
        *((int128_t *)&a0[32]) = *((int128_t *)&v4);
        a0[16] = v3;
        *(a0) = v2;
    }
    core::ptr::drop_in_place<alloc::string::String>(a1);
    return;
}
