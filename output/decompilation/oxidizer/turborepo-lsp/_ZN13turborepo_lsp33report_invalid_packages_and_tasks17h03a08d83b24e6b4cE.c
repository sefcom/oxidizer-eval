fn turborepo_lsp::report_invalid_packages_and_tasks(a0: &u64, a1: &u64, a2: void*, a3: u64, a4: i64) -> int {
    let v0: u64;  // [bp-0x310]
    let v1: u64;  // [bp-0x308]
    let v2: core::option::Option<(&str, &str)>;  // [bp-0x300], Other Possible Types: void*, struct24, u64
    let v3: u64;  // [bp-0x2f8]
    let v4: void*;  // [bp-0x2f0], Other Possible Types: u64
    let v5: u64;  // [bp-0x2e8]
    let v6: iNone;  // [bp-0x2d8]
    let v7: iNone;  // [bp-0x2c8]
    let v8: iNone;  // [bp-0x2b8]
    let v9: iNone;  // [bp-0x2a8]
    let v10: u64;  // [bp-0x298]
    let v11: u64;  // [bp-0x290]
    let v12: u64;  // [bp-0x280]
    let v13: u64;  // [bp-0x278]
    let v14: u64;  // [bp-0x268]
    let v15: u64;  // [bp-0x260]
    let v16: u64;  // [bp-0x250]
    let v17: u64;  // [bp-0x248]
    let v18: u64;  // [bp-0x230]
    let v19: iNone;  // [bp-0x220]
    let v20: iNone;  // [bp-0x210]
    let v21: iNone;  // [bp-0x200]
    let v22: u64;  // [bp-0x1f0]
    let v23: u32;  // [bp-0x1e8]
    let v24: u128;  // [bp-0x1e0]
    let v25: alloc::string::String;  // [bp-0x1d0]
    let v26: u64;  // [bp-0x1c0]
    let v27: i64;  // [bp-0x1b8], Other Possible Types: u128
    let v28: u128;  // [bp-0x1b8]
    let v29: u64;  // [bp-0x1a8]
    let v30: iNone;  // [bp-0x1a0]
    let v31: iNone;  // [bp-0x190]
    let v32: iNone;  // [bp-0x180]
    let v33: iNone;  // [bp-0x170]
    let v34: iNone;  // [bp-0x160]
    let v35: u64;  // [bp-0x150]
    let v36: iNone;  // [bp-0x148]
    let v37: u64;  // [bp-0x138]
    let v38: iNone;  // [bp-0x130]
    let v39: u64;  // [bp-0x120]
    let v40: iNone;  // [bp-0x118]
    let v41: u64;  // [bp-0x108]
    let v42: iNone;  // [bp-0x100]
    let v43: u64;  // [bp-0xf0]
    let v44: iNone;  // [bp-0xe8]
    let v45: iNone;  // [bp-0xd8]
    let v46: iNone;  // [bp-0xc8]
    let v47: iNone;  // [bp-0xb8]
    let v48: u64;  // [bp-0xa8]
    let v49: u64;  // [bp-0xa0]
    let v50: iNone;  // [bp-0x98]
    let v51: u64;  // [bp-0x80]
    let v52: u64;  // [bp-0x78]
    let v53: struct16;  // [bp-0x70]
    let v54: u64;  // [bp-0x58]
    let v55: &u64;  // [bp-0x50]
    let v56: i64;  // [bp-0x48]
    let v57: u64;  // [bp-0x40]
    let v58: u64;  // [bp-0x38]
    let v60: u64;  // r12
    let v61: u64;  // r13
    let v62: u64;  // r14
    let v63: u64;  // r13
    let v64: u64;  // r12
    let v65: i64;  // rbx
    let v66: i64;  // rax
    let v67: u64;  // r12

    v55 = a1;
    v60 = *((a4 + 8) as &i64);
    v61 = *((a4 + 16) as &i64);
    v2 = core::str::<impl str>::split_once(*((a4 + 8) as &i64), *((a4 + 16) as &i64), a3);
    v62 = v2 as i64;
    v54 = v3;
    v63 = v61;
    v64 = v60;
    if v62 {
        v63 = v5;
        v64 = v4;
    }
    v51 = v64;
    v52 = v63;
    v53 = turborepo_lsp::convert_ranges(a2, *((a4 + 24) as &i64) + 1, *((a4 + 32) as &i64) - 1);
    v65 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a0, v64, v63);
    v66 = v65 + 24;
    v56 = v66;
    v57 = v62;
    v67 = v54;
    v58 = v67;
    if v62 {
        if !hashbrown::map::HashMap<K,V,S,A>::get_inner(a1, &v57) {
            v0 = v62;
            v1 = v67;
            v25 = format!("The package `{}` does not exist in {}", &v0, &v55);
            v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("turbo:no-such-package");
            v43 = v4;
            v42 = *(&v2.field_0 as &i128);
            v23 = 0;
            v24 = 0;
            v17 = 9223372036854775809;
            v5 = 0x8000000000000000;
            v11 = 0x8000000000000000;
            v2 = 0;
            v3 = 1;
            v4 = 0;
            v13 = 0x8000000000000000;
            v15 = 0x8000000000000000;
            v18 = 9223372036854775813;
            v50 = v53;
            v49 = 4294967297;
            v35 = v10;
            v34 = v9;
            v33 = v8;
            v32 = v7;
            v31 = v6;
            v30 = *(&v5 as &i128);
            v37 = v12;
            v36 = *(&v11 as &i128);
            v29 = v26;
            v27 = *(&v25.vec.buf.inner.cap as &i128);
            v39 = v14;
            v38 = *(&v13 as &i128);
            v41 = v16;
            v40 = *(&v15 as &i128);
            v48 = v22;
            v47 = v21;
            v46 = v20;
            v45 = v19;
            v44 = *(&v18 as &i128);
            alloc::vec::Vec<T,A>::push(a3, &v27, "crates/turborepo-lsp/src/lib.rs");
        } else if v65 {
            v2 = *((v65 + 32) as &i64);
            v3 = *((v65 + 32) as &i64) + *((v65 + 40) as &i64) * 24;
            v27 = &v57;
            if core::result::Result<T,E>::is_err(core::iter::traits::iterator::Iterator::try_fold(&v2, &v27)) {
                return;
            }
            v0 = v62;
            v1 = v67;
            v25 = format!("The task `{}` does not exist in the package `{}`.", &v51, &v0);
            v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("turbo:no-such-task-in-package");
            v43 = v4;
            v42 = *(&v2.field_0 as &i128);
            v23 = 0;
            v24 = 0;
            v17 = 9223372036854775809;
            v5 = 0x8000000000000000;
            v11 = 0x8000000000000000;
            v2 = 0;
            v3 = 1;
            v4 = 0;
            v13 = 0x8000000000000000;
            v15 = 0x8000000000000000;
            v18 = 9223372036854775813;
            v50 = v53;
            v49 = 4294967297;
            v35 = v10;
            v34 = v9;
            v33 = v8;
            v32 = v7;
            v31 = v6;
            v30 = *(&v5 as &i128);
            v37 = v12;
            v36 = *(&v11 as &i128);
            v29 = v26;
            v28 = *(&v25.vec.buf.inner.cap as &i128);
            v39 = v14;
            v38 = *(&v13 as &i128);
            v41 = v16;
            v40 = *(&v15 as &i128);
            v48 = v22;
            v47 = v21;
            v46 = v20;
            v45 = v19;
            v44 = *(&v18 as &i128);
            alloc::vec::Vec<T,A>::push(a3, &v28, "crates/turborepo-lsp/src/lib.rs");
        } else {
            v0 = v62;
            v1 = v67;
            v25 = format!("The task `{}` does not exist in the package `{}`.", &v51, &v0);
            v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("turbo:no-such-task");
            v43 = v4;
            v42 = *(&v2.field_0 as &i128);
            v23 = 0;
            v24 = 0;
            v17 = 9223372036854775809;
            v5 = 0x8000000000000000;
            v11 = 0x8000000000000000;
            v2 = 0;
            v3 = 1;
            v4 = 0;
            v13 = 0x8000000000000000;
            v15 = 0x8000000000000000;
            v18 = 9223372036854775813;
            v50 = v53;
            v49 = 4294967297;
            v35 = v10;
            v34 = v9;
            v33 = v8;
            v32 = v7;
            v31 = v6;
            v30 = *(&v5 as &i128);
            v37 = v12;
            v36 = *(&v11 as &i128);
            v29 = v26;
            v27 = *(&v25.vec.buf.inner.cap as &i128);
            v39 = v14;
            v38 = *(&v13 as &i128);
            v41 = v16;
            v40 = *(&v15 as &i128);
            v48 = v22;
            v47 = v21;
            v46 = v20;
            v45 = v19;
            v44 = *(&v18 as &i128);
            alloc::vec::Vec<T,A>::push(a3, &v27, "crates/turborepo-lsp/src/lib.rs");
        }
    } else {
        if !v65 {
            v25 = format!("The task `{}` does not exist.", &v51);
            v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("turbo:no-such-task");
            v43 = v4;
            v42 = *(&v2.field_0 as &i128);
            v23 = 0;
            v24 = 0;
            v17 = 9223372036854775809;
            v5 = 0x8000000000000000;
            v11 = 0x8000000000000000;
            v2 = 0;
            v3 = 1;
            v4 = 0;
            v13 = 0x8000000000000000;
            v15 = 0x8000000000000000;
            v18 = 9223372036854775813;
            v50 = v53;
            v49 = 4294967297;
            v35 = v10;
            v34 = v9;
            v33 = v8;
            v32 = v7;
            v31 = v6;
            v30 = *(&v5 as &i128);
            v37 = v12;
            v36 = *(&v11 as &i128);
            v29 = v26;
            v27 = *(&v25.vec.buf.inner.cap as &i128);
            v39 = v14;
            v38 = *(&v13 as &i128);
            v41 = v16;
            v40 = *(&v15 as &i128);
            v48 = v22;
            v47 = v21;
            v46 = v20;
            v45 = v19;
            v44 = *(&v18 as &i128);
            alloc::vec::Vec<T,A>::push(a3, &v27, "crates/turborepo-lsp/src/lib.rs");
        } else {
            return;
        }
    }
    return;
}
