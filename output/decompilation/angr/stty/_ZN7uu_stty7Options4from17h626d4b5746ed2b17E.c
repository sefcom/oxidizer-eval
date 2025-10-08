long long uu_stty::Options::from(void* a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0xe4]
    char v1;  // [bp-0xe0]
    unsigned int v2;  // [bp-0xdc]
    unsigned long v3;  // [bp-0xd8]
    char v4;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned int v5;  // [bp-0xc8], Other Possible Types: char
    unsigned short v6;  // [bp-0xc4]
    char v7;  // [bp-0x88]
    char v8;  // [bp-0x70]
    char v10;  // al
    char v11;  // al
    unsigned long long v12;  // rax
    unsigned int v13;  // r12d
    unsigned long long v14;  // rax

    v10 = a1.get_flag("allthe options for verbose and stty-readable output styles are mutually exclusivewhen specifying an output style, modes may not be setinvalid argument ''", 3);
    v11 = a1.get_flag("save", 4);
    v4.try_get_one(a1);
    v12 = v4.unwrap();
    if (v12)
    {
        v5 = 0;
        v6 = 0;
        v5 = 1;
        v4 = 0x1b600000800;
        v1.open(&v4, v12);
        if ((v1 & 1))
        {
            *((unsigned long *)&a0[8]) = v3;
            *((unsigned long long *)a0) = 9223372036854775809;
            return a0;
        }
        v0 = v2;
        v13 = 0;
    }
    else
    {
        v13 = 1;
        v14 = std::io::stdio::stdout();
    }
    v4.try_get_many(a1);
    v8.unwrap(&v4);
    if (*((long long *)&v8))
    {
        v4.collect(&v8);
        memcpy(&v7, &v5, 16);
    }
    else
    {
        v4 = 0x8000000000000000;
    }
    *((unsigned long long *)a0) = v4;
    *((int128_t *)&a0[8]) = *((int128_t *)&v7);
    *((unsigned int *)&a0[24]) = v13;
    *((unsigned int *)&a0[28]) = v0;
    *((unsigned long long *)&a0[32]) = v14;
    *((char *)&a0[40]) = v10;
    *((char *)&a0[41]) = v11;
    return a0;
}
