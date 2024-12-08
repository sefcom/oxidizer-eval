long long uu_uniq::Uniq::print_uniq::h991e4f51a3564414(char a0[55], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned int v0;  // [sp-0x108]
    char v1;  // [sp-0xfb]
    char v2;  // [sp-0xfa]
    char v3;  // [sp-0xf9]
    int v4;  // [sp-0xf8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v5;  // [sp-0xf0]
    unsigned long long v6;  // [sp-0xe8]
    int v7;  // [bp-0xc8], Other Possible Types: char
    char v8;  // [bp-0xc0]
    unsigned long v9;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned int v10;  // [sp-0xa4]
    unsigned long v11;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x98]
    unsigned long long v13;  // [sp-0x90]
    int v14;  // [sp-0x88]
    unsigned long long v15;  // [sp-0x78]
    char v16;  // [bp-0x68]
    char v17;  // [bp-0x60]
    char v18;  // [bp-0x58]
    unsigned long long v19;  // [sp-0x50]
    char v20;  // [bp-0x48]
    char v21;  // [bp-0x40]
    char v22;  // [bp-0x38]
    unsigned int v24;  // ebp
    unsigned long long v26;  // rax
    void* v27;  // r14
    int v29;  // xmm0
    int v30;  // ymm0
    int v31;  // ymm0
    unsigned long long v32;  // r12
    void* v33;  // rbx
    unsigned long long v34;  // rax
    unsigned long long v36;  // rax
    int v37;  // xmm0
    int v38;  // xmm0
    int v39;  // xmm0
    int v40;  // xmm0
    unsigned int v41;  // eax

    v24 = (a0[53] ? 0 : 10);
    std::io::BufRead::split::hc5220b8c5ca15a29(&v16, a1, a2, v24);
    _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9877225451396f55(&v7, &v16);
    v26 = *((long long *)&v7);
    if (v26 == 9223372036854775809)
    {
        v27 = 0;
        goto LABEL_4707fe;
    }
    else if (v26 != 0x8000000000000000)
    {
        v10 = v24;
        v4 = v26;
        v5 = *((long long *)&v8);
        v6 = v9;
        v15 = *((long long *)&v18);
        v29 = *((int128_t *)&v16);
        v31 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29;
        v14 = v29;
        v3 = a0[50];
        v2 = a0[48];
        v1 = a0[49];
        v32 = 1;
        v33 = 0;
        v19 = 9223372036854775809;
        while (true)
        {
            _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9877225451396f55(&v20, &v14);
            v34 = *((long long *)&v20);
            if (v34 == v19)
                break;
            if (v34 == 0x8000000000000000)
            {
                v36 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v12);
                goto LABEL_470a92;
            }
            v11 = v34;
            v12 = *((long long *)&v21);
            v13 = *((long long *)&v22);
            if (!(char)uu_uniq::Uniq::cmp_keys::h96df18b10909e02e(a0, v5, v6, v12, v13))
            {
                if (!v3)
                {
                    ::0x46f390::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h2f048dfcfcbe9006(&v11);
                    v32 += 1;
                    continue;
                }
                v0 = (char)v33 & 1;
                v36 = uu_uniq::Uniq::print_line::h6ba6aac2a8e20b78(a0, a3, a4, v5, v6, v32);
                if (!(!v36))
                    goto LABEL_470a85;
                v9 = v13;
                v37 = *((int128_t *)&v11);
                v7 = v37;
                ::0x46f390::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h2f048dfcfcbe9006(&v4);
                v6 = v9;
                v39 = (int128_t)v7;
                v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39;
                v4 = v39;
                v32 += 1;
                v33 = v33 | -0x100 | (char)v33 & 1 | -0x100 | 1;
            }
            else
            {
                if (!(!v2 & v32 == 1) && !(!(v32 <= 1) & !v1) || (v0 = (unsigned int)((char)v33 & 1), v36 = uu_uniq::Uniq::print_line::h6ba6aac2a8e20b78(a0, a3, a4, v5, v6, v32), v33 = v33 | -0x100 | (unsigned long long)((char)v33 & 1) | -0x100 | 1, !v36))
                {
                    v9 = v13;
                    v38 = *((int128_t *)&v11);
                    v7 = v38;
                    ::0x46f390::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h2f048dfcfcbe9006(&v4);
                    v6 = v9;
                    v40 = (int128_t)v7;
                    v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
                    v4 = v40;
                    v32 = 1;
                    continue;
                }
LABEL_470a85:
                ::0x46f390::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h2f048dfcfcbe9006(&v11);
LABEL_470a92:
                core::ptr::drop_in_place$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hfd314e2733464e00((long long)v14, (long long)(&v14)[8]);
                goto LABEL_470b1b;
            }
        }
        core::ptr::drop_in_place$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hfd314e2733464e00((long long)v14, (long long)(&v14)[8]);
        if (!(!v2 & v32 == 1) && !(!(v32 <= 1) & !v1))
        {
            v41 = a0[54];
            if (!(!v36))
                goto LABEL_470b27;
        }
        else
        {
            v0 = (char)v33 & 1;
            v36 = uu_uniq::Uniq::print_line::h6ba6aac2a8e20b78(a0, a3, a4, v5, v6, v32);
            if (!(!v36))
                goto LABEL_470b18;
            if (a0[54] && a0[54] != 3)
            {
LABEL_470b27:
                ::0x46f390::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h2f048dfcfcbe9006(&v4);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::hf52dd28bb659f3b5(a3, a4);
                return 0;
            }
        }
        v7 = v10;
        v36 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h3394783b3f4b5d0a(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::hccd5f406e190b276(a3, a4, &v7, 1));
        if (!v36)
        {
            ::0x46f390::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h2f048dfcfcbe9006(&v4);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::hf52dd28bb659f3b5(a3, a4);
            return 0;
        }
LABEL_470b18:
LABEL_470b1b:
        ::0x46f390::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h2f048dfcfcbe9006(&v4);
    }
    else
    {
        v27 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v5);
LABEL_4707fe:
        core::ptr::drop_in_place$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hfd314e2733464e00(*((long long *)&v16), *((long long *)&v17));
    }
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::hf52dd28bb659f3b5(a3, a4);
    return v27;
}
