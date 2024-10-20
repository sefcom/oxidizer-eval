double uu_df::filter_mount_list::h6ad03ac805d366b9(long long a0, long long a1, long long a2)
{
    char v0;  // [sp-0x18a]
    char v1;  // [sp-0x189]
    unsigned long long v2;  // [sp-0x188]
    char *v3;  // [sp-0x180]
    unsigned long long v4;  // [sp-0x178]
    unsigned long long v5;  // [sp-0x170]
    void* v6;  // [sp-0x168]
    unsigned long long v7;  // [sp-0x160]
    void* v8;  // [sp-0x158], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x150]
    unsigned long long *v10;  // [sp-0x148]
    unsigned long long v11;  // [sp-0x140]
    unsigned long long v12;  // [sp-0x138]
    unsigned long long v13;  // [sp-0x130]
    unsigned long long v14;  // [sp-0x120]
    unsigned long long v15;  // [sp-0x118]
    unsigned long long v16;  // [sp-0x110]
    unsigned long long v17;  // [sp-0x108]
    unsigned long long v18;  // [sp-0x100]
    unsigned long long v19;  // [sp-0xf8]
    unsigned long long v20;  // [sp-0xf0]
    unsigned long long *v21;  // [sp-0xe8]
    unsigned long long *v22;  // [sp-0xe0]
    unsigned long long v23;  // [sp-0xd8]
    unsigned long long *v24;  // [sp-0xd0]
    unsigned long v25;  // [sp-0xc8], Other Possible Types: unsigned long long
    char v26;  // [bp-0xc0]
    char v27;  // [bp-0xb8]
    char v28;  // [bp-0xa8]
    char v29;  // [bp-0xa0]
    char v30;  // [bp-0x90]
    char v31;  // [bp-0x88]
    char v32;  // [bp-0x70]
    char v33;  // [bp-0x60]
    char v34;  // [bp-0x58]
    char v35;  // [bp-0x38]
    char v36;  // [bp-0x37]
    unsigned long long *v38;  // rsi
    unsigned long long v39;  // rax
    unsigned long long *v40;  // rsi
    unsigned long long *v41;  // r13
    unsigned long long *v43;  // r13
    unsigned long long v45;  // r14
    void* v46;  // r15
    unsigned long long v47;  // rbx
    unsigned long long v48;  // r14
    void* v49;  // r15
    unsigned long long v50;  // rbx
    unsigned long long v51;  // rbp
    void* v52;  // r12
    void* v53;  // r12
    unsigned long long v54;  // rax
    unsigned long long v55;  // r15
    unsigned long v56;  // rdx
    unsigned long long v57;  // r15
    unsigned long v58;  // rdx
    unsigned long long v59;  // r14
    unsigned long long v60;  // rbx
    int v61;  // xmm0
    int v62;  // ymm0

    v6 = 0;
    v7 = 8;
    v8 = 0;
    v38 = a1->field_8;
    v39 = a1->field_10;
    v21 = v38;
    v22 = v38;
    v23 = a1->field_0;
    v10 = &v38[19 * v39];
    v24 = v10;
    if (!v39)
    {
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h92c8ad0629719674(&v21);
        a0->field_10 = v8;
        v61 = *((int128_t *)&v6);
        *((void*)&a0->field_0) = v61;
        return (unsigned long long)(v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61);
    }
    v1 = a2->field_50;
    v0 = a2->field_51;
    v18 = a2->field_30;
    v13 = a2->field_38;
    v17 = a2->field_18;
    v12 = a2->field_20;
    v16 = a2->field_40;
    v20 = v16 * 24;
    v14 = a2->field_28;
    v19 = v14 * 24;
    do
    {
        v40 = v38;
        v41 = v40 + 19;
        if (v25 == 0x8000000000000000)
            goto LABEL_490079;
        v25 = *(v40);
        memcpy(&v26, v40 + 1, 144);
        if (!(!v35) && !(!v1) || !(!v36) && !(v0))
        {
LABEL_48fcfe:
            core::ptr::drop_in_place$LT$uucore..features..fsext..MountInfo$GT$::hf2f9e5fa85804c64(&v25);
            goto LABEL_48fd0b;
        }
        if (v18 != 0x8000000000000000 && v16)
        {
            v45 = *((long long *)&v31);
            v46 = 0;
            if (*((long long *)(16 + v13 + (char *)v46)) == v45 && !bcmp(*((long long *)(8 + v13 + (char *)v46)), *((long long *)&v30), v45))
                goto LABEL_48fcfe;
            v46 += 24;
            if (!(v20 == v46))
                continue;
        }
        if (v17 != 0x8000000000000000)
        {
            if (!v14)
                goto LABEL_48fcfe;
            v47 = *((long long *)&v30);
            v48 = *((long long *)&v31);
            v49 = 0;
            while (!(*((long long *)(16 + v12 + (char *)v49)) == v48) || !(!bcmp(*((long long *)(8 + v12 + (char *)v49)), v47, v48)))
            {
                v49 += 24;
                if (v19 == v49)
                    goto LABEL_48fcfe;
            }
        }
        v50 = v7;
        v5 = v8;
        if (v5)
        {
            v11 = *((long long *)&v26);
            v51 = *((long long *)&v27);
            v3 = *((long long *)&v28);
            v4 = *((long long *)&v29);
            v2 = *((long long *)&v34);
            v9 = *((long long *)&v33);
            v15 = *((long long *)&v32);
            if (!v15)
            {
                v53 = 0;
                do
                {
                    if (*((long long *)(16 + v50 + (char *)v53)) == v51 && !bcmp(*((long long *)(8 + v50 + (char *)v53)), v11, v51) && (!v4 || *(v3) != 47 || *((long long *)(40 + v50 + (char *)v53)) && *((char *)*((long long *)(32 + v50 + (char *)v53))) == 47) && (v57 = *((long long *)(112 + v50 + (char *)v53)), v2 >= v57))
                    {
                        v58 = v4;
                        if (!(v58 != *((long long *)(40 + v50 + (char *)v53))) && !(bcmp(v3, *((long long *)(32 + v50 + (char *)v53)), v58)) || !(v2 == v57) || !(!bcmp(v9, *((long long *)(104 + v50 + (char *)v53)), v2)))
                            goto LABEL_48fcfe;
                    }
                } while ((v53 += 152, v5 * 152 != v53));
            }
            else
            {
                v52 = 0;
                do
                {
                    if (*((long long *)(16 + v50 + (char *)v52)) == v51 && !bcmp(*((long long *)(8 + v50 + (char *)v52)), v11, v51) && (!v4 || *(v3) != 47 || *((long long *)(40 + v50 + (char *)v52)) && *((char *)*((long long *)(32 + v50 + (char *)v52))) == 47))
                    {
                        v54 = *((long long *)(88 + v50 + (char *)v52));
                        v55 = *((long long *)(112 + v50 + (char *)v52));
                        if (!v54)
                        {
                            if (v2 < v55)
                                continue;
                        }
                        else
                        {
                            if (v2 < v55 && v15 <= v54)
                                continue;
                        }
                        v56 = v4;
                        if (!(v56 != *((long long *)(40 + v50 + (char *)v52))) && !(bcmp(v3, *((long long *)(32 + v50 + (char *)v52)), v56)) || !(v2 == v55) || !(!bcmp(v9, *((long long *)(104 + v50 + (char *)v52)), v2)))
                            goto LABEL_48fcfe;
                    }
                } while ((v53 += 152, v5 * 152 != v53));
            }
        }
        v59 = v5;
        if (v59 == v6)
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb9884c59a2d13cf1(&v6);
            v60 = v7;
        }
        memcpy(v59 * 152 + v60, &v25, 152);
        v8 = v59 + 1;
LABEL_48fd0b:
    } while (v41 != v10);
    v43 = v10;
LABEL_490079:
    v22 = v43;
}
