fn just::subcommand::Subcommand::show(a0: u64, a1: u64, a2: i64, a3: u64) -> long long {
    let v0: i64;  // [bp-0xb8]
    let v1: struct24;  // [bp-0xb0], Other Possible Types: char
    let v2: struct32;  // [bp-0xa9]
    let v3: struct80;  // [bp-0x99]
    let v4: alloc::string::String;  // [bp-0x80]
    let v5: struct80;  // [bp-0x70]
    let v6: core::fmt::rt::Argument;  // [bp-0x60], Other Possible Types: struct104, struct32
    let v7: core::fmt::rt::Argument;  // [bp-0x58], Other Possible Types: u64
    let v8: struct18;  // [sp-0x50]
    let v11: core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>;  // r15
    let v12: struct72;  // r12
    let v13: struct80;  // rbp
    let v14: u64;  // rdx
    let v15: i64;  // 4096
    let v16: struct24;  // r14
    let v17: core::fmt::rt::Argument;  // rsi
    let v18: core::option::Option<&str>;  // 4096
    let v19: core::fmt::rt::Argument;  // rbp
    let v20: struct24;  // rax
    let v21: core::fmt::rt::Argument;  // rbp
    let v23: i64;  // rax
    let v24: struct24;  // rcx
    let v25: struct24;  // r12
    let v26: struct16;  // r14
    let v27: struct64;  // r15
    let v28: i64;  // rax
    let v29: struct24;  // rax
    let v30: struct140;  // rax
    let v31: struct80;  // xmm1
    let v32: struct32;  // xmm1
    let v33: core::fmt::Arguments;  // rax
    let v34: u64;  // rax

    v11 = *((a3 + 8) as &i64);
    v12 = *((a3 + 16) as &i64);
    v13 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index((v12 - 1) as u32, v11, v12 as u32, "src/subcommand.rs");
    if !!v13 && !!v14 {
        v16 = v14 * 24 + v13;
        v17 = v13 + 24;
        v18 = a2;
        do {
            v19 = v17;
            v20 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(*((v18 + 672) as &i64), *((v18 + 680) as &i64), *((v13 + 8) as &i64), *((v13 + 16) as &i64));
            if !v20 {
                v1 = <T as alloc::string::SpecToString>::spec_to_string(a3);
                v34 = v1.field_0;
                *((v0 + 16) as &i128) = *(&v1.field_8 as &i128);
                *(v0 as &i8) = 53;
                *((v0 + 8) as &u64) = v34;
                return v34;
            }
            if v19 != v16 {
                v21 = v19 + 24;
                v15 = v20;
                if v19 == v16 {
                    break;
                }
                continue;
            } else {
                v21 = v19;
                v15 = v20;
                if v21 == v16 {
                    break;
                }
                continue;
            }
            v17 = v21;
            v15 = v20;
            v13 = v19;
            v18 = v20;
        } while (v13);
    }
    v23 = a2;
    if v12 {
        v24 = v12 * 3;
        v25 = v11 + v24 * 8 - 24;
        if v25 {
            v26 = v11 + v24 * 8;
            v27 = v23;
            v28 = just::justfile::Justfile::get_alias(*((v23 + 616) as &i64), *((v23 + 624) as &i64), *((v26 - 16) as &i64), *((v26 - 8) as &i64));
            if v28 {
                v29 = just::justfile::Justfile::get_recipe(v27, just::token::Token::lexeme(160 + *((v28 + 24) as &i64)), a2);
                core::option::unwrap(v29);
                println!("{}", &v9);
                v8 = just::color::Color::stdout(a1 + 388);
                v6 = v29;
                v7 = &g_830370;
                println!("{}", &v6);
            } else {
                v30 = just::justfile::Justfile::get_recipe(v27, *((v26 - 16) as &i64), *((v26 - 8) as &i64));
                if !v30 {
                    v4 = <alloc::string::String as core::clone::Clone>::clone(v25);
                    v6 = just::justfile::Justfile::suggest_recipe(v27, *((v26 - 16) as &i64), *((v26 - 8) as &i64));
                    *((v0 + 56) as &struct80) = v5;
                    *((v0 + 40) as &i128) = *(&v4.vec.buf.inner.cap as &i128);
                    v31 = *((&v6.field_8 as &char + 8) as &i128);
                    *(&v2.field_0 as &i128) = *(&v6.field_0 as &i128);
                    v3 = v31;
                    *(v0 as &i8) = 52;
                    v32 = *((&v2.field_8 as &char + 1) as &i128);
                    *((v0 + 1) as &i128) = *(&v1 as &i128);
                    *((v0 + 17) as &struct32) = v32;
                    v33 = v3.field_8 as i64;
                    *((v0 + 32) as &core::fmt::Arguments) = v33;
                    return v33;
                }
                v8 = just::color::Color::stdout(a1 + 388);
                v6 = v30;
                v7 = &g_830370;
                println!("{}", &v6);
            }
            *(v0 as &i8) = 56;
            return a0;
        }
    }
    core::option::unwrap_failed(); /* do not return */
}
