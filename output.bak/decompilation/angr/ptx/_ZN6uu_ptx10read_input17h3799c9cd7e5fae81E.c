long long uu_ptx::read_input::h3799c9cd7e5fae81(struct_0 *a0, unsigned long long a1[3], unsigned long a2, struct_2 *a3)
{
    unsigned long long v0[3];  // [bp-0x1d8]
    unsigned long long v1;  // [sp-0x1d0]
    unsigned long long v2;  // [sp-0x1c8]
    unsigned long long v3[3];  // [sp-0x1c0]
    unsigned long long v4;  // [sp-0x1b0]
    unsigned long long v5;  // [sp-0x1a8]
    void* v6;  // [sp-0x198]
    unsigned long long v7;  // [sp-0x190]
    void* v8;  // [sp-0x188]
    unsigned long long v9[3];  // [sp-0x180]
    unsigned long long v10;  // [sp-0x178]
    unsigned long long v11;  // [sp-0x170]
    unsigned long long v12[3];  // [sp-0x168]
    unsigned long long v13[3];  // [sp-0x158]
    unsigned long v14;  // [sp-0x148], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x140]
    char v16;  // [bp-0x130]
    char v17;  // [bp-0x120]
    char v18;  // [bp-0x118]
    unsigned long long v19[3];  // [sp-0xf8]
    unsigned long long v20;  // [sp-0xe8]
    unsigned long long v21[3];  // [sp-0xd8]
    unsigned long long v22[3];  // [sp-0xc8]
    unsigned long long v23[3];  // [sp-0xb8]
    unsigned long long v24;  // [sp-0xa8]
    char v25;  // [bp-0xa0]
    char v26;  // [bp-0x90]
    char v27;  // [bp-0x80]
    char v28;  // [bp-0x70]
    char v29;  // [bp-0x68]
    int v31;  // ymm0
    int v32;  // ymm0
    unsigned long v33;  // rdx
    unsigned long long v34;  // rdx
    unsigned long long v35;  // rsi
    unsigned long long v36[3];  // rax
    struct_0 *v38;  // 4096
    struct_0 *v39;  // r15
    unsigned long long v40;  // rax
    void* v41;  // r13
    unsigned long long v43;  // r14
    unsigned long long v44;  // r14
    int v45;  // ymm1
    int v46;  // ymm2
    unsigned long long v47;  // rax
    unsigned long long v48;  // rcx
    unsigned long long v49[3];  // xmm0
    unsigned long long v50[3];  // xmm1
    unsigned long long v51[3];  // xmm2
    unsigned long long v52[3];  // xmm0
    unsigned long long v53[3];  // xmm0
    unsigned long long v54[3];  // xmm0

    ::0x5b1af0::std::thread::local::LocalKey$LT$T$GT$::try_with::h56169180d99f5faa(v0);
    *((int128_t *)&v12[0]) = *((int128_t *)&g_6ed8f8);
    v32 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&g_6ed8f8) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&g_6ed908);
    *((int128_t *)&v13[0]) = *((int128_t *)&g_6ed908);
    v14 = ::0x5b4120::core::result::Result$LT$T$C$E$GT$::expect::h52231f17148c3285(v0);
    v15 = v33;
    v6 = 0;
    v7 = 8;
    v8 = 0;
    if (!a2)
    {
        v34 = 1;
        v35 = "-:assertion failed: beg <= endassertion failed: max_before_size >= before.len()assertion failed: max_after_size >= after.len()\\backslash{}\\$\\$ {}{}";
        goto LABEL_5b67b5;
    }
    else if (a3->field_58)
    {
        v0[0] = a1;
        v1 = &a1[a2];
        while (true)
        {
            v36 = ::0x5b5220::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2542eee79d3070c(v0);
            if (!v36)
                break;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h21f7190cf2fce050(&v6, v36[1], v36[2]);
        }
    }
    else
    {
        v35 = a1[1];
        v34 = a1[2];
LABEL_5b67b5:
        alloc::vec::Vec$LT$T$C$A$GT$::push::h21f7190cf2fce050(&v6, v35, v34);
    }
    v39 = v38;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hdb3cfba9de7d7f84(&v18, &v6);
    v40 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf55ab871a8e5779f(&v18);
    if (v40)
    {
        v41 = 0;
        do
        {
            v43 = v44;
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he450917857c3e673(v40, v43, "-:assertion failed: beg <= endassertion failed: max_before_size >= before.len()assertion failed: max_after_size >= after.len()\\backslash{}\\$\\$ {}{}", 1))
            {
                v47 = alloc::boxed::Box$LT$T$GT$::new::h0dfaa371efd7c18c(std::io::stdio::stdin::h7215cc131abb55d8());
                v48 = &g_6edd30;
            }
            else
            {
                std::fs::File::open::h478ac8dba32f1ae3(v0, v40, v43);
                if ((int)v0)
                {
                    *((unsigned long long *)&v39->padding_8[0]) = v1;
                    v39->field_0 = 0;
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::h736feeb61ffeaf15(&v18);
                    core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$uu_ptx..FileContent$GT$$GT$::h021de779c702ee73();
                    return v39;
                }
                v47 = alloc::boxed::Box$LT$T$GT$::new::h9f305fe194b67db1(*((int *)((char *)&v0 + 4)));
                v48 = &g_6edcd8;
            }
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hd17c935e00db073b(&v25, 0x2000, v47, v48);
            v49 = *((int128_t *)&v25);
            v50 = *((int128_t *)&v26);
            v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50;
            v51 = *((int128_t *)&v27);
            v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51;
            v21[0] = v49;
            v22[0] = v50;
            v23[0] = v51;
            v24 = *((long long *)&v28);
            core::iter::adapters::try_process::he3ba2ce09273ab77(v0, v21);
            if (v9 == 0x8000000000000000)
            {
                *((unsigned long long *)&v39->padding_8[0]) = v10;
                v39->field_0 = 0;
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::h736feeb61ffeaf15(&v18);
                core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$uu_ptx..FileContent$GT$$GT$::h021de779c702ee73();
                return v39;
            }
            v9[0] = v0;
            v10 = v1;
            v11 = v2;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h8574ea4db7118a44(&v16, v10, v10 + v11 * 24);
            ::0x5b44a0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(v0, v40, v43);
            v20 = v2;
            v52 = *((int128_t *)&v0);
            v19[0] = v52;
            v2 = v11;
            v53 = *((int128_t *)&v9);
            v0[0] = v53;
            v4 = *((long long *)&v17);
            v54 = *((int128_t *)&v16);
            v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54;
            v3[0] = v54;
            v5 = v41;
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hc03c4a862eb36838(&v29, v12, v19, v0);
            core::ptr::drop_in_place$LT$core..option..Option$LT$uu_ptx..FileContent$GT$$GT$::h581f5f8adb3a9895(&v29);
            v41 += v11;
            v40 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf55ab871a8e5779f(&v18);
            v39 = a0;
        } while (v40);
    }
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::h736feeb61ffeaf15(&v18);
    v39->field_20 = *((int128_t *)&v14);
    *((unsigned long long *[3])&v39->field_10) = v13;
    v39->field_0 = v12;
    return v39;
}
