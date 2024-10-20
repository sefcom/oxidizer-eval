long long uu_sort::GlobalSettings::init_precomputed::h192846d18b0dbdf9(struct_2 *a0)
{
    struct_0 *v1;  // rcx
    unsigned long long v2;  // rax
    unsigned long long v3;  // r8
    struct_0 *v4;  // rcx
    struct_0 *v5;  // rsi
    unsigned long long v6;  // rdx
    unsigned long long v8;  // rsi
    void* v9;  // rsi
    void* v10;  // rdx
    void* v11;  // r8
    struct_1 *v12;  // r10
    char *v13;  // r9
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rsi
    void* v16;  // rdx
    void* v17;  // r8
    struct_1 *v18;  // r10
    char *v19;  // r9
    unsigned long long v20;  // rdx
    void* v21;  // rdx
    struct_1 *v22;  // rsi
    int v23;  // ymm0
    int v24;  // ymm0
    int v25;  // ymm1
    int v26;  // ymm1
    unsigned long long v27;  // rdx
    int v28;  // ymm4
    int v29;  // ymm5
    int v30;  // xmm4
    int v31;  // xmm5
    int v32;  // xmm4
    int v33;  // xmm4
    int v34;  // xmm4
    int v35;  // xmm4
    int v36;  // xmm4
    int v37;  // xmm0
    int v38;  // xmm5
    int v39;  // xmm5
    int v40;  // xmm4
    int v41;  // xmm4
    int v42;  // xmm4
    int v43;  // xmm1
    unsigned long long v45;  // rax
    char *v46;  // rcx

    v1 = a0->field_8;
    v2 = a0->field_10;
    v3 = v2 * 56;
    do
    {
        v5 = v4;
        v6 = v3;
    } while (v6 && (v3 = v6 - 56, !v5->field_36));
    a0->field_60 = v6;
    if (!v2)
    {
        a0->field_58 = 0;
        a0->field_48 = 0;
        v9 = 0;
    }
    else
    {
        v8 = (unsigned int)v2 & 3;
        if (v2 < 4)
        {
            v10 = 0;
            v11 = 0;
        }
        else
        {
            v12 = &v1[4].padding_0[3];
            v10 = 0;
            v11 = 0;
            do
            {
                v10 = v12->field_-a8 + v12->field_-70 + v12->field_-38 + v12->field_0 + v10;
                v11 += 4;
                v12 = &v12[1].padding_-a7[54];
            } while ((v2 & -4) != v11);
        }
        if (v8)
        {
            v13 = 0;
            do
            {
                v10 += *((char *)(55 + 0x38 * v11 + (char *)v1 + v13));
                v13 += 56;
            } while (v8 * 56 != v13);
        }
        a0->field_58 = v14;
        v15 = (unsigned int)v2 & 3;
        if (v2 < 4)
        {
            v16 = 0;
            v17 = 0;
        }
        else
        {
            v18 = &v1[4].padding_0[1];
            v16 = 0;
            v17 = 0;
            do
            {
                v16 = (-0x100 | v18->field_-70 < 2) + (-0x100 | v18->field_0 < 2) + v16 + (v18->field_-38 < 2) + (v18->field_-a8 < 2);
                v17 += 4;
                v18 = &v18[1].padding_-a7[54];
            } while ((v2 & -4) != v17);
        }
        if (v15)
        {
            v19 = 0;
            do
            {
                v20 += *((char *)(53 + 0x38 * v17 + (char *)v1 + v19)) < 2;
                v19 += 56;
            } while (v15 * 56 != v19);
        }
        a0->field_48 = v20;
        if (v2 < 4)
        {
            v9 = 0;
            v21 = 0;
            goto LABEL_4c0166;
        }
        else
        {
            v21 = v2 & -4;
            v22 = &v1[4].padding_0[1];
            v24 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v26 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            do
            {
                v30 = v22->field_-38 * 0x100 | v22->field_0;
                v31 = v22->field_-a8 * 0x100 | v22->field_-70;
                v32 = CmpEQV(v30, 514);
                v33 = InterleaveLOV(v32, v32);
                v34 = (unsigned long long)(v33 >> 64) CONCAT (unsigned short)((unsigned long long)v33 >> 48) CONCAT (unsigned short)((unsigned int)v33 >> 16) CONCAT (unsigned short)((unsigned int)v33 >> 16) CONCAT (unsigned short)v33;
                v35 = (unsigned int)(v34 >> 96) CONCAT (unsigned int)((unsigned long long)v34 >> 32) CONCAT (unsigned int)((unsigned long long)v34 >> 32) CONCAT (unsigned int)v34;
                v36 = v35 & 18446744073709551617;
                v37 = AddV(0, v36);
                v24 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37;
                v38 = CmpEQV(v31, 514);
                v39 = InterleaveLOV(v38, v38);
                v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39;
                v40 = (unsigned long long)(v39 >> 64) CONCAT (unsigned short)((unsigned long long)v39 >> 48) CONCAT (unsigned short)((unsigned int)v39 >> 16) CONCAT (unsigned short)((unsigned int)v39 >> 16) CONCAT (unsigned short)v39;
                v41 = (unsigned int)(v40 >> 96) CONCAT (unsigned int)((unsigned long long)v40 >> 32) CONCAT (unsigned int)((unsigned long long)v40 >> 32) CONCAT (unsigned int)v40;
                v42 = v41 & 18446744073709551617;
                v28 = ...;
                v43 = AddV(0, v42);
                v26 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
                v22 = &v22[1].padding_-a7[54];
            } while (v27 != 4);
            v9 = (unsigned long long)(v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((unsigned int)(AddV(v43, v37) >> 96) CONCAT (unsigned int)(AddV(v43, v37) >> 64) CONCAT (unsigned int)(AddV(v43, v37) >> 96) CONCAT (unsigned int)(AddV(v43, v37) >> 64)) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(AddV((unsigned int)(AddV(v43, v37) >> 96) CONCAT (unsigned int)(AddV(v43, v37) >> 64) CONCAT (unsigned int)(AddV(v43, v37) >> 96) CONCAT (unsigned int)(AddV(v43, v37) >> 64), AddV(v43, v37))));
            if (v2 != v21)
            {
LABEL_4c0166:
                v45 = v2 - v21;
                v46 = 53 + (char *)v1 + 0x38 * v21;
                do
                {
                    v9 += -0x100 | *(v46) == 2;
                    v46 += 56;
                    v2 = v45 - 1;
                } while (v45 != 1);
            }
        }
    }
    a0->field_50 = v9;
    return v2;
}
