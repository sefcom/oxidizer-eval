long long uu_shuf::shuf_exec::hac410ad30c9cf5e0(struct_2 *a0, struct_0 *a1)
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
        v18 = alloc::boxed::Box$LT$T$GT$::new::h47aa554a48e45ddf(std::io::stdio::stdout::h077da66234850927());
        v19 = &g_534ef8;
        goto LABEL_4712be;
    }
    v17 = a1->field_10;
    v3 = a1->field_10;
    *((int128_t *)&v1) = *((int128_t *)&a1->field_0);
    std::fs::File::create::hb8ccd5b0dd142e83(&v10, v2, v17);
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hddbe3a5b2ee70831(&v8, &v10, &v1);
    v20 = *((long long *)&v8);
    if (v20)
    {
        ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v1);
        goto LABEL_47158b;
    }
    v18 = alloc::boxed::Box$LT$T$GT$::new::ha833a196b0b969ec(*((int *)&v9));
    v16 = vvar_177{reg 56} | -0x100 | 1;
    ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v1);
    v19 = &g_534f48;
LABEL_4712be:
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h2cd23da24bfb1765(&v12, 0x2000, v18, v19);
    if (a1->field_18 != 0x8000000000000000)
    {
        v21 = &a1->field_18;
        v22 = v21->field_10;
        v3 = v21->field_10;
        *((uint128_t *)&v1) = v21->field_0;
        std::fs::File::open::h1adc330ffb93a969(&v10, v2, v22);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hb868c3ea7eaf226e(&v8, &v10, &v1);
        v20 = *((long long *)&v8);
        if (v20)
        {
            ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v1);
            goto LABEL_471581;
        }
        v6 = *((int *)&v9);
        v5 = 0;
        ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v1);
        v23 = 0;
        if (!a1->field_38)
            goto LABEL_4714b9;
LABEL_471303:
        if (_$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$u20$as$u20$uu_shuf..Shufable$GT$::is_empty::h1f0a71404213f066(a0->field_10))
        {
            ::0x46ee40::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h118a158527e98cdc(&v10, "no lines to repeat", 18);
            v3 = *((long long *)&v11);
            *((int128_t *)&v1) = *((int128_t *)&v10);
            v4 = 1;
            v20 = alloc::boxed::Box$LT$T$GT$::new::h1b07cb96cdbb794f(&v1);
LABEL_471577:
            core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::h54b6737fa54cf34d(&v5);
LABEL_471581:
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::ha3b05e8de249092a(&v12);
LABEL_47158b:
            if (a1->field_18 == 0x8000000000000000)
                return v20;
            ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&a1->field_18);
        }
        v0 = v23;
        v25 = a1->field_30;
        if (v25)
        {
            v29 = 0;
            while (true)
            {
                v29 = ::0x46e830::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v29);
                v20 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h84611fd28ee95474(_$LT$$RF$$u5b$u8$u5d$$u20$as$u20$uu_shuf..Writable$GT$::write_all_to::hde169efa667ae96b(_$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$u20$as$u20$uu_shuf..Shufable$GT$::choose::h3523e9548edb7615(a0, &v5), v30, &v12));
                if (v20)
                    break;
                v31 = a1->field_39;
                v1 = v31;
                v32 = v14;
                if (*((long long *)&v12) - v32 <= 1)
                {
                    v33 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha5c718a139f25917(&v12, &v1, 1);
                }
                else
                {
                    v32[*((long long *)&v13)] = v31;
                    v14 = v32 + 1;
                    v33 = 0;
                }
                v20 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8a19c40d77640a40(v33);
                if (v20)
                    break;
                if (v29 >= v25)
                {
                    core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::h54b6737fa54cf34d(&v5);
                    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::ha3b05e8de249092a(&v12);
                    return 0;
                }
            }
            goto LABEL_471570;
        }
        core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::h54b6737fa54cf34d(&v5);
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::ha3b05e8de249092a(&v12);
        return 0;
    }
    v7 = rand::rngs::thread::thread_rng::hb51ef0c041e68525();
    v5 = 1;
    v23 = v16 | -0x100 | 1 | -0x100 | 1 | -0x100 | 1;
    if (!(!a1->field_38))
        goto LABEL_471303;
LABEL_4714b9:
    v0 = v23;
    v1 = _$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$u20$as$u20$uu_shuf..Shufable$GT$::partial_shuffle::h44688f65b4d991d5(a0, &v5);
    v2 = v24;
    while (true)
    {
        v26 = _$LT$core..iter..adapters..copied..Copied$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc52c302a5b3cda84(&v1);
        if (!v26)
            break;
        v20 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8348fd0bc33a1273(_$LT$$RF$$u5b$u8$u5d$$u20$as$u20$uu_shuf..Writable$GT$::write_all_to::hde169efa667ae96b(v26, v24, &v12));
        if (!(!v20))
            goto LABEL_471570;
        v10 = a1->field_39;
        v27 = v14;
        if (*((long long *)&v12) - v27 <= 1)
        {
            v28 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha5c718a139f25917(&v12, &v10, 1);
        }
        else
        {
            v27[*((long long *)&v13)] = v10;
            v14 = v27 + 1;
            v28 = 0;
        }
        v20 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h9b8bd7b325589adc(v28);
        if (v20)
            goto LABEL_471570;
    }
LABEL_471570:
    goto LABEL_471577;
}
