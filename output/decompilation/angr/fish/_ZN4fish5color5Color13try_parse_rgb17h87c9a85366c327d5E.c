long long fish::color::Color::try_parse_rgb(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned int v3;  // eax
    unsigned int v4;  // edx
    unsigned long long v5;  // 4096
    unsigned long long v6;  // rbx
    unsigned int v7;  // eax
    unsigned int v8;  // eax
    unsigned int v9;  // eax
    unsigned int v10;  // eax
    unsigned int v11;  // eax
    char v12;  // bl
    unsigned int v13;  // eax
    unsigned int v14;  // eax
    char v15;  // bpl
    unsigned int v16;  // eax
    unsigned int v17;  // eax
    char v18;  // dl
    unsigned int v19;  // eax
    unsigned int v20;  // ecx

    v0 = a0;
    v1 = a0 + a1 * 4;
    v3 = v0.next();
    if (v3 == 2)
        goto LABEL_1389d9f;
    v3.unwrap(v4, &g_14bd1b0);
    v5 = a1;
    if (v4 == 35)
    {
        v6 = a1 - 1;
        if (a1 < 1)
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d5930); /* do not return */
        a0 += 4;
        v5 = v6;
    }
    v0 = a0;
    v1 = a0 + v5 * 4;
    switch (v5)
    {
    case 6:
        v10 = v0.next();
        if (v10 != 2)
        {
            v10.unwrap(v4, &g_14bd1b0);
            if (((char)::0x128b6d0::core::char::methods::<impl char>::to_digit(v4, 16) & 1))
            {
                if ((char)v4 > 15)
                    core::panicking::panic_const::panic_const_mul_overflow(&g_14d5990); /* do not return */
                v11 = v0.next();
                if (v11 != 2)
                {
                    v11.unwrap(v4, &g_14bd1b0);
                    if (((char)::0x128b6d0::core::char::methods::<impl char>::to_digit(v4, 16) & 1))
                    {
                        v12 = (char)v4 + (char)v4 * 16;
                        if ((char)__CFADD__(v4, (char)v4 * 16))
                            core::panicking::panic_const::panic_const_add_overflow(&g_14d5990); /* do not return */
                        v13 = v0.next();
                        if (v13 != 2)
                        {
                            v13.unwrap(v4, &g_14bd1b0);
                            if (((char)::0x128b6d0::core::char::methods::<impl char>::to_digit(v4, 16) & 1))
                            {
                                if ((char)v4 > 15)
                                    core::panicking::panic_const::panic_const_mul_overflow(&g_14d59a8); /* do not return */
                                v14 = v0.next();
                                if (v14 != 2)
                                {
                                    v14.unwrap(v4, &g_14bd1b0);
                                    if (((char)::0x128b6d0::core::char::methods::<impl char>::to_digit(v4, 16) & 1))
                                    {
                                        v15 = (char)v4 + (char)v4 * 16;
                                        if ((char)__CFADD__(v4, (char)v4 * 16))
                                            core::panicking::panic_const::panic_const_add_overflow(&g_14d59a8); /* do not return */
                                        v16 = v0.next();
                                        if (v16 != 2)
                                        {
                                            v16.unwrap(v4, &g_14bd1b0);
                                            if (((char)::0x128b6d0::core::char::methods::<impl char>::to_digit(v4, 16) & 1))
                                            {
                                                if ((char)v4 > 15)
                                                    core::panicking::panic_const::panic_const_mul_overflow(&g_14d59c0); /* do not return */
                                                v17 = v0.next();
                                                if (v17 != 2)
                                                {
                                                    v17.unwrap(v4, &g_14bd1b0);
                                                    if (((char)::0x128b6d0::core::char::methods::<impl char>::to_digit(v4, 16) & 1))
                                                    {
                                                        v18 = (char)v4 + (char)v4 * 16;
                                                        if ((char)__CFADD__(v4, (char)v4 * 16))
                                                            core::panicking::panic_const::panic_const_add_overflow(&g_14d59c0); /* do not return */
LABEL_1389bc0:
                                                        v19 = (v12 | v15 * 0x100 | v18 * 0x10000) * 0x100;
                                                        v20 = 2;
                                                        break;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        break;
    case 3:
        v7 = v0.next();
        if (v7 != 2)
        {
            v7.unwrap(v4, &g_14bd1b0);
            if (((char)::0x128b6d0::core::char::methods::<impl char>::to_digit(v4, 16) & 1))
            {
                if ((char)v4 >= 16)
                    core::panicking::panic_const::panic_const_mul_overflow(&g_14d5948); /* do not return */
                v8 = v0.next();
                if (v8 != 2)
                {
                    v8.unwrap(v4, &g_14bd1b0);
                    if (((char)::0x128b6d0::core::char::methods::<impl char>::to_digit(v4, 16) & 1))
                    {
                        if ((char)v4 >= 16)
                            core::panicking::panic_const::panic_const_mul_overflow(&g_14d5960); /* do not return */
                        v9 = v0.next();
                        if (v9 != 2)
                        {
                            v9.unwrap(v4, &g_14bd1b0);
                            if (((char)::0x128b6d0::core::char::methods::<impl char>::to_digit(v4, 16) & 1))
                            {
                                if ((char)v4 <= 15)
                                    goto LABEL_1389bc0;
                                else
                                    core::panicking::panic_const::panic_const_mul_overflow(&g_14d5978); /* do not return */
                            }
                        }
                    }
                }
            }
        }
        break;
    default:
LABEL_1389d9f:
        v20 = 4;
        v19 = 0;
        return v19 | v20;
    }
}
