long long uu_ptx::read_input::h3799c9cd7e5fae81(struct_0 *a0, unsigned long long a1[3], unsigned long a2, struct_2 *a3)
{
    unsigned long long v0[3];  // [bp-0x1d8]
    unsigned long long v1[3];  // [sp-0x1d8]
    unsigned long long v2;  // [sp-0x1d0]
    unsigned long long v3;  // [sp-0x1c8]
    unsigned long long v4[3];  // [sp-0x1c0]
    unsigned long long v5;  // [sp-0x1b0]
    unsigned long long v6;  // [sp-0x1a8]
    void* v7;  // [sp-0x198]
    unsigned long long v8;  // [sp-0x190]
    void* v9;  // [sp-0x188]
    unsigned long long v10[3];  // [sp-0x180]
    unsigned long long v11;  // [sp-0x178]
    unsigned long long v12;  // [sp-0x170]
    int v13;  // [sp-0x168]
    unsigned long long v14[3];  // [sp-0x158]
    unsigned long v15;  // [sp-0x148]
    unsigned long long v16;  // [sp-0x140]
    char v17;  // [bp-0x130]
    char v18;  // [bp-0x120]
    char v19;  // [bp-0x118]
    unsigned long long v20[3];  // [sp-0xf8]
    unsigned long long v21;  // [sp-0xe8]
    unsigned long long v22[3];  // [sp-0xd8]
    unsigned long long v23[3];  // [sp-0xc8]
    unsigned long long v24[3];  // [sp-0xb8]
    unsigned long long v25;  // [sp-0xa8]
    char v26;  // [bp-0xa0]
    char v27;  // [bp-0x90]
    char v28;  // [bp-0x80]
    char v29;  // [bp-0x70]
    char v30;  // [bp-0x68]
    int v32;  // ymm0
    int v33;  // ymm0
    unsigned long v34;  // rdx
    unsigned long long v35;  // rdx
    unsigned long long v36;  // rsi
    struct_0 *v37;  // r15
    unsigned long long v38[3];  // rax
    unsigned long long v39;  // rax
    unsigned long long v40;  // rbp
    unsigned long long v41;  // r14
    void* v42;  // r13
    int v43;  // ymm1
    int v44;  // ymm2
    unsigned long long v45;  // rax
    unsigned long long v46;  // rcx
    unsigned long long v47[3];  // xmm0
    unsigned long long v48[3];  // xmm1
    unsigned long long v49[3];  // xmm2
    unsigned long long v50[3];  // xmm0
    unsigned long long v51[3];  // xmm0
    unsigned long long v52[3];  // xmm0

    ::0x5b1af0::std::thread::local::LocalKey$LT$T$GT$::try_with::h56169180d99f5faa(v0);
    *((uint128_t *)&v13) = g_6ed8f8;
    v33 = (v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_6ed8f8) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&g_6ed908);
    *((int128_t *)&v14[0]) = *((int128_t *)&g_6ed908);
    v15 = ::0x5b4120::core::result::Result$LT$T$C$E$GT$::expect::h52231f17148c3285(v0);
    v16 = v34;
    v7 = 0;
    v8 = 8;
    v9 = 0;
    if (!a2)
    {
        v35 = 1;
        v36 = "-:assertion failed: beg <= endassertion failed: max_before_size >= before.len()assertion failed: max_after_size >= after.len()\\backslash{}\\$\\$ {}{}";
        goto LABEL_5b67b5;
    }
    else if (a3->field_58)
    {
        v1[0] = a1;
        v2 = &a1[a2];
        v37 = a0;
        while (true)
        {
            v38 = ::0x5b5220::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2542eee79d3070c(v0);
            if (!v38)
                break;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h21f7190cf2fce050(&v7, v38[1], v38[2]);
        }
    }
    else
    {
        v36 = a1[1];
        v35 = a1[2];
LABEL_5b67b5:
        v37 = a0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h21f7190cf2fce050(&v7, v36, v35);
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hdb3cfba9de7d7f84(&v19, &v7);
    v39 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf55ab871a8e5779f(&v19);
    if (v39)
    {
        v40 = v39;
        v41 = v34;
        v42 = 0;
        do
        {
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he450917857c3e673(v40, v41, "-:assertion failed: beg <= endassertion failed: max_before_size >= before.len()assertion failed: max_after_size >= after.len()\\backslash{}\\$\\$ {}{}", 1))
            {
                v45 = alloc::boxed::Box$LT$T$GT$::new::h0dfaa371efd7c18c(std::io::stdio::stdin::h7215cc131abb55d8());
                v46 = &g_6edd30;
            }
            else
            {
                std::fs::File::open::h478ac8dba32f1ae3(v0, v40, v41);
                if ((int)v1)
                {
                    *((unsigned long long *)&v37->padding_8[0]) = v2;
                    v37->field_0 = 0;
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::h736feeb61ffeaf15(&v19);
                    core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$uu_ptx..FileContent$GT$$GT$::h021de779c702ee73(&v13);
                    return v37;
                }
                v45 = alloc::boxed::Box$LT$T$GT$::new::h9f305fe194b67db1(*((int *)((char *)&v1 + 4)));
                v46 = &g_6edcd8;
            }
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hd17c935e00db073b(&v26, 0x2000, v45, v46);
            v47 = *((int128_t *)&v26);
            v48 = *((int128_t *)&v27);
            v43 = v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
            v49 = *((int128_t *)&v28);
            v44 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
            v22[0] = v47;
            v23[0] = v48;
            v24[0] = v49;
            v25 = *((long long *)&v29);
            core::iter::adapters::try_process::he3ba2ce09273ab77(v0, v22);
            if (v10 == 0x8000000000000000)
            {
                *((unsigned long long *)&v37->padding_8[0]) = v11;
                v37->field_0 = 0;
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::h736feeb61ffeaf15(&v19);
                core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$uu_ptx..FileContent$GT$$GT$::h021de779c702ee73(&v13);
                return v37;
            }
            v10[0] = v1;
            v11 = v2;
            v12 = v3;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h8574ea4db7118a44(&v17, v11, v11 + v12 * 24);
            ::0x5b44a0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(v0, v40, v41);
            v21 = v3;
            v50 = *((int128_t *)&v1);
            v20[0] = v50;
            v3 = v12;
            v51 = *((int128_t *)&v10);
            v0[0] = v51;
            v5 = *((long long *)&v18);
            v52 = *((int128_t *)&v17);
            v33 = (((v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52;
            v4[0] = v52;
            v6 = v42;
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hc03c4a862eb36838(&v30, &v13, v20, v0);
            core::ptr::drop_in_place$LT$core..option..Option$LT$uu_ptx..FileContent$GT$$GT$::h581f5f8adb3a9895(&v30);
            v42 += v12;
            v40 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf55ab871a8e5779f(&v19);
            v41 = v34;
            v37 = a0;
        } while (v40);
    }
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::h736feeb61ffeaf15(&v19);
    v37->field_20 = *((int128_t *)&v15);
    *((unsigned long long *[3])&v37->field_10) = v14;
    *((void*)&v37->field_0) = v13;
    return v37;
}
