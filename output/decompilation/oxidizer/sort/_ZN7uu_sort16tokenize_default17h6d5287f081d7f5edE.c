fn uu_sort::tokenize_default(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct24;  // [bp-0x48]
    let v2: core::option::Option<u32>;  // cl
    let v3: u8;  // bpl
    let v4: core::option::Option<(usize, char)>;  // rax
    let v5: u32;  // edx
    let v6: core::fmt::rt::Argument;  // rax

    alloc::vec::Vec<T,A>::push(a2, 0, 0, "src/uu/sort/src/sort.rs");
    v0 = struct24 {
        field_0: a0
        field_8: a0 + a1
        field_16: 0
    };
    v2 = 1;
    loop {
        loop {
            v3 = v2;
            v4 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v0) as u64;
            match (v5) {
                32 => {
                    v2 = 1;
                    if !(v3 & 1) {
                        goto LABEL_4d2b17;
                    }
                    continue;
                    break;
                }
                1114112 => {
                    v6 = *((a2 + 16) as &i64);
                    if !*((a2 + 16) as &i64) {
                        core::option::unwrap_failed(); /* do not return */
                    }
                    *((*((a2 + 8) as &i64) + v6 * 16 - 8) as &u64) = a1;
                    return v6 * 16;
                }
                _ => {
                    if v5 - 9 >= 5 {
                        v2 = 0;
                        if v5 < 128 {
                            continue;
                        }
                        v2 = core::unicode::unicode_data::white_space::lookup(v5);
                        if !((v3 | ~(v2)) & 1) {
                            goto LABEL_4d2b17;
                        }
                        continue;
                    }
                }
            }
        }
LABEL_4d2b17:
        if !*((a2 + 16) as &i64) {
            break;
        }
        *((*((a2 + 8) as &i64) + *((a2 + 16) as &i64) * 16 - 8) as &core::option::Option<(usize, char)>) = v4;
        alloc::vec::Vec<T,A>::push(a2, v4, 0, "src/uu/sort/src/sort.rs");
    }
    core::option::unwrap_failed(); /* do not return */
}
