long long uu_env::split_iterator::SplitIterator::substitute_variable::hbd39d31a0c56a127(struct_0 *a0, unsigned long long a1[3], unsigned long long a2)
{
    char v0;  // [bp-0x60]
    char v1;  // [bp-0x5c]
    char v2;  // [bp-0x58]
    char v3;  // [bp-0x50]
    char v4;  // [bp-0x48]
    char v5;  // [bp-0x40]
    struct_0 *v6;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v8;  // rax
    unsigned long long v9;  // r13
    unsigned long long v10;  // r12
    unsigned int v11;  // ecx
    int v12;  // xmm0
    int v13;  // xmm1
    unsigned long long v14;  // r15
    unsigned long long v15;  // r12
    unsigned long long v16;  // r13
    unsigned long long v17;  // rbp
    unsigned long long v18;  // r15

    v6 = a1 + 1;
    uu_env::variable_parser::VariableParser::parse_variable::h462d93b11ed9b169(&v0, &v6, a2);
    v8 = *((int *)&v0);
    if ((unsigned int)v8 != 8)
    {
        v11 = *((int *)&v1);
        v12 = *((int128_t *)&v2);
        v13 = *((int128_t *)&v4);
        *((unsigned int *)&a0->field_0) = v8;
        *((unsigned int *)((char *)&a0->field_0 + 4)) = v11;
        *((void*)&a0->field_8) = v12;
        *((void*)&a0->padding_10[8]) = v13;
        return v8;
    }
    v9 = *((long long *)&v4);
    v10 = *((long long *)&v5);
    std::env::_var_os::h952923dbab063a4b(&v0, *((long long *)&v2), *((long long *)&v3));
    v14 = *((long long *)&v0);
    v8 = 0x8000000000000000;
    if (v14 != 0x8000000000000000)
    {
        v15 = *((long long *)&v2);
        v16 = *((long long *)&v3);
        v17 = a1[2];
        if (a1[0] - v17 < v16)
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::ha27a6e5a628087b7(a1, v17, v16);
            v17 = a1[2];
        }
        v8 = memcpy(a1[1] + v17, v15, v16);
        a1[2] = v17 + v16;
        *((int *)&a0->field_0) = 8;
        if (v14)
        {
            v8 = __rust_dealloc(v15);
            return v8;
        }
        return v8;
    }
    else
    {
        if (v9)
        {
            v18 = a1[2];
            if (a1[0] - v18 < v10)
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::ha27a6e5a628087b7(a1, v18, v10);
                v18 = a1[2];
            }
            v8 = memcpy(a1[1] + v18, v9, v10);
            a1[2] = v18 + v10;
        }
        *((int *)&a0->field_0) = 8;
        return v8;
    }
}
