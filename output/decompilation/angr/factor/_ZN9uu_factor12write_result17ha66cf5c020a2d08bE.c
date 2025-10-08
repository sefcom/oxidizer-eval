long long uu_factor::write_result(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, char a3)
{
    unsigned long long v0;  // [bp-0x138]
    unsigned long long v1;  // [bp-0x130]
    unsigned long long v2;  // [bp-0x128]
    char *v3;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x118]
    char *v5;  // [bp-0x110]
    unsigned long long v6;  // [bp-0x108]
    void* v7;  // [bp-0x100]
    unsigned long long v8;  // [bp-0xf0]
    char *v9;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0xe0]
    char *v11;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0xd0]
    int v13;  // [bp-0xc8]
    unsigned long long v14;  // [bp-0xb8]
    int v15;  // [bp-0xb0]
    unsigned long long v16;  // [bp-0xa0]
    unsigned long long v17;  // [bp-0x98]
    unsigned long long v18;  // [bp-0x90]
    unsigned long long v19;  // [bp-0x88]
    unsigned long long v20;  // [bp-0x80]
    char *v21;  // [bp-0x78], Other Possible Types: unsigned long long
    int v22;  // [bp-0x70], Other Possible Types: unsigned long long
    void* v23;  // [bp-0x68]
    char *v24;  // [bp-0x40]
    unsigned long long v25;  // [bp-0x38]
    unsigned long long v27[3];  // rbx
    unsigned long long v28;  // r13
    unsigned long long v29;  // rax
    unsigned long long v30;  // r13
    char *v31;  // r13
    unsigned long v32;  // rbx
    unsigned long long v33;  // r13

    v27 = a0;
    v18 = a1;
    v3 = &v18;
    v4 = <&T as core::fmt::Display>::fmt;
    v19 = &g_544140;
    v20 = 2;
    v23 = 0;
    v21 = &v3;
    v22 = 1;
    v28 = a0.write_fmt(&v19);
    if (v28)
    {
        core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<num_bigint::biguint::BigUint,usize>>(a2);
        return v28;
    }
    v19.into_iter(a2);
    if (a3)
    {
        while (true)
        {
            v15.next(&v19);
            if ((long long)v15 == 0x8000000000000000)
                break;
            v14 = v16;
            v13 = v15;
            v8 = v17;
            if (v17 > 1)
            {
                v9 = &v13;
                v10 = <num_bigint::biguint::BigUint as core::fmt::Display>::fmt;
                v11 = &v8;
                v12 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v3 = &g_544160;
                v4 = 2;
                v7 = 0;
                v5 = &v9;
                v6 = 2;
                v29 = a0.write_fmt(&v3);
            }
            else
            {
                v9 = &v13;
                v10 = <num_bigint::biguint::BigUint as core::fmt::Display>::fmt;
                v3 = &g_544180;
                v4 = 1;
                v7 = 0;
                v5 = &v9;
                v6 = 1;
                v29 = a0.write_fmt(&v3);
            }
            if (v29)
            {
                core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v13);
                core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<num_bigint::biguint::BigUint,usize>>(&v19);
                return v29;
            }
            core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v13);
        }
    }
    else
    {
        v31 = &v3;
        while (true)
        {
            v15.next(&v19);
            if ((long long)v15 == 0x8000000000000000)
                break;
            v14 = v16;
            v13 = v15;
            v8 = v17;
            v24 = &v13;
            v25 = <num_bigint::biguint::BigUint as core::fmt::Display>::fmt;
            v3 = &g_544180;
            v4 = 1;
            v7 = 0;
            v5 = &v24;
            v6 = 1;
            v9.map_or_else(v31);
            v1 = v9;
            v2 = v10;
            alloc::slice::<impl [T]>::repeat(v31, v10, v11, v17);
            v0 = &g_544180;
            v32 = v27[2];
            if (v5 < v27[0] - v32)
            {
                memcpy(v27[1] + v32, 0x1, v5);
                v27[2] = &v5[v32];
            }
            else
            {
                v30 = v27.write_all_cold(1, v5);
                v27 = v27;
                if (v30)
                {
                    core::ptr::drop_in_place<alloc::string::String>(v0, 1);
                    core::ptr::drop_in_place<alloc::string::String>(v1, v2);
                    core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v13);
                    core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<num_bigint::biguint::BigUint,usize>>(&v19);
                    return v30;
                }
            }
            core::ptr::drop_in_place<alloc::string::String>(v0, 1);
            core::ptr::drop_in_place<alloc::string::String>(v1, v2);
            core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v13);
        }
    }
    core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<num_bigint::biguint::BigUint,usize>>(&v19);
    v19 = &g_544190;
    v20 = 1;
    v21 = 8;
    *((uint128_t *)&v22) = 0;
    v33 = v27.write_fmt(&v19);
    if (v33)
        return v33;
    return v27.flush();
}
