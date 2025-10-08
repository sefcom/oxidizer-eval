fn ruff_python_formatter::expression::expr_number_literal::normalize_integer(a0: u64, a1: u64, a2: u64) -> int {
    let v0: u32;  // [bp-0x1a8]
    let v1: void*;  // [bp-0x80]
    let v2: u64;  // [bp-0x78]
    let v3: void*;  // [bp-0x70]
    let v4: core::str::iter::CharIndices;  // [bp-0x68]
    let v5: u64;  // [bp-0x50]
    let v6: core::str::iter::CharIndices;  // [bp-0x48]
    let v8: struct21;  // r13
    let v9: u32;  // edx
    let v11: struct16;  // eax
    let v12: struct32;  // bpl
    let v13: struct21;  // r12
    let v14: core::option::Option<(usize, char)>;  // rax
    let v15: u32;  // r13d
    let v16: u32;  // r13d
    let v17: core::option::Option<&str>;  // rax
    let v19: core::option::Option<&str>;  // rax

    v8 = a0;
    v1 = 0;
    v2 = 1;
    v3 = 0;
    v4 = core::str::iter::CharIndices {
        iter: core::str::iter::Chars {
            iter: core::slice::iter::Iter<u8> {
                ptr: core::ptr::non_null::NonNull<u8> {
                    pointer: a1
                }
                end_or_len: a1 + a2
                _marker: core::marker::PhantomData<&u8> { }
            }
        }
        front_offset: 0
    };
    <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v4);
    if v9 != 48 {
        *((v8 + 8) as &u64) = a1;
        *((v8 + 16) as &u64) = a2;
        *(v8 as &i64) = 0x8000000000000000;
        return;
    }
    <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v4);
    match (v9) {
        88 | 120 => {
            if v11 <= 22 {
                goto LABEL_70bbb8;
            }
            if v12 {
                goto LABEL_70bbf7;
            }
            break;
        }
        1114112 => {
            *((v8 + 8) as &u64) = a1;
            *((v8 + 16) as &u64) = a2;
            *(v8 as &i64) = 0x8000000000000000;
            return;
        }
        _ => {
            if v11 > 22 {
                break;
            }
LABEL_70bbb8:
            v0 = &g_402001;
            if !(*((&v0 + ((v11 & 31) as u64 >> 3)) as &i8) >> (v11 as u8 & 31 & 7) & 1) {
                break;
            }
            alloc::string::String::push(&v1, 48);
            alloc::string::String::push(&v1, v9 | 32);
            if !v12 {
                if v13 {
                    v19 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v13, a1, a2) as u64;
                    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v1, v19, v9 + v19);
                    *((v8 + 16) as &i64) = 0;
                    *(v8 as &i128) = *(&v1 as &i128);
                    return;
                }
                *((v8 + 8) as &u64) = a1;
                *((v8 + 16) as &u64) = a2;
                *(v8 as &i64) = 0x8000000000000000;
                return;
            }
LABEL_70bbf7:
            v5 = a0;
            v6 = core::str::iter::CharIndices {
                iter: core::str::iter::Chars {
                    iter: core::slice::iter::Iter<u8> {
                        ptr: core::ptr::non_null::NonNull<u8> {
                            pointer: v4.iter.iter.ptr.pointer
                        }
                        end_or_len: v4.iter.iter.end_or_len
                        _marker: core::marker::PhantomData<&u8> { }
                    }
                }
                front_offset: 0
            };
            <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v6);
            if v9 != 0x110000 {
                do {
                    v16 = v9;
                    if v16 - 97 < 6 {
                        v17 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v13, v14, a1, a2) as u64;
                        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v1, v17, v9 + v17);
                        alloc::string::String::push(&v1, v16 & 71);
                    }
                    <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v6);
                } while (v15 != 0x110000);
            }
            v8 = v5;
            if v13 {
                v19 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v13, a1, a2) as u64;
                <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v1, v19, v9 + v19);
                *((v8 + 16) as &i64) = 0;
                *(v8 as &i128) = *(&v1 as &i128);
                return;
            }
        }
    }
}
