long long uu_shuf::shuf_exec::h9aea5b49fdd14729(struct_2 *a0, struct_0 *a1)
{
    unsigned int v0;  // [sp-0xbc]
    int v1;  // [bp-0xb8], Other Possible Types: char, unsigned long
    unsigned long long v2;  // [sp-0xb0]
    unsigned long long v3;  // [sp-0xa8]
    unsigned int v4;  // [sp-0xa0]
    unsigned int v5;  // [sp-0x98]
    unsigned int v6;  // [sp-0x94]
    unsigned long long v7;  // [sp-0x90]
    char v8;  // [bp-0x88]
    char v9;  // [bp-0x80]
    char v10;  // [bp-0x78]
    char v11;  // [bp-0x68]
    char v12;  // [bp-0x60]
    char v13;  // [bp-0x58]
    char *v14;  // [sp-0x50]
    unsigned long long v16;  // rbp
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rax
    unsigned long long v19;  // rcx
    unsigned long long v20;  // r15
    struct_1 *v21;  // rax
    unsigned long long v22;  // rdx
    unsigned int v23;  // ebp
    unsigned long long v24;  // rdx
    unsigned long long v25;  // r13
    unsigned long long v26;  // rax
    char *v27;  // rcx
    void* v28;  // rax
    void* v29;  // rbp
    unsigned long long v30;  // rdx
    char v31;  // al
    char *v32;  // rcx
    void* v33;  // rax

    if (a1->field_0 == 0x8000000000000000)
    {
        v16 = vvar_177{reg 56} | -0x100 | 1;
        v18 = alloc::boxed::Box$LT$T$GT$::new::hc90706925962d29b(std::io::stdio::stdout::h077da66234850927());
        v19 = &g_534f98;
        goto LABEL_470e3e;
    }
    v17 = a1->field_10;
    v3 = a1->field_10;
    *((int128_t *)&v1) = *((int128_t *)&a1->field_0);
    std::fs::File::create::h83620d9ceb2c6416(&v10, v2, v17);
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::he354f11b7859f944(&v8, &v10, &v1);
    v20 = *((long long *)&v8);
    if (v20)
    {
        ::0x46e590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4fae4ca23457ef20(&v1);
        goto LABEL_47110b;
    }
    v18 = alloc::boxed::Box$LT$T$GT$::new::hfc4a3cad0dc1d365(*((int *)&v9));
    v16 = vvar_177{reg 56} | -0x100 | 1;
    ::0x46e590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4fae4ca23457ef20(&v1);
    v19 = &g_534fe8;
LABEL_470e3e:
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h47daee34cafa6b2d(&v12, 0x2000, v18, v19);
    if (a1->field_18 != 0x8000000000000000)
    {
        v21 = &a1->field_18;
        v22 = v21->field_10;
        v3 = v21->field_10;
        *((uint128_t *)&v1) = v21->field_0;
        std::fs::File::open::h66ef366cbee3f5be(&v10, v2, v22);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h56bda9349c534cd7(&v8, &v10, &v1);
        v20 = *((long long *)&v8);
        if (v20)
        {
            ::0x46e590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4fae4ca23457ef20(&v1);
            goto LABEL_471101;
        }
        v6 = *((int *)&v9);
        v5 = 0;
        ::0x46e590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4fae4ca23457ef20(&v1);
        v23 = 0;
        if (!a1->field_38)
            goto LABEL_471039;
LABEL_470e83:
        if (_$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$u20$as$u20$uu_shuf..Shufable$GT$::is_empty::h766c2761d83c80ae(a0->field_10))
        {
            ::0x46e9c0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h01b575a408898259(&v10, "no lines to repeatcapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs", 18);
            v3 = *((long long *)&v11);
            *((int128_t *)&v1) = *((int128_t *)&v10);
            v4 = 1;
            v20 = alloc::boxed::Box$LT$T$GT$::new::h2c9679dbd739258c(&v1);
LABEL_4710f7:
            core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::h7ff46906a4f58d07(&v5);
LABEL_471101:
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::hfea8ed20c08fe38f(&v12);
LABEL_47110b:
            if (a1->field_18 == 0x8000000000000000)
                return v20;
            ::0x46e590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4fae4ca23457ef20(&a1->field_18);
        }
        v0 = v23;
        v25 = a1->field_30;
        if (v25)
        {
            v29 = 0;
            while (true)
            {
                v29 = ::0x46e3b0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v29);
                v20 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h69e8cdf5771b7585(_$LT$$RF$$u5b$u8$u5d$$u20$as$u20$uu_shuf..Writable$GT$::write_all_to::h38b4ca00efbb779d(_$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$u20$as$u20$uu_shuf..Shufable$GT$::choose::h60eaf0333ea03729(a0, &v5), v30, &v12));
                if (v20)
                    break;
                v31 = a1->field_39;
                v1 = v31;
                v32 = v14;
                if (*((long long *)&v12) - v32 <= 1)
                {
                    v33 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hba4ca1a56ed79e9c(&v12, &v1, 1);
                }
                else
                {
                    v32[*((long long *)&v13)] = v31;
                    v14 = v32 + 1;
                    v33 = 0;
                }
                v20 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hac026e7e95cec16f(v33);
                if (v20)
                    break;
                if (v29 >= v25)
                {
                    core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::h7ff46906a4f58d07(&v5);
                    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::hfea8ed20c08fe38f(&v12);
                    return 0;
                }
            }
            goto LABEL_4710f0;
        }
        core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::h7ff46906a4f58d07(&v5);
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::hfea8ed20c08fe38f(&v12);
        return 0;
    }
    v7 = rand::rngs::thread::thread_rng::h2343e3718037645d();
    v5 = 1;
    v23 = v16 | -0x100 | 1 | -0x100 | 1 | -0x100 | 1;
    if (!(!a1->field_38))
        goto LABEL_470e83;
LABEL_471039:
    v0 = v23;
    v1 = _$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$u20$as$u20$uu_shuf..Shufable$GT$::partial_shuffle::h737d4ae5c49eb7a9(a0, &v5);
    v2 = v24;
    while (true)
    {
        v26 = _$LT$core..iter..adapters..copied..Copied$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb956214ae47b0836(&v1);
        if (!v26)
            break;
        v20 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h46dcc99f7344af3a(_$LT$$RF$$u5b$u8$u5d$$u20$as$u20$uu_shuf..Writable$GT$::write_all_to::h38b4ca00efbb779d(v26, v24, &v12));
        if (!(!v20))
            goto LABEL_4710f0;
        v10 = a1->field_39;
        v27 = v14;
        if (*((long long *)&v12) - v27 > 1)
        {
            v27[*((long long *)&v13)] = v10;
            v14 = v27 + 1;
            v28 = 0;
        }
        else
        {
            v28 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hba4ca1a56ed79e9c(&v12, &v10, 1);
        }
        v20 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h42f98f58f96cfd69(v28);
        if (v20)
            goto LABEL_4710f0;
    }
LABEL_4710f0:
    goto LABEL_4710f7;
}
