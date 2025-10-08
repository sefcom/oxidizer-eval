long long uu_factor::print_factors_str(unsigned long long a0, unsigned long long a1, unsigned long long a2[3], char a3)
{
    int v0;  // [bp-0x148], Other Possible Types: char
    unsigned long long v1;  // [bp-0x140]
    unsigned long long v2;  // [bp-0x138]
    void* v3;  // [bp-0x128], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x128]
    unsigned long long v5;  // [bp-0x120]
    void* v6;  // [bp-0x118], Other Possible Types: unsigned long long
    char v7;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x108]
    unsigned long long v9;  // [bp-0x100]
    unsigned long long v10;  // [bp-0xf8]
    int v11;  // [bp-0xf8]
    unsigned long long v12;  // [bp-0xf0]
    void* v13;  // [bp-0xe8], Other Possible Types: char *, unsigned long long
    unsigned int v14;  // [bp-0xe0], Other Possible Types: unsigned long long
    void* v15;  // [bp-0xd8]
    int v16;  // [bp-0xb8], Other Possible Types: char *
    unsigned long long v17;  // [bp-0xb0]
    char *v18;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0xa0]
    unsigned long long v20;  // [bp-0x98]
    unsigned long long v21;  // [bp-0x90]
    unsigned long long v22;  // [bp-0x88]
    void* v23;  // [bp-0x78]
    unsigned long long v24;  // [bp-0x70]
    void* v25;  // [bp-0x68]
    int v26;  // [bp-0x60], Other Possible Types: char
    unsigned long long v27;  // [bp-0x50]
    char v28;  // [bp-0x48]
    unsigned long long v29;  // [bp-0x40]
    char v30;  // [bp-0x38]
    unsigned long long v33;  // rdx
    char v34;  // al
    unsigned long long v35;  // rax
    unsigned long long v36;  // rbx

    v26.from_str_radix(core::str::<impl str>::trim_matches(a0, a1), a2, 10);
    if ((char)(((0 ^ *((long long *)&v26)) & (0 ^ -(*((long long *)&v26)))) >> 63))
    {
        v3 = uucore::util_name();
        v5 = v33;
        v16 = &v3;
        v17 = <&T as core::fmt::Display>::fmt;
        v10 = &g_5441a0;
        v12 = 2;
        v15 = 0;
        v13 = &v16;
        v14 = 1;
        std::io::stdio::_eprint(&v10);
        v3 = 0;
        v5 = a0;
        v6 = a1;
        v7 = 0;
        v0 = v26.unwrap_err();
        v16 = &v3;
        v17 = <os_display::Quoted as core::fmt::Display>::fmt;
        v18 = &v0;
        v19 = <num_bigint::ParseBigIntError as core::fmt::Display>::fmt;
        v10 = &g_5441c0;
        v12 = 3;
        v15 = 0;
        v13 = &v16;
        v14 = 2;
        std::io::stdio::_eprint(&v10);
        uucore::mods::error::set_exit_code(1);
    }
    else
    {
        v2 = v27;
        v0 = v26;
        v28.from(1);
        v34 = ::0x4834e0::num_bigint::biguint::cmp_slice(v1, v2, v29, *((long long *)&v30));
        core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v28);
        if (v34 > 0)
        {
            (char)v10.clone(v1, v2);
            v18 = v13;
            *((int128_t *)&v16) = *((int128_t *)&v10);
            v10 = 2;
            num_prime::nt_funcs::factors(&(char)v3, &(char)v16, &v10);
        }
        else
        {
            v4 = 0;
            v6 = 0;
            v7 = 0x8000000000000000;
        }
        v25 = v6;
        v23 = v4;
        v24 = v5;
        v20 = v7;
        v21 = v8;
        v22 = v9;
        if (v20 != 0x8000000000000000)
        {
            (char)v3.to_vec("Factorization incomplete. Remainders exists./home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/factor/src/factor.rs", 44);
            v13 = v6;
            *((int128_t *)&v11) = *((int128_t *)&v4);
            v14 = 1;
            v36 = (unsigned long long)v11.new();
            core::ptr::drop_in_place<alloc::vec::Vec<num_bigint::biguint::BigUint>>(&v20);
            core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<num_bigint::biguint::BigUint,usize>>(&v23);
            core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&(char)v0);
            return v36;
        }
        v35 = uu_factor::write_result(a2, &(char)v0, &v23, a3).map_err_context();
        if (v35)
        {
            core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&(char)v0);
            return v35;
        }
        core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<num_bigint::biguint::BigUint>>>(&v20);
        core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&(char)v0);
    }
    return 0;
}
