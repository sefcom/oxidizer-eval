long long uu_csplit::do_csplit::hcf79d66f02e2a63d(struct_0 *a0, struct_1 *a1, unsigned long long a2, void* a3)
{
    char v0;  // [bp-0x198]
    unsigned int v1;  // [sp-0x188]
    unsigned int v2;  // [sp-0x184]
    struct_0 *v3;  // [sp-0x180]
    char v4;  // [bp-0x170]
    char v5;  // [bp-0x168]
    char v6;  // [bp-0x160]
    unsigned long long v7;  // [sp-0x130]
    unsigned long long v8;  // [sp-0x128]
    unsigned long long v9;  // [sp-0x118]
    unsigned long long v10[4];  // [bp-0x110]
    char v11;  // [bp-0x100]
    char v12;  // [bp-0xf0]
    int v13;  // [sp-0xe8]
    int v14;  // [sp-0xd8]
    int v15;  // [sp-0xc8]
    unsigned long long v16;  // [sp-0xb8]
    int v17;  // [sp-0xa8]
    int v18;  // [sp-0x98]
    char v19;  // [bp-0x88]
    char v20;  // [bp-0x68]
    char v21;  // [bp-0x58]
    char v22;  // [bp-0x48]
    char v23;  // [bp-0x38]
    struct_0 *v25;  // r14
    int v26;  // ymm2
    int v27;  // xmm0
    int v28;  // xmm1
    int v29;  // ymm1
    int v30;  // xmm2
    unsigned long long v31;  // rax
    unsigned int v32;  // ebp
    unsigned long long v33;  // r15
    unsigned long long v34;  // rax
    unsigned long long v35;  // rbx
    int v36;  // xmm0
    int v37;  // xmm1
    unsigned long long v38;  // r13
    unsigned long long v39;  // r14
    unsigned long long v40;  // rbx
    unsigned long v41;  // r13
    void* v42;  // r14, Other Possible Types: unsigned long long
    unsigned long long v43;  // rax
    unsigned long long v44;  // rax
    unsigned long long v45;  // rax
    int v46;  // xmm0
    int v47;  // xmm1
    unsigned long long v48;  // rax
    void* v49;  // r15, Other Possible Types: unsigned long long
    unsigned long long v50;  // rbx
    int v51;  // xmm0
    int v52;  // xmm1
    unsigned long long v53;  // rax
    struct_0 *v54;  // rcx
    unsigned long v55;  // r13
    struct_0 *v56;  // r12
    struct_0 *v57;  // rcx
    struct_0 *v58;  // rbx
    int v59;  // [sp-0x158]
    int v60;  // [sp-0x148]
    unsigned long long v61;  // [sp-0x138]
    int v62;  // ymm0

    v25 = a0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h8cfd37faa97e5c9a(&v19, a2);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3521a3a7c64a9732(&v20, &v19);
    if (*((int *)&v20) == 3)
    {
        v53 = core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_csplit..patterns..Pattern$GT$$GT$::h8e8634bf2625820f(&v19);
        v25->field_0 = 12;
        return v53;
    }
    v3 = a0;
    while (true)
    {
        v16 = *((long long *)&v23);
        v27 = *((int128_t *)&v20);
        v62 = v62 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27;
        v28 = *((int128_t *)&v21);
        v29 = v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28;
        v30 = *((int128_t *)&v22);
        v26 = v26 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30;
        v15 = v30;
        v14 = v28;
        v13 = v27;
        v31 = _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hf41bf485036a1869(&v4, &v13);
        v32 = (int)v13;
        if (v32 == 2)
        {
            v2 = v31 & 0xffffffffffffff00 | 1;
            v1 = 0;
            goto LABEL_561eed;
        }
        if (v32 != 1)
        {
            v33 = (long long)(&v13)[8];
            v34 = (long long)v14;
            v35 = (long long)(&v14)[8];
            if (v34 && !v35)
                goto LABEL_562109;
            if (!v34)
            {
                v42 = 0;
                v55 = v33;
                while (true)
                {
                    v44 = uu_csplit::SplitWriter::new_writer::hf8bcfdadfd914b2e(a1);
                    if (v44)
                    {
                        v57 = v3;
                        v57->field_0 = 0;
                        *((unsigned long long *)&v57->padding_8[0]) = v44;
                        ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v4);
                        vvar_953{reg 16} = core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_csplit..patterns..Pattern$GT$$GT$::h8e8634bf2625820f(&v19);
                        return v53;
                    }
                    uu_csplit::SplitWriter::do_to_line::h079b38feb919ada0(&v59, a1, *((long long *)&v5), *((long long *)&v6), v55, a3);
                    v45 = (long long)v59;
                    if (v45 != 12)
                        break;
                    v55 += v33;
                    v42 += 1;
                }
                goto LABEL_5622e2;
            }
            else
            {
                v41 = v33;
                v42 = 0;
                v44 = uu_csplit::SplitWriter::new_writer::hf8bcfdadfd914b2e(a1);
                if (v44)
                {
                    vvar_958{reg 24} = v3;
                    v57->field_0 = 0;
                    *((unsigned long long *)&v57->padding_8[0]) = v44;
                    ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v4);
                    vvar_962{reg 16} = core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_csplit..patterns..Pattern$GT$$GT$::h8e8634bf2625820f(&v19);
                    return v53;
                }
                uu_csplit::SplitWriter::do_to_line::h079b38feb919ada0(&v59, a1, *((long long *)&v5), *((long long *)&v6), v41, a3);
                v45 = (long long)v59;
                if (v45 != 12)
                {
LABEL_5622e2:
                    v58 = v3;
                    if (!v42 || (unsigned int)v45 != 1)
                    {
                        v58->field_20 = v61;
                        *((void*)&v58->field_10) = v60;
                        *((void*)&v58->field_0) = v59;
                    }
                    else
                    {
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(v10, &v4);
                        v58->field_20 = *((long long *)&v11);
                        v58->field_10 = *((int128_t *)&v10[0]);
                        v58->field_0 = 2;
                        *((unsigned long long *)&v58->padding_8[0]) = v42;
                        core::ptr::drop_in_place$LT$uu_csplit..csplit_error..CsplitError$GT$::hc5d4aca3759c7b16(&v59);
                    }
                    ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v4);
                    vvar_947{reg 16} = core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_csplit..patterns..Pattern$GT$$GT$::h8e8634bf2625820f(&v19);
                    return v53;
                }
                v42 += 1;
                v41 += v33;
                if (!(v35 == v42))
                    continue;
                v25 = v3;
                goto LABEL_562109;
            }
        }
        v1 = v31 & 0xffffffffffffff00 | 1;
        v2 = 0;
LABEL_561eed:
        v36 = (int128_t)(&v13)[8];
        v62 = v62 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36;
        v37 = (int128_t)(&v14)[8];
        v29 = v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37;
        v18 = v37;
        v17 = v36;
        v9 = (int)(&v13)[4];
        v38 = (long long)(&v15)[8];
        v39 = v16;
        if (!v38)
        {
            v40 = 0;
            if (!(v32 == 2))
                goto LABEL_561f97;
LABEL_561f40:
            a1->field_38 = 1;
            goto LABEL_561fa9;
        }
        v40 = 1;
        if (!v39)
            goto LABEL_5620f0;
        if (v32 == 2)
            goto LABEL_561f40;
LABEL_561f97:
        v43 = uu_csplit::SplitWriter::new_writer::hf8bcfdadfd914b2e(a1);
        if (v43)
        {
LABEL_5621b7:
            v54 = v3;
            v54->field_0 = 0;
            *((unsigned long long *)&v54->padding_8[0]) = v43;
            goto LABEL_562275;
        }
LABEL_561fa9:
        uu_csplit::SplitWriter::do_to_match::h378726aac675a0d1(v10, a1, *((long long *)&v5), *((long long *)&v6), (long long)v17, (long long)(&v17)[8], *((int *)&v0), a3);
        v61 = *((long long *)&v12);
        v46 = *((int128_t *)&v10[0]);
        v62 = v62 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46;
        v47 = *((int128_t *)&v11);
        v29 = v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47;
        v60 = v47;
        v59 = v46;
        v7 = v40;
        v8 = v39;
        v48 = (long long)v59;
        if (v48 != 12)
        {
            v49 = 0;
            goto LABEL_5621d6;
        }
        v49 = 1;
        if (!v38)
        {
LABEL_562050:
            v50 = 0;
            if (!(v32 == 2))
                continue;
            goto LABEL_562043;
        }
        v50 = 1;
        if (v39 != v49)
            break;
LABEL_5620f0:
        ::0x55ca10::core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h5dc1738b513e4aba(&v17);
        v25 = v3;
LABEL_562109:
        ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v4);
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3521a3a7c64a9732(&v20, &v19);
        if (*((int *)&v20) == 3)
        {
            vvar_941{reg 16} = core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_csplit..patterns..Pattern$GT$$GT$::h8e8634bf2625820f(&v19);
            v25->field_0 = 12;
            return v53;
        }
    }
    if (v32 == 2)
    {
LABEL_562043:
        a1->field_38 = 1;
        continue;
    }
    v43 = uu_csplit::SplitWriter::new_writer::hf8bcfdadfd914b2e(a1);
    if (!(!v43))
        goto LABEL_5621b7;
    uu_csplit::SplitWriter::do_to_match::h378726aac675a0d1(v10, a1, *((long long *)&v5), *((long long *)&v6), (long long)v17, (long long)(&v17)[8], *((int *)&v0), a3);
    v61 = *((long long *)&v12);
    v51 = *((int128_t *)&v10[0]);
    v62 = v62 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51;
    v52 = *((int128_t *)&v11);
    v29 = v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52;
    v60 = v52;
    v59 = v51;
    v7 = v50;
    v8 = v39;
    v48 = (long long)v59;
    if (v48 == 12)
    {
        v49 += 1;
        if (!(!v38))
            continue;
        goto LABEL_562050;
    }
LABEL_5621d6:
    if (!v38)
    {
        v56 = v3;
        if (!((unsigned int)v48 == 3))
            goto LABEL_562256;
        v56->field_0 = 12;
    }
    else
    {
        v56 = v3;
        if (!((unsigned int)v48 == 3) || !(v39 != 1) || !(v49))
        {
LABEL_562256:
            v56->field_20 = v61;
            *((void*)&v56->field_10) = v60;
            *((void*)&v56->field_0) = v59;
            goto LABEL_562275;
        }
        else
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(v10, &v4);
            v56->field_20 = *((long long *)&v11);
            v56->field_10 = *((int128_t *)&v10[0]);
            v56->field_0 = 4;
            *((void* *)&v56->padding_8[0]) = v49;
            if ((int)v59 == 12)
            {
LABEL_562275:
                ::0x55ca10::core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h5dc1738b513e4aba(&v17);
                goto LABEL_562351;
            }
        }
    }
    core::ptr::drop_in_place$LT$uu_csplit..csplit_error..CsplitError$GT$::hc5d4aca3759c7b16(&v59);
    goto LABEL_562275;
LABEL_562351:
    ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v4);
    v53 = core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_csplit..patterns..Pattern$GT$$GT$::h8e8634bf2625820f(&v19);
    return v53;
}
