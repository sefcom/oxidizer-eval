long long fish::screen::mtime_stdout_stderr(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x190]
    unsigned long long v1;  // [bp-0x190]
    unsigned int v2;  // [sp-0x188]
    char v3;  // [bp-0x180]
    char v4;  // [bp-0x178]
    char v5;  // [bp-0xd0]
    unsigned int v7;  // ebp
    unsigned long long v8;  // rcx

    fish::wutil::fstat(&v3, 1);
    if (*((int *)&v3) == 2)
    {
        v0 = *((long long *)&v4);
        v7 = 0x3b9aca00;
LABEL_140e27f:
        core::ptr::drop_in_place<core::result::Result<std::time::SystemTime,std::io::error::Error>>(&v0);
        v7 = 0x3b9aca00;
    }
    else
    {
        memcpy(&v5, &v3, 176);
        (char)v0.modified(&v5);
        if (v7 == 0x3b9aca00)
            goto LABEL_140e27f;
        v0 = v1;
    }
    v2 = v7;
    v8 = v0;
    fish::wutil::fstat(&v3, 2);
    if (*((int *)&v3) == 2)
    {
        v8 = *((long long *)&v4);
        v2 = 0x3b9aca00;
LABEL_140e2f3:
        core::ptr::drop_in_place<core::result::Result<std::time::SystemTime,std::io::error::Error>>(&v8);
        v2 = 0x3b9aca00;
    }
    else
    {
        memcpy(&v5, &v3, 176);
        v8.modified(&v5);
        if (v2 == 0x3b9aca00)
            goto LABEL_140e2f3;
    }
    a0->field_0 = v1;
    a0->field_8 = v7;
    a0->field_10 = v8;
    a0->field_18 = v2;
    return a0;
}
