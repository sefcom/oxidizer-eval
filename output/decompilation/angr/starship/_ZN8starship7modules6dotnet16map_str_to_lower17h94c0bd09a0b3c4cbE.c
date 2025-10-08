long long starship::modules::dotnet::map_str_to_lower(unsigned long long *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char v2;  // [bp-0x10]

    if (a1)
    {
        core::str::converts::from_utf8(&v0, a1, a2);
        if (!(v0 & 1))
            return ::0xaa4bb0::alloc::str::<impl str>::to_ascii_lowercase(a0, v1, *((long long *)&v2));
    }
    *(a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
