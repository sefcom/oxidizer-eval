long long fish::builtins::test::test_expressions::parse_double(void* a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    char v3;  // [bp-0x27]
    char v4;  // [bp-0x20]
    unsigned long long v6;  // 4096
    unsigned long long v7;  // r14
    unsigned int v8;  // eax
    unsigned long long v9;  // rdx
    unsigned long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // r15
    unsigned long long v13;  // r15
    unsigned long long v14;  // rax
    char v15;  // al

    if (a2)
    {
        v6 = a2;
        do
        {
            v7 = v6;
            v8 = a1.char_at(v7, 0);
            if (v8 - 9 >= 5 && v8 != 32 && (v8 < 128 || !(char)::0x12b00d0::core::unicode::unicode_data::white_space::lookup(v8)))
            {
                v0 = 0;
                fish::wutil::wcstod::wcstod_inner(&v2, a1, a1 + v7 * 4, 46, &v0);
                if (v2 == 1)
                {
                    v10 = v3;
                    *((char *)&a0[1]) = v10;
                    *((char *)a0) = 1;
                    return v10;
                }
                v1 = *((long long *)&v4);
                v11 = a1.slice_from(v7, v0);
                if (v9)
                {
                    do
                    {
                        v13 = v12;
                        v14 = v11.char_at(v13, 0);
                        if ((unsigned int)(v14 - 9) >= 5 && (unsigned int)v14 != 32)
                        {
                            if ((unsigned int)v14 >= 128)
                            {
                                v14 = ::0x12b00d0::core::unicode::unicode_data::white_space::lookup(v14 & 4294967295);
                                if (!(char)v14)
                                {
                                    *((char *)&a0[1]) = 2;
                                    *((char *)a0) = 1;
                                    return v14 & 0xffffffffffffff00 | 1;
                                }
                            }
                            else
                            {
                                *((char *)&a0[1]) = 2;
                                *((char *)a0) = 1;
                                return v14 & 0xffffffffffffff00 | 1;
                            }
                        }
                        v11 = v11.slice_from(v13, 1);
                        v12 = v9;
                    } while (v9);
                }
                *((unsigned long long *)&a0[8]) = v1;
                *((char *)a0) = v15;
                return 0;
            }
            a1 = a1.slice_from(v7, 1);
            v6 = v9;
        } while (v6);
    }
    *((unsigned short *)a0) = 257;
    return a1;
}
