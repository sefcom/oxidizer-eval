long long uu_tail::follow::files::FileHandling::no_files_remaining::hf13596599d41f677(struct_1 *a0, struct_0 *a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    struct_0 *v0;  // [sp-0x38]
    struct_0 *v2;  // rax
    unsigned long long v3;  // r12
    uint128_t *v4;  // r13
    int v5;  // xmm0
    int v6;  // ymm0
    int v7;  // ymm0
    unsigned long long v8;  // rcx
    uint128_t *v9;  // rbp
    struct_0 *v10;  // rax
    unsigned int v12;  // ebx
    int v13;  // xmm0
    unsigned int v14;  // ecx
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // r14
    unsigned long long v18;  // r15
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rcx
    unsigned long long v21;  // r8
    unsigned long long v22;  // r9

    v0 = v2;
    v3 = a0->field_30;
    if (!v3)
    {
        v10 = v2 | -0x100 | 1;
        return v10;
    }
    v0 = a1;
    v4 = a0->field_18;
    v5 = *(v4);
    v7 = v6 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5;
    v8 = ~(UnaryOp GetMSBs);
    v9 = v4 + 1;
    do
    {
        if (v3 < 1)
        {
            v10 = v0 | -0x100 | !v0->field_48;
            return v10;
        }
        if ((unsigned short)v8)
        {
            v12 = (unsigned int)(v8 - 1) & (unsigned int)v8;
        }
        else
        {
            do
            {
                v13 = *(v9);
                v7 = v7 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v13;
                v14 = UnaryOp GetMSBs;
                v4 += 240;
                v9 += 1;
            } while (v14 == 65535);
            v8 = ~(v14);
            v12 = (unsigned int)v8 & (unsigned int)(4294967294 - v14);
        }
        v15 = (!(v8 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295);
        v16 = -(v15) * 240;
        v17 = *((long long *)(-232 + (char *)v4 + v16));
        v18 = *((long long *)(-224 + (char *)v4 + v16));
    } while (!(char)uu_tail::paths::path_is_tailable::ha9fa7a9cf403217f(v17, v18) && (v8 = (unsigned long long)v12, !(char)_$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_stdin::h80a37f5a3d4ae307(v17, v18, v19, v20, v21, v22)));
    return 0;
}
