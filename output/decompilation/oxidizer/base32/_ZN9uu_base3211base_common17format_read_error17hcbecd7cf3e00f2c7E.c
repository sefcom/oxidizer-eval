fn uu_base32::base_common::format_read_error(a0: i64, a1: i8) -> u64 {
    let v0: u8;  // [bp-0xc1]
    let v1: core::str::iter::CharIndices;  // [bp-0xc0]
    let v2: u64;  // [bp-0xa8]
    let v3: u64;  // [bp-0xa0]
    let v4: void*;  // [bp-0x98]
    let v5: struct24;  // [bp-0x88]
    let v6: u64;  // [bp-0x80]
    let v7: u64;  // [bp-0x78]
    let v11: u64;  // r14
    let v12: u64;  // rdx
    let v13: core::option::Option<(usize, char)>;  // rax
    let v14: core::fmt::rt::Argument;  // edx
    let v15: core::fmt::rt::Argument;  // edx

    v0 = a1;
    v5 = <T as alloc::string::SpecToString>::spec_to_string(&v0);
    v11 = v7;
    v2 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v11, 1, 1, "/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs");
    v3 = v12;
    v4 = 0;
    v1 = core::str::iter::CharIndices {
        iter: core::str::iter::Chars {
            iter: core::slice::iter::Iter<u8> {
                ptr: core::ptr::non_null::NonNull<u8> {
                    pointer: v6
                }
                end_or_len: v11 + v6
                _marker: core::marker::PhantomData<&u8> { }
            }
        }
        front_offset: 0
    };
    v13 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v1) as u64;
    if v12 != 0x110000 {
        do {
            v15 = v12;
            if let None = v13 {
                alloc::string::String::push(&v2, v15 as u8);
            }
            v13 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v1) as u64;
        } while (v14 != 0x110000);
    }
    format!("read error: {}", &v2);
    return a0;
}
