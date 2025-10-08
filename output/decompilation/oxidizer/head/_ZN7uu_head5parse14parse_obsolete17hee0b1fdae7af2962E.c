fn uu_head::parse::parse_obsolete(a1: &str) -> : struct24 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0x40]
    let v1: void*;  // [bp-0x38]
    let v3: u64;  // rsi
    let v4: u64;  // rdx
    let v5: core::option::Option<(usize, char)>;  // rax
    let v6: u64;  // r12
    let v7: core::option::Option<(usize, char)>;  // rax
    let v8: u64;  // rax
    let v9: u32;  // r13d
    let v10: core::option::Option<&str>;  // rax

    v1 = 0;
    v0 = v3 + v4;
    v5 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&vvar_60{reg 64}) as u64;
    if v4 != 45 {
        return struct8 {
            field_0: 9223372036854775809
        };
    }
    <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&vvar_60{reg 64});
    if v4 - 48 <= 9 {
        v6 = v5 + 1;
        do {
            v7 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&vvar_60{reg 64}) as u64;
            if v4 == 0x110000 {
                v9 = 0;
                v8 = v4;
                break;
            }
            v8 = v7;
        } while (v4 - 48 < 10);
        v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v6, v8, a1) as u64;
        uu_head::parse::process_num_block(a0, v10, v4, v9, &vvar_60{reg 64});
        return;
    }
    return struct8 {
        field_0: 9223372036854775809
    };
}
