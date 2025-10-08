long long uu_env::string_parser::StringParser::get_chunk_with_length_at(void* a0, unsigned long long a1[5], unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    uint128_t v3;  // [bp-0x60]
    char v4;  // [bp-0x48]
    char *v5;  // [bp-0x38]
    char v6;  // [bp-0x30]
    char *v8;  // r14
    char *v9;  // r15
    unsigned long long v10;  // rax
    unsigned long long v11;  // r12
    char *v12;  // r12
    unsigned long long v13;  // r13
    unsigned long v14;  // rdx
    char v15;  // dl

    if (a2 > a1[1])
    {
        v0 = &g_5104e8;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_5106c0); /* do not return */
    }
    core::slice::<impl [T]>::split_at_unchecked(&v4, a1[0], a1[1], a2);
    v8 = *((long long *)&v6);
    if (v8)
    {
        v9 = v5;
        v10 = uu_env::native_int_str::get_char_from_native_int(*(v9));
        if ((unsigned int)v10 == 0x110000)
        {
            v12 = 1;
            if (v8 != 1)
            {
                while (true)
                {
                    v12 = v11;
                    if ((int)uu_env::native_int_str::get_char_from_native_int(*((char *)(v9 + v12))) != 0x110000)
                        break;
                    v11 += 1;
                    if (v8 == v11)
                    {
                        v12 = v8;
                        break;
                    }
                }
            }
            v13 = 0;
            v10 = 0.index(v12, v9, v8, &g_5106d8);
            *((unsigned long long *)&a0[8]) = v10;
            *((unsigned long *)&a0[16]) = v14;
            *((unsigned long *)&a0[24]) = v14;
        }
        else
        {
            *((unsigned long long *)&a0[8]) = 0;
            *((unsigned int *)&a0[16]) = v10;
            *((char *)&a0[20]) = v15;
            *((unsigned long long *)&a0[24]) = 1;
            v13 = 0;
        }
    }
    else
    {
        v10 = a1[4];
        *((unsigned long long *)&a0[8]) = v10;
        *((char *)&a0[16]) = 0;
        v13 = 1;
    }
    *((unsigned long long *)a0) = v13;
    return v10;
}
