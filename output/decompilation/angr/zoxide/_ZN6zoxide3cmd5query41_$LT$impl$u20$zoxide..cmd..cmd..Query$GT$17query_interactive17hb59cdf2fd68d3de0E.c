long long zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::query_interactive(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xf0]
    unsigned long long v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    char v3;  // [bp-0xd8]
    unsigned int v4;  // [bp-0xd4]
    unsigned long v5;  // [bp-0xd0], Other Possible Types: unsigned long long
    char v6;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned int v12;  // [bp-0x84]
    unsigned long long v13;  // [bp-0x80]
    char v14;  // [bp-0x78]
    unsigned long long v15;  // [bp-0x60]
    unsigned long long v19;  // 4106
    unsigned long long v20;  // rax
    unsigned long long v21;  // rbp
    unsigned long long v22[3];  // rbp

    v3.get_fzf();
    if (*((int *)&v3) == 1)
        return v5;
    v12 = v4;
    v13 = v5;
    memcpy(&v14, &v6, 16);
    v19 = a0->field_18;
    if ((char)(((0 ^ v19) & (0 ^ -(v19))) >> 63))
    {
        while (true)
        {
            v20 = a1.next();
            if (!v20)
                break;
            v3.write(&v12, v20, a2);
            v21 = v5;
            v0 = *((long long *)&v3);
            v1 = v21;
            v2 = v6;
            if (v0 != 0x8000000000000000)
                goto LABEL_0x48fe10;
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v0);
        }
    }
    v15 = 9223372036854775809;
    while (true)
    {
        v22 = a1.next();
        if (!v22)
            break;
        if ((char)v22[1].equal(v22[2], a0->field_20, a0->field_28))
            continue;
        v3.write(&v12, v22, a2);
        v21 = v5;
        v0 = *((long long *)&v3);
        v1 = v21;
        v2 = v6;
        if (v0 != 0x8000000000000000)
            goto LABEL_0x48fe10;
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v0);
    }
}
