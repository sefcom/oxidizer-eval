long long uu_tail::parse::parse_obsolete(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x60], Other Possible Types: unsigned int, unsigned long long
    unsigned int v1;  // [bp-0x60]
    unsigned int v2;  // [bp-0x60]
    unsigned int v3;  // [bp-0x60]
    unsigned int v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]
    unsigned long long v9;  // [bp-0x40]
    unsigned long long v10;  // [bp-0x38]
    unsigned long long v12;  // rax
    unsigned long long v13;  // r14
    unsigned long long v14;  // r15
    unsigned long long v15;  // rdx
    unsigned long long v16;  // r13
    unsigned long long v17;  // r13
    unsigned long long v18;  // cc_ndep
    unsigned long long v19;  // r12
    unsigned long long v20;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // r15
    unsigned long long v24;  // rax
    unsigned long long v25;  // r14
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    char v29;  // cl
    char v30;  // bpl

    v12 = core::str::converts::from_utf8(&v0, a1, a2);
    if (v0 == 1)
    {
        *((char *)a0) = 3;
    }
    else
    {
        v13 = v6;
        v14 = v7;
        v3 = 0;
        v12 = ::0x497030::core::char::methods::encode_utf8_raw(45, &v3).strip_prefix_of(v15, v13, v14);
        v10 = v12;
        if (!v10)
        {
            v4 = 0;
            v12 = ::0x497030::core::char::methods::encode_utf8_raw(43, &v4).strip_prefix_of(v15, v13, v14);
            if (!v12)
            {
                *((char *)&a0[10]) = 3;
                return v12;
            }
        }
        if (!((char)core::str::<impl str>::find(v12, v16) & 1))
            v17 = v16;
        else
            v17 = v15;
        v19 = v17;
        if (!v19.get(v12, v16))
            core::str::slice_error_fail(v12, v16, 0, v19, &g_5738f0); /* do not return */
        if (!v15)
        {
            v8 = v15;
            v6 = 10;
            goto LABEL_4a5e12;
        }
        v20 = v19.get(v12, v16);
        if (!v20)
            core::str::slice_error_fail(v12, v16, 0, v19, &g_573908); /* do not return */
        v12 = ::0x494b40::core::num::<impl u64>::from_ascii_radix(&v5, v20, a2);
        if ((char)v5)
        {
            *((char *)a0) = 0;
        }
        else
        {
            v8 = v15;
LABEL_4a5e12:
            v9 = v6;
            v22 = v19.get(v12, v16);
            if (!v22)
                core::str::slice_error_fail(v12, v16, v19, v16, &g_573920); /* do not return */
            v23 = v22;
            v0 = 0;
            v24 = ::0x497030::core::char::methods::encode_utf8_raw(108, &v0).strip_prefix_of(v15, v23, v15);
            if (v24)
            {
                v25 = v24;
                v24.is_contained_in(v15);
                v26 = v25 + v15;
                v0 = v25;
                goto LABEL_4a5e7f;
            }
            v1 = 0;
            v27 = ::0x497030::core::char::methods::encode_utf8_raw(99, &v1).strip_prefix_of(v15, v23, v15);
            if (v27)
            {
                v27.is_contained_in(v15);
                v0 = v27;
                v6 = v0 + v15;
                v12 = v0.try_fold().eq();
                if (!(v12 & 255))
                    goto LABEL_4a5fd8;
                v12 = v9 * 1;
                if (!((char)_ccall(0, 48, v9, 1, v18)))
                {
                    *((unsigned long long *)a0) = v12;
                    *((char *)&a0[8]) = !v10;
                    *((char *)&a0[9]) = v29;
                    *((char *)&a0[10]) = v30;
                    return v12;
                }
                goto LABEL_4a5f37;
            }
            v2 = 0;
            v28 = ::0x497030::core::char::methods::encode_utf8_raw(98, &v2).strip_prefix_of(v15, v23, v15);
            if (v28)
            {
                v28.is_contained_in(v15);
                v0 = v28;
                v6 = v0 + v15;
                v12 = v0.try_fold().eq();
                if (!(v12 & 255))
                    goto LABEL_4a5fd8;
                v12 = v9 * 0x200;
                if (!((char)_ccall(0, 48, v9, 0x200, v18)))
                {
                    *((unsigned long long *)a0) = v12;
                    *((char *)&a0[8]) = !v10;
                    *((char *)&a0[9]) = v29;
                    *((char *)&a0[10]) = v30;
                    return v12;
                }
                goto LABEL_4a5f37;
            }
            else
            {
                v23.is_contained_in(v15);
                v26 = v23 + v15;
                v0 = v23;
LABEL_4a5e7f:
                v6 = v26;
                v12 = v0.try_fold().eq();
                if ((char)v12)
                {
                    v12 = v9 * 1;
                    if (!((char)_ccall(0, 48, v9, 1, v18)))
                    {
                        *((unsigned long long *)a0) = v12;
                        *((char *)&a0[8]) = !v10;
                        *((char *)&a0[9]) = 1;
                        *((char *)&a0[10]) = v30;
                        return v12;
                    }
LABEL_4a5f37:
                    *((char *)a0) = 1;
                }
                else
                {
LABEL_4a5fd8:
                    if (!v10)
                    {
                        *((char *)&a0[10]) = 3;
                        return v12;
                    }
                    else if (v8)
                    {
                        *((char *)a0) = 2;
                    }
                    else
                    {
                        *((char *)&a0[10]) = 3;
                        return v12;
                    }
                }
            }
        }
    }
    *((char *)&a0[10]) = 2;
    return v12;
}
