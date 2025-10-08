long long uu_mktemp::dry_exec(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long a7)
{
    unsigned long long v0;  // [bp-0xb0]
    void* v1;  // [bp-0xa0]
    char v2;  // [bp-0x88]
    void* v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    char v5;  // [bp-0x48]
    unsigned long long v6;  // r13
    unsigned long long v7;  // rdx
    void* v8;  // r12
    void* v9;  // rcx
    unsigned long v10;  // rax
    unsigned long v11;  // rcx
    int v12;  // xmm0
    uint128_t v13;  // xmm14
    int v14;  // xmm14
    int v15;  // xmm14
    int v16;  // xmm14
    uint128_t v17;  // xmm14
    int v18;  // xmm14
    int v19;  // xmm14
    uint128_t v20;  // xmm14
    int v21;  // xmm0
    int v22;  // xmm14
    uint128_t v23;  // xmm0
    int v24;  // ymm0, Other Possible Types: uint256_t
    int v25;  // xmm13
    int v26;  // xmm14
    uint128_t v27;  // xmm14
    uint128_t v28;  // xmm14
    int v29;  // ymm14, Other Possible Types: uint256_t
    unsigned long long v30;  // rdx
    uint256_t v31;  // ymm0
    uint128_t v32;  // xmm14
    int v33;  // xmm14
    int v34;  // xmm14
    int v35;  // xmm14
    uint128_t v36;  // xmm14
    int v37;  // xmm14
    int v38;  // xmm14
    uint128_t v39;  // xmm14
    int v40;  // xmm0
    int v41;  // xmm15
    uint128_t v42;  // xmm0
    uint128_t v43;  // xmm0
    char v44;  // al
    unsigned int v45;  // edx
    char v46;  // dl
    char v47;  // al

    v6 = a5 + a4;
    v0 = v6 + a7.with_capacity_in(1, 1, &g_4f9018);
    v1 = 0;
    v0.spec_extend(a3, a3 + a4);
    v0.extend_trusted(a5);
    v0.spec_extend(a6, a7 + a6);
    v8 = a4.index_mut(v6, v7, v1);
    v4 = rand::rngs::thread::rng();
    v4 + 16.fill_bytes(v8, v7);
    core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v4);
    if (v7)
    {
        if (v7 < 8)
        {
            v9 = v8;
        }
        else if (v7 < 16)
        {
            v10 = 0;
LABEL_465b8c:
            v30 = v7 & 18446744073709551608;
            v9 = v8 + v30;
            do
            {
                v31 = v24 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | *((long long *)((char *)v8 + v10));
                v32 = ShrNV((uint128_t)v31, 1) & 169473963133173273960190490760135540607;
                v33 = InterleaveHIV(0, v32);
                v34 = MulV(v33, 690586019691536059214600179879837829);
                v35 = ShrNV(v34, 8);
                v36 = ShrNV(QNarrowBinV(v35, ShrNV(MulV(InterleaveLOV(0, v32), 690586019691536059214600179879837829), 8)), 4) & 20016609818878733144904388672456953615;
                v37 = InterleaveHIV(v36, v36);
                v38 = MulV(v37, 321927317450189741889512865808646206);
                v39 = v38 & 1324055902416102970674609367438786815;
                v40 = SubV((uint128_t)v31, QNarrowBinV(v39, MulV(InterleaveLOV(v36, v36), 321927317450189741889512865808646206) & 1324055902416102970674609367438786815));
                v41 = CmpEQV(MaxV(AddV(v40, 17795682518166861558), 1880844493789993498), AddV(v40, 17795682518166861558));
                v42 = v40 | 3472328296227680304;
                v43 = v42 & v41;
                v24 = ((v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43;
                v29 = ...;
                *((unsigned long long *)((char *)v8 + v10)) = v29;
                v10 += 8;
            } while (v30 != v10);
            if (v7 == v30)
                goto LABEL_465e3e;
        }
        else
        {
            v10 = v7 & 0xfffffffffffffff0;
            v11 = 0;
            do
            {
                v12 = *((int128_t *)((char *)v8 + v11));
                v13 = ShrNV(v12, 1) & 169473963133173273960190490760135540607;
                v14 = InterleaveHIV(0, v13);
                v15 = MulV(v14, 690586019691536059214600179879837829);
                v16 = ShrNV(v15, 8);
                v17 = ShrNV(QNarrowBinV(v16, ShrNV(MulV(InterleaveLOV(0, v13), 690586019691536059214600179879837829), 8)), 4) & 20016609818878733144904388672456953615;
                v18 = InterleaveHIV(v17, v17);
                v19 = MulV(v18, 321927317450189741889512865808646206);
                v20 = v19 & 1324055902416102970674609367438786815;
                v21 = SubV(v12, QNarrowBinV(v20, MulV(InterleaveLOV(v17, v17), 321927317450189741889512865808646206) & 1324055902416102970674609367438786815));
                v22 = v21;
                v23 = v21 | 64053151420411946063694043751862251568;
                v24 = ((v24 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v12) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v21) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23;
                v25 = CmpGTV(v21, 46705422910717044004776906902399558435);
                v26 = AddV(v22, 38698778983165550746815151433416776989);
                v27 = v26 & v25;
                v28 = v27 | ~(v25) & (~(CmpEQV(MinV(AddV(v21, 328272401029611223576431974228294039286), 33361016364797888574840647787428256025), AddV(v21, 328272401029611223576431974228294039286))) & v23 | AddV(v21, 116096336949496652240445454300250330967) & CmpEQV(MinV(AddV(v21, 328272401029611223576431974228294039286), 33361016364797888574840647787428256025), AddV(v21, 328272401029611223576431974228294039286)));
                v29 = ...;
                *((uint128_t *)((char *)v8 + v11)) = v28;
                v11 += 16;
            } while (v10 != v11);
            if (v7 == v10)
                goto LABEL_465e3e;
            if (((char)v7 & 8))
                goto LABEL_465b8c;
            v9 = v10 + v8;
        }
        do
        {
            v44 = *((char *)v9);
            v45 = (v44 >> 1) * 133 >> 12;
            v46 = v45 * 64 - v45 * 2;
            v47 = v44 - v46;
            *((int *)v9) = ((v44 - v46 & 255) < 10 ? v47 | 48 : (v47 < 36 ? v47 + 87 : v47 + 29));
            v9 += 1;
        } while (v9 != v8 + v7);
    }
LABEL_465e3e:
    v3 = v1;
    memcpy(&v2, &v0, 16);
    v4.from_utf8(&v2);
    v5.unwrap(&v4);
    a0.join(a1, a2, &v5);
    return a0;
}
