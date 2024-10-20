int uu_sort::compare_by::h8ef91666f986b458()
{
    char v0;  // [sp-0x1b1]
    void* v1;  // [sp-0x1b0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x1a0]
    unsigned long long v3;  // [sp-0x198]
    void* v4;  // [sp-0x190]
    unsigned long long v5;  // [sp-0x188]
    unsigned long long v6;  // [sp-0x180]
    unsigned long long v7;  // [sp-0x170]
    unsigned long long v8;  // [sp-0x168]
    unsigned long long v9;  // [sp-0x160]
    unsigned long long v10;  // [sp-0x158]
    unsigned long long v11;  // [sp-0x150]
    unsigned long long v12;  // [sp-0x148]
    unsigned long long v13;  // [sp-0x140]
    unsigned long long v14;  // [sp-0x138]
    unsigned long long v15;  // [sp-0x130]
    unsigned long long v16;  // [sp-0x128]
    unsigned long long v17;  // [sp-0x120]
    unsigned long long v18;  // [sp-0x118]
    unsigned long long v19;  // [sp-0x110]
    unsigned long long v20;  // [sp-0xf8]
    unsigned long long v21;  // [sp-0xf0]
    unsigned long long v22;  // [sp-0xe8]
    unsigned long long v23;  // [sp-0xe0]
    unsigned long long v24;  // [sp-0xd8]
    unsigned long long v25;  // [sp-0xd0]
    unsigned long long v26;  // [sp-0xc8]
    unsigned long long v27;  // [sp-0xc0]
    unsigned long long v28;  // [sp-0xb8]
    unsigned long long v29;  // [sp-0xb0]
    unsigned long long v30;  // [sp-0xa8]
    unsigned long long v31;  // [sp-0x98]
    unsigned long long v32;  // [sp-0x90]
    unsigned long long v33;  // [sp-0x88]
    unsigned long long v34;  // [sp-0x80]
    unsigned long long v35;  // [sp-0x78]
    unsigned long long v36;  // [sp-0x70]
    unsigned long long v37;  // [sp-0x68]
    unsigned long long v38;  // [sp-0x30]
    unsigned long long v39;  // [sp-0x28]
    unsigned long long v40;  // [sp-0x20]
    unsigned long long v41;  // [sp-0x18]
    unsigned long long v42;  // [sp-0x10]
    unsigned long v44;  // r15
    unsigned long v45;  // r14
    unsigned long v46;  // r13
    unsigned long v47;  // r12
    unsigned long v48;  // rbx
    struct_1 *v49;  // rdx
    struct_0 *v50;  // r9
    unsigned long long v51;  // r10
    unsigned long long v52[3];  // rdi
    unsigned long long v53;  // rdi
    unsigned long long v54;  // r11
    unsigned long long v55[3];  // rsi
    unsigned long long v56;  // rax
    unsigned long long v57[9];  // r8
    unsigned long long v58;  // rsi
    unsigned long long v59[9];  // rcx
    struct_0 *v61;  // r10
    unsigned long v64;  // rdx
    unsigned long long v66;  // rbx
    unsigned long long v68;  // rax
    struct_1 *v70;  // rdx
    char v71;  // cc_dep1

    v42 = v44;
    v41 = v45;
    v40 = v46;
    v39 = v47;
    v38 = v48;
    v50 = v49->field_8;
    v51 = v49->field_48;
    v37 = &v50[v49->field_10];
    v53 = v52[2];
    v54 = v49->field_58;
    v56 = v55[2];
    v35 = v54 * v56;
    v36 = v53 * v54;
    v34 = v57[1];
    v58 = v49->field_50;
    v32 = v53 * v58;
    v31 = v56 * v58;
    v19 = v51 * v53;
    v18 = v56 * v51;
    v20 = v57[2];
    v7 = v57[8];
    v17 = v57[7];
    v2 = v57[5];
    v6 = v57[4];
    v33 = v59[1];
    v21 = v59[2];
    v8 = v59[8];
    v16 = v59[7];
    v3 = v59[5];
    v5 = v59[4];
    v0 = v49->field_87;
    v30 = v49->field_88;
    v29 = v49->field_89;
    v28 = v49->field_8a;
    v27 = v49->field_8b;
    v26 = v49->field_8c;
    v25 = v49->field_8d;
    v24 = v49->field_8e;
    v23 = v49->field_8f;
    v22 = v49->field_90;
    v15 = v49->field_91;
    v14 = v49->field_92;
    v13 = v49->field_93;
    v12 = v49->field_94;
    v11 = v49->field_95;
    v10 = v49->field_96;
    v9 = v49->field_97;
    v4 = 0;
    if (v50 == v37)
    {
        if (v49->field_98 != 5 && !v49->field_83 && !v49->field_84)
        {
            v64 = v55[1];
            v66 = v52[1] - v64;
            v68 = memcmp(v52[0], v55[0], v64);
        }
        v71 = v70->field_82;
        return;
    }
    v61 = v50;
    if (!v50->field_37)
    {
        v1 = 0;
        goto *((int *)(4362136 + 4 * *((char *)(vvar_94{reg 96} + 53)))) + 4362136;
    }
    else
    {
        if (v36 >= v21)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        if (v35 >= v20)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v1 = 1;
        goto *((int *)(4362136 + 4 * *((char *)(vvar_94{reg 96} + 53)))) + 4362136;
    }
}
