long long uu_sort::chunks::read_to_buffer::hb47f072b47a74618(struct_0 *a0, unsigned long long a1[2], struct_1 *a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned long long v0;  // [sp-0xa8]
    unsigned long v1;  // [sp-0x90], Other Possible Types: unsigned long long
    int v2;  // [sp-0x88], Other Possible Types: char *
    char *v3;  // [sp-0x80]
    unsigned long long v4;  // [sp-0x78]
    char v5;  // [bp-0x70], Other Possible Types: unsigned int
    unsigned long long v6;  // [sp-0x58]
    char v7;  // [bp-0x48]
    char v8;  // [bp-0x38]
    unsigned long v9;  // [bp+0x8]
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rbp
    unsigned long long v13[2];  // r14
    unsigned long v14;  // rdx
    unsigned long long v15;  // r15
    unsigned long long v16;  // r13
    unsigned long long v17;  // r14
    unsigned long long v18;  // rbp
    unsigned long long v19;  // rsi
    unsigned long long v20;  // 4096
    unsigned long long v21;  // rbx
    char *v22;  // rax
    unsigned long long v24;  // rbp
    unsigned long long v25;  // rbx
    unsigned long long v26;  // rsi
    char *v27;  // rbp
    char *v28;  // rdi
    char *v29;  // rax
    char v30;  // cl
    char *v31;  // rax
    char *v32;  // rbx
    unsigned long long v33[2];  // rax
    struct_0 *v34;  // rcx
    struct_0 *v35;  // rax
    struct_0 *v36;  // rcx

    v10 = a2->field_10;
    v11 = v10 - a5;
    if (v10 < a5)
        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
    v12 = &a2->field_8[a5];
    v6 = a4 >> 1;
    while (true)
    {
        v0 = v11;
        while (true)
        {
            v13 = a1;
            v15 = v14;
            if (std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::h52451ab2a4663044(v13[0], v13[1], v12, v11))
            {
LABEL_56fa6f:
                if ((char)::0x56bfd0::std::io::error::Error::kind::hb2ff5fa058639b3d(v15) != 35)
                {
                    v1 = v15;
                    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h6e1caa09bc42369c(&v7, &v1);
                    v5 = 2;
                    *((int128_t *)&v2) = *((int128_t *)&v7);
                    v4 = *((long long *)&v8);
                    v36 = a0;
                    *((double *)&v36->field_8) = ::0x56d2a0::alloc::boxed::Box$LT$T$GT$::new::h462c2fa7664b165e(&v2);
                    *((char **)&v36->field_10) = &g_601a60;
                    v36->field_0 = 1;
                    v35 = ::0x56c630::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hfb176c4714fff39e(v1);
                    return v35;
                }
                ::0x56c630::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hfb176c4714fff39e(v15);
            }
            else
            {
                v16 = v13[0];
                v17 = v13[1];
                if (a3 != 1)
                {
                    if (!(!v14))
                        goto LABEL_56fb11;
                    if (!(!v14))
                        goto LABEL_56fbc0;
                    v18 = a2->field_10;
                    goto LABEL_56fb33;
                }
                if (v15)
                {
LABEL_56fb11:
                    v11 -= v15;
                    if (v11 < v15)
                        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                    v12 += v15;
                    continue;
                }
                if (v11)
                {
LABEL_56fbc0:
                    v11 = v0;
                    if (v11 != v11)
                    {
                        v26 = a2->field_10;
                        v27 = v26 - v11;
                        v28 = v27 + 1;
                        if (v28 >= v26)
                            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                        v29 = a2->field_8;
                        v30 = v9;
                        if (*((char *)(v29 + v28)) != v30)
                        {
                            if (v26 < v11)
                                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                            *((char *)(v29 + v27)) = v30;
                            v11 -= 1;
                            v26 = a2->field_10;
                            v27 = v26 - v11;
                        }
                        if (v11 > v26)
                            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                        v12 = v27 + a2->field_8;
                        break;
                    }
                }
                v18 = a2->field_10;
                if (v18 >= a4)
                {
LABEL_56fb33:
                    v22 = a2->field_8;
                    v2 = v22;
                    v3 = v22;
                    v4 = &v22[v18];
                    v5 = v9;
                    if (memchr::arch::generic::memchr::Iter::next_back::h68547a4191047976(&v2, &v5) != 1)
                    {
                        v24 = a2->field_10;
                        alloc::vec::Vec$LT$T$C$A$GT$::resize::hab7b8ac79419c496(a2, v24 + 0x2800, 0);
                        v25 = a2->field_10;
                        v11 = v25 - v24;
                        if (v25 < v24)
                            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                        v12 = &a2->field_8[v24];
                    }
                    else if (!memchr::arch::generic::memchr::Iter::next_back::h68547a4191047976(&v2, &v5))
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                    }
                    else
                    {
                        v35 = a0;
                        v35->field_8 = v14 + 1;
                        v35->field_10 = 1;
                        v35->field_0 = 0;
                        return v35;
                    }
                }
                else
                {
                    v19 = v18 * 2;
                    alloc::vec::Vec$LT$T$C$A$GT$::resize::hab7b8ac79419c496(a2, v20, 0);
                    v21 = a2->field_10;
                    v11 = v21 - v18;
                    if (v21 < v18)
                        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                    v12 = &a2->field_8[v18];
                    v15 = v14;
                    if (!std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::h52451ab2a4663044(v16, v17, v12, v11))
                        continue;
                    goto LABEL_56fa6f;
                }
            }
        }
        _$LT$core..iter..sources..empty..Empty$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9539a0862df695c7(&v2);
        v31 = v2;
        if (v31 == 2)
        {
            v34 = a0;
            v34->field_8 = a2->field_10 - v11;
            v34->field_10 = 0;
            v35 = 0;
            break;
        }
        else
        {
            v32 = v3;
            v0 = v4;
            if (!v31)
            {
                ::0x56ca00::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$::hf071592bb9885b68(v16, v17);
                v33 = a1;
                v33[0] = v32;
                v33[1] = v0;
            }
            else
            {
                v34 = a0;
                v34->field_8 = v32;
                *((unsigned long long *)&v34->field_10) = v0;
                v35 = 1;
                break;
            }
        }
    }
    v34->field_0 = v35;
    return v35;
}
