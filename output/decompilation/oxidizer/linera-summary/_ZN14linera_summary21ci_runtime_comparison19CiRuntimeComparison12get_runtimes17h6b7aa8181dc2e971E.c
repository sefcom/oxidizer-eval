fn linera_summary::ci_runtime_comparison::CiRuntimeComparison::get_runtimes(a0: i64, a1: &u64) -> int {
    let v0: u8;  // [bp-0x551]
    let v1: void*;  // [bp-0x550]
    let v2: void*;  // [bp-0x548]
    let v3: void*;  // [bp-0x538]
    let v4: struct12;  // [bp-0x530]
    let v6: struct32;  // [bp-0x518]
    let v7: u192;  // [bp-0x4f8]
    let v8: u192;  // [bp-0x390]
    let v9: struct12;  // [bp-0x2d4]
    let v10: struct12;  // [bp-0x2c4]
    let v11: u32;  // [bp-0x2c4]
    let v12: u8;  // [bp-0x2b8]
    let v13: u56;  // [bp-0x2b7]
    let v14: alloc::string::String;  // [bp-0x2b0], Other Possible Types: struct56
    let v15: Option<struct584>;  // [bp-0x278]
    let v16: Option<struct584>;  // [bp-0x278]
    let v18: u64;  // cc_ndep
    let v19: u64;  // rax
    let v20: u64;  // rax
    let v21: u32;  // edx
    let v22: u64;  // rdx
    let v23: i64;  // rax
    let v24: u64;  // rsi
    let v25: u64;  // rdi

    v2 = 0;
    v3 = 0;
    v6 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v16 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v6);
    if !((((0 ^ v16) & (0 ^ -(v16))) >> 63) as char) {
        do {
            memcpy(&v7, &v16, 584);
            if v12 != 3 {
                v23 = <(A,B) as anyhow::ensure::BothDebug>::__dispatch_ensure(&v12);
                *(&v1[8] as &unsigned long) = v23;
                *(v1 as &i64) = 1;
                return;
            }
            if v13 as i8 == 7 {
                v23 = anyhow::error::<impl anyhow::Error>::msg(v25, v24);
                *(&v1[8] as &unsigned long) = v23;
                *(v1 as &i64) = 1;
                return;
            }
            v0 = v13;
            if v0 != 5 {
                v23 = <(A,B) as anyhow::ensure::BothDebug>::__dispatch_ensure(&v0);
                *(&v1[8] as &unsigned long) = v23;
                *(v1 as &i64) = 1;
                return;
            }
            if !v11 {
                v23 = anyhow::error::<impl anyhow::Error>::msg(v25, v24);
                *(&v1[8] as &unsigned long) = v23;
                *(v1 as &i64) = 1;
                return;
            }
            v14 = alloc::collections::btree::map::BTreeMap<K,V,A>::entry(&v2, &v16);
            v19 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(&v14);
            v14 = <alloc::string::String as core::clone::Clone>::clone(&v8);
            core::option::unwrap(v11);
            v4 = v10;
            v4 = v9;
            v20 = chrono::datetime::DateTime<Tz>::signed_duration_since(&v4, &v4);
            v22 = v21 > 0 & v20 < 0;
            if _ccall(8, 4, v22, v20, v18) as char {
                *(&v1[8] as &u64) = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from();
                *(v1 as &i64) = 1;
                return;
            }
            alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v19, &v14, v22 + v20);
            v15 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v6);
        } while (v15 != 0x8000000000000000);
    }
    *(&v1[24] as &i64) = 0;
    *(&v1[8] as &i128) = *(&v2 as &i128);
    *(v1 as &i64) = 0;
    return;
}
