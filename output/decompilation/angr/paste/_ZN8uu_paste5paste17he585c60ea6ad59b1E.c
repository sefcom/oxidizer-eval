long long uu_paste::paste::he585c60ea6ad59b1(struct_0 *a0, unsigned int a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    char v0;  // [sp-0x14d]
    unsigned int v1;  // [sp-0x14c]
    unsigned long long v2;  // [sp-0x148]
    unsigned long v3;  // [sp-0x140]
    int v4;  // [bp-0x138], Other Possible Types: void*
    unsigned long long v5;  // [sp-0x130]
    void* v6;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x120]
    unsigned long v8;  // [bp-0x118]
    unsigned int v9;  // [bp-0x118]
    void* v10;  // [sp-0x110]
    char v11;  // [bp-0x108], Other Possible Types: unsigned long
    char *v12;  // [sp-0x100], Other Possible Types: unsigned long long
    char v13;  // [bp-0xf8]
    unsigned long v14;  // [sp-0xe8]
    unsigned long long v15;  // [sp-0xe0]
    void* v16;  // [sp-0xd8]
    struct_0 *v17;  // [sp-0xd0]
    unsigned long long v18;  // [sp-0xc8]
    char v19;  // [bp-0xc0]
    char v20;  // [bp-0xb0]
    int v21;  // [bp-0xa8], Other Possible Types: char
    unsigned long v22;  // [sp-0xa8]
    int v23;  // [sp-0x98], Other Possible Types: char
    int v24;  // [sp-0x88]
    int v25;  // [sp-0x58], Other Possible Types: unsigned long
    unsigned long long v26;  // [sp-0x50]
    int v27;  // [bp-0x48], Other Possible Types: void*
    unsigned long long v29;  // 4098
    void* v30;  // rax
    int v32;  // ymm0
    int v33;  // ymm1
    int v34;  // ymm2
    int v35;  // xmm0
    int v36;  // ymm0
    unsigned long long v37;  // r15
    unsigned long long v38;  // rbx
    int v39;  // xmm0
    int v40;  // xmm0
    int v41;  // ymm0
    int v42;  // xmm1
    int v43;  // xmm2
    int v44;  // xmm0
    int v45;  // xmm1
    unsigned long long v46;  // rbp
    unsigned long long v47;  // rbx
    unsigned long v48;  // rdx
    unsigned int v49;  // r13d
    char *v50;  // r14
    unsigned long long v51;  // rax
    unsigned long long v52;  // rax
    unsigned long long v53;  // rax
    void* v54;  // rbx
    char *v55;  // rax
    unsigned long long v56;  // rdx
    char *v57;  // r15
    unsigned long long v58;  // rsi
    char *v59;  // rax
    unsigned long long v61;  // rax
    unsigned long long v62;  // rax
    unsigned long long v63;  // rax
    unsigned long long v64;  // rax

    uu_paste::parse_delimiters::hdea474197eebcdf0(&v21, a2, a3);
    v29 = *((long long *)&v21);
    v2 = *((long long *)&v21);
    if (v29)
    {
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h178417ce66b4845b(a0);
        v30 = v2;
        return v30;
    }
    v7 = *((long long *)&v23);
    v10 = 0;
    v17 = a0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hc0309f6673228509(&v21, a0->field_10, 0);
    v9 = a1;
    v1 = a4;
    if (*((long long *)&v21))
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v14, *((long long *)&v23)); /* do not return */
    v14 = *((long long *)&v21);
    v15 = *((long long *)&v23);
    v16 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h05a7d1457638e433(&v11, a0);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf533bc1050936820(&v19, &v11);
    if (*((long long *)&v19) != 0x8000000000000000)
    {
        do
        {
            v6 = *((long long *)&v20);
            v35 = *((int128_t *)&v19);
            v36 = v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35;
            v4 = v35;
            v37 = v5;
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h89f186647b952d92(v37, v6, "-", 1))
            {
                v38 = *((long long *)core::cell::once::OnceCell$LT$T$GT$::get_or_try_init::h7d4856c53a0eebb3(&v10));
                alloc::rc::RcInnerPtr::inc_strong::h5f27909c12118100(v38);
                v39 = v38;
                v40 = (unsigned long long)v39 CONCAT 0;
                v41 = (v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
                continue;
            }
            else
            {
                std::fs::File::open::h7451de5ec215f10c(&v21, v37, v6);
                if ((int)v21)
                {
                    v46 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa((long long)(&v21)[8]);
                    ::0x4aa3a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c7c8706fc0e4609(&v4);
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hfd58dfe50f3f8eb9(&v11);
                    goto LABEL_4ac128;
                }
                else
                {
                    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h4a8f926ed93deb85(&v21, 0x2000, *((int *)&(&v21)[4]));
                    v41 = v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v21;
                    v42 = v23;
                    v33 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42;
                    v43 = v24;
                    v34 = v34 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
                    v25 = v42;
                    v27 = v43;
                }
            }
            v21 = v40;
            v44 = *((int128_t *)&v25);
            v32 = v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
            v45 = (int128_t)v27;
            v33 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
            v24 = v45;
            v23 = v44;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h23477c10bc9aacfb(&v14, &v21);
            ::0x4aa3a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c7c8706fc0e4609(&v4);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf533bc1050936820(&v19, &v11);
        } while (*((long long *)&v19) != 0x8000000000000000);
    }
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hfd58dfe50f3f8eb9(&v11);
    v22 = std::io::stdio::stdout::h077da66234850927();
    v3 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v21);
    v47 = v1;
    v0 = v47;
    v18 = v16;
    uu_paste::DelimiterState::new::hf0d8373e3ee9ca93(&v21, v2, v7);
    v4 = 0;
    v5 = 1;
    v6 = 0;
    if (!(char)v9)
    {
        _$LT$T$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h77e6ba0b5c65416b(&v11, v18);
        v50 = &v4;
        v8 = &g_513528;
        v1 = v47;
    }
    else
    {
        v11 = _$LT$$RF$mut$u20$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h205b584f20030d6b(&v14);
        v12 = v48;
        v49 = v47;
        while (true)
        {
LABEL_4abe0d:
            v51 = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcf19a3115311c622(&v11);
            if (!v51)
                goto LABEL_4ac0b3;
            v6 = 0;
            while (true)
            {
                uu_paste::InputSource::read_until::ha189b0ba8cf073bb(&v25, v51, v49, &v4);
                v46 = v25;
                if (v46)
                    break;
                if (v26)
                {
                    uu_paste::remove_trailing_line_ending_byte::h9c66266c54fb3aec(v49, &v4);
                    uu_paste::DelimiterState::write_delimiter::h3f07c0732667350a(&v21, &v4);
                }
                else
                {
                    uu_paste::DelimiterState::remove_trailing_delimiter::h05f8c54b5ae335cd(v22, (long long)v23, &v4);
                    v52 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v3, v5, v6);
                    if (v52)
                    {
                        v63 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v52);
LABEL_4ac16e:
                        v46 = v63;
                        goto LABEL_4ac114;
                    }
                    else
                    {
                        v53 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v3, &v0, 1);
                        if (v53)
                        {
                            v63 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v53);
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
        v25 = v15;
        v26 = v16 * 48 + v25;
        v27 = 0;
        v54 = 0;
        while (true)
        {
            v55 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h42462181228ea0b1(&v25);
            if (!v56)
                break;
            v57 = v55;
            v58 = *((long long *)&v13);
            if (v55 >= v58)
                core::panicking::panic_bounds_check::h25a5330941572dd1(v57, v58, v8); /* do not return */
            if (*((char *)(v12 + v57)))
            {
LABEL_4abf60:
                v54 += 1;
                goto LABEL_4abf63;
            }
            else
            {
                uu_paste::InputSource::read_until::ha189b0ba8cf073bb(&v19, v56, v1, v50);
                v59 = v50;
                v46 = *((long long *)&v19);
                if (!(!v46))
                    goto LABEL_4ac10a;
                if (!*((long long *)&(&v19)[8]))
                {
                    v58 = *((long long *)&v13);
                    if (v57 >= v58)
                    {
                        v8 = &g_513540;
                        core::panicking::panic_bounds_check::h25a5330941572dd1(v57, v58, v8); /* do not return */
                    }
                    v50 = v59;
                    *((char *)(v12 + v57)) = 1;
                    goto LABEL_4abf60;
                }
                else
                {
                    v50 = v59;
                    uu_paste::remove_trailing_line_ending_byte::h9c66266c54fb3aec(v1, v59);
LABEL_4abf63:
                    uu_paste::DelimiterState::write_delimiter::h3f07c0732667350a(&v21, v50);
                }
            }
        }
        if (v54 == v18)
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$bool$GT$$GT$::h75ed7e5d09a18263(&v11);
LABEL_4ac0b3:
            ::0x4aa3e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h12b87962429c2728(&v4);
            core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h17cbaf2a99daf26d(v3);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_paste..InputSource$GT$$GT$::h99c3d173137c32f8(&v14);
            core::ptr::drop_in_place$LT$core..cell..once..OnceCell$LT$alloc..rc..Rc$LT$core..cell..RefCell$LT$std..io..stdio..Stdin$GT$$GT$$GT$$GT$::h784acaad3057eb27(&v10);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$$u5b$alloc..boxed..Box$LT$$u5b$u8$u5d$$GT$$u5d$$GT$$GT$::h9aef2e2029ad91ff(v2, v7);
            return 0;
        }
        uu_paste::DelimiterState::remove_trailing_delimiter::h05f8c54b5ae335cd(v22, (long long)v23, v50);
        v61 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v3, v5, v6);
        if (v61)
        {
            v64 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v61);
            goto LABEL_4ac104;
        }
        v62 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v3, &v0, 1);
        if (v62)
            break;
        uu_paste::DelimiterState::reset_to_first_delimiter::h9238978dbebe5df3(&v21);
    }
    v64 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v62);
LABEL_4ac104:
    v46 = v64;
LABEL_4ac10a:
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$bool$GT$$GT$::h75ed7e5d09a18263(&v11);
LABEL_4ac114:
    ::0x4aa3e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h12b87962429c2728(&v4);
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h17cbaf2a99daf26d(v3);
LABEL_4ac128:
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_paste..InputSource$GT$$GT$::h99c3d173137c32f8(&v14);
    core::ptr::drop_in_place$LT$core..cell..once..OnceCell$LT$alloc..rc..Rc$LT$core..cell..RefCell$LT$std..io..stdio..Stdin$GT$$GT$$GT$$GT$::h784acaad3057eb27(&v10);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$$u5b$alloc..boxed..Box$LT$$u5b$u8$u5d$$GT$$u5d$$GT$$GT$::h9aef2e2029ad91ff(v2, v7);
    v30 = v46;
    return v30;
}
