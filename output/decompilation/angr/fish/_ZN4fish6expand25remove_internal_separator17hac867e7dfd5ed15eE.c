long long fish::expand::remove_internal_separator(struct_0 *a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx
    unsigned int *v5;  // rdx
    unsigned long long v6;  // rsi
    unsigned int *v7;  // rax
    unsigned long v8;  // rsi
    unsigned long long v9;  // rdi
    void* v10;  // r8
    int v11;  // ymm7, Other Possible Types: uint256_t
    uint256_t v12;  // ymm6
    int v13;  // xmm7
    int v14;  // xmm5
    int v15;  // xmm5
    int v16;  // xmm7
    int v17;  // xmm7
    int v18;  // xmm6
    uint256_t v19;  // ymm6
    int v20;  // xmm7
    uint128_t v21;  // xmm7
    int v22;  // ymm7, Other Possible Types: uint256_t
    int v23;  // xmm5
    uint128_t v24;  // xmm5
    uint256_t v25;  // ymm5
    int v26;  // xmm7
    int v27;  // xmm5
    int v28;  // xmm5
    int v29;  // xmm7
    int v30;  // xmm6
    uint128_t v31;  // xmm6
    int v32;  // xmm5
    uint128_t v33;  // xmm5
    int v34;  // xmm7
    int v35;  // xmm6
    unsigned int v36;  // edi
    int v37;  // ymm5, Other Possible Types: uint256_t

    v0 = v2;
    v3 = a0.retain();
    if (!a1)
        return v3;
    v4 = a0->field_10;
    if (!v4)
        return v3;
    v5 = a0->field_8;
    v6 = 4611686018427387903 & v4 - 1;
    v7 = v5;
    if (v6 >= 7)
    {
        v8 = v6 + 1;
        v9 = v8 & 18446744073709551608;
        v7 = &v5[v9];
        v10 = 0;
        do
        {
            v13 = *((int128_t *)((char *)v5 + 0x4 * v10));
            v14 = v13;
            v15 = CmpEQV(v14, 5149196739325958619997278113431008);
            v16 = AddV(v13, 340277217803427300037465691825203249696);
            v17 = v16 ^ 0x80000000800000008000000080000000;
            v18 = CmpGTV(170141183737767800596176089566303748099, v17);
            v19 = (v12 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183737767800596176089566303748099) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18;
            v20 = v15;
            v21 = ~(v20) & 3327582826373865430205035708458;
            v22 = ((((v11 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v13) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v16) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v17) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v20) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21;
            v23 = ShrNV(v15, 26);
            v24 = v23 | v21;
            v25 = (((v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v14) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v15) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v23) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24;
            if (!((char)v19 & 1))
            {
                if (((char)((unsigned long long)v18 >> 32) & 1))
                    goto LABEL_13adb16;
                goto LABEL_13ada5b;
            }
            else
            {
                *((unsigned int *)((char *)v5 + 0x4 * v10)) = v25;
                if (!((char)((unsigned long long)v18 >> 32) & 1))
                {
LABEL_13ada5b:
                    if (((char)(v18 >> 64) & 1))
                        goto LABEL_13adb32;
                    goto LABEL_13ada6b;
                }
                else
                {
LABEL_13adb16:
                    v22 = v22 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((unsigned int)((unsigned long long)v24 >> 32) CONCAT (unsigned int)((unsigned long long)v24 >> 32) CONCAT (unsigned int)((unsigned long long)v24 >> 32) CONCAT (unsigned int)((unsigned long long)v24 >> 32));
                    *((unsigned int *)(4 + (char *)v5 + 0x4 * v10)) = v22;
                    if (!((char)(v18 >> 64) & 1))
                    {
LABEL_13ada6b:
                        if (!((char)(v18 >> 96) & 1))
                            goto LABEL_13ada83;
                        goto LABEL_13ada77;
                    }
                    else
                    {
LABEL_13adb32:
                        v22 = v22 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((unsigned int)(v24 >> 96) CONCAT (unsigned int)(v24 >> 64) CONCAT (unsigned int)(v24 >> 96) CONCAT (unsigned int)(v24 >> 64));
                        *((unsigned int *)(8 + (char *)v5 + 0x4 * v10)) = v22;
                        if (!((char)(v18 >> 96) & 1))
                            goto LABEL_13ada83;
LABEL_13ada77:
                        v25 = v25 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((unsigned int)(v24 >> 96) CONCAT (unsigned int)(v24 >> 96) CONCAT (unsigned int)(v24 >> 96) CONCAT (unsigned int)(v24 >> 96));
                        *((unsigned int *)(12 + (char *)v5 + 0x4 * v10)) = v25;
LABEL_13ada83:
                        v26 = *((int128_t *)(16 + (char *)v5 + 0x4 * v10));
                        v27 = v26;
                        v28 = CmpEQV(v27, 5149196739325958619997278113431008);
                        v29 = AddV(v26, 340277217803427300037465691825203249696);
                        v30 = v28;
                        v31 = ~(v30) & 3327582826373865430205035708458;
                        v32 = ShrNV(v28, 26);
                        v33 = v32 | v31;
                        v37 = (((v25 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33;
                        v34 = v29 ^ 0x80000000800000008000000080000000;
                        v11 = ((v22 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34;
                        v35 = CmpGTV(170141183737767800596176089566303748099, v34);
                        v12 = (((v19 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183737767800596176089566303748099) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35;
                        if (!((char)v12 & 1))
                        {
                            if (((char)((unsigned long long)v35 >> 32) & 1))
                                goto LABEL_13adb77;
                            goto LABEL_13adad2;
                        }
                        else
                        {
                            *((unsigned int *)(16 + (char *)v5 + 0x4 * v10)) = v37;
                            if (!((char)((unsigned long long)v35 >> 32) & 1))
                            {
LABEL_13adad2:
                                if (((char)(v35 >> 64) & 1))
                                    goto LABEL_13adb93;
                                goto LABEL_13adae2;
                            }
                            else
                            {
LABEL_13adb77:
                                v11 = v11 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((unsigned int)((unsigned long long)v33 >> 32) CONCAT (unsigned int)((unsigned long long)v33 >> 32) CONCAT (unsigned int)((unsigned long long)v33 >> 32) CONCAT (unsigned int)((unsigned long long)v33 >> 32));
                                *((unsigned int *)(20 + (char *)v5 + 0x4 * v10)) = v11;
                                if (!((char)(v35 >> 64) & 1))
                                {
LABEL_13adae2:
                                    if (!((char)(v35 >> 96) & 1))
                                        continue;
                                    goto LABEL_13adbaf;
                                }
                                else
                                {
LABEL_13adb93:
                                    v11 = v11 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((unsigned int)(v33 >> 96) CONCAT (unsigned int)(v33 >> 64) CONCAT (unsigned int)(v33 >> 96) CONCAT (unsigned int)(v33 >> 64));
                                    *((unsigned int *)(24 + (char *)v5 + 0x4 * v10)) = v11;
                                    if (!((char)(v35 >> 96) & 1))
                                        continue;
LABEL_13adbaf:
                                    v37 = v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((unsigned int)(v33 >> 96) CONCAT (unsigned int)(v33 >> 96) CONCAT (unsigned int)(v33 >> 96) CONCAT (unsigned int)(v33 >> 96));
                                    *((unsigned int *)(28 + (char *)v5 + 0x4 * v10)) = v37;
                                }
                            }
                        }
                    }
                }
            }
            v10 += 8;
        } while (v9 != v10);
        if (v8 == v9)
            return &v5[v9];
    }
    do
    {
        v36 = *(v7) + -64992;
        if (v36 <= 2)
            *(v7) = *((int *)(17703668 + 4 * v36));
        v7 += 1;
    } while (v7 != &v5[v4]);
    return v7;
}
