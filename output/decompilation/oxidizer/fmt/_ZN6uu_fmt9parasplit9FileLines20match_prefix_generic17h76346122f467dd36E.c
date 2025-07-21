fn uu_fmt::parasplit::FileLines::match_prefix_generic(a0: i64, a1: i64, a2: i64, a3: i64, a4: i8) -> long long {
    let v0: core::str::iter::CharIndices;  // [bp-0x48], Other Possible Types: struct24
    let v2: u64;  // rax
    let v3: core::option::Option<(usize, char)>;  // rax
    let v4: u32;  // edx
    let v5: u32;  // ebp
    let v6: u32;  // ebp
    let v8: u64;  // rdx
    let v9: u64;  // rax

    v2 = core::slice::<impl [T]>::starts_with(a2, a3, a0, a1);
    if v2 {
        return v2;
    } else if !a4 {
        v0 = struct24 {
            field_0: a2
            field_8: a2 + a3
            field_16: 0
        };
        v0 = core::str::iter::CharIndices {
            iter: core::str::iter::Chars {
                iter: core::slice::iter::Iter<u8> {
                    ptr: core::ptr::non_null::NonNull<u8> {
                        pointer: a2
                    }
                    end_or_len: a2 + a3
                    _marker: core::marker::PhantomData<&u8> { }
                }
            }
            front_offset: 0
        };
        v3 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v0) as u64;
        if v4 == 0x110000 {
            return 0;
        }
        do {
            v6 = v5;
            v9 = core::slice::<impl [T]>::starts_with(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v3, a2, a3) as u64, v8, a0, a1);
            if v9 {
                return v9 & -0x100 | 1;
            }
        } while ((v6 - 9 < 5 || v6 == 32 || v6 >= 128 && core::unicode::unicode_data::white_space::lookup(v6)) && (v3 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v0) as u64, v5 = v8 as u32, v5 != 0x110000));
        return 0;
    } else {
        return v2;
    }
}
