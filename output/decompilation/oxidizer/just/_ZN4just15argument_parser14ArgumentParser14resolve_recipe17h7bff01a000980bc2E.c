fn just::argument_parser::ArgumentParser::resolve_recipe(a1: i64, a2: i64) -> Option<struct1> {
    let a0: i64;  // rdi
    let v0: void*;  // [bp-0x118]
    let v1: void*;  // [bp-0x110], Other Possible Types: struct16
    let v2: u64;  // [bp-0x108]
    let v3: void*;  // [bp-0x100]
    let v4: struct24;  // [bp-0xf8]
    let v5: struct32;  // [bp-0xf8]
    let v6: struct25;  // [bp-0xd0], Other Possible Types: struct24
    let v7: struct24;  // [bp-0xd0]
    let v8: struct24;  // [bp-0xd0]
    let v9: iNone;  // [bp-0xc9]
    let v10: iNone;  // [bp-0xb9]
    let v11: u128;  // [bp-0xaf]
    let v12: u128;  // [bp-0x9f]
    let v13: u128;  // [bp-0x8f]
    let v14: i8;  // [bp-0x7f]
    let v15: u64;  // [bp-0x70]
    let v16: iNone;  // [bp-0x68]
    let v17: u64;  // [bp-0x58]
    let v18: u64;  // [bp-0x48]
    let v19: u64;  // [bp-0x40]
    let v20: void*;  // [bp-0x38]
    let v22: u64;  // rcx
    let v23: i64;  // r14
    let v24: u64;  // rax
    let v25: i64;  // rdx
    let v26: void*;  // r12
    let v27: i64;  // rax
    let v28: i64;  // rdx
    let v29: iNone;  // xmm1
    let v30: iNone;  // xmm1
    let v31: void*;  // rax
    let v32: u64;  // rax
    let v33: iNone;  // xmm0
    let v34: struct88;  // xmm1

    v1 = 0;
    v2 = 8;
    v3 = 0;
    v18 = a2;
    v19 = v22 * 16 + a2;
    v20 = 0;
    loop {
        v23 = a1;
        v24 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v18);
        if !v25 {
            break;
        }
        v26 = <&T as core::convert::AsRef<U>>::as_ref(*(v25 as &i64), *((v25 + 8) as &i64));
        v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v26, a2);
        v4 = v7;
        v1 = alloc::vec::Vec<T,A>::push(&v4, "src/argument_parser.rs");
        a1 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(*((v23 + 672) as &i64), *((v23 + 680) as &i64), v26, v25);
        if !a1 {
            v27 = just::justfile::Justfile::get_recipe(v23, v26, v25);
            if !v27 {
                v8 = alloc::str::join_generic_copy(0x8, v3, " ");
                v17 = v8.field_16;
                v16 = *(&v8.field_0 as &i128);
                v5 = just::justfile::Justfile::suggest_recipe(v23, v26, v25);
                *(&v0[56] as &u64) = v17;
                v0[40] = v16;
                v29 = *((&v5.field_8 as &char + 8) as &i128);
                *(&v9 as &i128) = *(&v5.field_0 as &i128);
                v10 = v29;
                *(v0 as &i8) = 52;
                v30 = (&v9)[9] as i128;
                *(&v0[1] as &i128) = *(&v8.field_0 as &i128);
                v0[17] = v30;
                *(&v0[32] as &i64) = (&v10)[8] as i64;
            }
            v28 = a0;
            *(&v0[24] as &void*) = v3;
            *(&v0[8] as &i128) = *(&v1.field_0 as &i128);
            *(&v0[32] as &unsigned long) = v27;
            *(&v0[40] as &u64) = v24 + 1;
            *(v28 as &i8) = 56;
            return;
        }
    }
    if !*((v23 + 664) as &i64) {
        return Some((!*((v23 + 712) as &i64)) as u8 as u8 | 36);
    }
    v6 = just::recipe::Recipe<D>::check_can_be_default_recipe(*((v23 + 664) as &i64) + 16);
    if &v6 != "8" {
        *(&v0[96] as &u64) = v15;
        *(&v0[81] as &i128) = *(&v14 as &i128);
        *(&v0[65] as &u128) = v13;
        v33 = *(&(&v6.field_0)[1] as &i128);
        v34 = *(&v7.field_0 as &i128);
        *(&v0[49] as &u128) = v12;
        *(&v0[33] as &u128) = v11;
        *(&v0[17] as &struct88) = v34;
        v0[1] = v33;
        *(v0 as &u8) = v6.field_0;
    }
    v31 = just::token::Token::lexeme(160 + *((v23 + 664) as &i64));
    v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v31, a2);
    v4 = v7;
    v1 = alloc::vec::Vec<T,A>::push(&v4, "src/argument_parser.rs");
    v32 = *((v23 + 664) as &i64);
    v28 = a0;
    *(&v0[24] as &void*) = v3;
    *(&v0[8] as &i128) = *(&v1.field_0 as &i128);
    *(&v0[32] as &u64) = v32 + 16;
    *(&v0[40] as &u64) = v22;
    *(v28 as &i8) = 56;
    return;
}
