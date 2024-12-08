long long uu_sort::chunks::read_to_buffer::hde926e2a3018dd1c(struct_0 *a0, unsigned int *a1, struct_1 *a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned long v0;  // [sp-0x90], Other Possible Types: unsigned long long
    int v1;  // [sp-0x88], Other Possible Types: char *
    char *v2;  // [sp-0x80]
    unsigned long long v3;  // [sp-0x78]
    char v4;  // [bp-0x70], Other Possible Types: unsigned int
    unsigned long long v5;  // [sp-0x60]
    unsigned long long v6;  // [sp-0x50]
    char v7;  // [bp-0x48]
    char v8;  // [bp-0x38]
    unsigned long v9;  // [bp+0x8]
    unsigned long long v10;  // r12
    unsigned long long v11;  // r12
    unsigned long long v12;  // rbp
    unsigned long long v13;  // rbx
    unsigned long v14;  // rdx
    unsigned long long v15;  // r12
    unsigned long long v16;  // rbp
    unsigned long long v17;  // rsi
    unsigned long long v18;  // 4096
    unsigned long long v19;  // rbx
    unsigned long long v20;  // rbx
    char *v21;  // rax
    unsigned long long v23;  // rbp
    unsigned long long v24;  // rbx
    unsigned long long v26;  // rsi
    char *v27;  // rbp
    char *v28;  // rdi
    char *v29;  // rax
    char v30;  // cl
    char *v31;  // rax
    unsigned long long v32;  // rbx
    struct_0 *v33;  // rcx
    struct_0 *v34;  // rax
    struct_0 *v35;  // rcx

    v10 = a2->field_10;
    v11 = v10 - a5;
    if (v10 < a5)
        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
    v12 = &a2->field_8[a5];
    v6 = a4 >> 1;
    while (true)
    {
        v5 = v11;
        v5 = v5;
        while (true)
        {
            v13 = v5;
            v15 = v14;
            if (!_$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(a1, v12, v13))
            {
                if (a3 != 1)
                {
                    if (!(!v14))
                        goto LABEL_56fee7;
                    if (!(!v14))
                        goto LABEL_56ff90;
                    v16 = a2->field_10;
                    goto LABEL_56ff08;
                }
                else
                {
                    if (v15)
                    {
LABEL_56fee7:
                        v20 = v13 - v15;
                        if (v13 < v15)
                            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                        v12 += v15;
                        continue;
                    }
                    if (v13)
                    {
LABEL_56ff90:
                        v11 = v5;
                        if (v11 != v13)
                        {
                            v26 = a2->field_10;
                            v27 = v26 - v13;
                            v28 = v27 + 1;
                            if (v28 >= v26)
                                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                            v29 = a2->field_8;
                            v30 = v9;
                            if (*((char *)(v29 + v28)) != v30)
                            {
                                if (v26 >= v13)
                                {
                                    *((char *)(v29 + v27)) = v30;
                                    v13 -= 1;
                                    v26 = a2->field_10;
                                    v27 = v26 - v13;
                                }
                                else
                                {
                                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                                }
                            }
                            if (v13 > v26)
                                core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                            v12 = v27 + a2->field_8;
                            break;
                        }
                    }
                    v16 = a2->field_10;
                    if (v16 < a4)
                    {
                        v17 = v16 * 2;
                        alloc::vec::Vec$LT$T$C$A$GT$::resize::hab7b8ac79419c496(a2, v18, 0);
                        v19 = a2->field_10;
                        v13 = v19 - v16;
                        if (v19 < v16)
                            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                        v12 = &a2->field_8[v16];
                        v15 = v14;
                        if (!_$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(a1, v12, v13))
                            continue;
                    }
                    else
                    {
LABEL_56ff08:
                        v21 = a2->field_8;
                        v1 = v21;
                        v2 = v21;
                        v3 = &v21[v16];
                        v4 = v9;
                        if (memchr::arch::generic::memchr::Iter::next_back::h68547a4191047976(&v1, &v4) == 1)
                        {
                            if (!memchr::arch::generic::memchr::Iter::next_back::h68547a4191047976(&v1, &v4))
                                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                            v34 = a0;
                            v34->field_8 = v14 + 1;
                            v34->field_10 = 1;
                            v34->field_0 = 0;
                            return v34;
                        }
                        v23 = a2->field_10;
                        alloc::vec::Vec$LT$T$C$A$GT$::resize::hab7b8ac79419c496(a2, v23 + 0x2800, 0);
                        v24 = a2->field_10;
                        if (v24 < v23)
                            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                        v12 = &a2->field_8[v23];
                        continue;
                    }
                }
            }
            if ((char)::0x56bfd0::std::io::error::Error::kind::hb2ff5fa058639b3d(v15) != 35)
            {
                v0 = v15;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h6e1caa09bc42369c(&v7, &v0);
                v4 = 2;
                *((int128_t *)&v1) = *((int128_t *)&v7);
                v3 = *((long long *)&v8);
                v35 = a0;
                *((double *)&v35->field_8) = ::0x56d2a0::alloc::boxed::Box$LT$T$GT$::new::h462c2fa7664b165e(&v1);
                *((char **)&v35->field_10) = &g_601a60;
                v35->field_0 = 1;
                v34 = ::0x56c630::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hfb176c4714fff39e(v0);
                return v34;
            }
            ::0x56c630::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hfb176c4714fff39e(v15);
        }
        _$LT$core..iter..sources..empty..Empty$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h88bf632bbcec8dc3(&v1);
        if (!v1)
        {
            v33 = a0;
            v33->field_8 = a2->field_10 - v11;
            v33->field_10 = 0;
            v34 = 0;
            break;
        }
        else
        {
            v31 = v2;
            v32 = v3;
            if (!v31)
            {
                ::0x56c4a0::core::ptr::drop_in_place$LT$std..fs..File$GT$::hd76acdca944f2343(*(a1));
                *(a1) = v32;
            }
            else
            {
                v33 = a0;
                v33->field_8 = v31;
                *((unsigned long long *)&v33->field_10) = v32;
                v34 = 1;
                break;
            }
        }
    }
    v33->field_0 = v34;
    return v34;
}
