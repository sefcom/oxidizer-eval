long long uu_factor::print_factors_str::hb9f5e787f1690086(unsigned long long a0, unsigned long long a1, unsigned long long a2[3], unsigned int a3)
{
    char v0;  // [bp-0x148], Other Possible Types: unsigned long
    unsigned long long v1;  // [sp-0x140]
    unsigned long long v2;  // [sp-0x138]
    int v3;  // [sp-0x128], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v4;  // [sp-0x120]
    unsigned long long v5;  // [sp-0x118]
    unsigned int v6;  // [bp-0x110], Other Possible Types: unsigned long long
    void* v7;  // [sp-0x108]
    int v8;  // [sp-0xe8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v9;  // [sp-0xe0]
    unsigned long long v10;  // [sp-0xd8]
    unsigned long long v11;  // [sp-0xd0]
    void* v12;  // [sp-0xc8], Other Possible Types: unsigned long long, unsigned long
    unsigned long v13;  // [sp-0xc0], Other Possible Types: unsigned long long
    void* v14;  // [sp-0xb8], Other Possible Types: unsigned long long
    char v15;  // [bp-0xb0], Other Possible Types: unsigned long long
    char v16;  // [bp-0xa8]
    char v17;  // [bp-0xa0]
    int v18;  // [sp-0x98]
    unsigned long long v19;  // [sp-0x88]
    unsigned long v20;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x70]
    unsigned long long v22;  // [sp-0x68]
    char v23;  // [bp-0x60]
    char v24;  // [bp-0x50]
    char v25;  // [bp-0x48]
    char v26;  // [bp-0x38]
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rsi
    void* v30;  // rax

    num_bigint::biguint::convert::_$LT$impl$u20$num_traits..Num$u20$for$u20$num_bigint..biguint..BigUint$GT$::from_str_radix::h70dfb03efa4b82b5(&v23, core::str::_$LT$impl$u20$str$GT$::trim_matches::h80db31805ceebfa5(a0, a1), v28, 10);
    if (*((long long *)&v23) == 0x8000000000000000)
    {
        v12 = uucore::util_name::h412db5e565a079f3();
        v13 = v28;
        v8 = &v12;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd96dc3b59da42cea;
        v3 = &g_58ace8;
        v4 = 2;
        v7 = 0;
        v5 = &v8;
        v6 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v29, v28);
        v12 = 0;
        v13 = a0;
        v14 = a1;
        v15 = 0;
        v0 = core::result::Result$LT$T$C$E$GT$::unwrap_err::h28467ea3ba0121cf(&v23);
        v8 = &v12;
        v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v10 = &v0;
        v11 = _$LT$num_bigint..ParseBigIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h5399710e28c299a0;
        v3 = &g_58ad20;
        v4 = 3;
        v7 = 0;
        v5 = &v8;
        v6 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v29, v28);
        uucore::mods::error::set_exit_code::h6705c4226a43fa90();
        return 0;
    }
    v19 = *((long long *)&v24);
    *((int128_t *)&v18) = *((int128_t *)&v23);
    ::0x49eb40::num_bigint::biguint::convert::_$LT$impl$u20$core..convert..From$LT$u64$GT$$u20$for$u20$num_bigint..biguint..BigUint$GT$::from::h79e147429bf27a1c(&v25);
    *((int128_t *)&v3) = *((int128_t *)&v25);
    v5 = *((long long *)&v26);
    if ((char)::0x49eba0::num_bigint::biguint::cmp_slice::h3d87690166513975((long long)(&v18)[8], v19, v4, *((long long *)&v26)) != 1)
    {
        ::0x49ef10::core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::h99b7e824b423b25c(&v3);
        v12 = 0;
        v14 = 0;
        v15 = 0x8000000000000000;
    }
    else
    {
        ::0x49ef10::core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::h99b7e824b423b25c(&v3);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h78513fd413bb17cb(&v3, &v18);
        v10 = v5;
        *((int128_t *)&v8) = (int128_t)v3;
        v3 = 2;
        num_prime::nt_funcs::factors::hefad8a072c068149(&v12, &v8, &v3);
    }
    v22 = v14;
    v20 = v12;
    v21 = v13;
    v2 = *((long long *)&v17);
    v0 = v15;
    v1 = *((long long *)&v16);
    if (v0 != 0x8000000000000000)
    {
        v10 = v2;
        v8 = v0;
        v9 = v1;
        ::0x49f590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hbd328ed7f6a1d346(&v12);
        v5 = v14;
        *((int128_t *)&v3) = *((int128_t *)&v12);
        v6 = 1;
        v30 = alloc::boxed::Box$LT$T$GT$::new::h0d464288af61af96(&v3);
        ::0x49eff0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$num_bigint..biguint..BigUint$GT$$GT$::hedaa6855fc2e4cb8(&v8);
        ::0x49ed60::core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$num_bigint..biguint..BigUint$C$usize$GT$$GT$::hea998eb857bc9a01(&v20);
    }
    else
    {
        v5 = v22;
        v3 = v20;
        v4 = v21;
        v30 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::ha3dac94fc3000c80(uu_factor::write_result::h9996c3cd3d9d557a(a2, &v18, &v3, a3));
        if (!v30)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$num_bigint..biguint..BigUint$GT$$GT$$GT$::hbdb3d63c04877d2c(&v0);
            ::0x49ef10::core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::h99b7e824b423b25c(&v18);
            return 0;
        }
        else if (v0 != 0x8000000000000000)
        {
            ::0x49eff0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$num_bigint..biguint..BigUint$GT$$GT$::hedaa6855fc2e4cb8(&v0);
        }
    }
    ::0x49ef10::core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::h99b7e824b423b25c(&v18);
    return v30;
}
