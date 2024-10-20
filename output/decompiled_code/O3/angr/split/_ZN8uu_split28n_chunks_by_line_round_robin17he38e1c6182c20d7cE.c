long long uu_split::n_chunks_by_line_round_robin::he38e1c6182c20d7c(struct_1 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    uint128_t v0[2];  // [sp-0xc8]
    void* v1;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0xb8]
    void* v3;  // [sp-0xb0]
    uint128_t v4[2];  // [sp-0xa8]
    unsigned int v5;  // [sp-0x9c]
    struct_0 *v6;  // [sp-0x90]
    uint128_t v7[2];  // [sp-0x88], Other Possible Types: unsigned long long
    char v8;  // [bp-0x80]
    char v9;  // [bp-0x78]
    unsigned long long v10;  // [sp-0x70]
    uint128_t v11[2];  // [sp-0x68]
    uint128_t v12[2];  // [sp-0x60], Other Possible Types: unsigned long long
    void* v13;  // [sp-0x58], Other Possible Types: unsigned long long
    void* v14;  // [sp-0x50]
    unsigned long long v15;  // [sp-0x48]
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rdx
    unsigned int v19;  // ebp
    unsigned long long v20;  // r8
    unsigned long long v21;  // r9
    unsigned long long v22;  // rbx
    void* v23;  // r13
    uint128_t v24[2];  // r13
    unsigned long long v25;  // r14
    unsigned long long v26;  // rax
    unsigned int v27;  // r13d
    void* v28;  // rbp
    unsigned long long v29;  // 4096
    unsigned long long v30;  // r12
    unsigned long long v31;  // rdx
    void* v32;  // rbx
    unsigned long v33;  // r15
    unsigned long long v34;  // rax
    unsigned long long v35;  // rdx
    unsigned long long v36;  // rcx
    uint128_t v37[2];  // rdi
    unsigned long long v38;  // rax
    unsigned long long v39[3];  // rcx
    unsigned long long v40;  // r13
    unsigned long long v41;  // r15
    unsigned long long v42;  // 4096
    unsigned long long v43;  // rbx
    unsigned long long v44;  // r12
    int v46;  // xmm0
    unsigned long long v47;  // rcx
    unsigned long long v48;  // rdx
    unsigned long long v49;  // rdx
    int v50;  // xmm0
    struct_2 *v51;  // r15
    unsigned long long v52;  // r14
    unsigned long long v53;  // rsi
    uint128_t v55[2];  // r12
    struct_2 *v56;  // r15
    unsigned long long v57;  // r14
    unsigned long long v58;  // rsi
    struct_0 *v60;  // rdi
    struct_0 *v61;  // rdi

    *((long long *)&v7[0]) = std::io::stdio::stdout::h077da66234850927();
    v6 = std::io::stdio::Stderr::lock::h890f7962a170fc90(v7, v17, v18);
    *((long long *)&v11[0]) = 0;
    v12 = 8;
    v13 = 0;
    if (a3 != 1)
    {
        _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::init::hcb8cb86ff76e36da(v7, a2, a0, a0->field_a1, v20, v21);
        v24 = *((long long *)&v8);
        v25 = *((long long *)&v9);
        if (v4 == 0x8000000000000000)
            goto LABEL_49d01d;
        *((uint128_t *[2])&v4[0]) = v7;
        *((uint128_t *[2])&v11[0]) = v4;
        *((uint128_t *[2])&v0[0]) = v24;
        *((uint128_t *[2])&v12[0]) = v24;
        v13 = v25;
        v27 = a0->field_a2;
        if (a2)
        {
            v15 = a0->field_88;
            v14 = 0;
            v28 = 0;
            v5 = v27;
        }
        else
        {
            v1 = 0;
            v2 = 1;
            v3 = 0;
            v0 = v0;
            if (!(!std::io::read_until::h49c3a941ae7272f9(a1, v5)))
                goto LABEL_49cf41;
            if (!v31)
                goto LABEL_49ce14;
            goto LABEL_49d0be;
        }
    }
    else
    {
        v19 = a0->field_a2;
        if (a2)
        {
            v22 = a4 - 1;
            *((long long *)&v4[0]) = 0;
            v23 = 0;
        }
        else
        {
            v1 = 0;
            v2 = 1;
            v3 = 0;
            if (std::io::read_until::h49c3a941ae7272f9(a1, v19))
            {
                v0 = 8;
                *((long long *)&v4[0]) = 0;
                v25 = 0;
                goto LABEL_49cf41;
            }
            else if (!v18)
            {
                v0 = 8;
                *((long long *)&v4[0]) = 0;
                v25 = 0;
                goto LABEL_49ce14;
            }
            else
            {
LABEL_49d0be:
                core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(); /* do not return */
            }
        }
        while (true)
        {
            v1 = 0;
            v2 = 1;
            v3 = 0;
            if (std::io::read_until::h49c3a941ae7272f9(a1, v19))
            {
                v0 = 8;
                v25 = 0;
                goto LABEL_49cf41;
            }
            if (!v18)
            {
                v0 = 8;
                v25 = 0;
                goto LABEL_49ce14;
            }
            if ((v23 | a2) >> 32)
            {
                if (!((0 CONCAT v23) /m a2 >> 64 == v22))
                    goto LABEL_49cabb;
            }
            else
            {
                if (!(((0 CONCAT (unsigned int)v23) /m (unsigned int)a2 >> 32 & 4294967295) == v22))
                    goto LABEL_49cabb;
            }
            v26 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v6, v2, v3);
            if (v26)
                break;
LABEL_49cabb:
            if (v1)
                __rust_dealloc(v2);
            v23 += 1;
        }
        v7 = 0x8000000000000000;
        v10 = v26;
        v0 = 8;
        v24 = __rust_alloc(32, 8);
        if (!v24)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v46 = *((int128_t *)&v7);
        v24[1] = *((int128_t *)&v9);
        *((void*)&v24[0]) = v46;
        *((long long *)&v4[0]) = 0;
        v25 = 0;
        goto LABEL_49cf89;
        goto LABEL_49cf89;
    }
    while (true)
    {
        v30 = v29;
        v1 = 0;
        v2 = 1;
        v3 = 0;
        if (std::io::read_until::h49c3a941ae7272f9(a1, v27))
        {
LABEL_49cf41:
            v7 = 0x8000000000000000;
            v10 = v48;
            v24 = __rust_alloc(32, 8);
            if (!v24)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v50 = *((int128_t *)&v7);
            v24[1] = *((int128_t *)&v9);
            *((void*)&v24[0]) = v50;
            goto LABEL_49cf89;
            goto LABEL_49cf89;
        }
        if (!v18)
        {
LABEL_49cdeb:
LABEL_49ce14:
            if (v1)
                __rust_dealloc(v2);
            if (v25)
            {
                v51 = &v0[2 + 1];
                do
                {
                    v52 = v25;
                    v53 = v51[2].padding_-40;
                    if (v53)
                        __rust_dealloc(v51[2].field_-48);
                    if (v51[1].field_-38 != 0x8000000000000000)
                        _ZN4core3ptr115drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$17h4849725892e12fffE.llvm.12874152752476265872(&v51[1].field_-38, v53, v31, v47, v20, v21);
                    v51 = &v51[2].padding_-40;
                } while (v52 != 1);
                *((uint128_t *[2])&v4[0]) = v11;
            }
            if (v4)
                __rust_dealloc(v0);
            v60 = v6;
            v60->field_c = v60->field_c - 1;
            if (vvar_1020 != 1)
                return 0;
            v60->field_0 = 0;
            v60->field_8 = 0;
            if (CasCmpNE(v60->field_8, v60->field_8))
                goto LABEL_0x49cebb;
            if ((Not (Load(addr=(vvar_757{reg 72} + 0x8<64>), size=4, endness=Iend_LE) == 0x2<32>))) { Goto None } else { Goto None }
            std::sys::sync::mutex::futex::Mutex::wake::h67137a7ecb147fca(&v60->field_8);
        }
        v32 = v2;
        v33 = v3;
        v34 = v14;
        if ((v34 | v30) >> 32)
        {
            v35 = (0 CONCAT v34) /m v30 >> 64;
            if (!(v35 < v25))
                goto LABEL_49d098;
        }
        else
        {
            v35 = (0 CONCAT (unsigned int)v34) /m (unsigned int)v30 >> 32 & 4294967295;
            if (v35 >= v25)
            {
LABEL_49d098:
                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
            }
        }
        v36 = v35 * 80;
        v37 = v0;
        v38 = *((long long *)(24 + (char *)&v37[0] + v36));
        if (v38 != 0x8000000000000000)
        {
            v39 = 24 + v36 + (char *)v37;
        }
        else
        {
            _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::instantiate_writer::h63f4b02c82bf1aec(v7, v11, v35, a0, v20, v21);
            v24 = v7;
            v39 = *((long long *)&v8);
            if (!v24)
                v38 = v39[0];
            else
                goto LABEL_49d076;
        }
        v40 = v39[2];
        if (v38 - v40 > v33)
        {
            memcpy(v39[1] + v40, v32, v33);
            v39[2] = v40 + v33;
            v41 = 0;
            v5 = v5;
            goto LABEL_49ccf0;
        }
        v43 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h490bc7d417bab506(v39, v32, v33, v39, v20, v21);
        if (v43)
            break;
        v41 = 0;
        v5 = v5;
LABEL_49ccf0:
        v44 = v42;
        v28 += v41;
        if (v28 == v44)
            goto LABEL_49cdeb;
        if (v1)
            __rust_dealloc(v2);
        v14 += 1;
    }
    if (!((char)::0x492cf0::std::io::error::Error::kind::hb2ff5fa058639b3d(v43) != 11) && !(v15 == 0x8000000000000000))
    {
        v41 = 1;
        _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h1c7c86aae06dd8b1E.llvm.4507047988568940441(v43);
        v5 = v5;
        goto LABEL_49ccf0;
    }
    else
    {
        v24 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h1e47f2ada1a82a7a(v43);
LABEL_49d076:
    }
LABEL_49cf89:
    if (v1)
        __rust_dealloc(v2);
    if (v25)
    {
        *((uint128_t *[2])&v0[0]) = v0;
        v56 = &v0[2 + 1];
        do
        {
            v57 = v25;
            v58 = v56[2].padding_-40;
            if (v58)
                __rust_dealloc(v56[2].field_-48);
            if (v56[1].field_-38 != 0x8000000000000000)
                _ZN4core3ptr115drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$17h4849725892e12fffE.llvm.12874152752476265872(&v56[1].field_-38, v58, v49, v39, v20, v21);
            v56 = &v56[2].padding_-40;
        } while (v57 != 1);
        *((uint128_t *[2])&v4[0]) = v11;
        *((uint128_t *[2])&v55[0]) = v0;
    }
    if (v4)
        __rust_dealloc(v55);
LABEL_49d01d:
    v61 = v6;
    v61->field_c = v61->field_c - 1;
    if (vvar_1023 != 1)
        return v24;
    v61->field_0 = 0;
    v61->field_8 = 0;
    if (CasCmpNE(v61->field_8, v61->field_8))
        goto LABEL_0x49d033;
    if (v61->field_8 == 2)
        goto LABEL_0x49d055;
    goto LABEL_0x49d03b;
}
