long long uu_more::Pager::wait_for_enter_key(unsigned long a0)
{
    char v0;  // [sp-0x60]
    int v1;  // [bp-0x5f]
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x30]
    unsigned long long v7;  // [bp-0x28]
    unsigned long long v8;  // [bp-0x20]
    unsigned long long v9;  // [bp-0x18]
    unsigned long long v10;  // [bp-0x10]
    unsigned long long v12;  // r15
    unsigned long long v13;  // r14
    unsigned long long v14;  // r13
    unsigned long long v15;  // r12
    unsigned long long v16;  // rbx

    if (a0)
        return 0;
    v10 = v12;
    v9 = v13;
    v8 = v14;
    v7 = v15;
    v6 = v16;
    crossterm::event::poll(&v0, 0, 0x5f5e100);
    if (!v0)
    {
        do
        {
            if ((char)v1)
            {
                crossterm::event::read(&v0);
                if (*((long long *)&v0) == 9223372036854775814)
                {
                    v2 = v2;
                    return v2.from();
                }
                v4 = *((long long *)&v0);
                v5 = v3;
                core::ptr::drop_in_place<crossterm::event::Event>(&v4);
                if (!((unsigned int)v3 & 16711935) && (unsigned int)v2 == 1 && !(v4 ^ 9223372036854775810))
                    return 0;
            }
            crossterm::event::poll(&v0, 0, 0x5f5e100);
        } while (!v0);
    }
    return v2.from();
}
