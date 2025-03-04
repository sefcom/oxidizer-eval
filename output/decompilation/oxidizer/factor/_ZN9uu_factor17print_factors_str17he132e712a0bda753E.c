fn uu_factor::print_factors_str(a0: u64, a1: u64, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [bp-0x148], Other Possible Types: char
    let v1: i64;  // [sp-0x140]
    let v2: i64;  // [sp-0x138]
    let v3: struct24;  // [sp-0x128], Other Possible Types: struct8, unsigned long
    let v4: i64;  // [sp-0x120]
    let v5: i64;  // [sp-0x118]
    let v6: i32;  // [bp-0x110]
    let v7: struct24;  // [sp-0xe8], Other Possible Types: unsigned long
    let v8: i64;  // [sp-0xe0]
    let v9: i64;  // [sp-0xd8]
    let v10: i64;  // [sp-0xc8], Other Possible Types: char, struct24
    let v11: i64;  // [sp-0xc0]
    let v12: i64;  // [sp-0xb8]
    let v13: i8;  // [bp-0xb0], Other Possible Types: unsigned long
    let v14: i8;  // [bp-0xa8]
    let v15: i8;  // [bp-0xa0]
    let v16: Result<struct24, struct1>;  // [sp-0x98]
    let v17: i64;  // [sp-0x88]
    let v18: i64;  // [sp-0x78]
    let v19: i64;  // [sp-0x70]
    let v20: i64;  // [sp-0x68]
    let v21: Result<struct24, struct1>;  // [sp-0x60]
    let v22: struct24;  // [sp-0x48]
    let v24: i64;  // rdx
    let v25: i64;  // rax

    v21 = num_bigint::biguint::convert::<impl num_traits::Num for num_bigint::biguint::BigUint>::from_str_radix(core::str::<impl str>::trim_matches(a0, a1), a2, 10);
    match v21 {
        Err(_) => {
            v10 = uucore::util_name();
            v11 = v24;
            eprint!("{}: warning: ", &v10);
            v10 = 0;
            v11 = a0;
            v12 = a1;
            *(&v13 as &i8) = 0;
            *(&v0 as &i8) = core::result::Result<T,E>::unwrap_err(&v21) as i8;
            eprintln!("{}: {}", &v10, &v0);
            uucore::mods::error::set_exit_code(1);
        },
        Ok(_) => {
            v16 = v21;
            v22 = num_bigint::biguint::convert::<impl core::convert::From<u64> for num_bigint::biguint::BigUint>::from();
            v3 = v22;
            if num_bigint::biguint::cmp_slice(*((&v16 as &char + 8) as &i64), v17, v4, v22.field_16) as i8 != 1 {
                v10 = 0;
                v12 = 0;
                *(&v13 as &i64) = 0x8000000000000000;
            } else {
                v3 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v16);
                v7 = v3;
                v3 = struct8 {
                    field_0: 2
                };
                num_prime::nt_funcs::factors(&v10, &v7, &v3);
            }
            v20 = v12;
            v18 = v10;
            v19 = v11;
            v2 = *(&v15 as &i64);
            v0 = v13;
            v1 = *(&v14 as &i64);
            if v0 != 0x8000000000000000 {
                v9 = v2;
                v7 = v0;
                v8 = v1;
                v10 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v3 = v10;
                *(&v6 as &i32) = 1;
                return v25;
            }
            v5 = v20;
            v3 = v18;
            v4 = v19;
            v25 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_factor::write_result(a2, &v16, &v3, a3 as u64));
            if v25 {
                return v25;
            }
        },
    }
    return 0;
}
