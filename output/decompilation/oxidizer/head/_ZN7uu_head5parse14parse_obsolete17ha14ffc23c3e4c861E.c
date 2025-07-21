fn uu_head::parse::parse_obsolete(a1: i64, a2: i64) -> Option<struct17> {
    let a0: u64;  // rsi
    let v0: core::str::iter::CharIndices;  // [bp-0x60], Other Possible Types: struct24
    let v1: struct24;  // [bp-0x48]
    let v3: core::fmt::Arguments;  // edx
    let v4: core::fmt::Arguments;  // rax, Other Possible Types: core::option::Option<(usize, char)>
    let v5: core::option::Option<(usize, char)>;  // rax
    let v6: i64;  // rdi
    let v7: u32;  // r12d
    let v8: core::option::Option<(usize, char)>;  // rax
    let v9: core::fmt::Arguments;  // r12d
    let v10: u64;  // rdi
    let v12: &str;  // rax:rdx

    v0 = struct24 {
        field_0: a0
        field_8: a0 + a1
        field_16: 0
    };
    v0 = core::str::iter::CharIndices {
        iter: core::str::iter::Chars {
            iter: core::slice::iter::Iter<u8> {
                ptr: core::ptr::non_null::NonNull<u8> {
                    pointer: a0
                }
                end_or_len: a0 + a1
                _marker: core::marker::PhantomData<&u8> { }
            }
        }
        front_offset: 0
    };
    <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v0);
    if v3 == 45 {
        v4 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v0) as u64;
        if v3 - 48 <= 9 {
            v5 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v0) as u64;
            if v3 != 0x110000 {
                v4 = v5;
                if v7 - 48 <= 9 {
                    v8 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v0) as u64;
                    if v3 != 0x110000 {
                        do {
                            v7 = v9;
                            v4 = v8;
                        } while (v7 - 48 < 10 && (v8 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v0) as u64, v9 = v3, v9 != 0x110000));
                    }
                }
            }
            v1 = struct24 {
                field_0: 1
                field_8: v4
                field_16: 0
            };
            v12 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeInclusive<usize>>::index(&v1, a0, a1);
            uu_head::parse::process_num_block(v10, v12.data_ptr, a1, v7, &v0);
            return;
        }
    }
    *(v6 as &i64) = 0;
    return;
}
