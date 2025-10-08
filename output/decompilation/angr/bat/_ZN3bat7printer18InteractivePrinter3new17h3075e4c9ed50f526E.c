long long bat::printer::InteractivePrinter::new(void* a0, struct_0 *a1, unsigned long long a2[18], struct_2 *a3, unsigned long long a4[4])
{
    char v0;  // [bp-0x489]
    unsigned int v1;  // [bp-0x488]
    char v2;  // [bp-0x484]
    void* v3;  // [bp-0x480]
    unsigned long long v4;  // [bp-0x478]
    void* v5;  // [bp-0x470]
    void* v6;  // [bp-0x468]
    struct_1 *v7;  // [bp-0x450]
    char v8;  // [bp-0x440]
    void* v9;  // [bp-0x440]
    char v10;  // [bp-0x438]
    unsigned int v11;  // [bp-0x437]
    unsigned int v12;  // [bp-0x433]
    char v13;  // [bp-0x430]
    void* v14;  // [bp-0x42f]
    char v15;  // [bp-0x427]
    unsigned int v16;  // [bp-0x426]
    unsigned int v17;  // [bp-0x422]
    unsigned short v18;  // [bp-0x420]
    void* v19;  // [bp-0x41e]
    char v20;  // [bp-0x416]
    unsigned int v21;  // [bp-0x415]
    unsigned int v22;  // [bp-0x411]
    int v23;  // [bp-0x410]
    void* v24;  // [bp-0x40d]
    char v25;  // [bp-0x405]
    unsigned long long v26;  // [bp-0x404]
    unsigned int v27;  // [bp-0x400]
    void* v28;  // [bp-0x3fc]
    char v29;  // [bp-0x3f4]
    unsigned long long v30;  // [bp-0x3f3]
    int v31;  // [bp-0x3f0]
    void* v32;  // [bp-0x3eb]
    char v33;  // [bp-0x3e3]
    unsigned long long v34;  // [bp-0x3e2]
    int v35;  // [bp-0x3e0]
    void* v36;  // [bp-0x3da]
    char v37;  // [bp-0x3d2]
    unsigned long long v38;  // [bp-0x3d1]
    char v39;  // [bp-0x3c8]
    unsigned long long v40[3];  // [bp-0x3c0]
    int v41;  // [bp-0x3b8], Other Possible Types: char
    int v42;  // [bp-0x3a8]
    int v43;  // [bp-0x398]
    int v44;  // [bp-0x388]
    char v45;  // [bp-0x378]
    char v46;  // [bp-0x377]
    unsigned int v47;  // [bp-0x374]
    char v48;  // [bp-0x370], Other Possible Types: unsigned long long
    unsigned int v49;  // [bp-0x368]
    int v50;  // [bp-0x360]
    int v51;  // [bp-0x350]
    int v52;  // [bp-0x340]
    char v53;  // [bp-0x330]
    int v54;  // [bp-0x2a0], Other Possible Types: char
    char v55;  // [bp-0x1d0]
    char v56;  // [bp-0x100]
    struct_1 *v58;  // rax
    unsigned long v59;  // r12
    unsigned long long v62;  // rbp
    unsigned long long v64;  // rax
    char v65;  // r12b
    unsigned long long v66;  // r13
    unsigned int v67;  // eax
    char v68;  // al
    int v69;  // xmm0
    char v70;  // r12b
    int v71;  // xmm0
    int v72;  // xmm1
    int v73;  // xmm2
    char v74;  // r14b
    unsigned int v75;  // ecx
    int v76;  // xmm0

    v58 = a2.get_theme(a1->field_18, a1->field_20);
    v1 = *((int *)&(&v58->padding_0)[1]);
    v2 = *((char *)&v58->field_87 + 3);
    v0 = a1->field_124;
    v7 = v58;
    if (a1->field_124)
    {
        v8.colored(v58->padding_8c[54], *((int *)&v58->field_c3), a1->field_125);
    }
    else
    {
        v10 = 0;
        v9 = 0;
        v11 = 21;
        v12 = 21;
        v14 = 0;
        v15 = 0;
        v16 = 21;
        v17 = 21;
        v19 = 0;
        v20 = 0;
        v21 = 21;
        v22 = 21;
        v24 = 0;
        v25 = 0;
        v26 = 90194313237;
        v29 = 0;
        v28 = 0;
        v30 = 90194313237;
        v33 = 0;
        v32 = 0;
        v34 = 90194313237;
        v37 = 0;
        v36 = 0;
        v38 = 90194313237;
    }
    v3 = 0;
    v4 = 8;
    v5 = 0;
    v59 = &a1->padding_28[152];
    if (v59.numbers())
    {
        v45.new(&v8);
        v3.push(v45.new(), &g_ace9a8, &g_ace9d0);
    }
    if (v59.changes() && a4[0] && a4[3])
    {
        v45.new(&v8);
        v3.push(v45.new(), &g_ace9e8, &g_acea10);
    }
    v62 = 8;
    v6 = 8.fold(8);
    v64 = v62.fold(0 + v62);
    if (a1->field_100 < v64 + 5)
    {
        v5 = 0;
        core::ptr::drop_in_place<[alloc::boxed::Box<dyn core::ops::function::FnOnce<()>+Output = ()+core::marker::Send>]>(v62, 0);
        v6 = 0;
LABEL_83eab4:
        if (!v0)
        {
            v65 = 1;
            v66 = 0x8000000000000000;
            if (a1->field_12b == 2)
                goto LABEL_83ead6;
        }
        else
        {
LABEL_83ead6:
            v39.get_syntax(a2, a1->field_f0, a1->field_f8, a3, &a1->padding_28);
            switch (v67)
            {
            case 7:
                v45.find_syntax_by_name(a2);
                if (v45 != 13)
                {
                    v75 = *((int *)&v46);
                    *((unsigned int *)&a0[12]) = v47;
                    *((unsigned int *)&a0[9]) = v75;
                    a0[32] = v50;
                    a0[48] = v51;
                    a0[64] = v52;
                    *((long long *)&a0[80]) = *((long long *)&v53);
                    v76 = *((int128_t *)&v48);
                    *((char *)&a0[8]) = v45;
                    a0[16] = v76;
                    *((unsigned long long *)a0) = 0x8000000000000000;
                    core::ptr::drop_in_place<bat::error::Error>(&v39);
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::boxed::Box<dyn bat::decorations::Decoration>>>(&v3);
                    return a0;
                }
                else if (v48)
                {
                    v45.new(v48, v49, v7);
                    v66 = *((long long *)&v45);
                    ::libc.so.0::memcpy(&v56, &v48, 208);
                    if (v66 == 0x8000000000000000)
                        core::option::expect_failed(&g_485c00, 32, &g_acea68); /* do not return */
                    ::libc.so.0::memcpy(&v54, &v56, 208);
                    core::ptr::drop_in_place<bat::error::Error>(&v39);
                    break;
                }
                else
                {
                    core::option::expect_failed(&g_485c00, 32, &g_acea68); /* do not return */
                }
            case 13:
                v68 = v40[1].equal(v40[2], "Plain Text", 10);
                v45.new(v40, *((long long *)&v41), v7);
                v66 = *((long long *)&v45);
                ::libc.so.0::memcpy(&v54, &v48, 208);
                v65 = v68 ^ 1;
                break;
            default:
                a0[72] = v44;
                v69 = *((int128_t *)&v39);
                a0[56] = v43;
                a0[40] = v42;
                a0[24] = v41;
                a0[8] = v69;
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::boxed::Box<dyn bat::decorations::Decoration>>>(&v3);
                return a0;
            }
        }
    }
    else
    {
        v6 = v6;
        if (a3->field_50 || a1->field_120 || a1->field_122)
            goto LABEL_83eab4;
        v65 = 1;
        v66 = 0x8000000000000000;
    }
    ::libc.so.0::memcpy(&v55, &v54, 208);
    v70 = (!a1->field_120 ? (a1->field_12b < 2 ? a1->field_12b : v65) : 0);
    *((unsigned long long *)&a0[655]) = v38;
    *((int128_t *)&a0[640]) = (int128_t)v35;
    *((int128_t *)&a0[624]) = (int128_t)v31;
    *((int128_t *)&a0[608]) = *((int128_t *)&v27);
    v71 = *((int128_t *)&v9);
    v72 = *((int128_t *)&v13);
    v73 = *((int128_t *)&v18);
    *((int128_t *)&a0[592]) = (int128_t)v23;
    a0[576] = v73;
    a0[560] = v72;
    a0[544] = v71;
    *((int128_t *)a0) = *((int128_t *)&v3);
    *((long long *)&a0[16]) = 0;
    v74 = a3->field_50;
    ::libc.so.0::memcpy(a0 + 304, &v55, 208);
    *((unsigned int *)&a0[663]) = v1;
    *((char *)&a0[667]) = v2;
    *((unsigned long long *)&a0[24]) = 0x8000000000000000;
    *((unsigned long long *)&a0[296]) = v66;
    *((struct_0 **)&a0[0x200]) = a1;
    *((unsigned long long *[4])&a0[520]) = a4;
    *((void* *)&a0[528]) = v6;
    *((unsigned long long *)&a0[536]) = 0;
    *((char *)&a0[668]) = v70;
    *((char *)&a0[669]) = v74;
    return a0;
}
