fn uu_od::output_info::OutputInfo::new(a0: &struct25, a1: u32, a2: u32, a3: u32, a4: u8) -> u64 {
    let v0: u32;  // [sp-0x3c]
    let v1: u64;  // [bp-0x38], Other Possible Types: struct8
    let v3: u64;  // rbx
    let v4: u64;  // rbp
    let v5: u64;  // rax

    v0 = a4;
    v3 = a2 + a3 * 40;
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(a2, v3);
    v1 = struct8 {
        field_0: v4
    };
    v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(a2, v3, &v1);
    if v4 {
        uu_od::output_info::OutputInfo::create_spaced_formatter_info(a0, a2, a3, v4, v5);
        a0[1].field_16 = a1;
        a0[2].field_0 = v5 * (!(v4 | a1) >> 32 ? ((0 CONCAT a1) % (v4 & 4294967295) CONCAT (0 CONCAT a1) / (v4 & 4294967295)) & 4294967295 & 4294967295 : (0 CONCAT a1) % v4 CONCAT (0 CONCAT a1) / v4);
        a0[2].field_16 = v1;
        *(&a0[3].field_0 as &u8) = v0;
        return a0;
    }
    core::panicking::panic_const::panic_const_div_by_zero(); /* do not return */
}
