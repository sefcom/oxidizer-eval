fn uu_ptx::prepare_line_chunks(a1: i64, a2: core::ops::range::Range<usize>, a3: &str, a4: i64, a5: i64, a6: i64, a7: i64) -> : struct120 {
    let a0: i64;  // rdi
    let v0: void*;  // [bp-0xd0], Other Possible Types: u64
    let v1: u64;  // [bp-0xb0]
    let v2: struct24;  // [bp-0xa8]
    let v3: u64;  // [bp-0x98]
    let v4: u128;  // [bp-0x90]
    let v5: u64;  // [bp-0x80]
    let v6: u128;  // [bp-0x78]
    let v7: u64;  // [bp-0x68]
    let v8: u128;  // [bp-0x60]
    let v9: u64;  // [bp-0x50]
    let v10: u128;  // [bp-0x48]
    let v11: i8;  // [bp-0x38]
    let v12: u64;  // rcx
    let v13: u64;  // rdx
    let v14: core::option::Option<&str>;  // rax
    let v15: u64;  // r13
    let v16: u64;  // r12
    let v17: core::option::Option<&str>;  // rax
    let v18: u64;  // r15
    let v19: u64;  // r12
    let v20: core::fmt::Arguments;  // rax
    let v21: u64;  // rax
    let v22: u64;  // rdx

    v0 = v12;
    v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v13, a3) as u64;
    v15 = v14;
    v16 = v14 + v13;
    v1 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v14, v16);
    v17 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v13, v0, a3) as u64;
    v0 = v17;
    v18 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v17, v17 + v13) + v1;
    if *((a1 + 90) as &i8) {
        v19 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v15, v16);
        v20 = core::str::<impl str>::trim_start_matches(core::str::<impl str>::trim_start_matches(v15, v13, a6, a7), v13);
        v21 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v19 - <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v20, v13 + v20), v19, a4, a5, "src/uu/ptx/src/ptx.rs");
    } else {
        v21 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v1, a4, a5, "src/uu/ptx/src/ptx.rs");
    }
    v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v0, v13);
    uu_ptx::get_output_chunks(&v4, v21, v22, v3, v18 * 4 + a4, a5 - v18, a1);
    return struct120 {
        field_0: v4
        field_16: v5
        field_24: v6
        field_40: v7
        field_48: *(&v2.field_0 as &i128)
        field_64: v3
        field_72: v8
        field_88: v9
        field_96: v10
        field_112: *(&v11 as &i64)
    };
}
