long long uu_factor::print_factors_str::he132e712a0bda753(unsigned long long a0, unsigned long long a1, unsigned long long a2[3], unsigned int a3)
{
    struct struct_0 **v0;  // [bp-0x148]
    unsigned long long v1;  // [sp-0x140]
    unsigned long long v2;  // [sp-0x138]
    struct struct_0 **v3;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x120]
    struct struct_0 **v5;  // [sp-0x118], Other Possible Types: unsigned long long
    unsigned int v6;  // [bp-0x110], Other Possible Types: unsigned long long
    void* v7;  // [sp-0x108]
    struct struct_0 **v8;  // [sp-0xe8]
    unsigned long long v9;  // [sp-0xe0]
    struct struct_0 **v10;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0xd0]
    void* v12;  // [sp-0xc8], Other Possible Types: struct struct_0 **
    unsigned long v13;  // [sp-0xc0], Other Possible Types: unsigned long long
    void* v14;  // [sp-0xb8], Other Possible Types: unsigned long long
    struct struct_0 **v15;  // [bp-0xb0], Other Possible Types: char
    char v16;  // [bp-0xa8]
    char v17;  // [bp-0xa0]
    struct struct_0 **v18;  // [sp-0x98]
    unsigned long long v19;  // [sp-0x88]
    struct struct_0 **v20;  // [sp-0x78]
    unsigned long long v21;  // [sp-0x70]
    unsigned long long v22;  // [sp-0x68]
    char v23;  // [bp-0x60]
    char v24;  // [bp-0x50]
    char v25;  // [bp-0x48]
    char v26;  // [bp-0x38]
    unsigned long long v28;  // rdx
    void* v29;  // rax

    num_bigint::biguint::convert::_$LT$impl$u20$num_traits..Num$u20$for$u20$num_bigint..biguint..BigUint$GT$::from_str_radix::hdbc74ae67ae58087(&v23, core::str::_$LT$impl$u20$str$GT$::trim_matches::hf5a6ebf145b1a03b(a0, a1), v28, 10);
    if (*((long long *)&v23) == 0x8000000000000000)
    {
        v12 = uucore::util_name::h60d842bf27b05e82();
        v13 = v28;
        v8 = &v12;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h60e20a2526965720;
        v3 = &g_58ae20;
        v4 = 2;
        v7 = 0;
        v5 = &v8;
        v6 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3);
        v12 = 0;
        v13 = a0;
        v14 = a1;
        v15 = 0;
        *((char *)&v0) = core::result::Result$LT$T$C$E$GT$::unwrap_err::hae40621fe63b5d0e(&v23);
        v8 = &v12;
        v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v10 = &v0;
        v11 = _$LT$num_bigint..ParseBigIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h9d7563e6912e108a;
        v3 = &g_58ae40;
        v4 = 3;
        v7 = 0;
        v5 = &v8;
        v6 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3);
        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
        return 0;
    }
    v19 = *((long long *)&v24);
    *((int128_t *)&v18) = *((int128_t *)&v23);
    ::0x4a2130::num_bigint::biguint::convert::_$LT$impl$u20$core..convert..From$LT$u64$GT$$u20$for$u20$num_bigint..biguint..BigUint$GT$::from::h863489988f6613a1(&v25);
    *((int128_t *)&v3) = *((int128_t *)&v25);
    v5 = *((long long *)&v26);
    if ((char)::0x4a2190::num_bigint::biguint::cmp_slice::h04e9fe9c6a1333c8((&v18)[1], v19, v4, *((long long *)&v26)) != 1)
    {
        ::0x4a2500::core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::hcd1b174757cb0819(&v3);
        v12 = 0;
        v14 = 0;
        v15 = 0x8000000000000000;
    }
    else
    {
        ::0x4a2500::core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::hcd1b174757cb0819(&v3);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0e547a70c3f80ae3(&v3, &v18);
        v10 = v5;
        *((int128_t *)&v8) = *((int128_t *)&v3);
        v3 = 2;
        num_prime::nt_funcs::factors::h468006e1cecc35d2(&v12, &v8, &v3);
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
        ::0x4a2b80::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h9329aa7fedbb9010(&v12);
        v5 = v14;
        *((int128_t *)&v3) = *((int128_t *)&v12);
        v6 = 1;
        v29 = alloc::boxed::Box$LT$T$GT$::new::h658e481b4643525f(&v3);
        ::0x4a25e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$num_bigint..biguint..BigUint$GT$$GT$::he7eccbe3b1c15ef2(&v8);
        ::0x4a2350::core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$num_bigint..biguint..BigUint$C$usize$GT$$GT$::hc741dac43ddbe340(&v20);
    }
    else
    {
        v5 = v22;
        v3 = v20;
        v4 = v21;
        v29 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h7f508640b0b65873(uu_factor::write_result::h4349ac4ce4d74e96(a2, &v18, &v3, a3));
        if (!v29)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$num_bigint..biguint..BigUint$GT$$GT$$GT$::hdf28aa94b7ec965c(&v0);
            ::0x4a2500::core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::hcd1b174757cb0819(&v18);
            return 0;
        }
        else if (v0 != 0x8000000000000000)
        {
            ::0x4a25e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$num_bigint..biguint..BigUint$GT$$GT$::he7eccbe3b1c15ef2(&v0);
        }
    }
    ::0x4a2500::core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::hcd1b174757cb0819(&v18);
    return v29;
}
