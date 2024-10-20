long long uu_shuf::shuf_exec::h59ea0a0278b8184b(struct_3 *a0, struct_1 *a1)
{
    int v0;  // [bp-0xb8], Other Possible Types: char, unsigned long
    struct_0 *v1;  // [sp-0xb0], Other Possible Types: unsigned long long
    struct_0 *v2;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned int v3;  // [sp-0xa0]
    unsigned int v4;  // [sp-0x90]
    unsigned int v5;  // [sp-0x8c]
    unsigned long v6;  // [sp-0x88], Other Possible Types: unsigned long long
    char v7;  // [bp-0x80]
    char v8;  // [bp-0x78]
    char v9;  // [bp-0x70]
    char v10;  // [bp-0x68]
    char *v11;  // [sp-0x60]
    char v12;  // [bp-0x40]
    struct_0 *v15;  // rdx
    unsigned int *v16;  // rax
    uint128_t v17[2];  // r15
    unsigned long long v18;  // rcx
    struct_2 *v20;  // rax
    struct_0 *v21;  // rdx
    unsigned long long v22;  // rdx
    unsigned long long v24;  // rcx
    unsigned long v25;  // rdx
    unsigned long long v26;  // r13
    unsigned long long v27;  // rcx
    void* v28;  // rax
    char *v29;  // r12
    void* v30;  // rax
    char v31;  // al
    char *v32;  // rcx
    void* v33;  // rax
    unsigned long long v34;  // r13
    void* v35;  // rax
    char *v36;  // r12
    void* v37;  // rax
    char *v38;  // rcx
    void* v39;  // rax
    struct_0 *v40;  // rax
    uint128_t v41[2];  // rax
    int v42;  // xmm0
    unsigned long long v44;  // rsi
    unsigned long long v45;  // rdx

    if (a1->field_0 == 0x8000000000000000)
    {
        v16 = __rust_alloc(8, 8);
        if (!v16)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        *((long long *)&v16) = std::io::stdio::stdout::h077da66234850927();
        v18 = &g_4ef818;
    }
    else
    {
        v15 = a1->field_10;
        v2 = a1->field_10;
        *((int128_t *)&v0) = *((int128_t *)&a1->field_0);
        std::fs::File::create::hc3b24393283c980d(&v12, v1, v15);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6d68586bc2a36268(&v7, &v12, &v0);
        v17 = *((long long *)&v7);
        if (v17)
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfcff06c4ac8c4041();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9907efbb1e2c31af(&v0);
            goto LABEL_43f96d;
        }
        else
        {
            v16 = __rust_alloc(4, 4);
            if (!v16)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            *(v16) = *((int *)&v8);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfcff06c4ac8c4041();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9907efbb1e2c31af(&v0);
            v18 = &g_4ef868;
        }
    }
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h8cc154a7d08efde7(&v9, 0x2000, v16, v18);
    if (a1->field_18 == 0x8000000000000000)
    {
        v6 = rand::rngs::thread::thread_rng::h046695b0de310cd0();
        v4 = 1;
        if (!(!a1->field_38))
            goto LABEL_43f624;
        goto LABEL_43f7b4;
    }
    v20 = &a1->field_18;
    v21 = v20->field_10;
    v2 = v20->field_10;
    *((uint128_t *)&v0) = v20->field_0;
    std::fs::File::open::h95abac2347d6db7b(&v12, v1, v21);
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hab87fcfb30d7b54e(&v7, &v12, &v0);
    v17 = *((long long *)&v7);
    if (v17)
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfcff06c4ac8c4041();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9907efbb1e2c31af(&v0);
        goto LABEL_43f963;
    }
    v5 = *((int *)&v8);
    v4 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfcff06c4ac8c4041();
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9907efbb1e2c31af(&v0);
    if (!a1->field_38)
    {
LABEL_43f7b4:
        v0 = _$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$u20$as$u20$uu_shuf..Shufable$GT$::partial_shuffle::h78075dc370877bf4(a0, &v4, a1->field_30, v24);
        v1 = v25;
        while (true)
        {
            v35 = _$LT$core..iter..adapters..copied..Copied$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc2c8dbfae0439fad(&v0);
            if (!v35)
                break;
            v36 = v11;
            if (*((long long *)&v9) - v36 <= v25)
            {
                v37 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h51e95a21d24467a5(&v9, v35, v25);
            }
            else
            {
                memcpy(&v36[*((long long *)&v10)], v35, v25);
                v11 = &v36[v25];
                v37 = 0;
            }
            v17 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::he2d946395dad83cb(v37);
            if (!(!v17))
                goto LABEL_0x43f8a6;
            v12 = a1->field_39;
            v38 = v11;
            if (*((long long *)&v9) - v38 <= 1)
            {
                v39 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h51e95a21d24467a5(&v9, &v12, 1);
            }
            else
            {
                v38[*((long long *)&v10)] = v12;
                v11 = v38 + 1;
                v39 = 0;
            }
            v17 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h2addaa533b286708(v39);
        }
    }
LABEL_43f624:
    if (!a0->field_10)
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hb6e3cec0f193d250(&v0, 18, 0);
        if ((long long)v0)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v40 = v2;
        v40->field_0 = 134835622387851158775910495974787673966;
        v40->field_10 = 29793;
        v3 = 1;
        v0 = v1;
        v1 = v40;
        v2 = 18;
        v41 = __rust_alloc(32, 8);
        if (!v41)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v17 = v41;
        v42 = *((int128_t *)&v0);
        v41[1] = *((int128_t *)&v2);
        *((void*)&v41[0]) = v42;
        if (!v4)
        {
            close(v5);
            goto LABEL_43f963;
        }
        _$LT$alloc..rc..Rc$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb7c603bafca57ce1(&v6);
LABEL_43f963:
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h533ce77182e49d91(&v9, v44, v45);
LABEL_43f96d:
        if (a1->field_18 != 0x8000000000000000)
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfcff06c4ac8c4041();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9907efbb1e2c31af(&a1->field_18);
            return v17;
        }
        return v17;
    }
    while (true)
    {
        v26 = a1->field_30;
        v28 = _$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$u20$as$u20$uu_shuf..Shufable$GT$::choose::h64f53e7c2dab1aa7(a0, &v4, v22, v27);
        v29 = v11;
        if (*((long long *)&v9) - v29 <= v25)
        {
            v30 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h51e95a21d24467a5(&v9, v28, v25);
        }
        else
        {
            memcpy(&v29[*((long long *)&v10)], v28, v25);
            v11 = &v29[v25];
            v30 = 0;
        }
        v17 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h10291c8b2e218bbb(v30);
        if (v17)
            break;
        v31 = a1->field_39;
        v0 = v31;
        v32 = v11;
        if (*((long long *)&v9) - v32 <= 1)
        {
            v33 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h51e95a21d24467a5(&v9, &v0, 1);
        }
        else
        {
            v32[*((long long *)&v10)] = v31;
            v11 = v32 + 1;
            v33 = 0;
        }
        v17 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h96dae56af0a3e72a(v33);
        if (!(!v17))
            break;
        v34 = v26 - 1;
    }
}
