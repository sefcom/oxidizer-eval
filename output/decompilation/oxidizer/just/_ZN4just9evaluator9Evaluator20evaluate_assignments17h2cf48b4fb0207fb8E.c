fn just::evaluator::Evaluator::evaluate_assignments(a0: i64, a1: u64, a2: void*, a3: i64, a4: i64, a5: i128, a6: i192) -> int {
    let v0: void*;  // [bp-0x1b0]
    let v1: void*;  // [bp-0x1a8]
    let v2: struct16;  // [bp-0x1a8]
    let v3: u64;  // [bp-0x1a0]
    let v4: void*;  // [bp-0x198]
    let v5: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // [bp-0x190]
    let v6: struct72;  // [bp-0x190], Other Possible Types: u64
    let v7: void*;  // [bp-0x188]
    let v8: u64;  // [bp-0x180]
    let v9: u64;  // [bp-0x178]
    let v10: u64;  // [bp-0x170]
    let v11: void*;  // [bp-0x168]
    let v12: u64;  // [bp-0x160]
    let v13: u64;  // [bp-0x158]
    let v14: u64;  // [bp-0x150]
    let v15: u64;  // [bp-0x148]
    let v16: void*;  // [bp-0x140]
    let v17: struct24;  // [bp-0x138], Other Possible Types: u128
    let v18: struct24;  // [bp-0x130]
    let v19: u64;  // [bp-0x128]
    let v20: iNone;  // [bp-0x120]
    let v21: u128;  // [bp-0x118]
    let v22: struct24;  // [bp-0x110]
    let v23: u64;  // [bp-0x108]
    let v24: struct24;  // [bp-0x100]
    let v25: u64;  // [bp-0xf8]
    let v26: void*;  // [bp-0xd8]
    let v27: void*;  // [bp-0xc8]
    let v28: &mut [u8];  // [bp-0xc0]
    let v29: struct103;  // [bp-0xb8]
    let v30: alloc::string::String;  // [bp-0xb8]
    let v31: Result<struct105, struct17>;  // [bp-0xb8]
    let v32: struct16;  // [bp-0xb1]
    let v33: void*;  // [bp-0xa1]
    let v34: struct24;  // [bp-0xa0]
    let v35: struct24;  // [bp-0xa0]
    let v36: struct64;  // [bp-0x90]
    let v37: u128;  // [bp-0x90]
    let v38: iNone;  // [bp-0x80]
    let v39: iNone;  // [bp-0x80]
    let v40: iNone;  // [bp-0x70]
    let v41: iNone;  // [bp-0x70]
    let v42: u64;  // [bp-0x60]
    let v43: u64;  // [bp-0x60]
    let v44: u64;  // rax
    let v47: u64;  // r13
    let v48: u64;  // rbp
    let v49: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // r14
    let v50: i64;  // rax
    let v51: u8;  // r12b
    let v52: u128;  // xmm0
    let v53: u128;  // xmm1
    let v54: u128;  // xmm2
    let v55: u64;  // rdx
    let v56: struct24;  // rax
    let v57: void*;  // rcx
    let v58: iNone;  // xmm0
    let v59: u64;  // r13
    let v61: struct40;  // al
    let v62: u32;  // ecx
    let v63: iNone;  // xmm0
    let v64: iNone;  // xmm0
    let v66: iNone;  // [bp-0xb4]
    let v69: alloc::string::String;  // [bp-0x48]

    v26 = 0;
    v27 = 0;
    v28 = a5;
    v1 = 0;
    v3 = 8;
    v4 = 0;
    v44 = *(a4 as &i64);
    v6 = v44;
    v7 = 0;
    v8 = v44;
    v9 = *((a4 + 8) as &i64);
    v10 = v6;
    v11 = 0;
    v12 = v44;
    v13 = *((a4 + 8) as &i64);
    v14 = *((a4 + 16) as &i64);
    v25 = a3 + 640;
    v47 = *((a3 + 640) as &i64);
    v48 = *((a3 + 648) as &i64);
    loop {
        v21 = alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>> {
            range: alloc::collections::btree::navigate::LazyLeafRange<alloc::collections::btree::node::marker::Immut, std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>> {
                front: <UNKNOWN>
                back: <UNKNOWN>
            }
            length: <UNKNOWN>
        };
        v49 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v21) as u64;
        if let None = v49 {
            break;
        }
        v50 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(v47, v48, *((v49 + 8) as &i64), *((v49 + 16) as &i64));
        if v50 {
            v51 = *((v50 + 205) as &i8);
            v23 = *((v50 + 192) as &i64);
            v52 = *((v50 + 128) as &i128);
            v53 = *((v50 + 144) as &i128);
            v54 = *((v50 + 160) as &i128);
            v21 = *((v50 + 176) as &i128);
            v19 = v54;
            v17 = v53;
            v15 = v52;
            v69 = <alloc::string::String as core::clone::Clone>::clone(v55);
            v29 = struct103 {
                field_0: *(&v69.vec.buf.inner.cap as &i128)
                field_16: v69.vec.len
                field_24: v15
                field_40: v17
                field_56: v19
                field_72: v21
                field_88: v23
                field_96: 0
                field_100: 0
                field_101: v51
                field_102: *((v50 + 206) as &i8)
            };
            just::scope::Scope::bind(&v26, &v29);
            v42 = v43;
            v40 = v41;
            v38 = v39;
            v36 = v37;
            v34 = v35;
        } else {
            v30 = <alloc::string::String as core::clone::Clone>::clone(v49);
            v2 = alloc::vec::Vec<T,A>::push(&v30, "src/evaluator.rs");
        }
    }
    if v4 {
        v33 = v4;
        *(&v32.field_0 as &i128) = *(&v2.field_0 as &i128);
        *(v0 as &i8) = 51;
        v56 = v32.field_8;
        v57 = v33;
        *(&v0[1] as &u128) = v29.field_0;
        *(&v0[16] as &struct24) = v56;
        *(&v0[24] as &void*) = v57;
        return;
    }
    v58 = *(&v26 as &i128);
    *(&v22.field_0 as &i128) = *(&v27 as &i128);
    v20 = v58;
    v19 = v25;
    v15 = a1;
    v16 = a2;
    v17 = a3;
    v18 = a6;
    v24 = 0;
    v59 = v47;
    if v59 {
        v59 = *((v17 + 656) as &i64);
    }
    v6 = struct72 {
        field_0: (v47) as u8 as u64
        field_8: 0
        field_16: v47
        field_24: v48
        field_32: v5.range.front as i64
        field_40: 0
        field_48: v47
        field_56: v48
        field_64: v59
    };
    while (<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v6) as u64) {
        v31 = just::evaluator::Evaluator::evaluate_assignment(&v15, a2);
        v61 = v31 as i8;
        if v61 != 56 {
            v62 = *((&v31 as &char + 1) as &i32);
            *(&v0[4] as &i32) = v66 as i32;
            *(&v0[1] as &u32) = v62;
            v63 = *((&v31 as &char + 8) as &i128);
            *(&v0[24] as &struct24) = v34;
            *(&v0[40] as &struct64) = v36;
            v0[56] = v38;
            v0[72] = v40;
            *(&v0[88] as &i128) = *(&v42 as &i128);
            *(v0 as &struct40) = v61;
            v0[8] = v63;
            return;
        }
    }
    v64 = v20 as i128;
    *(&v0[24] as &i128) = *(&v22.field_0 as &i128);
    v0[8] = v64;
    *(v0 as &i8) = 56;
    return;
}
