fn starship::print::compute_modules(a0: i64, a1: i64) {
    let v0: u128;  // [bp-0x198]
    let v1: u64;  // [bp-0x190]
    let v2: struct4;  // [bp-0x188]
    let v3: struct80;  // [bp-0x180], Other Possible Types: struct8, u64
    let v5: Option<struct24>;  // [bp-0x178]
    let v6: void*;  // [bp-0x170]
    let v7: i64;  // [bp-0x168]
    let v8: core::slice::iter::Iter<u8>;  // [bp-0x158]
    let v9: struct16;  // [bp-0x150]
    let v10: struct72;  // [bp-0x148], Other Possible Types: struct96
    let v11: u64;  // [bp-0x108]
    let v12: u128;  // [bp-0x100]
    let v13: struct4;  // [bp-0xf0]
    let v14: iNone;  // [bp-0xc8]
    let v15: iNone;  // [bp-0xb8]
    let v16: iNone;  // [bp-0xa8]
    let v17: iNone;  // [bp-0x98]
    let v18: u64;  // [bp-0x88]
    let v19: struct40;  // [bp-0x80]
    let v20: struct40;  // [bp-0x68]
    let v21: u8;  // [bp-0x50]
    let v23: struct32;  // [bp-0x50]
    let v25: struct4;  // rax
    let v26: &mut [u8];  // rcx
    let v27: struct24;  // rdx
    let v28: i64;  // rsi
    let v29: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // rax
    let v30: Option<struct24>;  // [bp-0x160]
    let v31: struct32;  // [bp-0xe8]

    v3 = 0;
    v5 = 8;
    v6 = 0;
    v10 = starship::print::load_formatter_and_modules(a1);
    v18 = v11;
    v17 = v10.field_48;
    v16 = v10.field_32;
    v15 = v10.field_16;
    v14 = v10.field_0;
    v25 = v13;
    v2 = v25;
    v0 = v12;
    v26 = v0 as i64;
    v27 = v1;
    v28 = v26;
    v10 = struct72 {
        field_0: v28
        field_8: 0
        field_16: v26
        field_24: v27
        field_32: v28
        field_40: 0
        field_48: v26
        field_56: v27
        field_64: v25
    };
    loop {
        v29 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v10) as u64;
        if !v29 {
            *((v7 + 16) as &i64) = 0;
            *(v7 as &i128) = *(&v3 as &i128);
            return;
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v29 + 8) as &i64), *((v29 + 16) as &i64), "all") {
            starship::print::all_modules_uniq(&v21, v0 as i64, v1);
            v31 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v21);
            v30 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v31);
            if let Some(_) = v30 {
                do {
                    starship::print::handle_module(&v20, v8, v9, a1, &v0 as u8);
                    v21 as u256 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v20);
                    v3 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(&v21 as u256);
                    v30 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v31);
                } while (v30 as i64 != 0x8000000000000000);
            }
        } else {
            starship::print::handle_module(&v19, *((v29 + 8) as &i64), *((v29 + 16) as &i64), a1, &v0);
            v23 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v19);
            v3 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(&v23);
        }
    }
}
