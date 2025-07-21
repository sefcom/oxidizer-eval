fn uu_fmt::parasplit::WordSplit::analyze_tabs(a1: i64, a2: i64, a3: i64) -> : struct40 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x58]
    let v1: struct24;  // [bp-0x48]
    let v3: u64;  // rbp
    let v4: u64;  // r13
    let v5: core::result::Result<core::ptr::non_null::NonNull<[u8]>, core::alloc::AllocError>;  // r12
    let v6: core::fmt::Arguments;  // rax
    let v7: u32;  // edx

    v1 = struct24 {
        field_0: a2
        field_8: a3 + a2
        field_16: 0
    };
    v3 = 0;
    v4 = 1;
    loop {
        loop {
            do {
                v6 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v1) as u64;
            } while (v7 != 32);
            if v7 == 0x110000 {
LABEL_4ba6f7:
                return struct40 {
                    field_0: v3
                    field_8: v0
                    field_16: v5
                    field_24: v4
                    field_32: v6
                };
            }
            if v7 - 9 < 5 {
                if v7 == 9 && !v3 {
                    break;
                }
                continue;
            }
            if !(v7 >= 128 && core::unicode::unicode_data::white_space::lookup(v7)) {
                goto LABEL_4ba6f7;
            }
        }
        v3 = 1;
        v0 = v5;
    }
}
