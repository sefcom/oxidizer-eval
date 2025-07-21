fn uu_od::output_info::OutputInfo::new(a1: i64, a2: i64, a3: i64, a4: i8) -> : struct25 {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x38]
    let v2: u64;  // rbx
    let v3: u64;  // rbp
    let v4: u64;  // rax
    let v5: i64;  // rdi

    v2 = a1 + a2 * 40;
    v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(a1, v2);
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(a1, v2, &v0);
    uu_od::output_info::OutputInfo::create_spaced_formatter_info(v5, a1, a2, v3, v4);
    *((v5 + 24) as &u64) = a0;
    *((v5 + 32) as &u64) = v4 * (!(v3 | a0) >> 32 ? ((0 CONCAT a0) % (v3 & 4294967295) CONCAT (0 CONCAT a0) / (v3 & 4294967295)) & 4294967295 : (0 CONCAT a0) % v3 CONCAT (0 CONCAT a0) / v3);
    *((v5 + 40) as &u64) = v0;
    *((v5 + 48) as &u8) = a3;
    return;
}
