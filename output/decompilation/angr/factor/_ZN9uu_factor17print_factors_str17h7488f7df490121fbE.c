long long uu_factor::print_factors_str(unsigned long long a0, unsigned long long a1, unsigned long long a2[3], char a3)
{
    int v0;  // [bp-0x148], Other Possible Types: char *, unsigned long long
    unsigned long long v1;  // [bp-0x140]
    char *v2;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x130]
    int v4;  // [bp-0x128], Other Possible Types: unsigned long long
    int v5;  // [bp-0x128]
    unsigned long long v6;  // [bp-0x120]
    char *v7;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned int v8;  // [bp-0x110], Other Possible Types: unsigned long long
    void* v9;  // [bp-0x108]
    void* v10;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0xe0]
    void* v12;  // [bp-0xd8], Other Possible Types: unsigned long long
    char v13;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0xc8]
    unsigned long long v15;  // [bp-0xc0]
    char v16;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0xb0]
    unsigned long long v18;  // [bp-0xa8]
    int v19;  // [bp-0x98]
    unsigned long long v20;  // [bp-0x90]
    unsigned long long v21;  // [bp-0x88]
    int v22;  // [bp-0x78], Other Possible Types: char
    unsigned long long v23;  // [bp-0x68]
    int v24;  // [bp-0x60], Other Possible Types: char
    unsigned long long v25;  // [bp-0x50]
    int v26;  // [bp-0x48], Other Possible Types: char
    char v27;  // [bp-0x38]
    unsigned long long v30;  // rdx
    unsigned long long v31;  // rax

    v22.from_str_radix(core::str::<impl str>::trim_matches(a0, a1), a2, 10);
    if ((char)(((0 ^ *((long long *)&v22)) & (0 ^ -(*((long long *)&v22)))) >> 63))
    {
        v10 = uucore::util_name();
        v11 = v30;
        v0 = &v10;
        v1 = <&T as core::fmt::Display>::fmt;
        v4 = &g_5e4fd0;
        v6 = 2;
        v9 = 0;
        v7 = &v0;
        v8 = 1;
        std::io::stdio::_eprint(&v4);
        v10 = 0;
        v11 = a0;
        v12 = a1;
        v13 = 0;
        v16 = v22.unwrap_err();
        v0 = &v10;
        v1 = <os_display::Quoted as core::fmt::Display>::fmt;
        v2 = &v16;
        v3 = <num_bigint::ParseBigIntError as core::fmt::Display>::fmt;
        v4 = &g_5e4ff0;
        v6 = 3;
        v9 = 0;
        v7 = &v0;
        v8 = 2;
        std::io::stdio::_eprint(&v4);
        uucore::mods::error::set_exit_code(1);
    }
    else
    {
        v21 = v23;
        v19 = v22;
        v26.from();
        v4 = v26;
        v7 = *((long long *)&v27);
        if ((char)::0x4d1130::num_bigint::biguint::cmp_slice(v20, v21, v6, *((long long *)&v27)) == 1)
        {
            ::0x4d1550::core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&(char)v4);
            (char)v4.clone(&(char)v19);
            v2 = v7;
            *((int128_t *)&v0) = (int128_t)v4;
            v4 = 2;
            num_prime::nt_funcs::factors(&(char)v10, &(char)v0, &v4);
        }
        else
        {
            ::0x4d1550::core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&(char)v4);
            v10 = 0;
            v12 = 0;
            v13 = 0x8000000000000000;
        }
        v18 = v12;
        v16 = v10;
        v17 = v11;
        v2 = v15;
        v0 = v13;
        v1 = v14;
        if (v0 != 0x8000000000000000)
        {
            v12 = v2;
            v10 = v0;
            v11 = v1;
            uucore::mods::locale::get_message(&v24, "factor-error-factorization-incomplete/mnt/c/Research/Oxidizer/Projects/oxidizer-rustc/projects/coreutils/src/uu/factor/src/factor.rs", 37);
            v8 = 1;
            v5 = v24;
            v7 = v25;
            v31 = (unsigned long long)v5.new();
            ::0x4d1630::core::ptr::drop_in_place<alloc::vec::Vec<num_bigint::biguint::BigUint>>(&v10);
            ::0x4d13a0::core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<num_bigint::biguint::BigUint,usize>>(&v16);
            ::0x4d1550::core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&(char)v19);
            return v31;
        }
        v7 = v18;
        v4 = v16;
        v6 = v17;
        v31 = uu_factor::write_result(a2, &(char)v19, &v4, a3).map_err_context();
        if (v31)
        {
            if (v0 != 0x8000000000000000)
            {
                ::0x4d1630::core::ptr::drop_in_place<alloc::vec::Vec<num_bigint::biguint::BigUint>>(&v0);
                ::0x4d1550::core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&(char)v19);
                return v31;
            }
            ::0x4d1550::core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&(char)v19);
            return v31;
        }
        core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<num_bigint::biguint::BigUint>>>(&v0);
        ::0x4d1550::core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&(char)v19);
    }
    return 0;
}
