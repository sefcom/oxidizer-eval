fn uu_factor::print_factors_str(a0: u64, a1: u64, a2: u64, a3: u8) -> long long {
    let v0: struct8;  // [bp-0x148], Other Possible Types: u8
    let v1: u64;  // [bp-0x140]
    let v2: u64;  // [bp-0x138]
    let v3: struct32;  // [bp-0x128], Other Possible Types: u64
    let v4: void*;  // [bp-0x128]
    let v5: u64;  // [bp-0x120]
    let v6: void*;  // [bp-0x118]
    let v7: u64;  // [bp-0x110]
    let v8: u64;  // [bp-0x108]
    let v9: u64;  // [bp-0x100]
    let v10: struct24;  // [bp-0xf8], Other Possible Types: struct28, u64
    let v11: struct24;  // [bp-0xf8]
    let v12: struct24;  // [bp-0xb8]
    let v13: u64;  // [bp-0x98]
    let v14: u64;  // [bp-0x90]
    let v15: u64;  // [bp-0x88]
    let v16: void*;  // [bp-0x78]
    let v17: u64;  // [bp-0x70]
    let v18: void*;  // [bp-0x68]
    let v19: struct8;  // [bp-0x60]
    let v20: u64;  // [bp-0x50]
    let v21: struct24;  // [bp-0x48]
    let v22: u64;  // [bp-0x40]
    let v25: u64;  // rdx
    let v27: u64;  // rax
    let v29: &str;  // rax:rdx

    v29 = core::str::<impl str>::trim_matches(a0, a1, a2);
    v19 = num_bigint::biguint::convert::<impl num_traits::Num for num_bigint::biguint::BigUint>::from_str_radix(v29.data_ptr, a2, 10);
    if (((0 ^ v19.field_0) & (0 ^ -(v19.field_0))) >> 63) as char {
        v3 = uucore::util_name();
        v5 = v25;
        eprint!("{}: warning: ", &v3);
        v0 = core::result::Result<T,E>::unwrap_err(&v19);
        eprintln!("{}: {}", &v3, &v0);
        uucore::mods::error::set_exit_code(1);
        return 0;
    }
    v2 = v20;
    *(&v0 as u8 as &struct8) = v19;
    v21 = num_bigint::biguint::convert::<impl core::convert::From<u64> for num_bigint::biguint::BigUint>::from(0x1);
    if num_bigint::biguint::cmp_slice(v1, v2, v22, v21.field_16) > 0 {
        v10 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v1, v2);
        v12 = v11;
        v10 = 2;
        v3 = num_prime::nt_funcs::factors(&v12, &v10);
    }
    v18 = v6;
    v16 = v4;
    v17 = v5;
    v13 = v7;
    v14 = v8;
    v15 = v9;
    if v13 == 0x8000000000000000 {
        v27 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_factor::write_result(a2, &v0 as u8, &v16, a3));
        if !v27 {
            return 0;
        }
    } else {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v4 as u8, "Factorization incomplete. Remainders exists.");
        v10 = struct28 {
            field_0: *(&v3.field_0 as &i128)
            field_16: v6
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v10);
    }
    return v27;
}
