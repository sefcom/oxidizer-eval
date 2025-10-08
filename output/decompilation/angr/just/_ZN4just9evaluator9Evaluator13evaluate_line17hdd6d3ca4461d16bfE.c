long long just::evaluator::Evaluator::evaluate_line(unsigned long a0, unsigned int a1, unsigned long long a2, unsigned long a3, unsigned int a4)
{
    unsigned int v0;  // [bp-0x114]
    struct_0 *v1;  // [bp-0x110]
    void* v2;  // [bp-0x108]
    unsigned long long v3;  // [bp-0x100]
    void* v4;  // [bp-0xf8]
    int v5;  // [bp-0xe8]
    unsigned long long v6;  // [bp-0xe0]
    unsigned long long v7;  // [bp-0xd8]
    unsigned long long v8;  // [bp-0xd0]
    unsigned long long v9;  // [bp-0xc8]
    void* v10;  // [bp-0xc0]
    int v11;  // [bp-0xb8]
    int v12;  // [bp-0xb1]
    unsigned long long v13;  // [bp-0xa9]
    unsigned long long v14;  // [bp-0xa1]
    char v15;  // [bp-0x98]
    char v16;  // [bp-0x97]
    unsigned long long v17;  // [bp-0x90]
    unsigned long long v18;  // [bp-0x88]
    unsigned long long v19;  // [bp-0x80]
    int v20;  // [bp-0x78]
    int v21;  // [bp-0x68]
    int v22;  // [bp-0x58]
    int v23;  // [bp-0x48]
    char v24;  // [bp-0x38]
    unsigned long long v26;  // rax
    unsigned int *v27;  // rdx
    unsigned long long v28;  // rbx
    unsigned int *v29;  // rdx
    unsigned int *v30;  // rdx
    unsigned long long v32;  // rsi
    unsigned long long v33;  // rdx
    char *v34;  // rdi

    v0 = a4;
    v2 = 0;
    v3 = 1;
    v4 = 0;
    v8 = a2;
    v9 = a3 * 128 + a2;
    v10 = 0;
    v26 = v8.next();
    if (v27)
    {
        v28 = v26;
        do
        {
            v30 = v29;
            if (*(v30) == 18)
            {
                alloc::str::<impl str>::replace(&v15, v30 + 2.lexeme(), a2, "{{{{Q", 4, "{{missing parameter without defaultjust-cmdcmd.exepowershellpowershell.exesrc/executor.rsassert( + if  {  } else {  }/  / ", 2);
                v32 = v17;
                if ((!v28 & (char)v0))
                {
                    v32 = core::str::<impl str>::trim_start_matches(v32, v18);
                    v33 = (char *)v27 + v32;
                }
                else
                {
                    v33 = v18 + v32;
                }
                v2.spec_extend(v32, v33);
                v34 = &v15;
            }
            else
            {
                v15.evaluate_expression(a1, v30);
                if (v15 != 56)
                {
                    memcpy(&v13, &v18, 16);
                    *((int128_t *)&v11) = *((int128_t *)&v16);
                    *((long long *)&v1->field_40) = *((long long *)&v24);
                    *((void*)&v1->field_30) = v23;
                    *((void*)&v1->field_20) = v22;
                    *((void*)&v1->field_10[1]) = v21;
                    *((void*)&v1->field_8) = v20;
                    *((int128_t *)&v1->field_1[15]) = *((int128_t *)&v13);
                    *((int128_t *)&v1->field_1[0]) = (int128_t)v11;
                    v1->field_0 = v15;
                    return core::ptr::drop_in_place<alloc::string::String>(&v2);
                }
                v14 = v19;
                *((int128_t *)&v12) = *((int128_t *)&v17);
                *((int128_t *)&v5) = (int128_t)v12;
                v7 = v14;
                v2.spec_extend(v6, v14 + v6);
                v34 = &(char)v5;
            }
            core::ptr::drop_in_place<alloc::string::String>(v34);
            v28 = v8.next();
            v29 = v27;
        } while (v27);
    }
    *((unsigned long long *)&v1->field_1[23]) = 0;
    *((int128_t *)&v1->field_1[7]) = *((int128_t *)&v2);
    v1->field_0 = 56;
    return 0;
}
