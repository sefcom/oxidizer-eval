fn uu_seq::fast_print_seq(a0: u64, a1: i64, a2: u64, a3: void*, a4: void*, a5: u32, a6: i32, a7: i64, a8: u64) -> long long {
    let v0: u64;  // [bp-0xf0]
    let v1: struct24;  // [bp-0xe8], Other Possible Types: u128
    let v2: u32;  // [bp-0xe0]
    let v3: u64;  // [bp-0xd8]
    let v4: core::fmt::Arguments;  // [bp-0xc8], Other Possible Types: struct24
    let v5: struct24;  // [bp-0xc8]
    let v6: u64;  // [bp-0xb8]
    let v7: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x98]
    let v8: &mut [u8];  // [bp-0x90]
    let v9: u64;  // [bp-0x88]
    let v10: struct24;  // [bp-0x70]
    let v11: void*;  // [bp-0x68]
    let v12: u64;  // [bp-0x60]
    let v13: core::fmt::rt::Argument;  // [bp-0x58], Other Possible Types: u8
    let v14: u128;  // [bp-0x58]
    let v15: iNone;  // [bp-0x40]
    let v16: u8;  // al
    let v18: &mut [u8];  // r12
    let v19: u64;  // r13
    let v20: u64;  // rbp
    let v21: u64;  // r14
    let v23: u32;  // rdx
    let v25: u64;  // rbx
    let v26: u64;  // rsi
    let v27: u64;  // rbx
    let v29: core::result::Result<(), std::io::error::Error>;  // rax
    let v30: core::result::Result<(), core::fmt::Error>;  // rax

    v15 = vvar_6;
    if num_bigint::biguint::cmp_slice(a3[8] as i64, a3[16] as i64, *((a1 + 8) as &i64), *((a1 + 16) as &i64)) < 0 {
        return v29;
    }
    v4 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a3[8] as i64, a3[16] as i64);
    v1 = v5;
    v4 = num_bigint::biguint::subtraction::<impl core::ops::arith::Sub<&num_bigint::biguint::BigUint> for num_bigint::biguint::BigUint>::sub(&v1, a1);
    v1 = num_bigint::biguint::division::<impl core::ops::arith::Div<u64> for num_bigint::biguint::BigUint>::div(&v4, a2);
    v16 = num_bigint::biguint::convert::<impl num_traits::cast::ToPrimitive for num_bigint::biguint::BigUint>::to_u64(v2, v3);
    v10 = <T as alloc::string::SpecToString>::spec_to_string(a1);
    v4 = <T as alloc::string::SpecToString>::spec_to_string(a3);
    v7 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(core::cmp::Ord::max(v6, a8) as u8 + a5, a2);
    v18 = v8;
    v19 = v9;
    v20 = v19 - a5;
    v21 = v12;
    v0 = v20 - v21;
    core::slice::<impl [T]>::copy_from_slice(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(v20 - v21, v20, v18, v19), v23, v11, v21, "src/uu/seq/src/seq.rs");
    core::slice::<impl [T]>::copy_from_slice(v18 + v20, a5, a4, a5, "src/uu/seq/src/seq.rs");
    v0 = core::cmp::Ord::min(v0, v20 - a8);
    v30 = core::fmt::num::imp::<impl usize>::_fmt(a2, &v13) as u64;
    v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(&v30 as &i64), a2);
    v3 = v6;
    v1 = *(&v4.field_0 as &i128);
    v25 = (-((v16 & 1) < 1) | v23) + 1;
    loop {
        v26 = v0;
        v27 = v25 - 1;
        if v25 != 1 {
            v29 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a0, v26 + v18, v19 - v26);
            if let Err(_) = v29 {
                break;
            }
            uucore::features::fast_inc::fast_inc(v18, v19, &v0, v20, v2, v6);
            v25 = v27;
        } else {
            v29 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a0, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v26, v20, v18, v19, "src/uu/seq/src/seq.rs"), a2);
            if let Ok(_) = v29 {
                v13 = core::fmt::rt::Argument {
                    ty: &v15
                };
                v4 = core::fmt::Arguments {
                    pieces: [&g_41b0f0]
                    args: [v14]
                    fmt: 0
                };
                v29 = std::io::Write::write_fmt(a0, &v4);
                if let Ok(_) = v29 {
                    v29 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a0);
                }
            }
        }
    }
    return v29;
}
