long long uu_wc::count_fast::count_bytes_chars_and_lines_fast::hc8db0c104a3d68f7(struct_0 *a0, unsigned long long a1)
{
    void* v0;  // [sp-0x4048]
    unsigned long long v1;  // [sp-0x4038]
    void* v2;  // [sp-0x4030]
    void* v3;  // [sp-0x3030]
    void* v4;  // [sp-0x2030]
    void* v5;  // [sp-0x1030]
    void* v7;  // rbx
    void* v8;  // r13
    int v9;  // ymm4
    int v10;  // ymm5
    int v11;  // ymm6
    int v12;  // ymm0
    int v13;  // ymm1
    int v14;  // ymm2
    int v15;  // ymm3
    unsigned long long v16;  // rdx
    void* v17;  // r13
    void* v18;  // rax
    int v19;  // ymm0
    void* v20;  // rcx
    int v21;  // ymm1
    int v22;  // xmm2
    int v23;  // xmm3
    int v24;  // xmm2
    int v25;  // xmm3
    int v26;  // xmm2
    int v27;  // xmm2
    int v28;  // xmm2
    int v29;  // xmm2
    int v30;  // xmm2
    int v31;  // xmm0
    int v32;  // xmm3
    int v33;  // xmm3
    int v34;  // xmm2
    int v35;  // xmm2
    int v36;  // xmm2
    int v37;  // xmm1
    int v38;  // xmm1
    struct_0 *v39;  // rax

    v5 = 0;
    v4 = 0;
    v3 = 0;
    v2 = 0;
    v7 = 0;
    memset(&v2, 0, 0x4000);
    v8 = 0;
    v0 = 0;
    while (true)
    {
        while (_$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..Read$GT$::read::he60828ebe1a3e725(a1, &v2, 0x4000))
        {
            if ((char)_ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE.llvm.4946481185994499599(v16) == 35)
            {
                _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h8a390ff74bc7419eE.llvm.4946481185994499599(v16);
            }
            else
            {
                v39 = a0;
                v39->field_0 = v0;
                v39->field_8 = v8;
                v39->field_10 = v7;
                *((int128_t *)&(&v39->field_10)[1]) = 0;
                *((unsigned long long *)((char *)&v39->field_18 + 8)) = v16;
                return v39;
            }
        }
        if (!v16)
        {
            v39 = a0;
            v39->field_0 = v0;
            v39->field_8 = v8;
            v39->field_10 = v7;
            *((int128_t *)&(&v39->field_10)[1]) = 0;
            *((long long *)((char *)&v39->field_18 + 8)) = 0;
            return v39;
        }
        if (v16 > 0x4000)
            core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
        v9 = v9 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 49344;
        v10 = v10 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 32896;
        v11 = v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 18446744073709551617;
        v1 = v8;
        if (v16 < 4)
        {
            v17 = 0;
            v18 = 0;
        }
        else
        {
            v18 = v16 & -4;
            v19 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v20 = 0;
            v21 = v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            do
            {
                v22 = *((short *)(&v2 + v20));
                v23 = *((short *)(&v2 + v20));
                v24 = v22 & 49344;
                v25 = v23 & 49344;
                v26 = CmpGTV(v24, 32896);
                v27 = InterleaveLOV(v26, v26);
                v28 = (unsigned long long)(v27 >> 64) CONCAT (unsigned short)((unsigned long long)v27 >> 48) CONCAT (unsigned short)((unsigned int)v27 >> 16) CONCAT (unsigned short)((unsigned int)v27 >> 16) CONCAT (unsigned short)v27;
                v29 = (unsigned int)(v28 >> 96) CONCAT (unsigned int)((unsigned long long)v28 >> 32) CONCAT (unsigned int)((unsigned long long)v28 >> 32) CONCAT (unsigned int)v28;
                v30 = v29 & 18446744073709551617;
                v31 = AddV(0, v30);
                v19 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31;
                v32 = CmpGTV(v25, 32896);
                v33 = InterleaveLOV(v32, v32);
                v15 = v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33;
                v34 = (unsigned long long)(v33 >> 64) CONCAT (unsigned short)((unsigned long long)v33 >> 48) CONCAT (unsigned short)((unsigned int)v33 >> 16) CONCAT (unsigned short)((unsigned int)v33 >> 16) CONCAT (unsigned short)v33;
                v35 = (unsigned int)(v34 >> 96) CONCAT (unsigned int)((unsigned long long)v34 >> 32) CONCAT (unsigned int)((unsigned long long)v34 >> 32) CONCAT (unsigned int)v34;
                v36 = v35 & 18446744073709551617;
                v14 = ...;
                v37 = AddV(0, v36);
                v21 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37;
                v20 += 4;
            } while (v18 != v20);
            v38 = AddV(v37, v31);
            v13 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38;
            v12 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((unsigned int)(v38 >> 96) CONCAT (unsigned int)(v38 >> 64) CONCAT (unsigned int)(v38 >> 96) CONCAT (unsigned int)(v38 >> 64)) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(AddV((unsigned int)(v38 >> 96) CONCAT (unsigned int)(v38 >> 64) CONCAT (unsigned int)(v38 >> 96) CONCAT (unsigned int)(v38 >> 64), v38));
            v17 = (unsigned long long)v12;
            if (v18 == v16)
                goto LABEL_48d08b;
        }
        do
        {
            v17 += -0x100 | (*((char *)(&v2 + v18)) & 192) != 128;
            v18 += 1;
        } while (v16 != v18);
LABEL_48d08b:
        v0 += v16;
        v8 = v1 + v17;
        v7 += bytecount::count::haa5dea3f1ae6a63e(&v2, v16, 10);
    }
}
