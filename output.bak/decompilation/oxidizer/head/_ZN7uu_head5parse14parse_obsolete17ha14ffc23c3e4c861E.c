fn uu_head::parse::parse_obsolete(a0: &Option<struct9>, a1: u64, a2: u64) -> u64 {
    let v0: u64;  // [sp-0x60], Other Possible Types: struct8
    let v1: u64;  // [sp-0x58]
    let v2: void*;  // [sp-0x50]
    let v3: u64;  // [sp-0x48]
    let v4: struct8;  // [sp-0x40]
    let v5: u8;  // [sp-0x38]
    let v9: u32;  // edx
    let v10: u32;  // r12d
    let v11: struct8;  // r13
    let v12: struct8;  // rax
    let v14: u32;  // r12d
    let v15: u64;  // rdx

    v2 = 0;
    v0 = a1;
    v1 = a1 + a2;
    v0 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next();
    return struct8 {
        field_0: 0
    };
    return struct8 {
        field_0: 0
    };
    if v9 == 0x110000 {
        v10 = 0;
    } else {
        v11 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next();
        if v10 - 48 <= 9 {
            v12 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next();
            if v9 == 0x110000 {
LABEL_4be355:
                v10 = 0;
            } else {
                loop {
                    v10 = v14;
                    v11 = v12;
                    if v10 - 48 >= 10 {
                        break;
                    }
                    v12 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next();
                    if v9 == 0x110000 {
                        goto LABEL_4be355;
                    }
                }
            }
        }
    }
    v3 = 1;
    v4 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next();
    v5 = 0;
    uu_head::parse::process_num_block(a0, core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeInclusive<usize>>::index(&v3, a1, a2), v15, v10, &v0);
}
