fn uu_fmt::parasplit::FileLines::compute_indent(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u192;  // [bp-0x48]
    let v2: core::option::Option<(usize, char)>;  // rax, Other Possible Types: void*
    let v3: u32;  // edx
    let v4: void*;  // r12
    let v5: void*;  // rbx
    let v6: i64;  // 4096
    let v7: u32;  // ebp
    let v8: u64;  // cc_ndep
    let v9: i64;  // r15
    let v10: u32;  // ebp
    let v11: i64;  // r15

    v0 = core::str::iter::CharIndices {
        front_offset: a2
        iter: core::str::iter::Chars {
            iter: core::slice::iter::Iter<u8> {
                ptr: core::ptr::non_null::NonNull<u8> {
                    pointer: a3 + a2
                }
                end_or_len: 0
                _marker: core::marker::PhantomData<&u8> { }
            }
        }
    };
    v2 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v0) as u64;
    if v3 != 0x110000 {
        v5 = 0;
        v4 = 0;
        v6 = a1;
        do {
            v9 = v6;
            v10 = v7;
            if amd64g_calculate_condition(2, 8, v2, a4, v8) as char {
                v11 = v9;
                if v10 == 9 {
                    continue;
                }
                goto LABEL_4b98f0;
            } else {
                v11 = v9;
                if v10 == 32 {
LABEL_4b98f0:
                    v9 = v11;
                    v4 += uu_fmt::parasplit::char_width(v10);
                } else if v10 - 9 >= 5 && (v10 < 128 || !((v11 = a1, core::unicode::unicode_data::white_space::lookup(v10 as u8) as u32 as u8))) {
                    break;
                }
            }
        } while ((v2 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v0) as u64, v7 = v3, v6 = v9, v7 != 0x110000));
    }
    *(a0 as &void*) = v2;
    *((a0 + 8) as &void*) = v5;
    *((a0 + 16) as &void*) = v4;
    return v2;
}
