fn uu_fmt::parasplit::WordSplit::analyze_tabs(a1: i64, a2: i64, a3: i64) -> : struct40 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x58]
    let v1: u64;  // [bp-0x48]
    let v2: u64;  // [bp-0x40]
    let v3: void*;  // [bp-0x38]
    let v5: u64;  // rbp
    let v6: &mut [u8];  // r13
    let v7: core::result::Result<core::ptr::non_null::NonNull<[u8]>, core::alloc::AllocError>;  // r12
    let v8: core::option::Option<(usize, char)>;  // rax
    let v9: u32;  // edx

    v1 = a2;
    v2 = a3 + a2;
    v3 = 0;
    v5 = 0;
    v6 = 1;
    loop {
        loop {
            do {
                v8 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v1) as u64;
            } while (v9 != 32);
            if v9 == 0x110000 {
LABEL_4ba6f7:
                return struct40 {
                    field_0: v5
                    field_8: v0
                    field_16: v7
                    field_24: v6
                    field_32: v8
                };
            }
            if v9 - 9 < 5 {
                if v9 == 9 && !v5 {
                    break;
                }
                continue;
            }
            if !(v9 >= 128 && core::unicode::unicode_data::white_space::lookup(v9)) {
                goto LABEL_4ba6f7;
            }
        }
        v5 = 1;
        v0 = v7;
    }
}
