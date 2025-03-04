fn uu_fmt::parasplit::FileLines::match_prefix_generic(a0: u32, a1: u32, a2: u32, a3: u32, a4: u8) -> u64 {
    let v0: struct24;  // [bp-0x48]
    let v2: u64;  // rax
    let v4: u64;  // edx
    let v5: &u8;  // r13
    let v6: u32;  // ebp
    let v7: u64;  // rax

    v2 = core::slice::<impl [T]>::starts_with(a2, a3, a0, a1);
    if v2 {
        return v2;
    } else if a4 {
        return v2;
    } else {
        v0 = struct24 {
            field_0: a2
            field_8: a2 + a3
            field_16: 0
        };
        if v4 == 0x110000 {
            return 0;
        }
        v5 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v0);
        v6 = v4;
        do {
            v7 = core::slice::<impl [T]>::starts_with(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v5, a2, a3), v4, a0, a1);
            if v7 {
                v2 = v7 & -0x100 | 1;
                return v2;
            }
            if v6 - 9 >= 5 && v6 != 32 && (!(v6 >= 128) || !(core::unicode::unicode_data::white_space::lookup(v6) as i8) || !((v5 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v0), v6 = v4 as u32, v4 as u32 != 0x110000))) {
                break;
            }
        } while ((v5 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v0), v6 = v4 as u32, v4 as u32 != 0x110000));
    }
}
