long long uu_who::platform::unix::current_tty(void* a0)
{
    char v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    int v3;  // [bp-0x28], Other Possible Types: char
    char v4;  // [bp-0x18]
    char *v6;  // rax
    unsigned long long v9;  // rdx

    v6 = ttyname(0);
    if (!v6)
    {
        *((unsigned long long *)a0) = 0;
        *((unsigned long long *)&a0[8]) = 1;
        *((unsigned long long *)&a0[16]) = 0;
        return 0;
    }
    v0.to_string_lossy(v6, strlen(v6) + 1);
    v3.to_vec(core::str::<impl str>::trim_start_matches(v1, v2), v9);
    *((long long *)&a0[16]) = *((long long *)&v4);
    *(a0) = v3;
    return (unsigned long long)core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v0);
}
