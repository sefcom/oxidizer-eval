long long uu_sort::chunks::read_to_buffer::h414114ae7ce8dff0(struct_0 *a0, unsigned int *a1, struct_1 *a2, unsigned long a3, unsigned long a4, unsigned long long a5)
{
    unsigned long v0;  // [sp-0x90], Other Possible Types: unsigned long long
    char *v1;  // [sp-0x88]
    char *v2;  // [sp-0x80]
    unsigned long long v3;  // [sp-0x78]
    char v4;  // [bp-0x70], Other Possible Types: unsigned int
    unsigned long long v5;  // [sp-0x60]
    unsigned long long v6;  // [sp-0x50]
    char v7;  // [bp-0x48]
    char v8;  // [bp-0x38]
    unsigned long v9;  // [bp+0x8]
    unsigned long long v11;  // r12
    unsigned long long v12;  // r12
    unsigned long long v13;  // rbp
    unsigned long long v14;  // rbx
    unsigned long v15;  // rdx
    unsigned long long v16;  // r12
    unsigned long long v17;  // rbp
    unsigned long long v19;  // 4096
    unsigned long long v21;  // rbx
    char *v23;  // rax
    unsigned long long v25;  // rbp
    unsigned long long v27;  // rbx
    unsigned long long v29;  // rsi
    char *v30;  // rbp
    char *v31;  // rdi
    char *v32;  // rax
    char v33;  // cl
    char *v34;  // rax
    unsigned long long v35;  // rbx
    struct_0 *v36;  // rcx
    struct_0 *v37;  // rax
    struct_0 *v38;  // rcx

    v11 = a2->field_10;
    v12 = v11 - a5;
    if (v11 < a5)
        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(a5, a2->field_10, &g_601ab0); /* do not return */
    v13 = &a2->field_8[a5];
    v6 = a4 >> 1;
    while (true)
    {
        v5 = v12;
        v5 = v5;
        while (true)
        {
            v14 = v5;
            v16 = v15;
            if (_$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(a1, v13, v14))
            {
LABEL_55d397:
                if ((char)::0x559960::std::io::error::Error::kind::hb2ff5fa058639b3d(v16) != 35)
                {
                    v0 = v16;
                    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::ha0e369c0360be1c1(&v7, &v0);
                    v4 = 2;
                    *((int128_t *)&v1) = *((int128_t *)&v7);
                    v3 = *((long long *)&v8);
                    v38 = a0;
                    *((double *)&v38->field_8) = ::0x55ad10::alloc::boxed::Box$LT$T$GT$::new::h7a4ce38e59829aec(&v1);
                    *((char **)&v38->field_10) = &g_601a40;
                    v38->field_0 = 1;
                    v37 = ::0x55a150::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0ea81dc276204afd();
                    return v37;
                }
                ::0x55a150::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0ea81dc276204afd();
                v5 = v14;
            }
            else
            {
                if (a3 != 1)
                {
                    if (!(!v15))
                        goto LABEL_55d437;
                    if (!(!v15))
                        goto LABEL_55d4e0;
                    v17 = a2->field_10;
                    goto LABEL_55d458;
                }
                if (v16)
                {
LABEL_55d437:
                    if (v14 < v16)
                        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(v16, v14, &g_6019f0); /* do not return */
                    v13 += v16;
                    v5 = v14 - v16;
                    continue;
                }
                if (v14)
                {
LABEL_55d4e0:
                    v12 = v5;
                    if (v12 != v14)
                    {
                        v29 = a2->field_10;
                        v30 = v29 - v14;
                        v31 = v30 + 1;
                        if (v31 >= v29)
                            core::panicking::panic_bounds_check::h25a5330941572dd1(v31, v29, &g_6019a8); /* do not return */
                        v32 = a2->field_8;
                        v33 = v9;
                        if (*((char *)(v32 + v31)) != v33)
                        {
                            if (v29 >= v14)
                            {
                                *((char *)(v32 + v30)) = v33;
                                v14 -= 1;
                                v29 = a2->field_10;
                                v30 = v29 - v14;
                            }
                            else
                            {
                                core::panicking::panic_bounds_check::h25a5330941572dd1(v30, v29, &g_6019c0); /* do not return */
                            }
                        }
                        if (v14 > v29)
                            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(v30, v29, &g_6019d8); /* do not return */
                        v13 = v30 + a2->field_8;
                        break;
                    }
                }
                v17 = a2->field_10;
                if (v17 >= a4)
                {
LABEL_55d458:
                    v23 = a2->field_8;
                    v1 = v23;
                    v2 = v23;
                    v3 = &v23[v17];
                    v4 = v9;
                    if (memchr::arch::generic::memchr::Iter::next_back::ha68dd67eda4e11ad(&v1, &v4) != 1)
                    {
                        v25 = a2->field_10;
                        alloc::vec::Vec$LT$T$C$A$GT$::resize::h8264c119ba4725ae(a2, v25 + 0x2800, 0);
                        v27 = a2->field_10;
                        if (v27 < v25)
                            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(v25, a2->field_10, &g_601990); /* do not return */
                        v13 = &a2->field_8[v25];
                        v5 = v27 - v25;
                    }
                    else if (!memchr::arch::generic::memchr::Iter::next_back::ha68dd67eda4e11ad(&v1, &v4))
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa(&g_601978); /* do not return */
                    }
                    else
                    {
                        v37 = a0;
                        v37->field_8 = v15 + 1;
                        v37->field_10 = 1;
                        v37->field_0 = 0;
                        return v37;
                    }
                }
                else
                {
                    if (v6 <= v17)
                        v19 = a4;
                    else
                        v19 = v17 * 2;
                    alloc::vec::Vec$LT$T$C$A$GT$::resize::h8264c119ba4725ae(a2, v19, 0);
                    v21 = a2->field_10;
                    v14 = v21 - v17;
                    if (v21 < v17)
                        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(v17, a2->field_10, &g_601960); /* do not return */
                    v13 = &a2->field_8[v17];
                    v16 = v15;
                    if (!_$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(a1, v13, v14))
                        continue;
                    goto LABEL_55d397;
                }
            }
        }
        _$LT$core..iter..sources..empty..Empty$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8eccb4edd6a25a96(&v1);
        if (!v1)
        {
            v36 = a0;
            v36->field_8 = a2->field_10 - v12;
            v36->field_10 = 0;
            v37 = 0;
            break;
        }
        else
        {
            v34 = v2;
            v35 = v3;
            if (!v34)
            {
                ::0x559fc0::core::ptr::drop_in_place$LT$std..fs..File$GT$::hbb578aa8d27e7bc5();
                *(a1) = v35;
            }
            else
            {
                v36 = a0;
                v36->field_8 = v34;
                *((unsigned long long *)&v36->field_10) = v35;
                v37 = 1;
                break;
            }
        }
    }
    v36->field_0 = v37;
    return v37;
}
