long long uu_sort::chunks::read_to_buffer::h99260db6365b1537(struct_0 *a0, unsigned long long a1[2], unsigned long long a2, struct_1 *a3, unsigned long a4, unsigned long a5)
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
    char v10;  // [bp+0x10]
    unsigned long long v11;  // rbp
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rbx
    unsigned long long v15;  // rbp
    unsigned long long v16[2];  // r14
    unsigned long v17;  // rdx
    unsigned long long v18;  // r15
    unsigned long long v19;  // r13
    unsigned long long v20;  // r14
    unsigned long long v21;  // rbp
    unsigned long long v23;  // 4096
    unsigned long long v25;  // rbx
    char *v26;  // rax
    unsigned long long v28;  // rbp
    unsigned long long v30;  // rbx
    unsigned long long v31;  // rsi
    char *v32;  // rbp
    char *v33;  // rdi
    char *v34;  // rax
    char v35;  // cl
    char *v36;  // rax
    char *v37;  // rbx
    unsigned long long v38[2];  // rax
    struct_0 *v39;  // rcx
    struct_0 *v40;  // rax
    struct_0 *v41;  // rcx

    v11 = v9;
    v13 = a3->field_10;
    v14 = v13 - v11;
    if (v13 < v11)
        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(v11, a3->field_10, &g_601ab0); /* do not return */
    v15 = &a3->field_8[v11];
    v6 = a5 >> 1;
    while (true)
    {
        v0 = v14;
        while (true)
        {
            v16 = a1;
            v18 = v17;
            if (std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::hb06b12a83684c07d(v16[0], v16[1], v15, v14))
            {
LABEL_55db2f:
                if ((char)::0x559960::std::io::error::Error::kind::hb2ff5fa058639b3d(v18) != 35)
                {
                    v1 = v18;
                    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::ha0e369c0360be1c1(&v7, &v1);
                    v5 = 2;
                    *((int128_t *)&v2) = *((int128_t *)&v7);
                    v4 = *((long long *)&v8);
                    v41 = a0;
                    *((double *)&v41->field_8) = ::0x55ad10::alloc::boxed::Box$LT$T$GT$::new::h7a4ce38e59829aec(&v2);
                    *((char **)&v41->field_10) = &g_601a40;
                    v41->field_0 = 1;
                    v40 = ::0x55a150::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0ea81dc276204afd();
                    return v40;
                }
                ::0x55a150::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0ea81dc276204afd();
            }
            else
            {
                v19 = v16[0];
                v20 = v16[1];
                if (a4 != 1)
                {
                    if (!(!v17))
                        goto LABEL_55dbd1;
                    if (!(!v17))
                        goto LABEL_55dc80;
                    v21 = a3->field_10;
                    goto LABEL_55dbf3;
                }
                if (v18)
                {
LABEL_55dbd1:
                    v14 -= v18;
                    if (v14 < v18)
                        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(v18, v14, &g_6019f0); /* do not return */
                    v15 += v18;
                    continue;
                }
                if (v14)
                {
LABEL_55dc80:
                    v14 = v0;
                    if (v14 != v14)
                    {
                        v31 = a3->field_10;
                        v32 = v31 - v14;
                        v33 = v32 + 1;
                        if (v33 >= v31)
                            core::panicking::panic_bounds_check::h25a5330941572dd1(v33, v31, &g_6019a8); /* do not return */
                        v34 = a3->field_8;
                        v35 = v10;
                        if (*((char *)(v34 + v33)) != v35)
                        {
                            if (v31 < v14)
                                core::panicking::panic_bounds_check::h25a5330941572dd1(v32, v31, &g_6019c0); /* do not return */
                            *((char *)(v34 + v32)) = v35;
                            v14 -= 1;
                            v31 = a3->field_10;
                            v32 = v31 - v14;
                        }
                        if (v14 > v31)
                            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(v32, v31, &g_6019d8); /* do not return */
                        v15 = v32 + a3->field_8;
                        break;
                    }
                }
                v21 = a3->field_10;
                if (v21 >= a5)
                {
LABEL_55dbf3:
                    v26 = a3->field_8;
                    v2 = v26;
                    v3 = v26;
                    v4 = &v26[v21];
                    v5 = v10;
                    if (memchr::arch::generic::memchr::Iter::next_back::ha68dd67eda4e11ad(&v2, &v5) == 1)
                    {
                        if (!memchr::arch::generic::memchr::Iter::next_back::ha68dd67eda4e11ad(&v2, &v5))
                            core::option::unwrap_failed::h0e11329e76906eaa(&g_601978); /* do not return */
                        v40 = a0;
                        v40->field_8 = v17 + 1;
                        v40->field_10 = 1;
                        v40->field_0 = 0;
                        return v40;
                    }
                    v28 = a3->field_10;
                    alloc::vec::Vec$LT$T$C$A$GT$::resize::h8264c119ba4725ae(a3, v28 + 0x2800, 0);
                    v30 = a3->field_10;
                    v14 = v30 - v28;
                    if (v30 < v28)
                        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(v28, a3->field_10, &g_601990); /* do not return */
                    v15 = &a3->field_8[v28];
                }
                else
                {
                    if (v6 > v21)
                        v23 = v21 * 2;
                    alloc::vec::Vec$LT$T$C$A$GT$::resize::h8264c119ba4725ae(a3, v23, 0);
                    v25 = a3->field_10;
                    v14 = v25 - v21;
                    if (v25 < v21)
                        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(v21, a3->field_10, &g_601960); /* do not return */
                    v15 = &a3->field_8[v21];
                    v18 = v17;
                    if (!std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::hb06b12a83684c07d(v19, v20, v15, v14))
                        continue;
                    goto LABEL_55db2f;
                }
            }
        }
        ::0x55b040::_$LT$$RF$mut$u20$I$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1c21dc3d4ffd3568(&v2, a2);
        v36 = v2;
        if (v36 == 2)
        {
            v39 = a0;
            v39->field_8 = a3->field_10 - v14;
            v39->field_10 = 0;
            v40 = 0;
            break;
        }
        else
        {
            v37 = v3;
            v0 = v4;
            if (!v36)
            {
                ::0x55a5f0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$::hda4324549e97968a(v19, v20);
                v38 = a1;
                v38[0] = v37;
                v38[1] = v0;
            }
            else
            {
                v39 = a0;
                v39->field_8 = v37;
                *((unsigned long long *)&v39->field_10) = v0;
                v40 = 1;
                break;
            }
        }
    }
    v39->field_0 = v40;
    return v40;
}
