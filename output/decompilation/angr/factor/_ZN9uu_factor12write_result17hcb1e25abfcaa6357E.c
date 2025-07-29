long long uu_factor::write_result(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, char a3)
{
    char *v0;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x160]
    char *v2;  // [bp-0x158]
    unsigned long long v3;  // [bp-0x150]
    void* v4;  // [bp-0x148]
    char *v5;  // [bp-0x138], Other Possible Types: unsigned long long
    int v6;  // [bp-0x138]
    unsigned long long v7;  // [bp-0x130]
    char *v8;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x120]
    unsigned long long v10;  // [bp-0x110]
    int v11;  // [bp-0x108]
    unsigned long long v12;  // [bp-0xf8]
    int v13;  // [bp-0xe8]
    unsigned long long v14;  // [bp-0xd8]
    unsigned long long v15;  // [bp-0xd0]
    int v16;  // [bp-0xc8]
    void* v17;  // [bp-0xc0]
    char *v18;  // [bp-0xb8]
    unsigned long long v19;  // [bp-0xa8]
    unsigned long long v20;  // [bp-0xa0]
    unsigned long long v21;  // [bp-0x98]
    char *v22;  // [bp-0x90], Other Possible Types: unsigned long long
    int v23;  // [bp-0x88], Other Possible Types: unsigned long long
    void* v24;  // [bp-0x80]
    char *v25;  // [bp-0x58]
    unsigned long long v26;  // [bp-0x50]
    int v27;  // [bp-0x48]
    char v28;  // [bp-0x38]
    unsigned long long v30;  // r13
    unsigned long long v31;  // rax
    unsigned long long v32;  // r13
    unsigned long v33;  // r14
    unsigned long long v34;  // r13

    v19 = a1;
    v0 = &v19;
    v1 = <&T as core::fmt::Display>::fmt;
    v20 = &g_5e4f70;
    v21 = 2;
    v24 = 0;
    v22 = &v0;
    v23 = 1;
    v30 = a0.write_fmt(&v20);
    if (v30)
    {
        ::0x4d13a0::core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<num_bigint::biguint::BigUint,usize>>(a2);
        return v30;
    }
    v20.into_iter(a2);
    if (a3)
    {
        while (true)
        {
            v13.next(&v20);
            if ((long long)v13 == 0x8000000000000000)
                break;
            v12 = v14;
            v11 = v13;
            v10 = v15;
            if (v15 > 1)
            {
                v5 = &v11;
                v7 = <num_bigint::biguint::BigUint as core::fmt::Display>::fmt;
                v8 = &v10;
                v9 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v0 = &g_5e4f90;
                v1 = 2;
                v4 = 0;
                v2 = &v5;
                v3 = 2;
                v31 = a0.write_fmt(&v0);
            }
            else
            {
                v5 = &v11;
                v7 = <num_bigint::biguint::BigUint as core::fmt::Display>::fmt;
                v0 = &g_5e4fb0;
                v1 = 1;
                v4 = 0;
                v2 = &v5;
                v3 = 1;
                v31 = a0.write_fmt(&v0);
            }
            if (v31)
            {
                ::0x4d1550::core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v11);
                ::0x4d13b0::core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<num_bigint::biguint::BigUint,usize>>(&v20);
                return v31;
            }
            ::0x4d1550::core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v11);
        }
    }
    else
    {
        while (true)
        {
            v13.next(&v20);
            if ((long long)v13 == 0x8000000000000000)
                break;
            v12 = v14;
            v11 = v13;
            v10 = v15;
            v25 = &v11;
            v26 = <num_bigint::biguint::BigUint as core::fmt::Display>::fmt;
            v0 = &g_5e4fb0;
            v1 = 1;
            v4 = 0;
            v2 = &v25;
            v3 = 1;
            v27.map_or_else(&v0);
            v6 = v27;
            v8 = *((long long *)&v28);
            alloc::slice::<impl [T]>::repeat(&v0, v7, *((long long *)&v28), v15);
            v18 = v2;
            *((int128_t *)&v16) = *((int128_t *)&v0);
            v33 = a0[2];
            if (v18 < a0[0] - v33)
            {
                memcpy(a0[1] + v33, v17, v18);
                a0[2] = &v18[v33];
            }
            else
            {
                v32 = a0.write_all_cold(v17, v18);
                if (v32)
                {
                    ::0x4d1480::core::ptr::drop_in_place<alloc::string::String>(&(char)v16);
                    ::0x4d1480::core::ptr::drop_in_place<alloc::string::String>(&v5);
                    ::0x4d1550::core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v11);
                    ::0x4d13b0::core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<num_bigint::biguint::BigUint,usize>>(&v20);
                    return v32;
                }
            }
            ::0x4d1480::core::ptr::drop_in_place<alloc::string::String>(&(char)v16);
            ::0x4d1480::core::ptr::drop_in_place<alloc::string::String>(&v5);
            ::0x4d1550::core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v11);
        }
    }
    ::0x4d13b0::core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<num_bigint::biguint::BigUint,usize>>(&v20);
    v20 = &g_5e4fc0;
    v21 = 1;
    v22 = 8;
    *((uint128_t *)&v23) = 0;
    v34 = a0.write_fmt(&v20);
    if (v34)
        return v34;
    return a0.flush();
}
