long long uu_split::n_chunks_by_byte::heab741a690b57227(struct_0 *a0, unsigned int a1, unsigned long long a2[3], unsigned long a3, unsigned long a4, unsigned long a5)
{
    void* v0;  // [sp-0x158]
    void* v1;  // [sp-0x150]
    unsigned long long v2;  // [sp-0x148]
    void* v3;  // [sp-0x140]
    unsigned long long v4;  // [sp-0x138]
    struct_1 *v5;  // [sp-0x130]
    unsigned long v6;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v7[3];  // [sp-0x120], Other Possible Types: unsigned long, unsigned long long
    char v8;  // [bp-0x118], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v9[3];  // [sp-0x110], Other Possible Types: unsigned long long
    void* v10;  // [sp-0x108]
    unsigned long long v11;  // [sp-0xf8]
    unsigned long long v12;  // [sp-0xf0]
    unsigned long long v13[3];  // [sp-0xe8]
    void* v14;  // [sp-0xd8], Other Possible Types: unsigned long
    unsigned long long v15;  // [sp-0xd0]
    void* v16;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v17[3];  // [sp-0xc0]
    void* v18;  // [sp-0xb8]
    unsigned long long v19;  // [sp-0xb0]
    void* v20;  // [sp-0xa8]
    unsigned long long v21;  // [sp-0xa0]
    unsigned long v22;  // [sp-0x98]
    unsigned long long v23;  // [sp-0x90]
    char v24;  // [bp-0x88]
    char v25;  // [bp-0x80]
    char v26;  // [bp-0x78]
    int v27;  // [sp-0x70]
    unsigned long long v28;  // [sp-0x60]
    char v29;  // [sp-0x58]
    unsigned long v30;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v31;  // [sp-0x48]
    struct struct_2 **v32;  // [sp-0x40]
    unsigned long long v33;  // [sp-0x38]
    void* v35;  // r12
    unsigned long long v36[3];  // rdx
    unsigned long long v37[3];  // r13
    void* v38;  // rax
    int v39;  // xmm0
    unsigned long long v42[3];  // rax
    unsigned long long v43;  // rsi
    unsigned long long v44[3];  // r15
    unsigned long long v45[3];  // rax
    unsigned long long v46;  // rax
    unsigned int v47;  // eax
    unsigned long long v49;  // r14
    unsigned long long v50;  // r8
    unsigned long long v51;  // r9
    unsigned long long v52;  // rbp
    unsigned long long v54[3];  // r13
    unsigned long long v55;  // rax
    void* v56;  // r14
    unsigned long long v57;  // rax
    unsigned long long v58;  // rdx
    unsigned long long v59;  // rsi
    unsigned long long v60;  // rbx
    unsigned long long v62[3];  // r13
    unsigned long long v63;  // rcx
    unsigned long long v64;  // rax
    unsigned long long v65[3];  // rbp
    void* v66;  // rsi
    unsigned long v67;  // rbx
    unsigned long long v68;  // r12
    unsigned long long v69;  // rax
    unsigned long long v70[3];  // r15
    void* v71;  // r14
    unsigned long long v73;  // r12
    unsigned long long v74;  // r13
    struct_3 *v75;  // r15
    unsigned long long v76;  // r14
    unsigned long long v77;  // rsi
    unsigned long long v79[3];  // rdx
    unsigned long long v80;  // rcx
    struct_1 *v81;  // rdi
    unsigned long long v82;  // r15
    struct_3 *v83;  // r15
    unsigned long long v84;  // r14
    unsigned long long v85;  // rsi
    struct_1 *v87;  // rdi

    v18 = 0;
    v19 = 1;
    v20 = 0;
    v35 = &a0->padding_10[96];
    v37 = v36;
    if (uu_split::get_input_size::he7fa2a9fb4a5171c(v35, a1, &v18, a0->field_0, a0->field_8))
    {
        v6 = 0x8000000000000000;
        v9[0] = v36;
        v38 = __rust_alloc(32, 8);
        if (!v38)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v39 = *((int128_t *)&v6);
        *((int128_t *)&v38[16]) = *((int128_t *)&v8);
        *(v38) = v39;
        goto LABEL_49be29;
    }
    *((int128_t *)&v27) = *((int128_t *)&v19);
    *((unsigned int *)&v28) = a1;
    v29 = 0;
    if (a3 == 1)
    {
        if (v36 && a2)
            goto LABEL_49b898;
LABEL_49b91f:
        v38 = 0;
        goto LABEL_49be29;
    }
    if (!v42)
        goto LABEL_49b91f;
LABEL_49b898:
    v13[0] = a2;
    v6 = std::io::stdio::stdout::h077da66234850927();
    v5 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v6, v43, v36);
    v14 = 0;
    v15 = 8;
    v16 = 0;
    v44 = v13;
    if ((v36 | v44) >> 32)
    {
        v45 = v36;
        v46 = (0 CONCAT v45) /m v44;
        v12 = (0 CONCAT v45) /m v44 >> 64;
    }
    else
    {
        v47 = (unsigned int)v36;
        v46 = (0 CONCAT v47) /m (unsigned int)v44 & 4294967295;
        v12 = (0 CONCAT v47) /m (unsigned int)v44 >> 32 & 4294967295;
    }
    v11 = v46;
    if (a3 != 1)
    {
        v21 = v35;
        _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::init::hcb8cb86ff76e36da(&v6, v44, a0, 0, v50, v51);
        v55 = v6;
        v38 = v7;
        v56 = v8;
        if (v55 == 0x8000000000000000)
        {
            goto LABEL_49be04;
        }
        else
        {
            v0 = v55;
            v14 = v55;
            v15 = v38;
            v16 = v56;
            v58 = 1;
            v59 = 1;
            v4 = v38;
        }
    }
    else
    {
        v0 = 0;
        v49 = 1;
        while (true)
        {
            v52 = 1;
            v49 += v52 < v44;
            v1 = 0;
            v2 = 1;
            v3 = 0;
            if (!v37)
                goto LABEL_49bef2;
            v6 = &v27;
            v7[0] = v54;
            if (std::io::default_read_to_end::h9426e1b882e343a1(&v6, &v1, 0, &v27))
            {
                v21 = v35;
                v2 = 8;
                v56 = 0;
                goto LABEL_49bc2e;
            }
            if (v52 == a4)
                break;
            if (v1)
                __rust_dealloc(v2);
            v44 = v13;
            if (!(v52 < v44) || !(v49 <= v44))
                goto LABEL_49bef2;
        }
        v57 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v5, v2, v3);
        if (v57)
        {
            v38 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h1e47f2ada1a82a7a(v57);
            v2 = 8;
            v71 = 0;
            goto LABEL_49bd64;
        }
        else
        {
            if (!v1)
                goto LABEL_49bef2;
            goto LABEL_49bec2;
        }
    }
    while (true)
    {
        v1 = 0;
        v2 = 1;
        v3 = 0;
        if (!v37)
        {
            if (!v56)
                goto LABEL_49bebb;
LABEL_49be66:
            v75 = v2 + 80;
            do
            {
                v76 = v56;
                v77 = v75[2].padding_-40;
                if (v77)
                    __rust_dealloc(v75[2].field_-48);
                if (v75[1].field_-38 != 0x8000000000000000)
                    _ZN4core3ptr115drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$17h4849725892e12fffE.llvm.12874152752476265872(&v75[1].field_-38, v77, v58, v55, v50, v51);
                v75 = &v75[2].padding_-40;
            } while (v76 != 1);
            v0 = v14;
LABEL_49bebb:
            if (v0)
            {
LABEL_49bec2:
                __rust_dealloc(v2);
            }
LABEL_49bef2:
            v81 = v5;
            v81->field_c = v81->field_c - 1;
            if (vvar_1184 == 1)
            {
                v81->field_0 = 0;
                v81->field_8 = 0;
                if (CasCmpNE(v81->field_8, v81->field_8))
                    goto LABEL_0x49bf05;
                if ((Not (Load(addr=(vvar_785{reg 72} + 0x8<64>), size=4, endness=Iend_LE) == 0x2<32>))) { Goto None } else { Goto None }
                std::sys::sync::mutex::futex::Mutex::wake::h67137a7ecb147fca(&v81->field_8);
            }
            if (!v18)
                return 0;
            __rust_dealloc(v19);
        }
        v22 = v59 + (v58 < v44);
        v60 = v58 - 1;
        v23 = v58;
        v6 = &v27;
        v7[0] = v62;
        if (std::io::default_read_to_end::h9426e1b882e343a1(&v6, &v1, 0, &v27))
        {
LABEL_49bc2e:
            v17[0] = v70;
            v30 = v21;
            v31 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v32 = &v17[0];
            v33 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            v6 = &g_50b898;
            v7 = 2;
            v10 = 0;
            v8 = &v30;
            v9 = 2;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v24, &v6);
            v73 = *((long long *)&v25);
            v74 = *((long long *)&v26);
            v38 = __rust_alloc(32, 8);
            if (!v38)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            *((long long *)v38) = *((long long *)&v24);
            *((unsigned long long *)&v38[8]) = v73;
            *((unsigned long long *)&v38[16]) = v74;
            *((int *)&v38[24]) = 1;
            _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h1c7c86aae06dd8b1E.llvm.4507047988568940441(v17);
            goto LABEL_49bd25;
            goto LABEL_49bd25;
        }
        else
        {
            if (v60 >= v56)
                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
            v63 = v60 * 80;
            v64 = *((long long *)(v2 + v63 + 24));
            if (v64 != 0x8000000000000000)
            {
                v65 = v2 + v63 + 24;
            }
            else
            {
                _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::instantiate_writer::h63f4b02c82bf1aec(&v6, &v14, v60, a0, v50, v51);
                v38 = v6;
                v65 = v7;
                if (!(!v38))
                    goto LABEL_49bd25;
                v64 = v65[0];
            }
            v66 = v2;
            v67 = v3;
            v68 = v65[2];
            if (v67 < v64 - v68)
            {
                memcpy(v65[1] + v68, v66, v67);
                v65[2] = v68 + v67;
                v4 = v4;
                goto LABEL_49bbd4;
            }
            v69 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h490bc7d417bab506(v65, v66, v67, v63, v50, v51);
            v2 = v4;
            if (!v69)
            {
LABEL_49bbd4:
                v2 = v4;
                if (v1)
                    __rust_dealloc(v2);
                v44 = v13;
                v59 = v22;
                if (v23 >= v44 || (v37 -= v36, v58 = v59, v58 > v44))
                    goto LABEL_49be66;
            }
            else
            {
                v38 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h1e47f2ada1a82a7a(v69);
LABEL_49bd25:
LABEL_49bd64:
                v4 = v2;
                if (v1)
                    __rust_dealloc(v2);
                if (v71)
                {
                    v83 = v4 + 80;
                    do
                    {
                        v84 = v71;
                        v85 = v83[2].padding_-40;
                        if (v85)
                            __rust_dealloc(v83[2].field_-48);
                        if (v83[1].field_-38 != 0x8000000000000000)
                            _ZN4core3ptr115drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$17h4849725892e12fffE.llvm.12874152752476265872(&v83[1].field_-38, v85, v79, v80, v50, v51);
                        v83 = &v83[2].padding_-40;
                    } while (v84 != 1);
                    v82 = v14;
                }
                if (v82)
                    __rust_dealloc(v4);
LABEL_49be04:
                v87 = v5;
                v87->field_c = v87->field_c - 1;
                if (vvar_1190 == 1)
                {
                    v87->field_0 = 0;
                    v87->field_8 = 0;
                    if (CasCmpNE(v87->field_8, v87->field_8))
                        goto LABEL_0x49be17;
                    if ((Not (Load(addr=(vvar_856{reg 72} + 0x8<64>), size=4, endness=Iend_LE) == 0x2<32>))) { Goto None } else { Goto None }
                    std::sys::sync::mutex::futex::Mutex::wake::h67137a7ecb147fca(&v87->field_8);
                }
LABEL_49be29:
                if (!v18)
                    return v38;
                __rust_dealloc(v19);
            }
        }
    }
}
