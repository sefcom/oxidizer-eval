long long fish::util::wcsfilecmp_leading_digits(unsigned long a0, unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned long a4)
{
    unsigned long long v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    char v2;  // [bp-0x60], Other Possible Types: unsigned long long
    char v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    struct_0 *v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x40]
    unsigned long long v7;  // [bp-0x38]
    unsigned long long v8;  // [bp-0x30]
    unsigned long long v9;  // [bp-0x28]
    unsigned long long v10;  // [bp-0x20]
    unsigned long long v11;  // [bp-0x18]
    unsigned long long v12;  // [bp-0x10]
    unsigned long long v14;  // r15
    unsigned long long v15;  // r14
    unsigned long long v16;  // r13
    unsigned long long v17;  // r12
    unsigned long long v18;  // rbx
    unsigned long long v19;  // r12
    unsigned long long v20;  // r15
    unsigned int *v21;  // rdx
    unsigned long long v22;  // cc_ndep
    unsigned int *v23;  // rcx
    unsigned int v24;  // edx
    char v25;  // r14b
    unsigned int v26;  // esi
    unsigned long long v27;  // cc_op
    unsigned long v28;  // cc_dep1
    void* v29;  // cc_dep2
    unsigned long v30;  // cc_ndep
    unsigned long long v31;  // cc_dep1
    unsigned long long v32;  // r12
    unsigned long long v33;  // r15
    unsigned int *v34;  // rdx
    unsigned long long v35;  // r12
    unsigned long long v36;  // r15
    unsigned long long v37;  // rbx
    unsigned long long v38;  // rax

    v12 = v14;
    v11 = v15;
    v10 = v16;
    v9 = v17;
    v8 = v18;
    v0 = a1;
    v4 = a1 + a2 * 4;
    v1 = v4;
    v2 = 0;
    v19 = v0.fold();
    v0 = a3;
    v6 = a3 + a4 * 4;
    v1 = v6;
    v2 = 0;
    v20 = v0.fold();
    v21 = a1 + v19 * 4;
    if (a2 <= v19)
        v21 = &g_550cf8;
    v23 = a3 + v20 * 4;
    if (a4 <= v20)
        v23 = &g_550cf8;
    v24 = *(v21);
    v7 = a3;
    if (*(v21) - 48 <= 9)
    {
        do
        {
            v26 = *(v23);
            if (v26 - 48 >= 10)
            {
                v25 = 1;
                break;
            }
            v27 = 17;
            v28 = v25;
            v29 = 0;
            if (!v25)
            {
                v27 = 13;
                v28 = v26 < v24;
                v29 = v24 < v26;
                v22 = v24 < v26;
                v25 = (v26 < v24) - 0 - (v24 < v26);
            }
            v30 = _ccall(v27, v28, v29, v22);
            v31 = v19 + 1;
            v32 = v19 + 1;
            if ((char)_ccall(4, 24, v19 + 1, 0, _ccall(v27, v28, v29, v22)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14e4560); /* do not return */
            v22 = _ccall(24, v31, 0, v30);
            v33 = v20 + 1;
            if ((char)_ccall(4, 24, v20 + 1, 0, _ccall(24, v31, 0, v30)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14e4578); /* do not return */
            v34 = a1 + v32 * 4;
            if (a2 <= v32)
                v34 = &g_550cf8;
            v23 = a3 + v33 * 4;
            if (a4 <= v33)
                v23 = &g_550cf8;
            v24 = *(v34);
            v20 = v33;
            v19 = v32;
        } while (*(v34) - 48 < 10);
    }
    v35 = v19;
    v36 = v20;
    v0 = a1;
    v1 = v4;
    v2 = v35;
    v3 = 0;
    v37 = v0.fold();
    if ((char)__CFADD__(v37, v35))
        core::panicking::panic_const::panic_const_add_overflow(&g_14e4530); /* do not return */
    v0 = v7;
    v1 = v6;
    v2 = v36;
    v3 = 0;
    v38 = v0.fold();
    if ((char)__CFADD__(v38, v36))
        core::panicking::panic_const::panic_const_add_overflow(&g_14e4548); /* do not return */
    if (10 > *(v23) - 48)
        v25 = 255;
    v5->field_8 = v25;
    v5->field_0 = v37 + v35;
    v5->field_10 = v38 + v36;
    return v38 + v36;
}
