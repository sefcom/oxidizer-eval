long long uu_sort::Line::create::h182f0e89cea5c38e(unsigned long long a0[3], char *a1, unsigned long long a2, unsigned long a3, struct_2 *a4, unsigned long long a5[3])
{
    unsigned long long v0;  // [sp-0xb0]
    unsigned long long *v1;  // [sp-0xa8]
    struct struct_3 **v2;  // [sp-0xa0]
    struct struct_3 **v3;  // [sp-0x98]
    unsigned long long v4;  // [sp-0x80]
    unsigned long long v5;  // [sp-0x78]
    char *v6;  // [sp-0x68]
    char v7;  // [bp-0x60]
    char v8;  // [bp-0x58]
    char v9;  // [bp-0x50]
    char v10;  // [bp-0x48]
    unsigned long long v11;  // [sp-0x3c]
    char v12;  // [sp-0x34]
    struct_0 *v13;  // [bp+0x8]
    unsigned long long v14;  // rbp
    char *v15;  // r15
    struct_0 *v16;  // rbx
    struct_2 *v17;  // 4096
    struct_2 *v19;  // r8
    unsigned long long v20;  // rax
    char v21[56];  // r14
    unsigned long long v23[3];  // 4096
    unsigned long long v24;  // rbx
    unsigned long long v25[3];  // r12
    unsigned long long v26;  // cc_ndep
    int v27;  // ymm0
    int v28;  // ymm1
    unsigned long long v29;  // rcx
    char *v30;  // r12
    char *v31;  // rdx
    char *v32;  // r13
    char *v33;  // r12
    unsigned long long v34;  // rax
    char *v35;  // rdx
    char *v36;  // r15
    char *v38;  // rax
    unsigned long long v39;  // rbp
    struct_2 *v40;  // 4096
    char *v41;  // r13
    char *v46;  // xmm0lq
    unsigned long v49;  // cc_ndep
    struct_2 *v52;  // rdi
    unsigned long long v53;  // rax
    struct_2 *v55;  // rdi
    unsigned long long *v57;  // r13
    struct_2 *v58;  // rdi
    struct_2 *v59;  // rdi
    struct_2 *v60;  // rdi
    unsigned long long *v61;  // rax
    unsigned long long *v62;  // rcx
    unsigned long long *v63;  // rcx
    struct_2 *v64;  // rdi
    unsigned long long *v65;  // rcx
    unsigned long long *v66;  // rdx
    unsigned long long *v67;  // cc_dep1
    unsigned long long *v68;  // cc_dep2
    unsigned long long *v69;  // rdx
    struct_4 *v70;  // rax
    unsigned long long *v71;  // rcx
    unsigned long long *v72;  // rdx
    unsigned long long *v73;  // rdx
    unsigned long long *v74;  // rcx
    unsigned long long *v75;  // rdx
    unsigned long long *v76;  // rdx
    unsigned long long v77;  // rbx

    v14 = a2;
    v15 = a1;
    v16 = v13;
    a5[2] = 0;
    if ((char)vvar_524)
        uu_sort::tokenize::h70667f0b27298df7(a1, a2, v16->field_78, a5);
    v19 = v17;
    v20 = v16->field_10;
    if (!v20)
    {
        a0[0] = v15;
        a0[1] = v14;
        a0[2] = a3;
        return a0;
    }
    v21 = v16->field_8;
    v2 = &v19->field_10;
    v4 = &v19->field_18;
    v1 = &v19->padding_30[0];
    v3 = &v19[1].field_0;
    v0 = a2;
    v6 = a1;
    do
    {
        v24 = v20 * 56;
        v25 = v23;
        v29 = (!v21[54] ? 0 : v25[1]);
        v30 = uu_sort::FieldSelector::get_range::h91411669e247756b(v21, v15, v14, v29, v25[2]);
        v32 = v31 - v30;
        if (v31 < v30)
            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        if (v30)
        {
            if (v30 >= v14)
            {
                if (v30 != v14)
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
            else
            {
                if (*((char *)(v15 + v30)) <= 191)
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
        }
        if (v31)
        {
            if (v31 >= v14)
            {
                if (v31 != v14)
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
            else
            {
                if (*((char *)(v15 + v31)) <= 191)
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
        }
        v33 = v30 + v15;
        v34 = v21[53];
        if ((unsigned int)v34 < 2)
        {
            v12 = (char)v34 == 1;
            v11 = 0x2e00110000;
            uu_sort::numeric_str_cmp::NumInfo::parse::h536ee64c31bb4548(&v7, v33, v32, &v11);
            v35 = *((long long *)&v9);
            v36 = *((long long *)&v10);
            if (v36 < v35)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            v39 = v8;
            if (v35)
            {
                if (v35 >= v32)
                {
                    if (v35 != v32)
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                }
                else
                {
                    if (*((char *)(v33 + v35)) <= 191)
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                }
            }
            if (v36)
            {
                if (v36 >= v32)
                {
                    if (v36 != v32)
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                }
                else
                {
                    if (*((char *)(v33 + v36)) <= 191)
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                }
            }
            v5 = *((long long *)&v7);
            v33 += v35;
        }
        else if ((unsigned int)v34 != 2)
        {
            v39 = v14 | -0x100 | 4;
        }
        else
        {
            v38 = uu_sort::get_leading_gen::hf862211208a93c80(v33, v32, v31);
            if (v31 < v38)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            if (v38)
            {
                if (v38 >= v32)
                {
                    if (v38 != v32)
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                }
                else
                {
                    if (*((char *)(v33 + v38)) <= 191)
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                }
            }
            if (v31)
            {
                if (v31 >= v32)
                {
                    if (v31 != v32)
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                }
                else
                {
                    if (*((char *)(v33 + v31)) <= 191)
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                }
            }
            core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::hfde7dd7a3aaead31(&v7, v33 + v38, v31 - v38);
            if (v7)
            {
                v33 = 0;
            }
            else
            {
                v46 = *((long long *)&v8);
                v27 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | (uint256_t)v46;
                if (((char)((CmpF(v46, v46) & 69) >> 2) & 1))
                {
                    v33 = 1;
                }
                else
                {
                    v33 = 2;
                    v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | 0xfff0000000000000;
                    if ((CmpF(-0x10000000000000, v46) & 1))
                    {
                        v49 = amd64g_calculate_rflags_c(0, (unsigned long long)(unsigned int)(CmpF(v46, 0x7ff0000000000000) & 69), 0, v26) & 1;
                        v33 = 4 - (amd64g_calculate_rflags_c(0, (unsigned long long)(unsigned int)(CmpF(v46, 0x7ff0000000000000) & 69), 0, v26) & 1);
                    }
                }
            }
            v39 = v14 | -0x100 | 2;
        }
        v52 = v40;
        v53 = (3 <= (v39 - 2 & 4294967295 & 255 & 255 & 255) ? 1 : v39 - 2 & 4294967295 & 255 & 4294967295 & 4294967295);
        if ((char)v53 == 2)
        {
            v14 = v0;
            if (!v21[55])
                continue;
            v57 = v52->field_10;
            if (v31 == v52->field_0)
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc291189d47357eea(v52);
            v71 = v59->field_8;
            v31 = v57;
            v67 = v72 * 16;
            v68 = v72 * 8;
            v73 = v72 * 16;
            v70 = v71 + v73;
            *((char **)(v71 + v73)) = v33;
            v3 = v2;
        }
        else if ((unsigned int)v53 != 1)
        {
            v57 = *(v3);
            if (v31 == *(v1))
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h878c83d055e812a7(v1);
            v65 = v58->field_38;
            v31 = v57;
            v67 = v66 * 16;
            v68 = v66 * 8;
            v69 = v66 * 16;
            v70 = v65 + v69;
            *((char **)(v65 + v69)) = v33;
            v3 = v3;
            v0 = v0;
        }
        else
        {
            if (v62 == v52->field_18)
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h877b4fd1a8be3ed3(v4);
            v60 = v55;
            v61 = v60->field_20;
            v62 = v52->field_28;
            v63 = v62 * 16;
            *((unsigned long long *)(v61 + v63)) = v5;
            *((char *)(v61 + v63 + 8)) = 0;
            v26 = amd64g_calculate_rflags_c(32, v62 << 4, v62 << 3, v26);
            v60->field_28 = (char *)v62 + 1;
            v57 = v60->field_10;
            if (v31 == v60->field_0)
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc291189d47357eea(v60);
            v74 = v64->field_8;
            v31 = v57;
            v67 = v75 * 16;
            v68 = v75 * 8;
            v76 = v75 * 16;
            v70 = v74 + v76;
            *((char **)(v74 + v76)) = v33;
            v3 = v2;
            v0 = v0;
        }
        v70->field_8 = v41;
        v26 = amd64g_calculate_rflags_c(32, v67, v68, v26);
        *(v3) = (char *)v57 + 1;
    } while ((v21 += 56, v77 = v24 - 56, v15 = v6, v24 != 56));
}
