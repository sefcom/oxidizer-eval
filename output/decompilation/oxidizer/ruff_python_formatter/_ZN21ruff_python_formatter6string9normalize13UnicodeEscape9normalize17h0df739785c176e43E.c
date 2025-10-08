fn ruff_python_formatter::string::normalize::UnicodeEscape::normalize(a0: i64, a1: i8, a2: i128, a3: i64, a4: i128) {
    let v0: struct24;  // [bp-0x80]
    let v1: core::fmt::Arguments;  // [bp-0x68]
    let v2: u64;  // [sp-0x60]
    let v3: core::str::iter::CharIndices;  // [bp-0x50], Other Possible Types: u64
    let v4: u64;  // [bp-0x48]
    let v5: void*;  // [bp-0x40]
    let v6: struct16;  // [bp-0x38]
    let v8: u32;  // edx
    let v9: core::option::Option<(usize, char)>;  // rbx
    let v10: core::option::Option<&str>;  // rax
    let v11: u64;  // rdx
    let v14: struct24;  // r15
    let v15: struct16;  // 4096
    let v16: core::option::Option<(usize, char)>;  // rax
    let v17: struct12;  // edx
    let v19: core::option::Option<&str>;  // rax
    let v23: core::option::Option<&str>;  // rax

    v0 = struct24 {
        field_0: 0
        field_8: ""
    };
    if (a1 & 1) {
        v1 = a0;
        v3 = core::str::iter::CharIndices {
            iter: core::str::iter::Chars {
                iter: core::slice::iter::Iter<u8> {
                    ptr: core::ptr::non_null::NonNull<u8> {
                        pointer: a3
                    }
                    end_or_len: a3 + a4
                    _marker: core::marker::PhantomData<&u8> { }
                }
            }
            front_offset: 0
        };
        <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v3);
        if v8 != 123 {
            *(v1 as &i64) = 9223372036854775809;
        }
        loop {
            v9 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v3) as u64;
            if v11 > 44 {
                if v11 != 45 {
                    if v11 == 125 {
                        break;
                    }
                    if v11 == 0x110000 {
                        *(v1 as &i64) = 9223372036854775809;
                    }
                }
            } else {
                if v11 == 32 || v11 - 65 < 26 || v11 - 48 < 10 {
                    if 1 {
                        continue;
                    }
                    goto LABEL_7290b4;
                } else {
                    if v11 - 97 > 25 {
                        *(v1 as &i64) = 9223372036854775809;
                    }
                    alloc::vec::Vec<T,A>::reserve(&v0, 2);
                    v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v9, a3, a4) as u64;
                    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v0, v10, v11 + v10);
LABEL_7290b4:
                    alloc::string::String::push(&v0, v11 & 95);
                }
            }
        }
        if v9 < 3 {
            *(v1 as &i64) = 9223372036854775809;
        }
        v14 = v1;
    } else if a4 < a2 {
        return struct8 {
            field_0: 9223372036854775809
        };
    } else {
        v1 = a0;
        v3 = a3;
        v4 = a3 + a4;
        v5 = 0;
        if a2 {
            v2 = "crates/ruff_python_formatter/src/string/normalize.rs";
            v15 = a2;
            loop {
                v6 = v15 - 1;
                v16 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v3) as u64;
                if v17 == 0x110000 {
                    break;
                }
                if v17 - 97 < 6 || v17 - 48 < 10 {
                    if 1 {
                        goto LABEL_7291df;
                    }
                } else {
                    if v17 - 65 < 6 {
                        alloc::vec::Vec<T,A>::reserve(&v0, a2);
                        v19 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v16, a3, a4) as u64;
                        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v0, v19, v17 as u64 + v19);
                    } else {
                        *(v1 as &i64) = 9223372036854775809;
                    }
                }
                alloc::string::String::push(&v0, v17 as u8 | 32);
LABEL_7291df:
                v15 = v6;
                if !v15 {
                    break;
                }
            }
        }
        v14 = v1;
    }
    v23 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(a2, a3, a4) as u64;
    *(v14 as &i64) = 0x8000000000000000;
    *((v14 + 8) as &core::option::Option<&str>) = v23;
    *((v14 + 16) as &u64) = v17 as u64;
}
