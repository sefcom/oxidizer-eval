fn uu_head::parse::parse_obsolete(a0: &Option<struct9>, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x60], Other Possible Types: struct8
    let v1: u64;  // [sp-0x58]
    let v2: void*;  // [sp-0x50]
    let v3: u64;  // [sp-0x48]
    let v4: struct8;  // [sp-0x40]
    let v5: u8;  // [sp-0x38]
    let v7: u32;  // edx
    let v8: u32;  // rsi
    let v9: u64;  // rdx
    let v12: u32;  // r12d
    let v13: struct8;  // r13
    let v14: struct8;  // rax
    let v16: u64;  // rdx

    v2 = 0;
    v0 = a1;
    v1 = a1 + a2;
    v0 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(a1, a2);
    if v7 == 45 && v9 - 48 <= 9 {
        if v9 == 0x110000 {
            v12 = 0;
        } else {
            v13 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v8, v9 - 48);
            if v12 - 48 <= 9 {
                v14 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v8, v9);
                if v9 == 0x110000 {
LABEL_4be355:
                    v12 = 0;
                } else {
                    v12 = v9;
                    loop {
                        v13 = v14;
                        if v12 - 48 >= 10 {
                            break;
                        }
                        v14 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v8, v16);
                        v12 = v9;
                        if v9 == 0x110000 {
                            goto LABEL_4be355;
                        }
                    }
                }
            }
        }
        v3 = 1;
        v4 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v8, v9);
        v5 = 0;
        uu_head::parse::process_num_block(a0, core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeInclusive<usize>>::index(&v3, a1, a2), v9, v12, &v0);
        return struct8 {
            field_0: 0
        };
    }
    return struct8 {
        field_0: 0
    };
}
