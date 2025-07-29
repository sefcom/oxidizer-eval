long long uu_sort::compare_by(unsigned long long a0[3], unsigned long long a1[3], struct_1 *a2, unsigned long long a3[12], unsigned long long a4[12])
{
    char v0;  // [bp-0x139]
    unsigned long v1;  // [bp-0x138]
    unsigned long v2;  // [bp-0x130]
    void* v3;  // [bp-0x128]
    char v4[153];  // [bp-0x120]
    unsigned long v5;  // [bp-0xe8]
    unsigned long v6;  // [bp-0xe0]
    unsigned long v7;  // [bp-0xd8]
    unsigned long v8;  // [bp-0xd0]
    void* v9;  // [bp-0xc8]
    unsigned long v10;  // [bp-0xc0]
    unsigned long v11;  // [bp-0xb8]
    unsigned long v12;  // [bp-0xb0]
    unsigned long v13;  // [bp-0xa8]
    unsigned long v14;  // [bp-0x88]
    unsigned long v15;  // [bp-0x80]
    unsigned long v16;  // [bp-0x78]
    unsigned long v17;  // [bp-0x70]
    unsigned long v18;  // [bp-0x68]
    unsigned long v19;  // [bp-0x60]
    unsigned long v20;  // [bp-0x58]
    unsigned long v21;  // [bp-0x50]
    unsigned long v22;  // [bp-0x48]
    unsigned long long v23;  // [bp-0x40]
    unsigned long long v24;  // [bp-0x38]
    unsigned long long v25;  // [bp-0x30]
    unsigned long long v26;  // [bp-0x28]
    unsigned long long v27;  // [bp-0x20]
    unsigned long long v28;  // [bp-0x18]
    unsigned long long v29;  // [bp-0x10]
    unsigned long long v31;  // r15
    unsigned long long v32;  // r14
    unsigned long long v33;  // r13
    unsigned long long v34;  // r12
    unsigned long long v35;  // rbx
    struct_0 *v36;  // rax
    unsigned long v37;  // r13
    unsigned long long v38;  // cc_ndep
    unsigned long v39;  // r15
    struct_0 *v40;  // rcx
    unsigned long long v41;  // xmm0lq
    unsigned long long v42;  // xmm1lq
    char v43;  // al
    unsigned long long v46;  // rdx
    char v47[56];  // rax
    char v48[56];  // rbx
    void* v49;  // rax

    v29 = v31;
    v28 = v32;
    v27 = v33;
    v26 = v34;
    v25 = v35;
    v36 = a0[2] * 16 + a3[10];
    v37 = a0[2];
    if (a3[11] <= v37)
        v36 = 0;
    v39 = a1[2];
    v40 = v39 * 16 + a4[10];
    if (a4[11] <= v39)
        v40 = 0;
    if ((v39 < a4[11] & (char)amd64g_calculate_condition(2, 8, v37, a3[11], v38)) && v36->field_0 == 1 && v40->field_0 == 1)
    {
        v41 = v36->field_8;
        v42 = v40->field_8;
        if ((CmpF(v42, v41) & 1))
        {
            v43 = 1;
            if ((CmpF(v41, v42) & 69 & 1))
                goto LABEL_51074e;
        }
        else
        {
            v43 = 255;
            if (!(CmpF(v41, v42) & 1) && !(char)a0[0].equal(a0[1], a1[0], a1[1]))
                goto LABEL_51074e;
        }
        if (a2->field_82)
            return -(v43);
        return v43;
    }
LABEL_51074e:
    v23 = a2.into_iter();
    v24 = v46;
    v22 = v37 * a2->field_58;
    v20 = a3[1];
    v13 = a3[2];
    v21 = v39 * a2->field_58;
    v19 = a4[1];
    v12 = a4[2];
    v18 = v37 * a2->field_50;
    v6 = a3[8];
    v17 = v39 * a2->field_50;
    v5 = a4[8];
    v16 = a4[7];
    v11 = a2->field_48 * v37;
    v10 = v39 * a2->field_48;
    v1 = a4[5];
    v8 = a4[4];
    v15 = a3[7];
    v2 = a3[5];
    v7 = a3[4];
    v0 = a2->field_87;
    v14 = a2 + 1;
    v9 = 0;
    v3 = 0;
    v47 = v23.next();
    if (v47)
    {
        v48 = v47;
        if (!v47[55])
        {
            goto (long long)(g_443ae0[v48[53]] + (char *)&g_443ae0[0]);
        }
        else if (v22 >= v13)
        {
            core::panicking::panic_bounds_check(v22, v13, &g_670928); /* do not return */
        }
        else if (v21 < v12)
        {
            goto (long long)(g_443ae0[v48[53]] + (char *)&g_443ae0[0]);
        }
        else
        {
            core::panicking::panic_bounds_check(v21, v12, &g_670940); /* do not return */
        }
    }
    else
    {
        if (v4[152] == 5 || v4[131] || v4[132])
            v49 = 0;
        else
            v49 = a0[0].compare(a0[1], a1[0], a1[1]);
        if (v4[130])
            return -((char)v49);
        return v49 & 4294967295;
    }
}
