fn just::justfile::Justfile::public_groups(a0: u64, a1: i64, a2: i256) -> void {
    let v0: struct32;  // [bp-0x154]
    let v1: void*;  // [bp-0x150]
    let v2: struct16;  // [bp-0x150]
    let v3: struct16;  // [bp-0x150]
    let v4: u64;  // [bp-0x148]
    let v5: void*;  // [bp-0x140]
    let v6: alloc::string::String;  // [bp-0x138], Other Possible Types: struct48
    let v7: alloc::string::String;  // [bp-0x138]
    let v8: void*;  // [bp-0x130]
    let v9: struct24;  // [bp-0x128]
    let v10: struct24;  // [bp-0x128]
    let v11: struct24;  // [bp-0x120]
    let v12: core::fmt::Arguments;  // [bp-0x118]
    let v13: void*;  // [bp-0x110]
    let v14: struct24;  // [bp-0x108]
    let v15: struct24;  // [bp-0x100]
    let v16: struct24;  // [bp-0xf8]
    let v17: &mut [u8];  // [bp-0xd0]
    let v18: struct24;  // [bp-0xc8]
    let v19: u64;  // [bp-0xc0]
    let v20: u64;  // [bp-0xb8]
    let v21: void*;  // [bp-0xb0]
    let v22: struct24;  // [bp-0xa8]
    let v23: u64;  // [bp-0xa0]
    let v24: struct24;  // [bp-0x98]
    let v25: alloc::string::String;  // [bp-0x90], Other Possible Types: core::option::Option<(std::ffi::os_str::OsString, std::ffi::os_str::OsString)>, struct48
    let v26: struct40;  // [bp-0x88]
    let v27: struct40;  // [bp-0x88]
    let v28: core::fmt::Arguments;  // [bp-0x80]
    let v29: core::fmt::Arguments;  // [bp-0x80]
    let v31: struct16;  // [bp-0x60]
    let v32: iNone;  // [bp-0x48]
    let v34: struct24;  // rax
    let v35: struct24;  // rax
    let v37: i64;  // rdx
    let v38: struct24;  // rax
    let v39: u64;  // rcx
    let v40: struct24;  // rax
    let v41: struct24;  // rax
    let v43: u64;  // rbx
    let v44: u64;  // r15
    let v45: u64;  // r15
    let v46: struct24;  // r15
    let v47: iNone;  // xmm0
    let v48: iNone;  // xmm1
    let v49: Result<struct16, struct64>;  // [bp-0xd8], Other Possible Types: alloc::collections::btree::map::IntoIter<std::ffi::os_str::OsString, std::ffi::os_str::OsString, alloc::alloc::Global>, struct32, u64

    v0 = a2;
    v1 = 0;
    v4 = 8;
    v5 = 0;
    v34 = *((a1 + 696) as &i64);
    v35 = v34;
    if v35 {
        v35 = *((a1 + 712) as &i64);
    }
    v6 = v34;
    v8 = 0;
    v9 = v34;
    v11 = *((a1 + 704) as &i64);
    v12 = v6;
    v13 = 0;
    v14 = v34;
    v15 = *((a1 + 704) as &i64);
    v16 = v35;
    while (<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v6) as u64 && v37) {
        if !*((*(v37 as &i64) + 268) as &i8) && !just::attribute_set::AttributeSet::contains(*(v37 as &i64) + 232, 15) {
            v31 = just::recipe::Recipe<D>::groups(*(v37 as &i64) + 16);
            v49 = <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v31);
            loop {
                v49 = alloc::collections::btree::map::IntoIter<std::ffi::os_str::OsString, std::ffi::os_str::OsString, alloc::alloc::Global> {
                    range: alloc::collections::btree::navigate::LazyLeafRange<alloc::collections::btree::node::marker::Dying, std::ffi::os_str::OsString, std::ffi::os_str::OsString> {
                        front: <UNKNOWN>
                        back: <UNKNOWN>
                    }
                    length: <UNKNOWN>
                    alloc: alloc::alloc::Global { }
                };
                v25 = <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(&v49);
                v38 = v25 as i64;
                v26 = v27;
                v28 = v29;
                if (((0 ^ v38) & (0 ^ -(v38))) >> 63) as char {
                    break;
                }
                v32 = v26.field_0;
                v39 = *((*(v37 as &i64) + 216) as &i64);
                v25 = struct48 {
                    field_0: *((*(v37 as &i64) + 72) as &i128)
                    field_8: <UNKNOWN>
                    field_16: v39
                    field_24: v38
                    field_40: <UNKNOWN>
                };
                v2 = alloc::vec::Vec<T,A>::push(&v25, "src/justfile.rs");
            }
        }
    }
    v40 = *((a1 + 672) as &i64);
    v41 = v40;
    if v41 {
        v41 = *((a1 + 688) as &i64);
    }
    v49 = v40;
    v17 = 0;
    v18 = v40;
    v19 = *((a1 + 680) as &i64);
    v20 = v49;
    v21 = 0;
    v22 = v40;
    v23 = *((a1 + 680) as &i64);
    v24 = v41;
    while (<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v49) as u64 && v37) {
        if !*((v37 + 16) as &i64) {
            continue;
        }
        do {
            v45 = v44;
            if *((v37 + 560) as &i8) == 37 {
                core::option::unwrap_failed(); /* do not return */
            }
            v25 = <alloc::string::String as core::clone::Clone>::clone(v43);
            v6 = struct48 {
                field_0: ""
                field_16: *((v37 + 552) as &i64)
                field_24: *(&v25.vec.buf.inner.cap as &i128)
                field_40: v28
            };
            v3 = alloc::vec::Vec<T,A>::push(&v6, "src/justfile.rs");
            v43 += 24;
            v46 = v45 - 24;
            v44 = v46;
            v6 = v7;
            v9 = v10;
        } while (v45 != 24);
    }
    if (v0.field_0 as i8 & 1) {
        alloc::slice::stable_sort(8, 0);
    } else {
        alloc::slice::<impl [T]>::sort_by(8, None);
    }
    <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(&v49);
    v47 = *(&v49 as &i128);
    v48 = *(&v18.field_0 as &i128);
    v6 = struct48 {
        field_0: v47
        field_16: v48
        field_32: *(&v20 as &i128)
    };
    alloc::vec::Vec<T,A>::retain(&v1, &v6);
    v49 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v1);
    core::iter::traits::iterator::Iterator::collect(a0, &v49);
    return;
}
