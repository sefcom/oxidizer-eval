fn uu_head::parse::parse_obsolete(a1: i64, a2: i64) -> Option<struct17> {
    let a0: u64;  // rsi
    let v0: u192;  // [bp-0x60]
    let v1: u64;  // [bp-0x48]
    let v2: u64;  // [bp-0x40]
    let v3: struct49;  // [bp-0x38]
    let v5: u32;  // edx
    let v6: core::option::Option<(usize, char)>;  // rax, Other Possible Types: &str
    let v7: core::option::Option<(usize, char)>;  // rax
    let v8: i64;  // rdi
    let v9: u32;  // r12d
    let v10: core::option::Option<(usize, char)>;  // rax
    let v11: u32;  // r12d
    let v12: u64;  // rdi
    let v14: &str;  // rax:rdx

    v0 = core::str::iter::CharIndices {
        front_offset: a0
        iter: core::str::iter::Chars {
            iter: core::slice::iter::Iter<u8> {
                ptr: core::ptr::non_null::NonNull<u8> {
                    pointer: a0 + a1
                }
                end_or_len: 0
                _marker: core::marker::PhantomData<&u8> { }
            }
        }
    };
    <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v0);
    if v5 == 45 {
        v6 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v0) as u64;
        if v5 - 48 <= 9 {
            v7 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v0) as u64;
            if v5 != 0x110000 {
                v6 = v7;
                if v9 - 48 <= 9 {
                    v10 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v0) as u64;
                    if v5 != 0x110000 {
                        do {
                            v9 = v11;
                            v6 = v10;
                        } while (v9 - 48 < 10 && (v10 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v0) as u64, v11 = v5, v11 != 0x110000));
                    }
                }
            }
            v1 = 1;
            v2 = v6;
            v3 = 0;
            v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeInclusive<usize>>::index(&v1, a0, a1);
            uu_head::parse::process_num_block(v12, v14.data_ptr, a1, v9, &v0);
            return;
        }
    }
    *(v8 as &i64) = 0;
    return;
}
