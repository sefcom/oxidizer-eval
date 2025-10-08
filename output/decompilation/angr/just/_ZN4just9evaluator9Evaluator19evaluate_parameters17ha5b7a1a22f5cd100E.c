long long just::evaluator::Evaluator::evaluate_parameters(unsigned long a0, uint128_t a1[2], char a2, unsigned long long a3, void* a4, struct_1 *a5, unsigned long a6, unsigned long long a7)
{
    int v0;  // [bp-0x178], Other Possible Types: char
    int v1;  // [bp-0x171]
    int v2;  // [bp-0x170]
    int v3;  // [bp-0x169]
    int v4;  // [bp-0x168]
    unsigned long long v5;  // [bp-0x161]
    struct_0 *v6;  // [bp-0x158]
    void* v7;  // [bp-0x150]
    unsigned long long v8;  // [bp-0x148]
    void* v9;  // [bp-0x140]
    int v10;  // [bp-0x138], Other Possible Types: char, unsigned long long
    int v11;  // [bp-0x137]
    char v12;  // [bp-0x130], Other Possible Types: unsigned long long
    char v13;  // [bp-0x129]
    int v14;  // [bp-0x128], Other Possible Types: char, unsigned long long
    unsigned long long v15;  // [bp-0x121]
    int v16;  // [bp-0x120]
    int v17;  // [bp-0x118]
    int v18;  // [bp-0x110]
    void* v19;  // [bp-0x108], Other Possible Types: unsigned long long
    int v20;  // [bp-0x100]
    unsigned long long v21;  // [bp-0xf8]
    int v22;  // [bp-0xf0]
    unsigned long long v23;  // [bp-0xe8]
    unsigned long v24;  // [bp-0xe0]
    unsigned int v25;  // [bp-0xd8]
    char v26;  // [bp-0xd4]
    char v27;  // [bp-0xd3]
    char v28;  // [bp-0xd2]
    unsigned long long v29;  // [bp-0xc8]
    unsigned long long v30;  // [bp-0xc0]
    unsigned long long v31;  // [bp-0xb8]
    void* v32;  // [bp-0xb0]
    unsigned long long v33;  // [bp-0xa8]
    struct_1 *v34;  // [bp-0xa0]
    int v35;  // [bp-0x98]
    int v36;  // [bp-0x88]
    void* v37;  // [bp-0x78]
    void* v38;  // [bp-0x70]
    void* v39;  // [bp-0x60]
    unsigned long long v40;  // [bp-0x58]
    char v41;  // [bp-0x50]
    unsigned long long v42;  // r13
    void* v43;  // rbx
    struct_1 *v44;  // rax
    unsigned long long v45;  // rbp
    unsigned long long v46;  // rsi
    unsigned long long v47;  // r14
    void* v48;  // r14
    char v49;  // al
    char v50;  // al
    int v51;  // xmm0
    int v52;  // xmm1
    int v53;  // xmm2
    unsigned long long v54;  // rax
    unsigned long long v55;  // rcx
    int v56;  // xmm0
    int v57;  // xmm2
    int v58;  // xmm3
    int v59;  // xmm0
    int v60;  // xmm1
    int v61;  // xmm2

    v42 = a3;
    v37 = 0;
    *((uint128_t *)&v35) = a1[0];
    *((uint128_t *)&v36) = a1[1];
    v41 = a2;
    v38 = 0;
    v39 = 0;
    v40 = a7;
    v7 = 0;
    v8 = 8;
    v9 = 0;
    if (a6)
    {
        v43 = a4;
        v33 = 208 * a6 + (char *)a5;
        v44 = &a5[1].padding_4[2];
        while (true)
        {
            v34 = v44;
            if (v43)
            {
                if (a5->field_c9 == 1)
                {
                    v0.clone(v42);
                    (char)v10.clone(&v0);
                    v7.push(&(char)v10, &g_82fba8);
                    v43 -= 1;
                    v42 += 24;
                    v45 = *((long long *)&v0);
                    v46 = (long long)v2;
                    v47 = (long long)v4;
                    goto LABEL_6672f7;
                }
                else
                {
                    v32 = v43;
                    v48 = 0;
                    do
                    {
                        v10.clone(v48 + v42);
                        v7.push(&v10, &g_82fbc0);
                        v48 += 24;
                    } while (v43 * 24 != v48);
                    v0.to_vec(v42, v32);
                    alloc::str::join_generic_copy(&v10, (long long)v2, (long long)v4, " [private]\nexport ", 1);
                    v45 = *((long long *)&v10);
                    v47 = *((long long *)&v14);
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
                    v46 = *((long long *)&v12);
                    v42 = 8;
                }
            }
            else
            {
                if (a5->field_0 != 18)
                {
                    v10.evaluate_expression(&v35, a5);
                    v49 = v10;
                    if (v49 != 56)
                    {
                        v56 = (int128_t)v11;
                        v57 = (int128_t)(&v16)[8];
                        v58 = *((int128_t *)&v19);
                        *((int128_t *)&v3) = *((int128_t *)&v14);
                        v0 = v56;
                        *((long long *)&v6->field_20[8]) = *((long long *)&v25);
                        *((int128_t *)&v6->field_18[16]) = *((int128_t *)&v23);
                        *((int128_t *)&v6->field_18[0]) = *((int128_t *)&v21);
                        *((void*)&v6->field_10[1]) = v58;
                        *((void*)&v6->field_8) = v57;
                        *((int128_t *)&v6->field_1[15]) = (int128_t)(&v0)[15];
                        *((int128_t *)&v6->field_1[0]) = (int128_t)v0;
                        v6->field_0 = v49;
                        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v7);
                        return core::ptr::drop_in_place<just::evaluator::Evaluator>(&v35);
                    }
                    v5 = (long long)v16;
                    *((int128_t *)&v1) = *((int128_t *)&v12);
                    memcpy(&v29, &(char)v1, 16);
                    v31 = v5;
                    v10.clone(&v29);
                    v7.push(&v10, &g_82fb90);
                    v45 = v29;
                    v46 = v30;
                    v47 = v31;
                }
                else if (a5->field_c9 == 2)
                {
                    v46 = 1;
                    v45 = 0;
                    v47 = 0;
                }
                else
                {
                    (char)v10.to_vec("missing parameter without defaultjust-cmdcmd.exepowershellpowershell.exesrc/executor.rsassert( + if  {  } else {  }/  / ", 33);
                    memcpy(&(char)v11, &(char)v10, 16);
                    v15 = v14;
                    v6->field_0 = 29;
                    v54 = *((long long *)&v13);
                    v55 = v15;
                    *((int128_t *)&v6->field_1[0]) = *((int128_t *)&v10);
                    *((unsigned long long *)&v6->field_1[15]) = v54;
                    *((unsigned long long *)&v6->field_1[23]) = v55;
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v7);
                    return core::ptr::drop_in_place<just::evaluator::Evaluator>(&v35);
                }
            }
            v43 = 0;
LABEL_6672f7:
            v50 = a5->field_c8;
            v24 = a5->field_c0;
            v51 = a5->field_80;
            v52 = a5->field_90;
            v53 = a5->field_a0;
            *((uint128_t *)&v22) = a5->field_b0;
            v20 = v53;
            v18 = v52;
            v16 = v51;
            v26 = 0;
            v27 = v50;
            v25 = 0;
            v28 = 0;
            v10 = v45;
            v12 = v46;
            v14 = v47;
            v38.bind(&(char)v10);
            a5 = v34;
            v44 = &a5[1].padding_4[2];
            if (a5 == v33)
            {
                v44 = a5;
                if (a5 == v33)
                    break;
            }
            else if (a5 == v33)
            {
                break;
            }
        }
    }
    v59 = *((int128_t *)&v38);
    v60 = *((int128_t *)&v39);
    v14 = v60;
    v10 = v59;
    v61 = *((int128_t *)&v7);
    v17 = v61;
    v19 = 0;
    v6->field_10[2] = 0;
    *((void*)&v6->field_10[0]) = v61;
    *((void*)&v6->field_1[23]) = v60;
    *((void*)&v6->field_1[7]) = v59;
    v6->field_0 = 56;
    return 0;
}
