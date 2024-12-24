long long uu_shuf::shuf_exec::h1e367ef2f6e09b06(unsigned long long a0, struct_1 *a1)
{
    unsigned int v0;  // [sp-0x154]
    char v1;  // [bp-0x150]
    char v2;  // [bp-0x148]
    unsigned int v3;  // [sp-0x140]
    unsigned int v4;  // [sp-0x13c]
    unsigned long long v5;  // [sp-0x138]
    unsigned long v6;  // [bp-0x130], Other Possible Types: char
    char v7;  // [bp-0x120]
    int v8;  // [bp-0x118], Other Possible Types: unsigned long
    int v9;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned int v10;  // [sp-0x100]
    int v11;  // [sp-0xf8]
    int v12;  // [sp-0xe8]
    int v13;  // [sp-0xd8]
    unsigned long long v14;  // [sp-0xc8]
    char v15;  // [bp-0xb8]
    char v16;  // [bp-0xb0]
    char *v17;  // [sp-0xa8]
    char v18;  // [bp-0x88]
    char v19;  // [bp-0x78]
    char v20;  // [bp-0x68]
    char v21;  // [bp-0x58]
    char v22;  // [bp-0x48]
    char v23;  // [bp-0x38]
    unsigned long long v25;  // r13
    unsigned long long v26;  // rbp
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rax
    unsigned long long v29;  // rcx
    unsigned long long v30;  // r15
    struct_0 *v31;  // rax
    unsigned long long v32;  // rdx
    unsigned int v33;  // ebp
    int v34;  // xmm0
    unsigned long long v35;  // r13
    unsigned long long v36;  // rsi
    unsigned long long v37;  // rdx
    unsigned long v38;  // rdx
    char *v39;  // rcx
    void* v40;  // rax
    void* v41;  // rbp
    unsigned long long v42;  // rdx
    unsigned long long v43;  // rcx
    char v44;  // al
    char *v45;  // rcx
    void* v46;  // rax

    v25 = 0x8000000000000000;
    if (a1->field_0 == 0x8000000000000000)
    {
        v26 = vvar_199{reg 56} | -0x100 | 1;
        v28 = alloc::boxed::Box$LT$T$GT$::new::hc90706925962d29b(std::io::stdio::stdout::h077da66234850927());
        v29 = &g_534f98;
        goto LABEL_47091e;
    }
    v27 = a1->field_10;
    v9 = a1->field_10;
    *((int128_t *)&v8) = *((int128_t *)&a1->field_0);
    std::fs::File::create::h83620d9ceb2c6416(&v6, (long long)(&v8)[8], v27);
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h28b6e919d1a73cf8(&v1, &v6, &v8);
    v30 = *((long long *)&v1);
    if (v30)
    {
        ::0x46e590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4fae4ca23457ef20(&v8);
        goto LABEL_470c7b;
    }
    v28 = alloc::boxed::Box$LT$T$GT$::new::hfc4a3cad0dc1d365(*((int *)&v2));
    v26 = vvar_199{reg 56} | -0x100 | 1;
    ::0x46e590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4fae4ca23457ef20(&v8);
    v29 = &g_534fe8;
LABEL_47091e:
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h47daee34cafa6b2d(&v15, 0x2000, v28, v29);
    if (a1->field_18 == 0x8000000000000000)
    {
        v5 = rand::rngs::thread::thread_rng::h2343e3718037645d();
        v3 = 1;
        v33 = v26 | -0x100 | 1 | -0x100 | 1 | -0x100 | 1;
        if (!(!a1->field_38))
            goto LABEL_47095c;
        goto LABEL_470b11;
    }
    v31 = &a1->field_18;
    v32 = v31->field_10;
    v9 = v31->field_10;
    *((uint128_t *)&v8) = v31->field_0;
    std::fs::File::open::h66ef366cbee3f5be(&v6, (long long)(&v8)[8], v32);
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h2efa48a33f8149f2(&v1, &v6, &v8);
    v30 = *((long long *)&v1);
    if (v30)
    {
        ::0x46e590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4fae4ca23457ef20(&v8);
        goto LABEL_470c6e;
    }
    v4 = *((int *)&v2);
    v3 = 0;
    ::0x46e590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4fae4ca23457ef20(&v8);
    v33 = 0;
    if (!a1->field_38)
    {
LABEL_470b11:
        _$LT$core..ops..range..RangeInclusive$LT$usize$GT$$u20$as$u20$uu_shuf..Shufable$GT$::partial_shuffle::hf5b2e5caee3fb658(&v18, a0, &v3, a1->field_30);
        v0 = v33;
        v14 = *((long long *)&v23);
        *((int128_t *)&v13) = *((int128_t *)&v22);
        v34 = *((int128_t *)&v18);
        *((int128_t *)&v12) = *((int128_t *)&v21);
        *((int128_t *)&v11) = *((int128_t *)&v20);
        *((int128_t *)&v9) = *((int128_t *)&v19);
        v8 = v34;
    }
    else
    {
LABEL_47095c:
        if ((char)_$LT$core..ops..range..RangeInclusive$LT$usize$GT$$u20$as$u20$uu_shuf..Shufable$GT$::is_empty::hefb1c5343f95ccf9(a0))
        {
            ::0x46e9c0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h01b575a408898259(&v6, "no lines to repeatcapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs", 18);
            v9 = *((long long *)&v7);
            *((int128_t *)&v8) = *((int128_t *)&v6);
            v10 = 1;
            v30 = alloc::boxed::Box$LT$T$GT$::new::h2c9679dbd739258c(&v8);
            goto LABEL_470c64;
        }
        else
        {
            v0 = v33;
            v35 = a1->field_30;
            if (v35)
            {
                v41 = 0;
                do
                {
                    v41 = ::0x46e3b0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v41);
                    v8 = _$LT$core..ops..range..RangeInclusive$LT$usize$GT$$u20$as$u20$uu_shuf..Shufable$GT$::choose::h536145e8510c5958(a0, &v3, v42, v43);
                    v30 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8b7c16c443ee09ba(_$LT$usize$u20$as$u20$uu_shuf..Writable$GT$::write_all_to::h75fdeaf65427d381(&v8, &v15));
                    if (v30)
                    {
LABEL_470c53:
                        v25 = 0x8000000000000000;
                        goto LABEL_470c64;
                    }
                    else
                    {
                        v44 = a1->field_39;
                        v6 = v44;
                        v45 = v17;
                        if (*((long long *)&v15) - v45 <= 1)
                        {
                            v46 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hba4ca1a56ed79e9c(&v15, &v6, 1);
                        }
                        else
                        {
                            v45[*((long long *)&v16)] = v44;
                            v17 = v45 + 1;
                            v46 = 0;
                        }
                        v30 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd9c08db0301aabdf(v46);
                        if (!(!a1->field_38))
                            goto LABEL_470c53;
                    }
                } while (v41 < v35);
            }
        }
    }
    while (true)
    {
        if (!_$LT$uu_shuf..NonrepeatingIterator$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdcdcd75782c90d5b(&v8, v36, v37))
        {
            core::ptr::drop_in_place$LT$uu_shuf..NonrepeatingIterator$GT$::h8c6041caa43384af(&v8);
            core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::h7ff46906a4f58d07(&v3);
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::hfea8ed20c08fe38f(&v15);
            return 0;
        }
        v6 = v38;
        v30 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h300c7298c1804370(_$LT$usize$u20$as$u20$uu_shuf..Writable$GT$::write_all_to::h75fdeaf65427d381(&v6, &v15));
        if (v30)
        {
LABEL_470c36:
            v25 = 0x8000000000000000;
            core::ptr::drop_in_place$LT$uu_shuf..NonrepeatingIterator$GT$::h8c6041caa43384af(&v8);
LABEL_470c64:
            core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::h7ff46906a4f58d07(&v3);
LABEL_470c6e:
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::hfea8ed20c08fe38f(&v15);
LABEL_470c7b:
            if (a1->field_18 != v25)
            {
                ::0x46e590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4fae4ca23457ef20(&a1->field_18);
                return v30;
            }
            return v30;
        }
        v1 = a1->field_39;
        v39 = v17;
        if (*((long long *)&v15) - v39 <= 1)
        {
            v40 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hba4ca1a56ed79e9c(&v15, &v1, 1);
        }
        else
        {
            v39[*((long long *)&v16)] = v1;
            v17 = v39 + 1;
            v40 = 0;
        }
        v30 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4b7eaa2d0c8e215d(v40);
        goto LABEL_470c36;
    }
}
