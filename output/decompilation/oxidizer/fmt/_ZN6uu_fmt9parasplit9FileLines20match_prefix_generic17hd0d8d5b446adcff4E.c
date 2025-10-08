fn uu_fmt::parasplit::FileLines::match_prefix_generic(a0: &[u8], a1: &[u8], a2: i8) -> u64 {
    let v0: u64;  // [bp-0x40]
    let v1: void*;  // [bp-0x38]
    let v3: u64;  // rcx
    let v5: i32;  // ebp
    let v6: u64;  // rdx
    let v7: core::option::Option<(usize, char)>;  // rax
    let v8: u32;  // r15d
    let v9: u32;  // r15d
    let v11: u64;  // rax

    if a2 || core::slice::<impl [T]>::starts_with(a1, v3, a0) {
        return v5 as u64;
    }
    v0 = v6 + v3;
    v1 = 0;
    v7 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&vvar_67{reg 32}) as u64;
    if v6 == 0x110000 {
        return 0;
    }
    loop {
        v9 = v8;
        v11 = core::slice::<impl [T]>::starts_with(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v7, a1) as u64, v6, a0);
        v5 = v11;
        if v11 {
            return v11 & 4294967295;
        }
        if v9 - 9 >= 5 && v9 != 32 && (v9 < 128 || !core::unicode::unicode_data::white_space::lookup(v9)) {
            break;
        }
        v7 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&vvar_67{reg 32}) as u64;
        v8 = v6;
        if v8 == 0x110000 {
            break;
        }
    }
    return v5 as u64;
}
