long long fish::wutil::wcstod::wcstod_inner(void* a0, struct_0 *a1, void* *a2)
{
    int v0;  // [bp-0x48], Other Possible Types: char
    unsigned long long v1;  // [bp-0x40]
    unsigned long v2;  // [bp-0x38]
    void* v4;  // r13
    unsigned long long v5;  // cc_ndep
    unsigned long long v6;  // cc_ndep
    void* v7;  // r13
    unsigned long long v8;  // rax
    unsigned long long v9;  // cc_op
    unsigned long long v10;  // cc_dep1
    unsigned long long v11;  // cc_dep2
    unsigned int v12;  // ecx
    char v13;  // al
    unsigned long long v14;  // cc_ndep
    void* v15;  // r13
    unsigned long long v16;  // rax
    unsigned long long v17;  // r13
    unsigned long long v18;  // xmm0lq
    unsigned long long v19;  // rax
    unsigned int v20;  // r12d
    unsigned long v21;  // rax

    v4 = 0;
    while (true)
    {
        v6 = v5;
        v7 = v4;
        v0.clone(a1);
        v8 = v0.next();
        v9 = 7;
        v10 = v8 & 4294967295;
        v11 = 32;
        if ((unsigned int)v8 != 32)
        {
            if ((unsigned int)v8 == 0x110000)
            {
                *(a2) = 0;
                *((unsigned short *)a0) = 257;
                return v8;
            }
            v12 = v8 - 9;
            v9 = 7;
            v10 = v12;
            v11 = 5;
            if (v12 >= 5)
            {
                if ((unsigned int)v8 < 128)
                    break;
                v13 = ::0x12b00d0::core::unicode::unicode_data::white_space::lookup(v8 & 4294967295);
                v9 = 17;
                v10 = v13;
                v11 = 0;
                if (!v13)
                    break;
            }
        }
        v14 = _ccall(v9, v10, v11, v6);
        v15 = v7 + 1;
        if ((char)_ccall(4, 24, v7 + 1, 0, _ccall(v9, v10, v11, v6)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14c1378); /* do not return */
        a1.next();
        v4 = v15;
        v5 = v14;
    }
    v0.clone(a1);
    if ((char)fish::wutil::wcstod::is_hex_float(&v0))
    {
        v16 = fish::wutil::hex_float::parse_hex_float(&v0, a1);
        if ((v0 & 1))
        {
            *((unsigned short *)a0) = 513;
            return v16;
        }
        v17 = v7 + v2;
        if ((char)__CFADD__(v7, v2))
            core::panicking::panic_const::panic_const_add_overflow(&g_14c1360); /* do not return */
        v18 = v1;
    }
    else
    {
        v0.clone(a1);
        v19 = fish::wutil::wcstod::parse_dec_float(&v0, a2);
        if (v19 != 1)
        {
            *(a2) = 0;
            *((unsigned short *)a0) = 513;
            return v19;
        }
        v16 = 0x7ff0000000000000;
        if ((9223372036854775807 & v18) == 0x7ff0000000000000)
        {
            v2 = a1->field_10;
            *((uint128_t *)&v0) = a1->field_0;
            do
            {
                do
                {
                    v16 = v0.next();
                } while ((unsigned int)v16 == 32);
                v20 = v16;
                if ((unsigned int)v16 == 0x110000)
                    goto LABEL_12ebe00;
                else
                    goto LABEL_12ebda7;
LABEL_12ebda7:
            } while (v20 - 9 < 5 || v20 >= 128 && (char)::0x12b00d0::core::unicode::unicode_data::white_space::lookup(v20));
            v21 = v20 - 48;
            v16 = v21 & 0xffffff00 | 10 <= (unsigned int)v21;
            if (!(10 <= (unsigned int)v21 & v20 != 46))
            {
                *((unsigned short *)a0) = 1;
                return v21 & 0xffffff00 | 10 <= (unsigned int)v21;
            }
LABEL_12ebe00:
        }
        v17 = v7 + *(a2);
        if ((char)__CFADD__(v7, *(a2)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14c1348); /* do not return */
    }
    *(a2) = v17;
    *((unsigned long long *)&a0[8]) = v18;
    *((char *)a0) = 0;
    return v16;
}
