long long uu_sort::chunks::read_to_buffer::h6e220f97509f8350(struct_0 *a0, unsigned long long a1[2], struct_1 *a2, unsigned long a3, unsigned long a4, unsigned long long a5)
{
    unsigned long long v0;  // [sp-0xa8]
    unsigned long v1;  // [sp-0x90], Other Possible Types: unsigned long long
    char *v2;  // [sp-0x88]
    char *v3;  // [sp-0x80]
    unsigned long long v4;  // [sp-0x78]
    char v5;  // [bp-0x70], Other Possible Types: unsigned int
    unsigned long long v6;  // [sp-0x58]
    char v7;  // [bp-0x48]
    char v8;  // [bp-0x38]
    unsigned long v9;  // [bp+0x8]
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rbp
    unsigned long long v14[2];  // r14
    unsigned long v15;  // rdx
    unsigned long long v16;  // r15
    unsigned long long v17;  // r13
    unsigned long long v18;  // r14
    unsigned long long v19;  // rbp
    unsigned long long v21;  // 4096
    unsigned long long v23;  // rbx
    char *v24;  // rax
    unsigned long long v26;  // rbp
    unsigned long long v28;  // rbx
    unsigned long long v29;  // rsi
    char *v30;  // rbp
    char *v31;  // rdi
    char *v32;  // rax
    char v33;  // cl
    char *v34;  // rax
    char *v35;  // rbx
    unsigned long long v36[2];  // rax
    struct_0 *v37;  // rcx
    struct_0 *v38;  // rax
    struct_0 *v39;  // rcx

    v11 = a2->field_10;
    v12 = v11 - a5;
    if (v11 < a5)
        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(a5, a2->field_10, &g_601ab0); /* do not return */
    v13 = &a2->field_8[a5];
    v6 = a4 >> 1;
    while (true)
    {
        v0 = v12;
        while (true)
        {
            v14 = a1;
            v16 = v15;
            if (std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::hb06b12a83684c07d(v14[0], v14[1], v13, v12))
            {
LABEL_55d73f:
                if ((char)::0x559960::std::io::error::Error::kind::hb2ff5fa058639b3d(v16) != 35)
                {
                    v1 = v16;
                    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::ha0e369c0360be1c1(&v7, &v1);
                    v5 = 2;
                    *((int128_t *)&v2) = *((int128_t *)&v7);
                    v4 = *((long long *)&v8);
                    v39 = a0;
                    *((double *)&v39->field_8) = ::0x55ad10::alloc::boxed::Box$LT$T$GT$::new::h7a4ce38e59829aec(&v2);
                    *((char **)&v39->field_10) = &g_601a40;
                    v39->field_0 = 1;
                    v38 = ::0x55a150::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0ea81dc276204afd();
                    return v38;
                }
                ::0x55a150::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0ea81dc276204afd();
            }
            else
            {
                v17 = v14[0];
                v18 = v14[1];
                if (a3 != 1)
                {
                    if (!(!v15))
                        goto LABEL_55d7e1;
                    if (!(!v15))
                        goto LABEL_55d890;
                    v19 = a2->field_10;
                    goto LABEL_55d803;
                }
                if (v16)
                {
LABEL_55d7e1:
                    v12 -= v16;
                    if (v12 < v16)
                        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(v16, v12, &g_6019f0); /* do not return */
                    v13 += v16;
                    continue;
                }
                if (v12)
                {
LABEL_55d890:
                    v12 = v0;
                    if (v12 != v12)
                    {
                        v29 = a2->field_10;
                        v30 = v29 - v12;
                        v31 = v30 + 1;
                        if (v31 >= v29)
                            core::panicking::panic_bounds_check::h25a5330941572dd1(v31, v29, &g_6019a8); /* do not return */
                        v32 = a2->field_8;
                        v33 = v9;
                        if (*((char *)(v32 + v31)) != v33)
                        {
                            if (v29 < v12)
                                core::panicking::panic_bounds_check::h25a5330941572dd1(v30, v29, &g_6019c0); /* do not return */
                            *((char *)(v32 + v30)) = v33;
                            v12 -= 1;
                            v29 = a2->field_10;
                            v30 = v29 - v12;
                        }
                        if (v12 > v29)
                            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(v30, v29, &g_6019d8); /* do not return */
                        v13 = v30 + a2->field_8;
                        break;
                    }
                }
                v19 = a2->field_10;
                if (v19 >= a4)
                {
LABEL_55d803:
                    v24 = a2->field_8;
                    v2 = v24;
                    v3 = v24;
                    v4 = &v24[v19];
                    v5 = v9;
                    if (memchr::arch::generic::memchr::Iter::next_back::ha68dd67eda4e11ad(&v2, &v5) != 1)
                    {
                        v26 = a2->field_10;
                        alloc::vec::Vec$LT$T$C$A$GT$::resize::h8264c119ba4725ae(a2, v26 + 0x2800, 0);
                        v28 = a2->field_10;
                        v12 = v28 - v26;
                        if (v28 < v26)
                            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(v26, a2->field_10, &g_601990); /* do not return */
                        v13 = &a2->field_8[v26];
                    }
                    else if (!memchr::arch::generic::memchr::Iter::next_back::ha68dd67eda4e11ad(&v2, &v5))
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa(&g_601978); /* do not return */
                    }
                    else
                    {
                        v38 = a0;
                        v38->field_8 = v15 + 1;
                        v38->field_10 = 1;
                        v38->field_0 = 0;
                        return v38;
                    }
                }
                else
                {
                    if (v6 > v19)
                        v21 = v19 * 2;
                    alloc::vec::Vec$LT$T$C$A$GT$::resize::h8264c119ba4725ae(a2, v21, 0);
                    v23 = a2->field_10;
                    v12 = v23 - v19;
                    if (v23 < v19)
                        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(v19, a2->field_10, &g_601960); /* do not return */
                    v13 = &a2->field_8[v19];
                    v16 = v15;
                    if (!std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::hb06b12a83684c07d(v17, v18, v13, v12))
                        continue;
                    goto LABEL_55d73f;
                }
            }
        }
        _$LT$core..iter..sources..empty..Empty$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h10cf04d28d342b4e(&v2);
        v34 = v2;
        if (v34 == 2)
        {
            v37 = a0;
            v37->field_8 = a2->field_10 - v12;
            v37->field_10 = 0;
            v38 = 0;
            break;
        }
        else
        {
            v35 = v3;
            v0 = v4;
            if (!v34)
            {
                ::0x55a5f0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$::hda4324549e97968a(v17, v18);
                v36 = a1;
                v36[0] = v35;
                v36[1] = v0;
            }
            else
            {
                v37 = a0;
                v37->field_8 = v35;
                *((unsigned long long *)&v37->field_10) = v0;
                v38 = 1;
                break;
            }
        }
    }
    v37->field_0 = v38;
    return v38;
}
