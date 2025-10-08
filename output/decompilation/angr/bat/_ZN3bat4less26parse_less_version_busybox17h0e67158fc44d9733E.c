long long bat::less::parse_less_version_busybox(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    char v2;  // [bp-0x8]

    core::str::converts::from_utf8(&v0, a0, a1);
    if ((v0 & 1))
        return 2;
    return 2 - (unsigned int)"BusyBox .ucf-old*.devicepagedown".is_contained_in(8, v1, *((long long *)&v2));
}
