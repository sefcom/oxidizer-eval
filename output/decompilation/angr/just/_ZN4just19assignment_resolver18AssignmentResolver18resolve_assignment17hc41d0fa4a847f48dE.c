long long just::assignment_resolver::AssignmentResolver::resolve_assignment(struct_0 *a0, struct_1 *a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x1c0]
    char *v1;  // [bp-0x1a8], Other Possible Types: char, unsigned long long
    unsigned long long v2;  // [bp-0x1a0]
    char v3;  // [bp-0x190], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x188]
    char *v5;  // [bp-0x180], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x178]
    void* v7;  // [bp-0x170], Other Possible Types: char
    int v8;  // [bp-0x160]
    int v9;  // [bp-0x150]
    unsigned long v10;  // [bp-0x140]
    unsigned long long v11;  // [bp-0x138]
    unsigned long long v12;  // [bp-0x130]
    unsigned long long v13;  // [bp-0x128]
    char v14;  // [bp-0x120]
    char v15;  // [bp-0x118]
    unsigned long long v16;  // [bp-0x110]
    int v17;  // [bp-0x108]
    char v19;  // [bp-0xe8]
    int v20;  // [bp-0xe0]
    unsigned long long v21;  // [bp-0xc0]
    void* v22;  // [bp-0xb8]
    unsigned long long v23;  // [bp-0xb0]
    uint128_t v24;  // [bp-0xa8]
    uint128_t v25;  // [bp-0x98]
    void* v26;  // [bp-0x88]
    char v27;  // [bp-0x80]
    int v28;  // [bp-0x78]
    char v29;  // [bp-0x38]
    unsigned long long v31;  // rax
    unsigned long long v32;  // rax
    unsigned long long v33;  // rdx
    struct_0 *v34;  // rax
    int v35;  // xmm0
    int v36;  // xmm1
    int v37;  // xmm2
    int v38;  // xmm3
    unsigned long long v39;  // rax
    int v40;  // xmm0
    int v41;  // xmm1
    int v42;  // xmm2

    v11 = a2;
    v12 = a3;
    v31 = a1->field_20.get(a1->field_28, a2, a3);
    if (v31)
    {
        a0->field_40[8] = 37;
        return v31;
    }
    a1.push(a2, a3, &g_82db90);
    v32 = a1->field_18->field_0.get(a1->field_18->field_8, a2, a3);
    if (!v32)
    {
        v1 = &v11;
        v2 = <&T as core::fmt::Display>::fmt;
        v3 = &g_82db70;
        v4 = 2;
        v7 = 0;
        v5 = &v1;
        v6 = 1;
        v14.map_or_else(0, a2, &v3);
        v27 = 35;
        v25 = 0;
        v26 = 0;
        v21 = 1;
        v22 = 0;
        v23 = 1;
        v24 = 0;
        v13 = 9223372036854775848;
        return a0.new(&v21, &v13);
    }
    v10 = &a1->field_20;
    v1.variables(v32);
    do
    {
        do
        {
            v28.next(&v1);
            if (v29 == 37)
            {
                core::ptr::drop_in_place<just::variables::Variables>(v1, v2);
                v10.insert(a2, a3);
                if (a1->field_10)
                    a1->field_10 = a1->field_10 - 1;
                a0->field_40[8] = 37;
                return a0;
            }
            v0 = v28.lexeme();
        } while (a1->field_20.get(a1->field_28, v0, v33) || just::constants::constants().get_inner(v0, v33));
        if (v0.slice_contains(a1->field_8, a1->field_10))
        {
            a1.push(v0, v33, &g_82dba8);
            v39 = a1->field_18->field_0.get(a1->field_18->field_8, v0, v33);
            if (!v39)
                core::option::expect_failed("no entry found for keyattempted to resolve unknown assignment `", 22, &g_82dbc0); /* do not return */
            v3.clone(a1->field_8, a1->field_10);
            memcpy(&v17, &v0, 16);
            memcpy(&v14, &v3, 16);
            v16 = v5;
            v13 = 9223372036854775832;
            v3.error(v39 + 128, &v13);
            *((void*)&a0->field_40[0]) = v9;
            v40 = *((int128_t *)&v3);
            v41 = *((int128_t *)&v5);
            v42 = *((int128_t *)&v7);
            *((void*)&a0->field_30) = v8;
            *((void*)&a0->field_20) = v42;
            *((void*)&a0->field_10) = v41;
            *((void*)&a0->field_0) = v40;
            return core::ptr::drop_in_place<just::variables::Variables>(v1, v2);
        }
        if (!a1->field_18->field_0.get(a1->field_18->field_8, v0, v33))
        {
            memcpy(&v14, &v0, 16);
            v13 = 9223372036854775860;
            v3.error(&v28, &v13);
            *((void*)&a0->field_40[0]) = v9;
            v35 = *((int128_t *)&v3);
            v36 = *((int128_t *)&v5);
            v37 = *((int128_t *)&v7);
            v34 = a0;
            v35 = *((int128_t *)&v3);
            v36 = *((int128_t *)&v5);
            v37 = *((int128_t *)&v7);
            v38 = v8;
            *((void*)&v34->field_30) = v8;
            *((void*)&v34->field_20) = v37;
            *((void*)&v34->field_10) = v36;
            *((void*)&v34->field_0) = v35;
            return core::ptr::drop_in_place<just::variables::Variables>(v1, v2);
        }
        v13.resolve_assignment(a1, v0, v33);
    } while ((char)v20 == 37);
    v34 = a0;
    *((int128_t *)&a0->field_40[0]) = *((int128_t *)&v19);
    v35 = *((int128_t *)&v13);
    v36 = *((int128_t *)&v15);
    *((void*)&v34->field_30) = v38;
    *((void*)&v34->field_20) = v37;
    *((void*)&v34->field_10) = v36;
    *((void*)&v34->field_0) = v35;
    return core::ptr::drop_in_place<just::variables::Variables>(v1, v2);
}
