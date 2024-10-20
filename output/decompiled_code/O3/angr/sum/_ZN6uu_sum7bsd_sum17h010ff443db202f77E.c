long long uu_sum::bsd_sum::h010ff443db202f77(unsigned long long a0, struct_1 *a1)
{
    unsigned long long v0;  // [sp-0x1038]
    void* v1;  // [sp-0x1030]
    unsigned long v3;  // rax
    void* v4;  // r15
    struct struct_0 **v5;  // rbp
    void* v6;  // r12
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rax
    unsigned long long v9;  // rcx
    unsigned long long v11;  // r15
    unsigned long long v12;  // r15
    unsigned long long v13;  // r15
    unsigned long long v14;  // r15
    unsigned long long v15;  // r15
    unsigned long long v16;  // r15
    unsigned long long v17;  // rax
    struct struct_0 **v18;  // rax

    v1 = 0;
    v0 = v3;
    v4 = 0;
    memset(&v1, 0, 0x1000);
    v5 = a1->field_18;
    v6 = 0;
    while (true)
    {
        if (v5(a0, &v1, 0x1000))
        {
            _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h63fb46542ca77edeE.llvm.1430992003039368830(v7);
            break;
        }
        else
        {
            if (!v7)
                break;
            if (v7 >= 4097)
                core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
            v8 = &v1;
            v9 = v7 & 7;
            if (((char)v7 & 7))
            {
                do
                {
                    v8 += 1;
                    v4 = (v4 | -0x10000 | __ROR__((unsigned short)v4, 1)) + *((char *)v8) & 4294967295;
                } while (v9 != 1);
            }
            v6 += v7;
            if (v7 >= 8)
            {
                do
                {
                    v11 = (v4 | -0x10000 | __ROR__((unsigned short)v4, 1)) + *((char *)v8) & 4294967295;
                    v12 = (v11 | -0x10000 | __ROR__((unsigned short)v11, 1)) + *((char *)(v8 + 1)) & 4294967295;
                    v13 = (v12 | -0x10000 | __ROR__((unsigned short)v12, 1)) + *((char *)(v8 + 2)) & 4294967295;
                    v14 = (v13 | -0x10000 | __ROR__((unsigned short)v13, 1)) + *((char *)(v8 + 3)) & 4294967295;
                    v15 = (v14 | -0x10000 | __ROR__((unsigned short)v14, 1)) + *((char *)(v8 + 4)) & 4294967295;
                    v16 = ((v15 | -0x10000 | __ROR__((unsigned short)v15, 1)) + *((char *)(v8 + 5)) & 4294967295 | -0x10000 | __ROR__((unsigned short)((v15 | -0x10000 | __ROR__((unsigned short)v15, 1)) + *((char *)(v8 + 5)) & 4294967295), 1)) + *((char *)(v8 + 6)) & 4294967295;
                    v17 = v8 + 8;
                    v4 = (v16 | -0x10000 | __ROR__((unsigned short)v16, 1)) + *((char *)(v8 + 7)) & 4294967295;
                } while (v17 != (char *)&v1 + v7);
            }
        }
    }
    if (a1->field_0)
        v18(a0);
    if (a1->field_8)
        __rust_dealloc(a0);
    return v6 + 1023 >> 10;
}
