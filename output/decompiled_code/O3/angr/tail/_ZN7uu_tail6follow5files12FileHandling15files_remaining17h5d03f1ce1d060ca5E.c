long long uu_tail::follow::files::FileHandling::files_remaining::h5d03f1ce1d060ca5(struct_0 *a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned long long v0;  // [sp-0x38]
    unsigned long v2;  // rax
    uint128_t *v3;  // r15
    unsigned long long v4;  // r12
    int v5;  // xmm0
    int v6;  // ymm0
    int v7;  // ymm0
    unsigned long long v8;  // rcx
    uint128_t *v9;  // r13
    unsigned long long v10;  // rax
    unsigned int v11;  // ebp
    int v12;  // xmm0
    unsigned int v13;  // ecx
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rbx
    unsigned long long v17;  // r14
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rcx
    unsigned long long v20;  // r8
    unsigned long long v21;  // r9

    v0 = v2;
    v3 = a0->field_18;
    v4 = a0->field_30;
    v5 = *(v3);
    v7 = v6 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5;
    v8 = ~(UnaryOp GetMSBs);
    v9 = v3 + 1;
    while (true)
    {
        v0 = v4;
        v4 = v0 - 1;
        if (!((char)__CFADD__(v0, -1)))
            break;
        if ((unsigned short)v8)
        {
            v11 = (unsigned int)(v8 - 1) & (unsigned int)v8;
        }
        else
        {
            do
            {
                v12 = *(v9);
                v7 = v7 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v12;
                v13 = UnaryOp GetMSBs;
                v3 += 240;
                v9 += 1;
            } while (v13 == 65535);
            v8 = ~(v13);
            v11 = (unsigned int)v8 & (unsigned int)(4294967294 - v13);
        }
        v14 = (!(v8 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295);
        v15 = -(v14) * 240;
        v16 = *((long long *)(-232 + (char *)v3 + v15));
        v17 = *((long long *)(-224 + (char *)v3 + v15));
        v10 = uu_tail::paths::path_is_tailable::ha9fa7a9cf403217f(v16, v17);
        if (!(!(char)v10) || !(!(char)v10))
            break;
        v10 = _$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_stdin::h80a37f5a3d4ae307(v16, v17, v18, v19, v20, v21);
        v8 = v11;
        if ((char)v10)
            break;
    }
    return v10 | -0x100 | v0;
}
