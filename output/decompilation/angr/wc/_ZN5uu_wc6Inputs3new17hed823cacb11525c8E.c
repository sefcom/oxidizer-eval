long long uu_wc::Inputs::new(void* a0, unsigned long long a1)
{
    int v0;  // [bp-0xc8], Other Possible Types: char
    char v1;  // [bp-0xb8]
    int v2;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v3;  // [bp-0xa0]
    int v4;  // [bp-0x98]
    int v5;  // [bp-0x88]
    char v6;  // [bp-0x78]
    int v7;  // [bp-0x58], Other Possible Types: char
    int v8;  // [bp-0x48]
    int v9;  // [bp-0x38]
    char v10;  // [bp-0x28]
    unsigned long long v12[3];  // rax
    unsigned long long v13[3];  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rcx
    unsigned long long v16;  // rax
    unsigned long v17;  // rax

    v2.try_get_many(a1);
    v7.unwrap(&v2);
    v2.try_get_one(a1);
    v12 = v2.unwrap();
    if (*((long long *)&v7))
    {
        if (v12)
        {
            memcpy(&v6, &v10, 16);
            v5 = v9;
            v4 = v8;
            v2 = v7;
            v13 = v2.next();
            if (!v13)
                core::option::unwrap_failed(&g_4f9060); /* do not return */
            v0.files_disabled(v13[1], v13[2]);
            *((double *)&a0[8]) = v0.new();
            *((unsigned long long **)&a0[16]) = &g_4f9098;
            *((unsigned long long *)a0) = 3;
            return a0;
        }
        else
        {
            a0 + 8.collect(&v7);
            *((unsigned long long *)a0) = 1;
            return a0;
        }
    }
    else
    {
        if (v12)
        {
            v0.from(v12[1], v12[2]);
            v2.try_as_files0(&v0);
            v14 = (long long)v2;
            if (!((char)(((0 ^ v14) & (0 ^ -(v14))) >> 63)))
            {
                v15 = (long long)v4;
                if (v14 == 9223372036854775809)
                {
                    *((unsigned long long *)&a0[8]) = v3;
                    *((unsigned long long *)&a0[16]) = v15;
                    *((unsigned long long *)a0) = 3;
                    core::ptr::drop_in_place<uu_wc::Input>(&v0);
                    return a0;
                }
                *((unsigned long long *)&a0[8]) = v14;
                *((unsigned long long *)&a0[16]) = v3;
                *((unsigned long long *)&a0[24]) = v15;
                core::ptr::drop_in_place<uu_wc::Input>(&v0);
                v16 = 1;
            }
            else
            {
                v17 = a0 + 8;
                *((long long *)(v17 + 16)) = *((long long *)&v1);
                *((void*)v17) = v0;
                v16 = 2;
            }
            *((unsigned long long *)a0) = v16;
            return a0;
        }
        else
        {
            *((unsigned long long *)a0) = 0;
            return a0;
        }
    }
}
