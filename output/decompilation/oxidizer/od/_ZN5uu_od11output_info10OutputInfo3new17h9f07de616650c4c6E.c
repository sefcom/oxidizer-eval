fn uu_od::output_info::OutputInfo::new(a1: i64, a2: i64, a3: i64, a4: i8) -> : struct25 {
    let a0: i64;  // rdi
    let v0: u32;  // [bp-0x3c]
    let v1: u64;  // [bp-0x38]
    let v3: u64;  // rbx
    let v4: u64;  // rbp
    let v5: u64;  // rax

    v0 = a4;
    v3 = a2 + a3 * 40;
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(a2, v3);
    v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(a2, v3, &v1);
    uu_od::output_info::OutputInfo::create_spaced_formatter_info(a0, a2, a3, v4, v5);
    *((a0 + 24) as &u64) = a1;
    *((a0 + 32) as &u64) = v5 * (!(v4 | a1) >> 32 ? ((0 CONCAT a1) % (v4 & 4294967295) CONCAT (0 CONCAT a1) / (v4 & 4294967295)) & 4294967295 : (0 CONCAT a1) % v4 CONCAT (0 CONCAT a1) / v4);
    *((a0 + 40) as &u64) = v1;
    *((a0 + 48) as &u8) = v0;
    return;
}
