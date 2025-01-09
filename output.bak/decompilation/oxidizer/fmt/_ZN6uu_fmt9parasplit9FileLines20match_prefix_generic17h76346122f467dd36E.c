fn uu_fmt::parasplit::FileLines::match_prefix_generic(a0: u32, a1: u32, a2: u32, a3: u32, a4: u8) -> u64 {
    let v0: u64;  // [sp-0x48]
    let v1: u64;  // [sp-0x40]
    let v2: void*;  // [sp-0x38]
    let v4: u64;  // rax
    let v5: struct8;  // rax
    let v6: u64;  // edx
    let v7: u32;  // ebp
    let v8: u32;  // ebp
    let v9: u64;  // rax
    let v10: u64;  // rax

    v4 = core::slice::<impl [T]>::starts_with(a2, a3, a0, a1);
    if v4 {
        return v4;
    } else if a4 {
        return v4;
    } else {
        v0 = a2;
        v1 = a2 + a3;
        v2 = 0;
        v5 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next();
        if v6 == 0x110000 {
            return 0;
        }
        do {
            v7 = v8;
            v9 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v5, a2, a3);
            if !v9 {
                core::str::slice_error_fail(a2, a3, v5, a3, "src/uu/fmt/src/parasplit.rs"); /* do not return */
            }
            v10 = core::slice::<impl [T]>::starts_with(v9, v6, a0, a1);
            if v10 {
                v4 = v10 | -0x100 | 1;
                return v4;
            }
            if v7 - 9 >= 5 && v7 != 32 && (!(v7 >= 128) || !(core::unicode::unicode_data::white_space::lookup(v7) as i8) || !((v5 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(), v8 = v6 as u32, v6 as u32 != 0x110000))) {
                break;
            }
        } while ((v5 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(), v8 = v6 as u32, v6 as u32 != 0x110000));
    }
}
