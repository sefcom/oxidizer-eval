fn uu_fmt::parasplit::WordSplit::analyze_tabs(a0: i64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: core::fmt::Arguments;  // [bp-0x50]
    let v1: struct24;  // [bp-0x48]
    let v3: u64;  // rbp
    let v4: void*;  // r15
    let v5: core::option::Option<(usize, char)>;  // rax, Other Possible Types: unsigned long
    let v6: struct40;  // edx
    let v7: struct40;  // edx
    let v8: struct40;  // edx
    let v9: u64;  // rcx
    let v10: core::option::Option<u32>;  // rcx

    v1 = struct24 {
        field_0: a2
        field_8: a3 + a2
        field_16: 0
    };
    v3 = 0;
    loop {
LABEL_4638b1:
        v4 = 0;
        v5 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v1) as u64;
        if v6 != 32 {
            goto LABEL_4638e5;
        }
        loop {
            do {
                v4 += 1;
                v5 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v1) as u64;
                v7 = v6;
            } while (v7 == 32);
            do {
LABEL_4638e5:
                v8 = v6;
                if v8 == 0x110000 {
LABEL_46397f:
                    return struct40 {
                        field_0: v3
                        field_8: v0
                        field_16: v4
                        field_24: v10
                        field_32: v5
                    };
                }
                if v8 - 9 >= 5 {
                    if v8 < 128 || !core::unicode::unicode_data::white_space::lookup(v8 as u8) {
                        goto LABEL_46397f;
                    }
                    break;
                }
                if v8 != 9 {
                    break;
                }
                if !v3 {
                    v3 = 1;
                    v0 = v4;
                    goto LABEL_4638b1;
                }
                v9 = *((a1 + 64) as &i64);
                v4 = v9 * ((!(v4 | v9) >> 32 ? ((0 CONCAT v4 as u32) % (v9 & 4294967295) CONCAT (0 CONCAT v4 as u32) / (v9 & 4294967295)) & 4294967295 : (0 CONCAT v4) % v9 CONCAT (0 CONCAT v4) / v9) + 1);
                v3 = 1;
                v5 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v1) as u64;
            } while (v7 != 32);
        }
    }
}
