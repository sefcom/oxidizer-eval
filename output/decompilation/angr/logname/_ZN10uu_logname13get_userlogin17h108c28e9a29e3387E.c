long long uu_logname::get_userlogin(void* a0)
{
    char v0;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    int v3;  // [bp-0x28], Other Possible Types: char
    char v4;  // [bp-0x18]
    char *v6;  // rax

    v6 = getlogin();
    if (!v6)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return a0;
    }
    v0.from_utf8_lossy(v6, strlen(v6));
    v3.spec_to_string(v1, v2);
    *((long long *)&a0[16]) = *((long long *)&v4);
    *(a0) = v3;
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v0, v1);
    return a0;
}
