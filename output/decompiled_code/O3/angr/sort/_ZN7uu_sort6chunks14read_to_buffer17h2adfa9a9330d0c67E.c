long long uu_sort::chunks::read_to_buffer::h2adfa9a9330d0c67(struct_0 *a0, unsigned long long a1[2], unsigned long long a2, struct_1 *a3, unsigned long a4, unsigned long a5)
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
    char v10;  // [bp+0x10]
    unsigned long long v11;  // rbp
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rbp
    unsigned long long v15[2];  // r14
    unsigned long v16;  // rdx
    unsigned long long v17;  // r15
    unsigned long long v18;  // r13
    unsigned long long v19;  // r14
    unsigned long long v20;  // rbp
    unsigned long long v21;  // rsi
    unsigned long long v22;  // 4096
    unsigned long long v23;  // rbx
    char *v24;  // rax
    unsigned long long v26;  // rbp
    unsigned long long v27;  // rbx
    unsigned long long v28;  // rsi
    char *v29;  // rbp
    char *v30;  // rdi
    char *v31;  // rax
    char v32;  // cl
    char *v33;  // rax
    char *v34;  // rbx
    unsigned long long v35[2];  // rax
    struct_0 *v36;  // rcx
    struct_0 *v37;  // rax
    struct_0 *v38;  // rcx

    v11 = v9;
    v12 = a3->field_10;
    v13 = v12 - v11;
    if (v12 < v11)
        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
    v14 = &a3->field_8[v11];
    v6 = a5 >> 1;
    while (true)
    {
        v0 = v13;
        while (true)
        {
            v15 = a1;
            v17 = v16;
            if (!std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::h52451ab2a4663044(v15[0], v15[1], v14, v13))
            {
                v18 = v15[0];
                v19 = v15[1];
                if (a4 != 1)
                {
                    if (!(!v16))
                        goto LABEL_56f721;
                    if (!(!v16))
                        goto LABEL_56f7d0;
                    v20 = a3->field_10;
                    goto LABEL_56f743;
                }
                else
                {
                    if (v17)
                    {
LABEL_56f721:
                        v13 -= v17;
                        if (v13 < v17)
                            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                        v14 += v17;
                        continue;
                    }
                    if (v13)
                    {
LABEL_56f7d0:
                        v13 = v0;
                        if (v13 != v13)
                        {
                            v28 = a3->field_10;
                            v29 = v28 - v13;
                            v30 = v29 + 1;
                            if (v30 >= v28)
                                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                            v31 = a3->field_8;
                            v32 = v10;
                            if (*((char *)(v31 + v30)) != v32)
                            {
                                if (v28 >= v13)
                                {
                                    *((char *)(v31 + v29)) = v32;
                                    v13 -= 1;
                                    v28 = a3->field_10;
                                    v29 = v28 - v13;
                                }
                                else
                                {
                                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                                }
                            }
                            if (v13 > v28)
                                core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                            v14 = v29 + a3->field_8;
                            break;
                        }
                    }
                    v20 = a3->field_10;
                    if (v20 < a5)
                    {
                        v21 = v20 * 2;
                        alloc::vec::Vec$LT$T$C$A$GT$::resize::hab7b8ac79419c496(a3, v22, 0);
                        v23 = a3->field_10;
                        v13 = v23 - v20;
                        if (v23 < v20)
                            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                        v14 = &a3->field_8[v20];
                        v17 = v16;
                        if (!std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::h52451ab2a4663044(v18, v19, v14, v13))
                            continue;
                    }
                    else
                    {
LABEL_56f743:
                        v24 = a3->field_8;
                        v2 = v24;
                        v3 = v24;
                        v4 = &v24[v20];
                        v5 = v10;
                        if (memchr::arch::generic::memchr::Iter::next_back::h68547a4191047976(&v2, &v5) != 1)
                        {
                            v26 = a3->field_10;
                            alloc::vec::Vec$LT$T$C$A$GT$::resize::hab7b8ac79419c496(a3, v26 + 0x2800, 0);
                            v27 = a3->field_10;
                            v13 = v27 - v26;
                            if (v27 < v26)
                                core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                            v14 = &a3->field_8[v26];
                        }
                        else if (!memchr::arch::generic::memchr::Iter::next_back::h68547a4191047976(&v2, &v5))
                        {
                            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                        }
                        else
                        {
                            v37 = a0;
                            v37->field_8 = v16 + 1;
                            v37->field_10 = 1;
                            v37->field_0 = 0;
                            return v37;
                        }
                        continue;
                    }
                }
            }
            if ((char)::0x56bfd0::std::io::error::Error::kind::hb2ff5fa058639b3d(v17) != 35)
            {
                v1 = v17;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h6e1caa09bc42369c(&v7, &v1);
                v5 = 2;
                *((int128_t *)&v2) = *((int128_t *)&v7);
                v4 = *((long long *)&v8);
                v38 = a0;
                *((double *)&v38->field_8) = ::0x56d2a0::alloc::boxed::Box$LT$T$GT$::new::h462c2fa7664b165e(&v2);
                *((char **)&v38->field_10) = &g_601a60;
                v38->field_0 = 1;
                v37 = ::0x56c630::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hfb176c4714fff39e(v1);
                return v37;
            }
            ::0x56c630::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hfb176c4714fff39e(v17);
        }
        ::0x56d640::_$LT$$RF$mut$u20$I$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0d9998eff09323c2(&v2, a2);
        v33 = v2;
        if (v33 == 2)
        {
            v36 = a0;
            v36->field_8 = a3->field_10 - v13;
            v36->field_10 = 0;
            v37 = 0;
            break;
        }
        else
        {
            v34 = v3;
            v0 = v4;
            if (!v33)
            {
                ::0x56ca00::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$::hf071592bb9885b68(v18, v19);
                v35 = a1;
                v35[0] = v34;
                v35[1] = v0;
            }
            else
            {
                v36 = a0;
                v36->field_8 = v34;
                *((unsigned long long *)&v36->field_10) = v0;
                v37 = 1;
                break;
            }
        }
    }
    v36->field_0 = v37;
    return v37;
}
