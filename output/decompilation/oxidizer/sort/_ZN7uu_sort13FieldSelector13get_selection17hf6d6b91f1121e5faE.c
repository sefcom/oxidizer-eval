fn uu_sort::FieldSelector::get_selection(a0: i64, a1: i64, a2: void*, a3: u64, a4: void*, a5: u64) -> long long {
    let v0: i64;  // [bp-0x68]
    let v1: u64;  // [bp-0x60]
    let v2: u64;  // [bp-0x58]
    let v3: u64;  // [bp-0x50]
    let v4: u8;  // [bp-0x48]
    let v5: u64;  // [bp-0x3c]
    let v6: i8;  // [bp-0x34]
    let v10: u64;  // rdx
    let v11: core::option::Option<&str>;  // rax
    let v12: u64;  // r15
    let v13: u64;  // rax
    let v15: core::option::Option<&str>;  // rax
    let v16: u64;  // xmm0lq
    let v17: u8;  // bpl
    let v18: core::result::Result<f64, core::num::dec2flt::ParseFloatError>;  // rax:rdx

    v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(uu_sort::FieldSelector::get_range(a1, a2, a3, a4, a5), v10, a2, a3) as u64;
    v12 = v11;
    v13 = *((a1 + 53) as &i8);
    if v13 < 2 {
        v6 = v13 == 1;
        v5 = 0x2e00110000;
        uu_sort::numeric_str_cmp::NumInfo::parse(&v1, v12, a2);
        v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v3, *(&v4 as &i64), v12, v10) as u64;
        *(v0 as &u64) = v13;
        *((v0 + 8) as &u64) = v10;
        *((v0 + 16) as &u64) = v1;
    } else if v13 == 2 {
        v15 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(uu_sort::get_leading_gen(v12, v10), v10, v12, v10) as u64;
        v18 = core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(&v1, v15);
        if !v1 as i8 {
            v16 = v2;
        }
        *(a0 as &u64) = v13;
        *((a0 + 8) as &u64) = v16;
        v17 = 2;
    } else {
        *(v0 as &u64) = v12;
        *((v0 + 8) as &u64) = v10;
        v17 = 4;
    }
    *((a0 + 24) as &u8) = v17;
    return v13;
}
