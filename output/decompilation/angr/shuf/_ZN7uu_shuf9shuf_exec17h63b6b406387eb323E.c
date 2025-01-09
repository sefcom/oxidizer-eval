long long uu_shuf::shuf_exec::h63b6b406387eb323(unsigned long long a0, struct_1 *a1)
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
    unsigned long v36;  // rdx
    char *v37;  // rcx
    void* v38;  // rax
    void* v39;  // rbp
    char v40;  // al
    char *v41;  // rcx
    void* v42;  // rax

    v25 = 0x8000000000000000;
    if (a1->field_0 == 0x8000000000000000)
    {
        v26 = vvar_199{reg 56} & 0xffffffffffffff00 | 1;
        v28 = alloc::boxed::Box$LT$T$GT$::new::h47aa554a48e45ddf(std::io::stdio::stdout::h077da66234850927());
        v29 = &g_534ef8;
        goto LABEL_470d9e;
    }
    v27 = a1->field_10;
    v9 = a1->field_10;
    *((int128_t *)&v8) = *((int128_t *)&a1->field_0);
    std::fs::File::create::hb8ccd5b0dd142e83(&v6, (long long)(&v8)[8], v27);
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h7dc9de6d5fccb23e(&v1, &v6, &v8);
    v30 = *((long long *)&v1);
    if (v30)
    {
        ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v8);
        goto LABEL_4710fb;
    }
    v28 = alloc::boxed::Box$LT$T$GT$::new::ha833a196b0b969ec(*((int *)&v2));
    v26 = vvar_199{reg 56} & 0xffffffffffffff00 | 1;
    ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v8);
    v29 = &g_534f48;
LABEL_470d9e:
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h2cd23da24bfb1765(&v15, 0x2000, v28, v29);
    if (a1->field_18 == 0x8000000000000000)
    {
        v5 = rand::rngs::thread::thread_rng::hb51ef0c041e68525();
        v3 = 1;
        v33 = ((v26 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1;
        if (!(!a1->field_38))
            goto LABEL_470ddc;
        goto LABEL_470f91;
    }
    v31 = &a1->field_18;
    v32 = v31->field_10;
    v9 = v31->field_10;
    *((uint128_t *)&v8) = v31->field_0;
    std::fs::File::open::h1adc330ffb93a969(&v6, (long long)(&v8)[8], v32);
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h9af4e70239f5c3ba(&v1, &v6, &v8);
    v30 = *((long long *)&v1);
    if (v30)
    {
        ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v8);
        goto LABEL_4710ee;
    }
    v4 = *((int *)&v2);
    v3 = 0;
    ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v8);
    v33 = 0;
    if (!a1->field_38)
    {
LABEL_470f91:
        _$LT$core..ops..range..RangeInclusive$LT$usize$GT$$u20$as$u20$uu_shuf..Shufable$GT$::partial_shuffle::h177e4352b7cdd512(&v18, a0, &v3, a1->field_30);
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
LABEL_470ddc:
        if ((char)_$LT$core..ops..range..RangeInclusive$LT$usize$GT$$u20$as$u20$uu_shuf..Shufable$GT$::is_empty::h6a6ce60ea82c78f8(a0))
        {
            ::0x46ee40::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h118a158527e98cdc(&v6, "no lines to repeat", 18);
            v9 = *((long long *)&v7);
            *((int128_t *)&v8) = *((int128_t *)&v6);
            v10 = 1;
            v30 = alloc::boxed::Box$LT$T$GT$::new::h1b07cb96cdbb794f(&v8);
            goto LABEL_4710e4;
        }
        else
        {
            v0 = v33;
            v35 = a1->field_30;
            if (v35)
            {
                v39 = 0;
                do
                {
                    v39 = ::0x46e830::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v39);
                    v8 = _$LT$core..ops..range..RangeInclusive$LT$usize$GT$$u20$as$u20$uu_shuf..Shufable$GT$::choose::h5ed21dd92443f283(a0, &v3);
                    v30 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::ha1cfeed630fbbde8(_$LT$usize$u20$as$u20$uu_shuf..Writable$GT$::write_all_to::h82642fb64fdc15b0(&v8, &v15));
                    if (v30)
                    {
LABEL_4710d3:
                        v25 = 0x8000000000000000;
                        goto LABEL_4710e4;
                    }
                    else
                    {
                        v40 = a1->field_39;
                        v6 = v40;
                        v41 = v17;
                        if (*((long long *)&v15) - v41 <= 1)
                        {
                            v42 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha5c718a139f25917(&v15, &v6, 1);
                        }
                        else
                        {
                            v41[*((long long *)&v16)] = v40;
                            v17 = v41 + 1;
                            v42 = 0;
                        }
                        v30 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hbce3d77c15c7998e(v42);
                        if (!(!a1->field_38))
                            goto LABEL_4710d3;
                    }
                } while (v39 < v35);
            }
        }
    }
    while (true)
    {
        if (!_$LT$uu_shuf..NonrepeatingIterator$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h09329f8e3b6424f0(&v8))
        {
            core::ptr::drop_in_place$LT$uu_shuf..NonrepeatingIterator$GT$::h54ac2e4813cb3251(&v8);
            core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::h54b6737fa54cf34d(&v3);
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::ha3b05e8de249092a(&v15);
            return 0;
        }
        v6 = v36;
        v30 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::ha8ab53c195a45add(_$LT$usize$u20$as$u20$uu_shuf..Writable$GT$::write_all_to::h82642fb64fdc15b0(&v6, &v15));
        if (v30)
        {
LABEL_4710b6:
            v25 = 0x8000000000000000;
            core::ptr::drop_in_place$LT$uu_shuf..NonrepeatingIterator$GT$::h54ac2e4813cb3251(&v8);
LABEL_4710e4:
            core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::h54b6737fa54cf34d(&v3);
LABEL_4710ee:
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::ha3b05e8de249092a(&v15);
LABEL_4710fb:
            if (a1->field_18 != v25)
            {
                ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&a1->field_18);
                return v30;
            }
            return v30;
        }
        v1 = a1->field_39;
        v37 = v17;
        if (*((long long *)&v15) - v37 <= 1)
        {
            v38 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha5c718a139f25917(&v15, &v1, 1);
        }
        else
        {
            v37[*((long long *)&v16)] = v1;
            v17 = v37 + 1;
            v38 = 0;
        }
        v30 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::he24158e12de6068b(v38);
        goto LABEL_4710b6;
    }
}
