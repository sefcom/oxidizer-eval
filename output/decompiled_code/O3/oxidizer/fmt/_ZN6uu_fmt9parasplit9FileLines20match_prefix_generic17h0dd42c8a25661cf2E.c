fn uu_fmt::parasplit::FileLines::match_prefix_generic(a0: u32, a1: u32, a2: u32, a3: u32, a4: u8) -> u64 {
    let v0: u64;  // [sp-0x48]
    let v1: u64;  // [sp-0x40]
    let v2: void*;  // [sp-0x38]
    let v4: void*;  // rax
    let v5: u64;  // rsi
    let v6: u64;  // rdx
    let v7: struct8;  // rax
    let v8: u32;  // ebp
    let v9: u32;  // ebp
    let v10: u64;  // rax
    let v11: u64;  // rax

    v4 = core::slice::<impl [T]>::starts_with(a2, a3, a0, a1);
    if v4 as u8 {
        return v4;
    } else if a4 {
        return v4;
    } else {
        v0 = a2;
        v1 = a2 + a3;
        v2 = 0;
        v7 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v5, v6);
        if v6 == 0x110000 {
            return 0;
        }
        do {
            v8 = v9;
            v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v7, a2, a3);
            if !v10 {
                core::str::slice_error_fail(); /* do not return */
            }
            v11 = core::slice::<impl [T]>::starts_with(v10, v6, a0, a1);
            if v11 {
                v4 = v11 | -0x100 | 1;
                return v4;
            }
            if v8 - 9 >= 5 && v8 != 32 && (!(v8 >= 128) || !(core::unicode::unicode_data::white_space::lookup(v8) as i8) || !((v7 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v5, v6), v6 as u32 != 0x110000))) {
                break;
            }
        } while ((v7 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v5, v6), v6 as u32 != 0x110000));
    }
}
