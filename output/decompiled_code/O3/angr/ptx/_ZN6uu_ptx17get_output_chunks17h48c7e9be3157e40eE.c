long long uu_ptx::get_output_chunks::h48c7e9be3157e40e(struct_0 *a0, unsigned int *a1, unsigned long a2, unsigned long a3, unsigned int *a4, unsigned long a5)
{
    void* v0;  // [sp-0x1c0], Other Possible Types: unsigned long long
    void* v1;  // [sp-0x1b8], Other Possible Types: unsigned long long
    void* v2;  // [sp-0x1b0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x1a8]
    void* v4;  // [sp-0x1a0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x198]
    void* v6;  // [sp-0x190]
    void* v7;  // [sp-0x178], Other Possible Types: int, unsigned long
    unsigned long long v8;  // [sp-0x170]
    void* v9;  // [sp-0x168], Other Possible Types: unsigned long long
    void* v10;  // [sp-0x160], Other Possible Types: unsigned long
    char v11;  // [bp-0x158], Other Possible Types: unsigned long long
    void* v12;  // [bp-0x150], Other Possible Types: char, unsigned long long
    void* v13;  // [sp-0x148], Other Possible Types: int, unsigned long
    unsigned long long v14;  // [sp-0x140]
    void* v15;  // [sp-0x138], Other Possible Types: unsigned long long
    unsigned long v16;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long v17;  // [sp-0x120], Other Possible Types: unsigned long long
    void* v18;  // [sp-0x118], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v19;  // [sp-0x110]
    void* v20;  // [sp-0x108]
    void* v21;  // [sp-0x100], Other Possible Types: unsigned long long
    void* v22;  // [sp-0xf8]
    unsigned long long v23;  // [sp-0xf0]
    void* v24;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0xe0]
    unsigned long long v26;  // [sp-0xd8]
    unsigned long long v27;  // [sp-0xd0]
    unsigned long long v28;  // [sp-0xc8]
    void* v29;  // [sp-0xc0]
    unsigned long long v30;  // [sp-0xb0]
    unsigned long long v31;  // [sp-0xa8]
    unsigned int *v32;  // [sp-0xa0]
    unsigned long v33;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v34;  // [sp-0x90]
    unsigned long long v35;  // [sp-0x88]
    unsigned long long v36;  // [sp-0x80]
    unsigned long long v37;  // [sp-0x78]
    char v38;  // [bp-0x60]
    char v39;  // [bp-0x50]
    char v40;  // [bp-0x48]
    char v41;  // [bp-0x38]
    unsigned long long v42[11];  // [bp+0x8]
    unsigned long long v43[11];  // rsi
    unsigned long long v44;  // rax
    unsigned long long v45;  // r12
    void* v46;  // r13
    void* v47;  // rbp
    unsigned long long v48;  // rcx
    unsigned long long v49;  // rax
    unsigned long long v50;  // rax
    unsigned long long v51;  // rax
    unsigned long v52;  // r15
    unsigned int *v53;  // rdx
    void* v54;  // rax
    unsigned long long v55;  // rax
    unsigned long long v56;  // rcx
    void* v57;  // r15
    unsigned int *v58;  // r12
    unsigned long long v59;  // r15
    unsigned int *v60;  // r13
    unsigned long long v61;  // r12
    unsigned long long v62;  // r12
    unsigned long v63;  // r15
    unsigned long v64;  // rbx
    unsigned long long v65;  // rbp
    void* v67;  // r13
    unsigned int *v68;  // r12
    unsigned long v70;  // r13
    unsigned int *v71;  // r12
    void* v72;  // rax
    unsigned long long v73;  // rcx
    unsigned long long v74;  // r13
    unsigned long long v76;  // rax
    unsigned long long v77;  // rsi
    void* v78;  // r14
    unsigned int *v79;  // r12
    unsigned long long v80;  // r14
    unsigned int *v81;  // r13
    unsigned long long v82;  // r13
    unsigned int *v83;  // r12
    unsigned long v84;  // rbx
    void* v85;  // rbp
    void* v86;  // rdx
    unsigned long long v87;  // rdi
    void* v88;  // rbp
    void* v89;  // r12
    unsigned long long v90;  // rax
    unsigned int *v91;  // rbp
    unsigned long long v92;  // r12
    unsigned int *v93;  // r14
    unsigned long long v94;  // rbx
    unsigned long long v95;  // rbx
    unsigned long v98;  // r12
    unsigned long long v99[11];  // rax
    unsigned long long v100;  // r12
    unsigned long long v101;  // r14
    void* v102;  // rbx
    unsigned long long v103;  // rdx
    unsigned long v104;  // rdx
    unsigned long long v105;  // rdx
    unsigned long long v106;  // rax

    v1 = a2;
    v43 = v42;
    v44 = v43[9];
    v45 = v44 >> 1;
    v26 = v43[10];
    v46 = v45 - v26;
    if (v46 <= 0)
        v46 = 0;
    v28 = v43[5];
    v47 = ~(a3 + v28 * 2) + v45;
    if (v47 <= 0)
        v47 = 0;
    if (v44 < 2)
    {
        v13 = 0;
        v14 = 1;
        v15 = 0;
        v7 = 0;
        v8 = 1;
        v9 = 0;
        v10 = 0;
        v27 = &v11;
        v11 = 1;
        v19 = &v12;
        v12 = 0;
        v48 = 1;
        v29 = 0;
    }
    else
    {
        v49 = __rust_alloc(v45, 1);
        if (!v49)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v13 = v45;
        v14 = v49;
        v15 = 0;
        v50 = __rust_alloc(v45, 1);
        if (!v50)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v7 = v45;
        v8 = v50;
        v9 = 0;
        v51 = __rust_alloc(v45, 1);
        if (!v51)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v10 = v45;
        v11 = v51;
        v12 = 0;
        v48 = __rust_alloc(v45, 1);
        if (!v48)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v27 = &v11;
        v19 = &v12;
        v29 = v45;
    }
    v30 = v45;
    v16 = v45;
    v23 = v48;
    v17 = v23;
    v18 = 0;
    v52 = v1;
    uu_ptx::trim_idx::h1761918a398b52aa(a1, v52, NULL, v52);
    v54 = v53 - v46;
    if (v54 <= 0)
        v54 = 0;
    v55 = uu_ptx::trim_idx::h1761918a398b52aa(a1, v52, uu_ptx::trim_broken_word_left::h2b705d2de100912c(a1, v52, v54, v53), v53);
    if (v53 < v55)
        core::slice::index::slice_index_order_fail::h1c3351e14910b14a(); /* do not return */
    v56 = a1;
    if (v53 > v1)
        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
    v2 = 0;
    v3 = 1;
    v4 = 0;
    v0 = v46;
    v32 = v55;
    if (v53 == v55)
    {
        v25 = 1;
        v22 = 0;
        v57 = 0;
        goto LABEL_53aa58;
    }
    else
    {
        v58 = v56 + v55 * 4;
        v59 = v56 + 0x4 * v53 - (char *)v58 >> 2;
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::ha3d3a3f12cc96e65(&v2, 0, v59);
        v60 = 0;
        do
        {
            _ZN5alloc6string6String4push17h859ae11851fd8b8eE.llvm.17676394313059082282(&v2, *((int *)((char *)v58 + 0x4 * v60)));
            v60 = (char *)v60 + 1;
        } while (v59 != v60);
        v22 = v2;
        v25 = v3;
        v57 = v4;
        v61 = v9;
        if (v29 - v61 < v57)
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::ha3d3a3f12cc96e65(&v7, v61, v57);
LABEL_53aa58:
            v62 = v9;
        }
    }
    memcpy(v8 + v62, v25, v63);
    v9 = v62 + v63;
    if (v0 < v9)
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    v64 = a5;
    uu_ptx::trim_idx::h1761918a398b52aa(a4, v64, NULL, uu_ptx::trim_broken_word_right::hd80e7e5e123095c3(a4, v64, NULL, v65));
    if (v53 > v64)
        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
    v2 = 0;
    v3 = 1;
    v4 = 0;
    if (!v53)
    {
        v24 = 1;
        v21 = 0;
        v67 = 0;
        goto LABEL_53ab70;
    }
    else
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::ha3d3a3f12cc96e65(&v2, 0, v53);
        v68 = 0;
        do
        {
            _ZN5alloc6string6String4push17h859ae11851fd8b8eE.llvm.17676394313059082282(&v2, *((int *)((char *)a4 + 0x4 * v68)));
            v68 = (char *)v68 + 1;
        } while (v53 != v68);
        v21 = v2;
        v24 = v3;
        v67 = v4;
        if (v30 >= v67)
        {
LABEL_53ab70:
        }
        else
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::ha3d3a3f12cc96e65(&v10, 0, v67);
            v12 = v12;
        }
    }
    memcpy(0 + v11, v24, v67);
    v12 += v67;
    v31 = v12;
    if (v47 < v12)
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    v70 = a5;
    v71 = uu_ptx::trim_idx::h1761918a398b52aa(a4, v70, v53, v70);
    v72 = v0 - (v9 + v26);
    if (v72 <= 0)
        v72 = 0;
    v73 = v72 + v71;
    v76 = uu_ptx::trim_idx::h1761918a398b52aa(a4, v70, v71, uu_ptx::trim_broken_word_right::hd80e7e5e123095c3(a4, v70, v71, v74));
    if (v53 < v76)
    {
        core::slice::index::slice_index_order_fail::h1c3351e14910b14a(); /* do not return */
    }
    else if (v53 > a5)
    {
        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
    }
    else
    {
        v2 = 0;
        v3 = 1;
        v4 = 0;
        v37 = v76;
        if (v53 == v76)
        {
            v20 = 0;
            v78 = 0;
            v18 = 0;
        }
        else
        {
            v79 = &a4[v76];
            v80 = (char *)a4 + 0x4 * v53 - v79 >> 2;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::ha3d3a3f12cc96e65(&v2, 0, v80);
            v81 = 0;
            do
            {
                _ZN5alloc6string6String4push17h859ae11851fd8b8eE.llvm.17676394313059082282(&v2, *((int *)((char *)v79 + 0x4 * v81)));
                v81 = (char *)v81 + 1;
            } while (v80 != v81);
            v20 = v2;
            v77 = v3;
            v78 = v4;
            if (v30 >= v78)
            {
                v18 = 0;
            }
            else
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::ha3d3a3f12cc96e65(&v16, 0, v78);
                v23 = v17;
            }
        }
        v0 = 1;
        memcpy(v23 + v18, v0, v78);
        v82 = v18 + v78;
        v18 = v82;
        v83 = a1;
        v84 = v1;
        uu_ptx::trim_idx::h1761918a398b52aa(v83, v84, NULL, v32);
        v85 = v47 - (v26 + v31);
        if (v85 <= 0)
            v85 = 0;
        v86 = v53 - v85;
        if (v86 <= 0)
            v86 = 0;
        v87 = uu_ptx::trim_idx::h1761918a398b52aa(v83, v84, uu_ptx::trim_broken_word_left::h2b705d2de100912c(v83, v84, v86, v53), v53);
        if (v53 < v87)
        {
            core::slice::index::slice_index_order_fail::h1c3351e14910b14a(); /* do not return */
        }
        else if (v53 > v1)
        {
            core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
        }
        else
        {
            v2 = 0;
            v3 = 1;
            v4 = 0;
            v26 = v53;
            v23 = v87;
            if (v53 == v87)
            {
                v1 = 1;
                v88 = 0;
                v89 = 0;
                v0 = v0;
                goto LABEL_53ae79;
            }
            else
            {
                v90 = a1;
                v91 = v90 + v87 * 4;
                v92 = v90 + 0x4 * v53 - (char *)v91 >> 2;
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::ha3d3a3f12cc96e65(&v2, 0, v92);
                v93 = 0;
                do
                {
                    _ZN5alloc6string6String4push17h859ae11851fd8b8eE.llvm.17676394313059082282(&v2, *((int *)((char *)v91 + 0x4 * v93)));
                    v93 = (char *)v93 + 1;
                } while (v92 != v93);
                v88 = v2;
                v1 = v3;
                v89 = v4;
                v94 = v15;
                if (v29 - v94 >= v89)
                {
                    v0 = v0;
                }
                else
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::ha3d3a3f12cc96e65(&v13, v94, v89);
                    v0 = v0;
LABEL_53ae79:
                    v95 = v15;
                }
            }
            memcpy(v14 + v95, v1, v98);
            v15 = v95 + v98;
            v99 = v42;
            v100 = v23;
            if (v53 != a5)
            {
                if (v53 != v37)
                {
                    if (v53 == a5)
                        goto LABEL_53afb9;
                    v27 = &v17;
                    v19 = &v18;
                    v102 = v99[4];
                    v105 = v28;
                    if (v16 - v18 >= v105)
                    {
                        v19 = &v18;
                    }
                    else
                    {
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::ha3d3a3f12cc96e65(&v16, v18, v105);
                        goto LABEL_53af68;
                    }
                }
                else
                {
                    v102 = v99[4];
                    v82 = v31;
                    v103 = v28;
                    if (v10 - v82 < v103)
                    {
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::ha3d3a3f12cc96e65(&v10, v82, v103);
LABEL_53af68:
                        v19 = v19;
                        v82 = *((long long *)v19);
                        v104 = v28;
                    }
                }
                memcpy(v82 + *((long long *)v27), v102, v104);
                *((unsigned long *)v19) = *((long long *)v19) + v104;
                v99 = v42;
                v0 = v0;
            }
LABEL_53afb9:
            if (v32)
            {
                if (v26 == v100)
                {
                    v33 = &v99[3];
                    v34 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v35 = &v7;
                    v36 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v2 = &g_461260;
                    v3 = 2;
                    v6 = 0;
                    v4 = &v33;
                    v5 = 2;
                    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v38, &v2);
                    if (v7)
                        __rust_dealloc(v8);
                    v9 = *((long long *)&v39);
                    *((int128_t *)&v7) = *((int128_t *)&v38);
                }
                else if (v100)
                {
                    v33 = v33;
                    v34 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v35 = &v13;
                    v36 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v2 = &g_461260;
                    v3 = 2;
                    v6 = 0;
                    v4 = &v33;
                    v5 = 2;
                    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v40, &v2);
                    if (v13)
                        __rust_dealloc(v14);
                    v15 = *((long long *)&v41);
                    *((int128_t *)&v13) = *((int128_t *)&v40);
                }
            }
            a0->field_10 = v18;
            a0->field_0 = *((int128_t *)&v16);
            *((unsigned long long *)((char *)&a0->field_18 + 8)) = v9;
            *((int128_t *)&(&a0->field_10)[1]) = (int128_t)v7;
            *((unsigned long long *)&a0->field_30) = v12;
            *((int128_t *)&a0->field_28) = *((int128_t *)&v10);
            *((int128_t *)((char *)&a0->field_30 + 8)) = (int128_t)v13;
            (&a0->field_40)[1] = v15;
            if (v88)
                __rust_dealloc(v1);
            if (v20)
                __rust_dealloc(v101);
            if (v21)
                __rust_dealloc(v24);
            if (!v22)
                return v106;
            __rust_dealloc(v25);
        }
    }
}
