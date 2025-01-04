long long uu_paste::paste::he585c60ea6ad59b1(struct_0 *a0, unsigned int a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    char v0;  // [sp-0x14d]
    unsigned int v1;  // [sp-0x14c]
    void* v2;  // [sp-0x148], Other Possible Types: unsigned long long
    unsigned long v3;  // [sp-0x140], Other Possible Types: unsigned long long
    int v4;  // [bp-0x138], Other Possible Types: void*
    unsigned long long v5;  // [sp-0x130]
    void* v6;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x120]
    unsigned int v8;  // [bp-0x118], Other Possible Types: unsigned long
    void* v9;  // [sp-0x110]
    char v10;  // [bp-0x108], Other Possible Types: unsigned long long
    char *v11;  // [sp-0x100], Other Possible Types: unsigned long long
    char v12;  // [bp-0xf8]
    unsigned long v13;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0xe0]
    void* v15;  // [sp-0xd8]
    struct_0 *v16;  // [sp-0xd0]
    unsigned long long v17;  // [sp-0xc8]
    char v18;  // [bp-0xc0]
    char v19;  // [bp-0xb0]
    int v20;  // [bp-0xa8], Other Possible Types: char, unsigned long long
    char v21;  // [bp-0xa0]
    int v22;  // [bp-0x98], Other Possible Types: char
    int v23;  // [sp-0x88]
    int v24;  // [sp-0x58], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v25;  // [sp-0x50]
    int v26;  // [bp-0x48], Other Possible Types: void*
    unsigned long long v28;  // 4098
    int v30;  // ymm0
    int v31;  // ymm1
    int v32;  // ymm2
    int v33;  // xmm0
    int v34;  // ymm0
    unsigned long long v35;  // r15
    unsigned long long v36;  // rbx
    int v37;  // xmm0
    int v38;  // xmm0
    int v39;  // ymm0
    int v40;  // xmm1
    int v41;  // xmm2
    unsigned long long v42;  // rdx
    int v43;  // xmm0
    int v44;  // xmm1
    unsigned long long v45;  // rax
    unsigned long long v46;  // rsi
    unsigned long long v47;  // rdx
    unsigned long long v48;  // rbx
    unsigned int v49;  // r13d
    char *v50;  // r14
    unsigned long long v51;  // rax
    unsigned long long v52;  // rax
    unsigned long long v53;  // rax
    void* v54;  // rbx
    char *v55;  // rax
    char *v56;  // r15
    unsigned long long v59;  // rdx
    unsigned long long v60;  // rax
    unsigned long long v61;  // rax

    uu_paste::parse_delimiters::hdea474197eebcdf0(&v20, a2, a3);
    v28 = *((long long *)&v20);
    v2 = *((long long *)&v21);
    if (v28)
    {
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h178417ce66b4845b(a0);
        v2 = v2;
        return v2;
    }
    v7 = *((long long *)&v22);
    v9 = 0;
    v16 = a0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hc0309f6673228509(&v20, a0->field_10, 0);
    v8 = a1;
    v1 = a4;
    if (*((long long *)&v20))
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v13 = *((long long *)&v21);
    v14 = *((long long *)&v22);
    v15 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h05a7d1457638e433(&v10, a0);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf533bc1050936820(&v18, &v10);
    if (*((long long *)&v18) != 0x8000000000000000)
    {
        do
        {
            v6 = *((long long *)&v19);
            v33 = *((int128_t *)&v18);
            v34 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33;
            v4 = v33;
            v35 = v5;
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h89f186647b952d92(v35, v6, "-", 1))
            {
                v36 = *((long long *)core::cell::once::OnceCell$LT$T$GT$::get_or_try_init::h7d4856c53a0eebb3(&v9));
                alloc::rc::RcInnerPtr::inc_strong::h5f27909c12118100(v36);
                v37 = v36;
                v38 = (unsigned long long)v37 CONCAT 0;
                v39 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38;
                continue;
            }
            else
            {
                std::fs::File::open::h7451de5ec215f10c(&v20, v35, v6);
                if ((int)v20)
                {
                    v45 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa((long long)(&v20)[8]);
                    ::0x4aa3a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c7c8706fc0e4609(&v4);
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hfd58dfe50f3f8eb9(&v10);
                    goto LABEL_4ac128;
                }
                else
                {
                    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h4a8f926ed93deb85(&v20, 0x2000, *((int *)&(&v20)[4]));
                    v39 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v20;
                    v40 = v22;
                    v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
                    v41 = v23;
                    v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41;
                    v24 = v40;
                    v26 = v41;
                }
            }
            v20 = v38;
            v43 = *((int128_t *)&v24);
            v30 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
            v44 = (int128_t)v26;
            v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
            v23 = v44;
            v22 = v43;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h23477c10bc9aacfb(&v13, &v20, v42);
            ::0x4aa3a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c7c8706fc0e4609(&v4);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf533bc1050936820(&v18, &v10);
        } while (*((long long *)&v18) != 0x8000000000000000);
    }
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hfd58dfe50f3f8eb9(&v10);
    v20 = std::io::stdio::stdout::h077da66234850927();
    v3 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v20, v46, v47);
    v48 = v1;
    v0 = v48;
    v17 = v15;
    uu_paste::DelimiterState::new::hf0d8373e3ee9ca93(&v20, v2, v7);
    v4 = 0;
    v5 = 1;
    v6 = 0;
    if (!(char)v8)
    {
        _$LT$T$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h77e6ba0b5c65416b(&v10, v17);
        v50 = &v4;
        v8 = &g_513528;
        v1 = v48;
    }
    else
    {
        v10 = _$LT$$RF$mut$u20$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h205b584f20030d6b(&v13);
        v11 = v47;
        v49 = v48;
        while (true)
        {
LABEL_4abe0d:
            v51 = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcf19a3115311c622(&v10);
            if (!v51)
                goto LABEL_4ac0b3;
            v6 = 0;
            while (true)
            {
                uu_paste::InputSource::read_until::ha189b0ba8cf073bb(&v24, v51, v49, &v4);
                v45 = v24;
                if (v45)
                    break;
                if (v25)
                {
                    uu_paste::remove_trailing_line_ending_byte::h9c66266c54fb3aec(v49, &v4);
                    uu_paste::DelimiterState::write_delimiter::h3f07c0732667350a(&v20, &v4, v47);
                }
                else
                {
                    uu_paste::DelimiterState::remove_trailing_delimiter::h05f8c54b5ae335cd(v20, (long long)v22, &v4);
                    v52 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v3, v5, v6);
                    if (v52)
                    {
                        v45 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v52);
LABEL_4ac16e:
                        goto LABEL_4ac114;
                    }
                    else
                    {
                        v53 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v3, &v0, 1);
                        if (v53)
                        {
                            v45 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v53);
                            goto LABEL_4ac16e;
                        }
                        goto LABEL_4abe0d;
                    }
                }
            }
        }
    }
    while (true)
    {
        v6 = 0;
        v24 = v14;
        v25 = v15 * 48 + v24;
        v26 = 0;
        v54 = 0;
        while (true)
        {
            v55 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h42462181228ea0b1(&v24);
            if (!v47)
                break;
            v56 = v55;
            if (v55 >= *((long long *)&v12))
                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
            if (*((char *)(v11 + v56)))
            {
LABEL_4abf60:
                v54 += 1;
                goto LABEL_4abf63;
            }
            else
            {
                uu_paste::InputSource::read_until::ha189b0ba8cf073bb(&v18, v47, v1, v50);
                v50 = v50;
                v45 = *((long long *)&v18);
                if (!(!v45))
                    goto LABEL_4ac10a;
                if (*((long long *)&(&v18)[8]))
                {
                    uu_paste::remove_trailing_line_ending_byte::h9c66266c54fb3aec(v1, v50);
LABEL_4abf63:
                    uu_paste::DelimiterState::write_delimiter::h3f07c0732667350a(&v20, v50, v59);
                }
                else if (v56 < *((long long *)&v12))
                {
                    *((char *)(v11 + v56)) = 1;
                    goto LABEL_4abf60;
                }
                else
                {
                    v8 = &g_513540;
                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                }
            }
        }
        if (v54 == v17)
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$bool$GT$$GT$::h75ed7e5d09a18263(&v10);
LABEL_4ac0b3:
            ::0x4aa3e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h12b87962429c2728(&v4);
            core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h17cbaf2a99daf26d(v3);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_paste..InputSource$GT$$GT$::h99c3d173137c32f8(&v13);
            core::ptr::drop_in_place$LT$core..cell..once..OnceCell$LT$alloc..rc..Rc$LT$core..cell..RefCell$LT$std..io..stdio..Stdin$GT$$GT$$GT$$GT$::h784acaad3057eb27(&v9);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$$u5b$alloc..boxed..Box$LT$$u5b$u8$u5d$$GT$$u5d$$GT$$GT$::h9aef2e2029ad91ff(v2, v7);
            return 0;
        }
        uu_paste::DelimiterState::remove_trailing_delimiter::h05f8c54b5ae335cd(v20, (long long)v22, v50);
        v60 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v3, v5, v6);
        if (v60)
        {
            v45 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v60);
            goto LABEL_4ac104;
        }
        v61 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v3, &v0, 1);
        if (v61)
            break;
        uu_paste::DelimiterState::reset_to_first_delimiter::h9238978dbebe5df3(&v20);
    }
    v45 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v61);
LABEL_4ac104:
LABEL_4ac10a:
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$bool$GT$$GT$::h75ed7e5d09a18263(&v10);
LABEL_4ac114:
    ::0x4aa3e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h12b87962429c2728(&v4);
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h17cbaf2a99daf26d(v3);
LABEL_4ac128:
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_paste..InputSource$GT$$GT$::h99c3d173137c32f8(&v13);
    core::ptr::drop_in_place$LT$core..cell..once..OnceCell$LT$alloc..rc..Rc$LT$core..cell..RefCell$LT$std..io..stdio..Stdin$GT$$GT$$GT$$GT$::h784acaad3057eb27(&v9);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$$u5b$alloc..boxed..Box$LT$$u5b$u8$u5d$$GT$$u5d$$GT$$GT$::h9aef2e2029ad91ff(v2, v7);
    return v2;
}
