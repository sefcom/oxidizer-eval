void uu_who::platform::unix::Who::print_boottime(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x78]
    char v1;  // [bp-0x70]
    void* v2;  // [bp-0x30]
    char v3;  // [bp-0x20]
    char v4;  // [bp-0x18]

    uu_who::platform::unix::time_string(&v3, a1);
    memcpy(&v0, &v4, 16);
    v2 = 0;
    a0.print_line(1, 0, 32, "system boot  ?()failed to canonicalize ", 11, *((int *)&v0), *((long long *)&v1), 1, 0, 1, 0, 1, 0, 1);
    core::ptr::drop_in_place<alloc::string::String>(&v3);
    return;
}
