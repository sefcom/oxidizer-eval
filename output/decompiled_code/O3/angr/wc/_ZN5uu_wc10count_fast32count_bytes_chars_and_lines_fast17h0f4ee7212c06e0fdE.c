long long uu_wc::count_fast::count_bytes_chars_and_lines_fast::h0f4ee7212c06e0fd(struct_0 *a0, unsigned long long a1)
{
    void* v0;  // [sp-0x4038], Other Possible Types: unsigned long long
    void* v1;  // [sp-0x4030]
    void* v2;  // [sp-0x3030]
    void* v3;  // [sp-0x2030]
    void* v4;  // [sp-0x1030]
    unsigned long v6;  // rax
    void* v7;  // r13
    int v8;  // ymm4
    int v9;  // ymm5
    int v10;  // ymm6
    int v11;  // ymm0
    int v12;  // ymm1
    int v13;  // ymm2
    int v14;  // ymm3
    unsigned long long v15;  // rdx
    void* v16;  // rcx
    void* v17;  // rax
    int v18;  // ymm0
    void* v19;  // rcx
    int v20;  // ymm1
    int v21;  // xmm2
    int v22;  // xmm3
    int v23;  // xmm2
    int v24;  // xmm3
    int v25;  // xmm2
    int v26;  // xmm2
    int v27;  // xmm2
    int v28;  // xmm2
    int v29;  // xmm2
    int v30;  // xmm0
    int v31;  // xmm3
    int v32;  // xmm3
    int v33;  // xmm2
    int v34;  // xmm2
    int v35;  // xmm2
    int v36;  // xmm1
    int v37;  // xmm1

    v4 = 0;
    v3 = 0;
    v2 = 0;
    v1 = 0;
    v0 = v6;
    v0 = 0;
    memset(&v1, 0, 0x4000);
    v7 = 0;
    while (true)
    {
        while (_$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..Read$GT$::read::he60828ebe1a3e725(a1, &v1, 0x4000))
        {
            if ((char)_ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE.llvm.4946481185994499599(v15) == 35)
            {
                _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h8a390ff74bc7419eE.llvm.4946481185994499599(v15);
            }
            else
            {
                a0->field_0 = v7;
                a0->field_8 = v0;
                a0->field_10 = 0;
                a0->field_20 = 0;
                a0[1].field_0 = v15;
                return a0;
            }
        }
        if (!v15)
        {
            a0->field_0 = v7;
            a0->field_8 = v0;
            a0->field_10 = 0;
            *((int128_t *)&a0->field_20) = 0;
            return a0;
        }
        if (v15 > 0x4000)
            core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
        v8 = v8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 49344;
        v9 = v9 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 32896;
        v10 = v10 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 18446744073709551617;
        if (v15 < 4)
        {
            v16 = 0;
            v17 = 0;
        }
        else
        {
            v17 = v15 & -4;
            v18 = v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v19 = 0;
            v20 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            do
            {
                v21 = *((short *)(&v1 + v19));
                v22 = *((short *)(&v1 + v19));
                v23 = v21 & 49344;
                v24 = v22 & 49344;
                v25 = CmpGTV(v23, 32896);
                v26 = InterleaveLOV(v25, v25);
                v27 = (unsigned long long)(v26 >> 64) CONCAT (unsigned short)((unsigned long long)v26 >> 48) CONCAT (unsigned short)((unsigned int)v26 >> 16) CONCAT (unsigned short)((unsigned int)v26 >> 16) CONCAT (unsigned short)v26;
                v28 = (unsigned int)(v27 >> 96) CONCAT (unsigned int)((unsigned long long)v27 >> 32) CONCAT (unsigned int)((unsigned long long)v27 >> 32) CONCAT (unsigned int)v27;
                v29 = v28 & 18446744073709551617;
                v30 = AddV(0, v29);
                v18 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30;
                v31 = CmpGTV(v24, 32896);
                v32 = InterleaveLOV(v31, v31);
                v14 = v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32;
                v33 = (unsigned long long)(v32 >> 64) CONCAT (unsigned short)((unsigned long long)v32 >> 48) CONCAT (unsigned short)((unsigned int)v32 >> 16) CONCAT (unsigned short)((unsigned int)v32 >> 16) CONCAT (unsigned short)v32;
                v34 = (unsigned int)(v33 >> 96) CONCAT (unsigned int)((unsigned long long)v33 >> 32) CONCAT (unsigned int)((unsigned long long)v33 >> 32) CONCAT (unsigned int)v33;
                v35 = v34 & 18446744073709551617;
                v13 = ...;
                v36 = AddV(0, v35);
                v20 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36;
                v19 += 4;
            } while (v17 != v19);
            v37 = AddV(v36, v30);
            v12 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37;
            v11 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((unsigned int)(v37 >> 96) CONCAT (unsigned int)(v37 >> 64) CONCAT (unsigned int)(v37 >> 96) CONCAT (unsigned int)(v37 >> 64)) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(AddV((unsigned int)(v37 >> 96) CONCAT (unsigned int)(v37 >> 64) CONCAT (unsigned int)(v37 >> 96) CONCAT (unsigned int)(v37 >> 64), v37));
            v16 = (unsigned long long)v11;
            if (v17 == v15)
                goto LABEL_48c19c;
        }
        do
        {
            v16 += -0x100 | (*((char *)(&v1 + v17)) & 192) != 128;
            v17 += 1;
        } while (v15 != v17);
LABEL_48c19c:
        v7 += v15;
        v0 += v16;
    }
}
