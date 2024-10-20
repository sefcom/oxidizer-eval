long long uu_env::string_expander::StringExpander::take_one::h3a4cbc8ee4975407(struct_0 *a0, unsigned long a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned long long v1;  // [sp-0x50]
    char v2;  // [bp-0x48]
    char v3;  // [bp-0x40]
    char v4;  // [bp-0x38]
    char v5;  // [bp-0x37]
    char v6;  // [bp-0x33]
    char v7;  // [bp-0x31]
    unsigned long long v10[2];  // rbx
    unsigned long long v12;  // rbx
    unsigned long long v13[2];  // r14
    unsigned long long v14[2];  // r14
    unsigned long long v15[2];  // r14
    void* v16;  // rbp
    unsigned long v17;  // r12
    char *v18;  // r13
    char *v19;  // r13
    unsigned long long v20;  // r13
    unsigned long long v21[2];  // r14

    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii::hc2165e82d9d51b92(&v2, a0 + 1, a2, a3, a4, a5);
    v10 = *((long long *)&v3);
    if (v1 == 0x8000000000000000)
        return v10;
    v1 = *((long long *)&v2);
    v10[0] = v10;
    v12 = *((int *)&v5) * 0x100 | (*((short *)&v6) | v7 * 0x10000) * 0x10000000000 | v4;
    if (v12)
    {
        v13 = v10;
        do
        {
            v15 = v14;
            v16 = v15[0];
            v17 = v15[1];
            if (v16)
            {
                v18 = a0->field_10;
                if (a0->field_0 - v18 < v17)
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::ha27a6e5a628087b7(a0, v18, v17);
                    v18 = a0->field_10;
                }
                memcpy(&v18[a0->field_8], v16, v17);
                v20 = &v18[v17];
            }
            else
            {
                v19 = a0->field_10;
                if (v19 == a0->field_0)
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h00bf6129bbf0af69(a0);
                v19[a0->field_8] = v17 >> 32;
                v20 = v19 + 1;
            }
        } while ((a0->field_10 = (struct struct_1 *)v20, v21 = v15 + 16, v21 != (v12 << 4) + v13));
    }
    if (!v1)
        return v10;
    v10 = v10;
    __rust_dealloc(v10);
    return v10;
}
