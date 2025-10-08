double fish::tinyexpr::ncr()
{
    int v0;  // [bp-0x48], Other Possible Types: uint128_t
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    char v3;  // [bp-0x20]
    int v5;  // ymm0
    int v6;  // ymm1
    unsigned long long v7;  // r15
    unsigned long long v8;  // cc_ndep
    unsigned long long v9;  // rax
    unsigned long long v10;  // rbx
    unsigned long long v12;  // rbx
    unsigned long long v13;  // r14
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rcx
    unsigned long long v16;  // rcx
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rax
    unsigned long v20;  // rax

    if (!((char)((CmpF((unsigned long long)v5, (unsigned long long)v5) & 69) >> 2) & 1))
    {
        v0 = 0x7ff8000000000000;
        if ((((char)(CmpF((unsigned long long)v6, (unsigned long long)v5) & 69) | (char)((CmpF((unsigned long long)v6, (unsigned long long)v5) & 69) >> 6)) & 1) != 1)
        {
            return 0x7ff8000000000000;
        }
        else if ((((char)(CmpF(0, (unsigned long long)v5) & 69) | (char)((CmpF(0, (unsigned long long)v5) & 69) >> 6)) & 1) != 1)
        {
            return 0x7ff8000000000000;
        }
        else if ((((char)(CmpF(0, (unsigned long long)v6) & 69) | (char)((CmpF(0, (unsigned long long)v6) & 69) >> 6)) & 1) != 1)
        {
            return 0x7ff8000000000000;
        }
        else if ((((char)(CmpF((unsigned long long)v5, 0x43f0000000000000) & 69) | (char)((CmpF((unsigned long long)v5, 0x43f0000000000000) & 69) >> 6)) & 1) == 1)
        {
            v0 = 0x7ff0000000000000;
            if (((CmpF((unsigned long long)v6, 0x43f0000000000000) & 69 | (char)((CmpF((unsigned long long)v6, 0x43f0000000000000) & 69) >> 6)) & 1) != 1)
                return 0x7ff0000000000000;
            v7 = (unsigned long long)v5 >> 63 & (unsigned long long)(SubV((uint128_t)v5, 0x43e0000000000000)) | (unsigned long long)v5;
            if ((CmpF((unsigned long long)v5, 0) & 1))
                v7 = 0;
            if (!((CmpF((unsigned long long)v5, 4895412794951729151) & 69 | (char)((CmpF((unsigned long long)v5, 4895412794951729151) & 69) >> 6)) & 1))
                v7 = 18446744073709551615;
            v9 = (unsigned long long)v6 >> 63 & (unsigned long long)(SubV((uint128_t)v6, 0x43e0000000000000)) | (unsigned long long)v6;
            if ((CmpF((unsigned long long)v6, 0) & 1))
                v9 = 0;
            if (!((CmpF((unsigned long long)v6, 4895412794951729151) & 69 | (char)((CmpF((unsigned long long)v6, 4895412794951729151) & 69) >> 6)) & 1))
                v9 = 18446744073709551615;
            if (v9 > v7 >> 1)
            {
                v10 = v7;
                v12 = v10 - v9;
                if (v10 < v9)
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14e3430); /* do not return */
            }
            else
            {
                v12 = v9;
            }
            v1 = 1;
            v2 = v12;
            v3 = 0;
            if (!((char)v1.spec_next() & 1))
            {
                v0 = 0x3ff0000000000000;
                return 0x3ff0000000000000;
            }
            else if (v7 >= v12)
            {
                v13 = 1;
                v0 = 0x7ff0000000000000;
                while (true)
                {
                    v16 = v15;
                    v17 = v7 - v12;
                    v18 = v17 + v16;
                    if ((char)__CFADD__(v17, v16))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14e3448); /* do not return */
                    v19 = v13;
                    v20 = v19 * v18;
                    if ((char)_ccall(0, 48, v19, v18, v8))
                    {
                        return 0x7ff0000000000000;
                    }
                    else if (v16)
                    {
                        v13 = (!(v20 | v16) >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)v20) % (v16 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v20) / (v16 & 4294967295))) & 4294967295 : (unsigned long long)((0 CONCAT v20) % v16) CONCAT (unsigned long long)((0 CONCAT v20) / v16));
                        v15 = v14;
                        if (!((char)v1.spec_next() & 1))
                        {
                            *((uint128_t *)&v0) = AddV((unsigned long long)(InterleaveLOV(0x4530000043300000, v13) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, v13) - 0x45300000000000004330000000000000 >> 64), InterleaveLOV(0x4530000043300000, v13) - 0x45300000000000004330000000000000);
                            return (unsigned long long)v0;
                        }
                    }
                    else
                    {
                        core::panicking::panic_const::panic_const_div_by_zero(&g_14e3460); /* do not return */
                    }
                }
            }
            else
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14e3448); /* do not return */
            }
        }
    }
    v0 = 0x7ff0000000000000;
    return 0x7ff0000000000000;
}
