long long fish::wutil::wcstod::parse_dec_float(unsigned long long a0, unsigned long long *a1)
{
    void* v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    void* v2;  // [bp-0x68]
    int v3;  // [bp-0x60], Other Possible Types: char
    char v4;  // [bp-0x50]
    char v5;  // [bp-0x48]
    unsigned long v6;  // [bp-0x40], Other Possible Types: unsigned long long
    int v7;  // [bp-0x38]
    unsigned long long v8;  // [bp-0x30]
    char v9;  // [bp-0x28]
    unsigned int v11;  // eax
    unsigned int v12;  // ecx
    unsigned long long v13;  // rbx
    unsigned int v14;  // eax
    unsigned int v15;  // eax
    unsigned int v16;  // eax
    unsigned int v17;  // eax
    unsigned int v18;  // eax
    unsigned int v19;  // eax

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3.peekable(a0);
    v11 = v3.next_if();
    if (v11 != 0x110000)
        v0.push(v11);
    v5.get_or_insert_with(&v3);
    if (*((int *)&v5) != 0x110000 && (*((int *)&v5) & 4294967263) - 65 <= 25)
    {
        memcpy(&v9, &v4, 16);
        v7 = v3;
        if (v2)
            v12 = *((char *)v1);
        v13 = fish::wutil::wcstod::parse_inf_nan(&(char)v7, v2, v12, a1);
        v6 = (unsigned long long)v3;
    }
    else
    {
        while (true)
        {
            v14 = v3.next_if();
            if (v14 == 0x110000)
                break;
            v0.push(v14);
        }
        if ((int)v3.next_if(46) != 0x110000)
        {
            v0.push(46);
            while (true)
            {
                v15 = v3.next_if();
                if (v15 == 0x110000)
                    break;
                v0.push(v15);
            }
        }
        v16 = v3.next_if();
        if (v16 != 0x110000)
        {
            v0.push(v16);
            v17 = v3.next_if();
            if (v17 != 0x110000)
                v0.push(v17);
            v18 = v3.next_if();
            if (v18 == 0x110000)
            {
                v0.truncate(v2);
            }
            else
            {
                v0.push(v18);
                while (true)
                {
                    v19 = v3.next_if();
                    if (v19 == 0x110000)
                        break;
                    v0.push(v19);
                }
            }
        }
        (char)v7.from_str(v1, v2);
        if ((char)v7)
        {
            v13 = 0;
        }
        else
        {
            v6 = v8;
            *(a1) = v2;
            v13 = 1;
        }
    }
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    return v13;
}
