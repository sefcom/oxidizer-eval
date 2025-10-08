fn uu_fmt::parasplit::FileLines::compute_indent(a0: i64, a1: i64, a2: u64, a3: u64, a4: u64) -> long long {
    let v0: core::str::iter::CharIndices;  // [bp-0x48]
    let v2: void*;  // rax, Other Possible Types: struct16
    let v3: u32;  // edx
    let v4: core::fmt::Arguments;  // r12, Other Possible Types: struct24
    let v5: core::option::Option<&str>;  // rbx, Other Possible Types: u64
    let v6: i64;  // 4096
    let v7: u32;  // ebp
    let v8: u64;  // cc_ndep
    let v9: i64;  // r15
    let v10: u32;  // ebp
    let v12: i64;  // r15
    let v13: u32;  // edi

    v0 = core::str::iter::CharIndices {
        iter: core::str::iter::Chars {
            iter: core::slice::iter::Iter<u8> {
                ptr: core::ptr::non_null::NonNull<u8> {
                    pointer: a2
                }
                end_or_len: a3 + a2
                _marker: core::marker::PhantomData<&u8> { }
            }
        }
        front_offset: 0
    };
    v2 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v0) as u64;
    if v3 != 0x110000 {
        v5 = 0;
        v4 = 0;
        v6 = a1;
        do {
            v9 = v6;
            v10 = v3;
            if _ccall(2, 8, v2, a4, v8) as char {
                v12 = v9;
                v13 = v10;
                if v13 == 9 {
                    continue;
                }
                goto LABEL_462bc0;
            } else {
                v12 = v9;
                v13 = 32;
                if v10 == 32 {
LABEL_462bc0:
                    v9 = v12;
                    v4 += uu_fmt::parasplit::char_width(v13);
                } else if v10 - 9 >= 5 {
                    if v10 < 128 {
                        break;
                    }
                    v12 = a1;
                    v13 = v10;
                    if !core::unicode::unicode_data::white_space::lookup(v13) {
                        break;
                    } else {
                        goto LABEL_462bc0;
                    }
                }
            }
            v2 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v0) as u64;
            v6 = v9;
        } while (v7 != 0x110000);
    }
    *(a0 as &void*) = v2;
    *((a0 + 8) as &core::option::Option<&str>) = v5;
    *((a0 + 16) as &struct24) = v4;
    return v2;
}
