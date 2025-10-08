fn uu_head::arg_iterate(a0: i64, a1: u64, a2: u64) -> int {
    let v0: struct8;  // [bp-0x170]
    let v1: u64;  // [bp-0x168]
    let v2: u64;  // [bp-0x160]
    let v3: u64;  // [bp-0x158]
    let v4: u64;  // [bp-0x150]
    let v5: u64;  // [bp-0x148]
    let v6: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x140], Other Possible Types: struct24, struct8, core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>, struct32
    let v7: u64;  // [bp-0x140]
    let v8: u64;  // [bp-0x138]
    let v9: u64;  // [bp-0x130]
    let v10: void*;  // [bp-0xe8], Other Possible Types: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>, struct32, struct24
    let v11: u64;  // [bp-0xe0]
    let v12: u64;  // [bp-0xd8]
    let v13: u8;  // [bp-0xd0]
    let v14: struct24;  // [bp-0xa8]
    let v15: struct24;  // [bp-0xa8]
    let v16: struct8;  // [bp-0x80]
    let v17: u64;  // [bp-0x78]
    let v18: u64;  // [bp-0x70]
    let v19: struct24;  // [bp-0x68]
    let v20: alloc::string::String;  // [bp-0x48]
    let v22: u64;  // r14
    let v23: i64;  // rax
    let v24: u64;  // rax
    let v26: i64;  // rax
    let v27: u64;  // rax
    let v28: u64;  // rax
    let v29: i64;  // rax
    let v30: u64;  // r14

    v4 = a1;
    v5 = a2;
    v6 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v4);
    if (((0 ^ v6) & (0 ^ -(v7))) >> 63) as char {
        core::option::unwrap_failed(); /* do not return */
    }
    v2 = v8;
    v3 = v9;
    v16 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v4);
    v22 = 0x8000000000000000;
    if v16 == 0x8000000000000000 {
        v23 = alloc::alloc::Global::alloc_impl(8, 24);
        *(v23 as &struct8) = v6;
        *((v23 + 8) as &u64) = v2;
        *((v23 + 16) as &u64) = v3;
        v10 = struct24 {
            field_0: 1
            field_8: v23
            field_16: 1
        };
        v6 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v10);
        *((a0 + 8) as &u64) = alloc::boxed::Box<T>::new(&v6) as u64;
        v24 = &g_4f6d28;
    }
    v0 = v16;
    v1 = v17;
    v6 = core::str::converts::from_utf8(v17, v18);
    v14 = uu_head::parse::parse_obsolete(v8, v9);
    if (((0 ^ v14.field_0) & (0 ^ -(v14.field_0))) >> 63) as char {
        v10 = 0;
        v11 = v8;
        v12 = v9;
        v13 = 1;
        v20 = format!("bad argument format: {}", &v10);
        return struct32 {
            field_0: v30
            field_8: *(&v20.vec.buf.inner.cap as &i128)
            field_24: v20.vec.len
        };
    } else if v14.field_0 == 9223372036854775809 {
        v26 = alloc::alloc::Global::alloc_impl(8, 48);
        *(v26 as &i64) = v6 as i64;
        *((v26 + 8) as &u64) = v2;
        *((v26 + 16) as &u64) = v3;
        *((v26 + 24) as &struct8) = v0;
        *((v26 + 32) as &u64) = v1;
        *((v26 + 40) as &u64) = v18;
        v6 = struct24 {
            field_0: 2
            field_8: v26
            field_16: 2
        };
        v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v6);
        v6 = core::iter::traits::iterator::Iterator::chain(&v10, v4);
        v27 = &g_4f6cb8;
        return struct24 {
            field_0: 9223372036854775813
            field_8: alloc::boxed::Box<T>::new(&v6) as u64
            field_16: v28
        };
    } else {
        v19 = v15;
        v29 = alloc::alloc::Global::alloc_impl(8, 24);
        *(v29 as &i64) = v6 as i64;
        *((v29 + 8) as &u64) = v2;
        *((v29 + 16) as &u64) = v3;
        v10 = struct24 {
            field_0: 1
            field_8: v29
            field_16: 1
        };
        v6 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v10);
        v10 = core::iter::traits::iterator::Iterator::chain(&v6, &v19);
        v6 = core::iter::traits::iterator::Iterator::chain(&v10, v4);
        return struct24 {
            field_0: 9223372036854775813
            field_8: alloc::boxed::Box<T>::new(&v6) as u64
            field_16: &g_4f6cf0
        };
    }
}
