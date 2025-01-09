long long uu_csplit::do_csplit::hcf79d66f02e2a63d(struct_0 *a0, struct_1 *a1, unsigned long long a2, void* a3)
{
    unsigned long long v0;  // [sp-0x198]
    unsigned long long v1;  // [sp-0x190]
    unsigned int v2;  // [sp-0x188]
    unsigned int v3;  // [sp-0x184]
    struct_0 *v4;  // [sp-0x180]
    char v5;  // [bp-0x170]
    char v6;  // [bp-0x168]
    char v7;  // [bp-0x160]
    unsigned long long v8;  // [sp-0x130]
    unsigned long long v9;  // [sp-0x128]
    unsigned long long v10;  // [sp-0x118]
    unsigned long long v11[4];  // [bp-0x110]
    char v12;  // [bp-0x100]
    char v13;  // [bp-0xf0]
    int v14;  // [sp-0xe8]
    int v15;  // [sp-0xd8]
    int v16;  // [sp-0xc8]
    unsigned long long v17;  // [sp-0xb8]
    int v18;  // [sp-0xa8]
    int v19;  // [sp-0x98]
    char v20;  // [bp-0x88]
    char v21;  // [bp-0x68]
    char v22;  // [bp-0x58]
    char v23;  // [bp-0x48]
    char v24;  // [bp-0x38]
    struct_0 *v26;  // r14
    int v27;  // ymm0
    int v28;  // ymm1
    int v29;  // ymm2
    int v30;  // xmm0
    int v32;  // xmm1
    int v34;  // xmm2
    unsigned long long v35;  // rax
    unsigned int v36;  // ebp
    unsigned long long v37;  // r15
    unsigned long long v38;  // rax
    unsigned long long v39;  // rbx
    int v40;  // xmm0
    int v41;  // ymm0
    int v42;  // xmm1
    int v43;  // ymm1
    unsigned long long v44;  // r13
    unsigned long long v45;  // r14
    unsigned long long v46;  // rbx
    struct_0 *v47;  // r14
    void* v48;  // r14
    unsigned long long v49;  // r15
    unsigned long long v50;  // rax
    unsigned long v51;  // r13
    unsigned long long v52;  // rax
    unsigned long long v53;  // rax
    unsigned long long v55;  // rbx
    int v56;  // xmm0
    int v57;  // xmm1
    unsigned long long v58;  // rax
    unsigned long long v59;  // r15
    unsigned long long v60;  // rbx
    int v61;  // xmm0
    int v62;  // xmm1
    unsigned long long v63;  // rax
    struct_0 *v64;  // rcx
    void* v65;  // r15
    void* v66;  // r14
    unsigned long long v67;  // r15
    unsigned long v68;  // r13
    struct_0 *v70;  // r12
    struct_0 *v71;  // rcx
    unsigned long long v72;  // r14
    struct_0 *v73;  // rbx
    int v74;  // [sp-0x158]
    int v75;  // [sp-0x148]
    unsigned long long v76;  // [sp-0x138]

    v26 = a0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h8cfd37faa97e5c9a(&v20, a2);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3521a3a7c64a9732(&v21, &v20);
    if (*((int *)&v21) == 3)
    {
        v63 = core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_csplit..patterns..Pattern$GT$$GT$::h8e8634bf2625820f(&v20);
        v26->field_0 = 12;
        return v63;
    }
    v4 = a0;
    while (true)
    {
        v17 = *((long long *)&v24);
        v30 = *((int128_t *)&v21);
        v32 = *((int128_t *)&v22);
        v34 = *((int128_t *)&v23);
        v29 = v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34;
        v16 = v34;
        v15 = v32;
        v14 = v30;
        v35 = _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hf41bf485036a1869(&v5, &v14);
        v36 = (int)v14;
        if (v36 == 2)
        {
            v3 = v35 & 0xffffffffffffff00 | 1;
            v2 = 0;
            goto LABEL_561eed;
        }
        if (v36 != 1)
        {
            v37 = (long long)(&v14)[8];
            v38 = (long long)v15;
            v39 = (long long)(&v15)[8];
            if (v38 && !v39)
                goto LABEL_562109;
            if (!v38)
            {
                v66 = 0;
                while (true)
                {
                    v68 = v67;
                    v52 = uu_csplit::SplitWriter::new_writer::hf8bcfdadfd914b2e(a1);
                    if (v52)
                    {
                        v71 = v4;
                        v71->field_0 = 0;
                        *((unsigned long long *)&v71->padding_8[0]) = v52;
                        ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v5);
                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_csplit..patterns..Pattern$GT$$GT$::h8e8634bf2625820f(&v20);
                        return v63;
                    }
                    uu_csplit::SplitWriter::do_to_line::h079b38feb919ada0(&v74, a1, *((long long *)&v6), *((long long *)&v7), v68, a3);
                    v53 = (long long)v74;
                    if (v53 != 12)
                        break;
                    v66 += 1;
                    v67 = v68 + v37;
                }
                goto LABEL_5622e2;
            }
            else
            {
                v48 = 0;
                v51 = v49;
                v52 = uu_csplit::SplitWriter::new_writer::hf8bcfdadfd914b2e(a1);
                if (v52)
                {
                    vvar_972{reg 24} = v4;
                    v71->field_0 = 0;
                    *((unsigned long long *)&v71->padding_8[0]) = v52;
                    ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v5);
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_csplit..patterns..Pattern$GT$$GT$::h8e8634bf2625820f(&v20);
                    return v63;
                }
                uu_csplit::SplitWriter::do_to_line::h079b38feb919ada0(&v74, a1, *((long long *)&v6), *((long long *)&v7), v51, a3);
                v53 = (long long)v74;
                if (v53 != 12)
                {
LABEL_5622e2:
                    v73 = v4;
                    if (!v72 || (unsigned int)v53 != 1)
                    {
                        v73->field_20 = v76;
                        *((void*)&v73->field_10) = v75;
                        *((void*)&v73->field_0) = v74;
                    }
                    else
                    {
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(v11, &v5);
                        v73->field_20 = *((long long *)&v12);
                        v73->field_10 = *((int128_t *)&v11[0]);
                        v73->field_0 = 2;
                        *((unsigned long long *)&v73->padding_8[0]) = v72;
                        core::ptr::drop_in_place$LT$uu_csplit..csplit_error..CsplitError$GT$::hc5d4aca3759c7b16(&v74);
                    }
                    ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v5);
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_csplit..patterns..Pattern$GT$$GT$::h8e8634bf2625820f(&v20);
                    return v63;
                }
                v48 += 1;
                v67 = v51 + v37;
                if (!(v39 == v48))
                    continue;
                v47 = v4;
                goto LABEL_562109;
            }
        }
        v2 = v35 & 0xffffffffffffff00 | 1;
        v3 = 0;
LABEL_561eed:
        v40 = (int128_t)(&v14)[8];
        v41 = (v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
        v42 = (int128_t)(&v15)[8];
        v43 = (v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42;
        v19 = v42;
        v18 = v40;
        v10 = (int)(&v14)[4];
        v44 = (long long)(&v16)[8];
        v45 = v17;
        if (!v44)
        {
            v46 = 0;
            if (v36 == 2)
                goto LABEL_561f40;
LABEL_561f97:
            v50 = uu_csplit::SplitWriter::new_writer::hf8bcfdadfd914b2e(a1);
            if (!v50)
                goto LABEL_561fa9;
            goto LABEL_5621b7;
        }
        v46 = 1;
        if (!v45)
            goto LABEL_5620f0;
        if (!(v39 == v48))
            goto LABEL_561f97;
LABEL_561f40:
        a1->field_38 = 1;
LABEL_561fa9:
        v1 = a3;
        v0 = v10;
        uu_csplit::SplitWriter::do_to_match::h378726aac675a0d1(v11, a1, *((long long *)&v6), *((long long *)&v7), (long long)v18, (long long)(&v18)[8]);
        v76 = *((long long *)&v13);
        v56 = *((int128_t *)&v11[0]);
        v41 = v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56;
        v57 = *((int128_t *)&v12);
        v43 = v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57;
        v75 = v57;
        v74 = v56;
        v8 = v55;
        v9 = v45;
        v58 = (long long)v74;
        if (v58 != 12)
        {
            v65 = 0;
            goto LABEL_5621d6;
        }
        v59 = 1;
        if (!v44)
        {
LABEL_562050:
            v60 = 0;
            if (!(v39 == v48))
                continue;
            goto LABEL_562043;
        }
        v60 = 1;
        if (v45 != v59)
            break;
LABEL_5620f0:
        ::0x55ca10::core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h5dc1738b513e4aba(&v18);
        v47 = v4;
LABEL_562109:
        v26 = v47;
        ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v5);
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3521a3a7c64a9732(&v21, &v20);
        if (*((int *)&v21) == 3)
        {
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_csplit..patterns..Pattern$GT$$GT$::h8e8634bf2625820f(&v20);
            v26->field_0 = 12;
            return v63;
        }
    }
    if (v36 == 2)
    {
LABEL_562043:
        a1->field_38 = 1;
        continue;
    }
    v50 = uu_csplit::SplitWriter::new_writer::hf8bcfdadfd914b2e(a1);
    if (v50)
    {
LABEL_5621b7:
        v64 = v4;
        v64->field_0 = 0;
        *((unsigned long long *)&v64->padding_8[0]) = v50;
        goto LABEL_562275;
    }
    v1 = a3;
    v0 = v10;
    uu_csplit::SplitWriter::do_to_match::h378726aac675a0d1(v11, a1, *((long long *)&v6), *((long long *)&v7), (long long)v18, (long long)(&v18)[8]);
    v76 = *((long long *)&v13);
    v61 = *((int128_t *)&v11[0]);
    v41 = v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
    v62 = *((int128_t *)&v12);
    v43 = v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
    v75 = v62;
    v74 = v61;
    v8 = v60;
    v9 = v45;
    v58 = (long long)v74;
    if (v58 == 12)
    {
        v59 += 1;
        if (!(v39 == v48))
            continue;
        goto LABEL_562050;
    }
LABEL_5621d6:
    if (!v44)
    {
        v70 = v4;
        if (!(v39 == v48))
            goto LABEL_562256;
        v70->field_0 = 12;
LABEL_56224a:
        core::ptr::drop_in_place$LT$uu_csplit..csplit_error..CsplitError$GT$::hc5d4aca3759c7b16(&v74);
    }
    else
    {
        v70 = v4;
        if (!((unsigned int)v58 == 3) || !(v45 != 1) || !(v65))
        {
LABEL_562256:
            v70->field_20 = v76;
            *((void*)&v70->field_10) = v75;
            *((void*)&v70->field_0) = v74;
        }
        else
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(v11, &v5);
            v70->field_20 = *((long long *)&v12);
            v70->field_10 = *((int128_t *)&v11[0]);
            v70->field_0 = 4;
            *((void* *)&v70->padding_8[0]) = v65;
            if (!(v39 == v48))
                goto LABEL_56224a;
        }
    }
LABEL_562275:
    ::0x55ca10::core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h5dc1738b513e4aba(&v18);
    ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v5);
    v63 = core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_csplit..patterns..Pattern$GT$$GT$::h8e8634bf2625820f(&v20);
    return v63;
}
