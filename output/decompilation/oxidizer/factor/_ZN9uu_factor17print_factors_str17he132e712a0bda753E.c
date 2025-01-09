fn uu_factor::print_factors_str(a0: u64, a1: u64, a2: &u64, a3: u32) -> u64 {
    let v0: i8;  // [bp-0x148]
    let v1: i64;  // [sp-0x140]
    let v2: i64;  // [sp-0x138]
    let v3: i64;  // [sp-0x128], Other Possible Types: struct24
    let v4: i64;  // [sp-0x120]
    let v5: i64;  // [sp-0x118]
    let v6: i64;  // [sp-0xe8], Other Possible Types: struct24
    let v7: i64;  // [sp-0xe0]
    let v8: i64;  // [sp-0xd8]
    let v9: i64;  // [sp-0xc8], Other Possible Types: struct24
    let v10: i64;  // [sp-0xc0]
    let v11: i64;  // [sp-0xb8]
    let v12: i64;  // [bp-0xb0]
    let v13: i8;  // [bp-0xa8]
    let v14: i8;  // [bp-0xa0]
    let v15: i192;  // [sp-0x98], Other Possible Types: Result<struct24, struct1>
    let v16: i64;  // [sp-0x88]
    let v17: i64;  // [sp-0x78]
    let v18: i64;  // [sp-0x70]
    let v19: i64;  // [sp-0x68]
    let v20: i192;  // [sp-0x60], Other Possible Types: Result<struct24, struct1>
    let v21: i192;  // [sp-0x48], Other Possible Types: struct24
    let v23: i64;  // rdx
    let v24: i64;  // rbx

    v20 = num_bigint::biguint::convert::<impl num_traits::Num for num_bigint::biguint::BigUint>::from_str_radix(core::str::<impl str>::trim_matches(a0, a1), v23, 10);
    match v20 {
        Err(_) => {
            v9 = uucore::util_name();
            v10 = v23;
            eprint!("{}: warning: ", &v9);
            v9 = 0;
            v10 = a0;
            v11 = a1;
            v12 = 0;
            v0 = core::result::Result<T,E>::unwrap_err(&v20) as i8;
            eprintln!("{}: {}", &v9, &v0);
            uucore::mods::error::set_exit_code(1);
        },
        Ok(_) => {
            v15 = v20;
            v21 = num_bigint::biguint::convert::<impl core::convert::From<u64> for num_bigint::biguint::BigUint>::from();
            v3 = v21;
            if num_bigint::biguint::cmp_slice(*((&v15 as &char + 8) as &i64), v16, v4, *((&v21 as &char + 16) as &i64)) as i8 != 1 {
                v9 = 0;
                v11 = 0;
                v12 = 0x8000000000000000;
            } else {
                v3 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v15);
                v6 = v3;
                v3 = 2;
                num_prime::nt_funcs::factors(&v9, &v6, &v3);
            }
            v19 = v11;
            v17 = v9;
            v18 = v10;
            v2 = v14;
            v0 = v12;
            v1 = v13;
            if v0 != 0x8000000000000000 {
                v8 = v2;
                v6 = v0;
                v7 = v1;
                v9 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v3 = v9;
                alloc::boxed::Box<T>::new(&v3);
                return v24;
            }
            v5 = v19;
            v3 = v17;
            v4 = v18;
            if <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_factor::write_result(a2, &v15, &v3, a3 as u32 as u64)) {
                return v24;
            }
        },
    }
    v24 = 0;
    return 0;
}
