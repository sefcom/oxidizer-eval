fn just::assignment_resolver::AssignmentResolver::resolve_assignment(a1: i64, a2: i64, a3: i64) -> : struct80 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x1c0]
    let v1: u64;  // [bp-0x1b8]
    let v2: struct24;  // [bp-0x1a8]
    let v3: struct24;  // [bp-0x190], Other Possible Types: struct80
    let v4: struct80;  // [bp-0x190]
    let v5: u64;  // [bp-0x180]
    let v6: iNone;  // [bp-0x160]
    let v7: iNone;  // [bp-0x150]
    let v8: u64;  // [bp-0x140]
    let v9: struct16;  // [bp-0x138]
    let v10: struct8;  // [bp-0x128], Other Possible Types: struct24
    let v11: struct80;  // [bp-0x128]
    let v12: alloc::string::String;  // [bp-0x120]
    let v13: u64;  // [bp-0x110]
    let v14: iNone;  // [bp-0x108]
    let v15: iNone;  // [bp-0xf8]
    let v16: u64;  // [bp-0xc0]
    let v17: struct16;  // [bp-0xb8]
    let v18: struct712;  // [bp-0xb0]
    let v19: struct20;  // [bp-0xa8]
    let v20: u128;  // [bp-0x98]
    let v21: void*;  // [bp-0x88]
    let v22: u8;  // [bp-0x80]
    let v23: struct64;  // [bp-0x78]
    let v24: i8;  // [bp-0x38]
    let v26: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // rax
    let v27: u64;  // rdx
    let v28: struct16;  // rax
    let v29: struct105;  // xmm0
    let v30: iNone;  // xmm1
    let v31: iNone;  // xmm2
    let v32: iNone;  // xmm3
    let v33: u64;  // rax
    let v37: u256;  // [bp-0xe0]

    v9 = struct16 {
        field_0: a2
        field_8: a3
    };
    if alloc::collections::btree::map::BTreeMap<K,V,A>::get(a1[32] as i64, a1[40] as i64, a2, a3) {
        *((a0 + 72) as &i8) = 37;
        return;
    }
    alloc::vec::Vec<T,A>::push(a1, a2, a3, "src/assignment_resolver.rs");
    v26 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(*(a1[24] as i64 as &i64), *((a1[24] as i64 + 8) as &i64), a2, a3);
    if !v26 {
        v12 = format!("attempted to resolve unknown assignment `{}`", &v9);
        v22 = 35;
        v20 = 0;
        v21 = 0;
        v16 = 1;
        v17 = 0;
        v18 = 1;
        v19 = 0;
        v10 = 9223372036854775848;
        just::compile_error::CompileError::new(a0, &v16, &v10);
        return;
    }
    v8 = a1 + 32;
    v2 = just::expression::Expression::variables(v26);
    do {
        do {
            <just::variables::Variables as core::iter::traits::iterator::Iterator>::next(&v23, &v2);
            if &v24 == "%" {
                alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v8, a2, a3);
                if a1[16] as i64 {
                    *(&a1[16] as &i64) = a1[16] as i64 - 1;
                }
                *((a0 + 72) as &i8) = 37;
                return;
            }
            v0 = just::token::Token::lexeme(&v23);
        } while (alloc::collections::btree::map::BTreeMap<K,V,A>::get(a1[32] as i64, a1[40] as i64, v0, v27) || hashbrown::map::HashMap<K,V,S,A>::get_inner(just::constants::constants(), v0, v27));
        if <T as core::slice::cmp::SliceContains>::slice_contains(&v0, a1[8] as i64, a1[16] as i64) {
            alloc::vec::Vec<T,A>::push(a1, v0, v27, "src/assignment_resolver.rs");
            v33 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(*(a1[24] as i64 as &i64), *((a1[24] as i64 + 8) as &i64), v0, v27);
            if !v33 {
                core::option::expect_failed("no entry found for key"); /* do not return */
            }
            v3 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a1[8] as i64, a1[16] as i64);
            v14 = *(&v0 as &i128);
            v13 = v5;
            v10 = struct24 {
                field_0: 9223372036854775832
                field_8: v3.field_0
                field_16: v3.field_8
            };
            v4 = just::token::Token::error(v33 + 128, &v10);
        }
        if !alloc::collections::btree::map::BTreeMap<K,V,A>::get(*(a1[24] as i64 as &i64), *((a1[24] as i64 + 8) as &i64), v0, v27) {
            v10 = struct24 {
                field_0: 9223372036854775860
                field_8: v0
                field_16: v1
            };
            v3 = just::token::Token::error(&v23, &v10);
            v28 = a0;
            *((a0 + 64) as void*) = v7;
            v29 = v3.field_0;
            v30 = v3.field_16;
            v31 = v3.field_32;
LABEL_65754b:
            *((v28 + 48) as void*) = v6;
            *((v28 + 32) as void*) = v31;
            *((v28 + 16) as void*) = v30;
            *(v28 as &struct105) = v29;
        }
        v11 = just::assignment_resolver::AssignmentResolver::resolve_assignment(a1, v0, v27);
    } while (&v37 == "%");
    v28 = a0;
    *((a0 + 64) as &u128) = v11.field_64;
    v29 = v11.field_0;
    v30 = v11.field_16;
    v31 = v14;
    v32 = v15;
    goto LABEL_65754b;
}
