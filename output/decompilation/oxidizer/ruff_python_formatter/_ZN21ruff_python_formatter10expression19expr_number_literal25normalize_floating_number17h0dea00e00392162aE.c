fn ruff_python_formatter::expression::expr_number_literal::normalize_floating_number(a0: i64, a1: i256, a2: u64) -> int {
    let v0: void*;  // [bp-0x68]
    let v1: u64;  // [bp-0x60]
    let v2: void*;  // [bp-0x58]
    let v4: core::str::iter::CharIndices;  // [bp-0x48]
    let v6: core::option::Option<(usize, char)>;  // rax
    let v7: u32;  // edx
    let v8: u8;  // bl
    let v10: core::option::Option<(usize, char)>;  // rax

    v0 = 0;
    v1 = 1;
    v2 = 0;
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
    v6 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v4) as u64;
    v8 = v7 == 46;
    if v7 == 46 {
        alloc::string::String::push(&v0, 48);
        alloc::string::String::push(&v0, 46);
    }
    v10 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v4) as u64;
}
