long long uu_tail::parse::parse_obsolete::h8256e5b55d2b08e4(char a0[11], unsigned long long a1[3])
{
    unsigned int v0;  // [sp-0x5c]
    char v3;  // [bp-0x48]
    char v4;  // [bp-0x40]
    char v5;  // [bp-0x38]
    unsigned long long v7;  // r10
    char *v8;  // r11
    unsigned int v9;  // ebp
    char v10[4];  // rsi
    char v11[4];  // r12
    unsigned long long v12;  // r15
    char v13[4];  // rdi
    char v14[4];  // r12
    char v15[4];  // rax
    unsigned long long v16;  // rcx
    char v17[4];  // r14
    unsigned long long v18;  // rcx
    char v19[4];  // rdx
    unsigned int v20;  // r9d
    unsigned int v21;  // r8d
    unsigned int v22;  // edi
    char v23[4];  // r14
    char v24[4];  // r14
    unsigned long long v25;  // r8
    unsigned long long v26;  // cc_ndep
    struct_0 *v27;  // r12
    unsigned long long v28;  // rsi
    unsigned long long v29;  // rax
    unsigned long long v30;  // rbp
    struct_0 *v31;  // r13
    void* v32;  // rbp
    unsigned int v33;  // r9d
    unsigned long long v35;  // rbp
    struct_0 *v36;  // r13
    unsigned long long v37;  // rbp
    char v38[4];  // r14
    char v40[4];  // rax
    unsigned long long v43;  // rax
    unsigned long long v45;  // rax
    unsigned int v46;  // edx
    unsigned int v47;  // edi
    unsigned int v48;  // esi
    struct_0 *v49;  // r12
    struct_0 *v50;  // r12
    struct_0 *v51;  // r12
    unsigned long long v52;  // cc_ndep
    unsigned long long v53;  // rax
    struct_0 *v54;  // r12
    unsigned int v55;  // edx
    unsigned int v56;  // edi
    unsigned int v57;  // esi
    unsigned long long v58;  // rsi
    unsigned long long v59;  // rdx
    char v60;  // sil
    char v61;  // dil
    unsigned long long v62;  // cc_ndep
    unsigned long long v63;  // rax

    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v3, a1[1], a1[2]);
    if (*((long long *)&v3))
    {
        a0[0] = 3;
        a0[10] = 2;
        return a0;
    }
    v7 = *((long long *)&v5);
    if (v7 && (v8 = *((long long *)&v4), v9 = (unsigned int)*(v8), !(v9 != 43) || !(v9 != 45)))
    {
        v10 = v7 - 1;
        v11 = v8 + 1;
        v12 = &v8[v7];
        v13 = 0;
        do
        {
            v15 = v14;
            if (v15 == v12)
                break;
            v17 = v13;
            v18 = v15[0];
            if ((char)v18 >= 0)
            {
                v19 = &v15[1];
            }
            else
            {
                v20 = (unsigned int)v18 & 31;
                v21 = v15[1] & 63;
                if ((v18 & 255) <= 223)
                {
                    v19 = &v15[2];
                    v18 = v20 * 64 | v21;
                }
                else
                {
                    v22 = v15[2] & 63 | v21 * 64;
                    if ((v18 & 255) >= 240)
                    {
                        v19 = v15 + 1;
                        v18 = v15[3] & 63 | v22 * 64 | (v20 & 7) * 0x40000;
                    }
                    else
                    {
                        v19 = &v15[3];
                        v18 = v22 | v20 * 0x1000;
                    }
                }
            }
            v13 = v17 - v15 + (char *)v19;
            v16 = (unsigned int)v18 - 48;
        } while ((unsigned int)v16 < 10);
        v24 = v23;
        if (!v24)
        {
            v25 = 10;
        }
        else
        {
            v8 = v8;
            v7 = v7;
            if (v10 <= v24)
            {
                if (v10 != v24)
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
            else
            {
                if (*((char *)(v11 + v24)) <= 191)
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
            v10 = v10;
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u64$GT$::from_str::h29411471c0770b67(&v3, v11, v24);
            if (v3)
            {
                a0[0] = 0;
                a0[10] = 2;
                return a0;
            }
            v25 = *((long long *)&v4);
            if (v10 <= v24)
            {
                if (v10 != v24)
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
            else
            {
                if (*((char *)(v11 + v24)) <= 191)
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
        }
        v0 = v9;
        v27 = v11 + v24;
        v28 = v10 - v24;
        if (v10 == v24)
        {
            v32 = 0;
            v33 = 108;
            goto LABEL_4ba652;
        }
        v29 = v27->field_-1;
        v30 = v28 - 1;
        v31 = &v27->field_0;
        if ((char)v29 == 98)
        {
            v33 = 98;
            goto LABEL_4ba675;
        }
        v33 = v29;
        switch (v33)
        {
        case 99:
            goto LABEL_4ba675;
        case 108:
            if (v28 > 16)
            {
                core::slice::memchr::memchr_aligned::hd7c7abb492a5eb9c(102, v31);
            }
            else if (v30)
            {
                do
                {
                    v40 = v38;
                    v16 = v16 | -0x100 | *((char *)(v8 + v40 + 2)) == 102;
                } while (*((char *)(v8 + v40 + 2)) != 102 && v7 - 3 != v40);
            }
            v33 = 108;
            do
            {
                if (v31 == v12)
                {
LABEL_4ba84c:
                    v61 = v0;
                    v60 = v58 | -0x100 | v33 == 108;
                    v59 = 1;
LABEL_4ba85d:
                    v63 = v25;
                    if ((char)amd64g_calculate_condition(0, 48, v63, v59, v62))
                    {
                        a0[0] = 1;
                        a0[10] = 2;
                        return a0;
                    }
                    *((unsigned long long *)&a0[0]) = v63 * v59;
                    a0[8] = v61 != 45;
                    a0[9] = v60;
                    a0[10] = core::slice::memchr::memchr_aligned::hd7c7abb492a5eb9c(102, v36) == 1;
                    return a0;
                }
                v45 = v31->field_-1;
                if ((char)v45 >= 0)
                {
                    v26 = amd64g_calculate_rflags_c(17, v45 & 255, 0, v26);
                    v31 = &v31->field_0;
                    continue;
                }
                else
                {
                    v46 = (unsigned int)v45 & 31;
                    v47 = v31->field_0 & 63;
                    if ((v45 & 255) <= 223)
                    {
                        v31 = &v31->field_1;
                        v45 = v46 * 64 | v47;
                        continue;
                    }
                    else
                    {
                        v48 = v31->field_1 & 63 | v47 * 64;
                        if ((v45 & 255) < 240)
                        {
                            v31 = &v31->field_2;
                            v28 = v48 | v46 * 0x1000;
                            v45 = v28 & 4294967295;
                            continue;
                        }
                        else
                        {
                            v28 = v48 * 64;
                            v45 = v31->field_2 & 63 | (unsigned int)v28 | (v46 & 7) * 0x40000;
                            if ((unsigned int)v45 == 0x110000)
                                goto LABEL_4ba84c;
                            v31 = &v31->field_3;
                        }
                    }
                }
            } while ((unsigned int)v45 == 102);
        default:
            v33 = 108;
LABEL_4ba675:
            v37 = v35;
            if (v37 > 15)
            {
                break;
            }
            else
            {
                v25 = v25;
                if (v37)
                {
                    do
                    {
                        v43 = 1;
                        v16 = v16 | -0x100 | (&v36->field_0)[v43] == 102;
                    } while ((&v36->field_0)[v43] != 102 && v37 != v43);
                    break;
                }
                else
                {
                    v32 = 0;
LABEL_4ba652:
                    break;
                }
            }
            do
            {
                v51 = v50;
                if (v51 == &(&v49->field_-1)[v37])
                {
LABEL_4ba75b:
                    if (v33 == 98)
                    {
                        v59 = 0x200;
                        v60 = 0;
                        v61 = v0;
                        goto LABEL_4ba85d;
                    }
                    goto LABEL_4ba84c;
                }
                else
                {
                    v53 = v51->field_-1;
                    if ((char)v53 >= 0)
                    {
                        v52 = amd64g_calculate_rflags_c(17, v53 & 255, 0, v52);
                        v54 = &v51->field_0;
                        continue;
                    }
                    v55 = (unsigned int)v53 & 31;
                    v56 = v51->field_0 & 63;
                    if ((v53 & 255) <= 223)
                    {
                        v54 = &v51->field_1;
                        v53 = v55 * 64 | v56;
                        continue;
                    }
                    v57 = v51->field_1 & 63 | v56 * 64;
                    if ((v53 & 255) < 240)
                    {
                        v54 = &v51->field_2;
                        v28 = v57 | v55 * 0x1000;
                        v53 = v28 & 4294967295;
                        continue;
                    }
                    v28 = v57 * 64;
                    v53 = v51->field_2 & 63 | (unsigned int)v28 | (v55 & 7) * 0x40000;
                    if ((unsigned int)v53 == 0x110000)
                        goto LABEL_4ba75b;
                    v54 = &v51->field_3;
                }
            } while ((unsigned int)v53 == 102);
        }
        if ((char)v0 == 45 && v24)
        {
            a0[0] = 2;
            a0[10] = 2;
            return a0;
        }
    }
    a0[10] = 3;
    return a0;
}
