fn just::unindent::unindent(a0: u64, a1: i64, a2: u32) -> long long {
    let v0: Option<struct256>;  // [bp-0x90], Other Possible Types: core::fmt::rt::Argument
    let v1: struct16;  // [bp-0x88], Other Possible Types: struct82
    let v2: struct16;  // [bp-0x80]
    let v3: struct16;  // [bp-0x78]
    let v4: struct32;  // [bp-0x70]
    let v5: struct16;  // [bp-0x70]
    let v6: core::fmt::Arguments;  // [bp-0x68]
    let v7: core::fmt::rt::Argument;  // [bp-0x60]
    let v8: core::fmt::rt::Argument;  // [bp-0x58], Other Possible Types: struct32, struct81
    let v9: struct25;  // [bp-0x50], Other Possible Types: unsigned long
    let v10: struct16;  // [bp-0x48], Other Possible Types: struct82
    let v11: u64;  // [bp-0x38]
    let v13: struct24;  // r13
    let v14: struct8;  // rax
    let v15: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // rbx
    let v16: u32;  // edx
    let v17: struct24;  // rcx
    let v19: core::option::Option<&str>;  // rax
    let v20: struct24;  // rbx
    let v21: i64;  // rdx
    let v22: core::fmt::rt::Argument;  // rax
    let v23: core::fmt::rt::Argument;  // r14
    let v24: u64;  // rbp
    let v25: u64;  // r13
    let v27: core::option::Option<&str>;  // rax
    let v28: u64;  // rdx

    v1 = 0;
    v2 = 8;
    v3 = 0;
    v0 = a1;
    v8 = a1;
    v9 = a1 + a2;
    v10 = 0;
    v13 = 0;
    loop {
        v14 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next();
        v15 = 1;
        if v16 != 10 {
            if v16 == 0x110000 {
                break;
            }
            if v16 >= 128 {
                if v14 != v17 + a2 {
                    continue;
                }
            } else {
                if v14 != a2 - 1 {
                    continue;
                }
            }
        }
        v19 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v13, v15 + v14, v0, a2) as u64;
        v1 = alloc::vec::Vec<T,A>::push(v19, a2, "src/unindent.rs");
    }
    v0 = v20;
    v4 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v3, 8, 16, "src/unindent.rs");
    v6 = v21;
    v7 = 0;
    v8 = v2;
    v9 = v3 * 16 + v2;
    v10 = 0;
    loop {
        v22 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v8);
        if !v21 {
            break;
        }
        v23 = v22;
        v24 = *(v21 as &i64);
        v25 = *((v21 + 8) as &i64);
        if !just::unindent::blank(v24, v25) {
            v27 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v0, v24, v25) as u64;
        }
        v5 = alloc::vec::Vec<T,A>::push(v27, v28, "src/unindent.rs");
    }
    v8 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v4);
    core::iter::traits::iterator::Iterator::collect(v11, &v8);
    return a0;
}
