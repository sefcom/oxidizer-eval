long long uu_fmt::linebreak::compute_demerits(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]
    int v3;  // xmm2
    int v4;  // xmm2
    int v5;  // xmm1
    int v6;  // xmm3
    int v7;  // ymm3
    uint256_t v8;  // ymm3
    int v9;  // xmm3
    int v11;  // xmm3
    unsigned long long v12;  // 4096
    unsigned long v13;  // cc_ndep
    unsigned long long v14;  // xmm1lq
    unsigned long long v16;  // rcx
    unsigned long long v17;  // rcx
    unsigned long v18;  // cc_ndep
    void* v19;  // cc_ndep
    int v22;  // xmm1
    int v24;  // xmm2
    unsigned long long v27;  // rdi
    unsigned long long v28;  // xmm2lq
    unsigned long long v30;  // rdx
    unsigned long long v31;  // rdx
    int v33;  // xmm0
    int v34;  // xmm1
    unsigned long long v35;  // xmm0lq
    unsigned long long v37;  // rdx
    unsigned long long v38;  // rdx

    if (a1 < 0)
        v4 = AddV(v3, v3);
    v6 = DivV(v5, v4);
    v8 = v7 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6;
    v9 = v6;
    if (!a0)
    {
        v8 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        v9 = 0;
    }
    v11 = v9;
    if (a0)
    {
        v27 = 10000001;
        if (((CmpF((unsigned long long)v6 & 9223372034707292159, 0x3f800000) & 69 | (char)((CmpF((unsigned long long)v6 & 9223372034707292159, 0x3f800000) & 69) >> 6)) & 1) != 1)
        {
            if (a1 <= a2)
                goto LABEL_4624d7;
            v12 = a1;
            if ((char)_ccall(8, 8, v12, a2, v13))
                goto LABEL_4624db;
LABEL_462472:
            v19 = v12 < a2;
            if (!((char)_ccall(8, 28, a1 - 1, 0, (unsigned long long)(v12 < a2))))
                goto LABEL_4624f8;
LABEL_46247f:
            v24 = AddV(v3, v3);
            goto LABEL_462500;
        }
    }
    v14 = (unsigned long long)(MulV(MulV(MulV(v11, v11), v11) & 170141183420855150465331762880109871103, 0x42c80000));
    if (!((CmpF(v14, 1593835519) & 69 | (char)((CmpF(v14, 1593835519) & 69) >> 6)) & 1))
        v16 = 9223372036854775807;
    else
        v16 = v14;
    v17 = v16;
    if (!((char)_ccall(11, 0, (unsigned long long)(CmpF(v14, v14) & 69), 0, v18)))
        v17 = 0;
    v19 = _ccall(0, (unsigned long long)(CmpF(v14, v14) & 69), 0, v18);
    v27 = v17 + 1;
    if (a1 <= a2)
    {
LABEL_4624d7:
        v31 = 0;
        goto LABEL_462537;
    }
    v12 = a1;
    if (!((char)_ccall(8, 8, v12, a2, v19)))
        goto LABEL_462472;
LABEL_4624db:
    v22 = AddV(v5, v5);
    v19 = 0;
    if ((char)_ccall(8, 28, a1 - 1, 0, 0))
        goto LABEL_46247f;
LABEL_4624f8:
LABEL_462500:
    v28 = (unsigned long long)(MulV(MulV(MulV(DivV(v22, v24), DivV(v22, v24)), DivV(v22, v24)) & 170141183420855150465331762880109871103, 0x43960000));
    if (!((CmpF(v28, 1593835519) & 69 | (char)((CmpF(v28, 1593835519) & 69) >> 6)) & 1))
        v30 = 9223372036854775807;
    else
        v30 = v28;
    v31 = v30;
    if (!((char)_ccall(11, 0, (unsigned long long)(CmpF(v28, v28) & 69), 0, v19)))
        v31 = 0;
LABEL_462537:
    v0 = 9223372036854775807;
    v34 = SubV(v11, v33);
    v35 = (unsigned long long)(MulV(MulV(MulV(MulV(SubV(v11, v33), 0x3f000000), MulV(SubV(v11, v33), 0x3f000000)), MulV(SubV(v11, v33), 0x3f000000)) & 170141183420855150465331762880109871103, 0x44160000));
    if (!((CmpF(v35, 1593835519) & 69 | (char)((CmpF(v35, 1593835519) & 69) >> 6)) & 1))
        v37 = 9223372036854775807;
    else
        v37 = v35;
    v38 = v37;
    v1 = v8;
    return core::num::<impl i64>::pow(v27 + v31 + ((char)_ccall(11, 0, (unsigned long long)(CmpF(v35, v35) & 69), 0, v19) ? v38 : 0));
}
