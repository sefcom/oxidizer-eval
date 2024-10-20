fn uu_ptx::read_word_filter_file(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [sp-0x138], Other Possible Types: struct8
    let v1: i32;  // [bp-0x130]
    let v2: i16;  // [sp-0x12c]
    let v3: i64;  // [sp-0x128]
    let v4: i64;  // [sp-0x120]
    let v5: i128;  // [bp-0x118]
    let v6: i64;  // [sp-0xf8], Other Possible Types: Enum
    let v7: i8;  // [bp-0xf0]
    let v8: i128;  // [sp-0xe8]
    let v9: i64;  // [bp-0xd8]
    let v10: i64;  // [bp-0xc0]
    let v11: i64;  // [sp-0xb8]
    let v12: i128;  // [sp-0xb0]
    let v13: i64;  // [sp-0xa0]
    let v14: i32;  // [sp-0x98]
    let v15: i64;  // [sp-0x90], Other Possible Types: Enum
    let v16: i64;  // [sp-0x88]
    let v17: i64;  // [sp-0x80]
    let v18: i64;  // [sp-0x78]
    let v19: i192;  // [sp-0x70], Other Possible Types: struct24
    let v20: i64;  // [sp-0x58]
    let v21: i64;  // [sp-0x50]
    let v22: struct24;  // [bp-0x48]
    let v23: i64;  // [sp-0x40]
    let v25: i64;  // rax
    let v27: i64;  // rax
    let v28: i128;  // xmm0
    let v29: i128;  // xmm0
    let v30: i64;  // rdx
    let v31: i64;  // rcx
    let v32: i64;  // r8
    let v33: i64;  // r9
    let v34: i64;  // rax
    let v35: i64;  // rax

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v10, a1, a2, a3);
    v20 = a2;
    v21 = a3;
    if v10 != 2 {
        v9 = v13;
        v8 = v12;
        v6 = v10;
        v15 = &v20;
        v16 = <&T as core::fmt::Display>::fmt;
        v17 = &v6;
        v18 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v0 = "Mismatch between definition and access of `";
        v1 = 2;
        v5 = 0;
        v3 = &v15;
        v4 = 2;
        v0 = core::panicking::panic_fmt();
    }
    if !v11 {
        core::option::expect_failed(); /* do not return */
    }
    v19 = <alloc::string::String as core::clone::Clone>::clone(v11);
    v0 = struct8 {
        field_0: 0x1b600000000
    };
    v1 = 0;
    v2 = 0;
    v1 = 1;
    v6 = std::fs::OpenOptions::_open(&v0, *((&v19 as &char + 8) as &i64), *((&v19 as &char + 16) as &i64));
    if v6 {
        v25 = v7;
        *((a0 + 8) as &i64) = v25;
        *(a0 as &i64) = 0;
        return v25;
    }
    v10 = __rust_alloc(0x2000, 1);
    v11 = 0x2000;
    v12 = 0;
    v13 = 0;
    v14 = *((&v6 as &char + 4) as &i32);
    v27 = core::ops::function::FnOnce::call_once(0);
    if !v27 {
        core::result::unwrap_failed(); /* do not return */
    }
    v28 = *(v27 as &i128);
    *(v27 as &i64) = *(v27 as &i64) + 1;
    v8 = g_67bcb8;
    v6 = anon.585b1728ec6435d03fbe081b5952853c.2.llvm.8033991318799290767;
    v9 = v28;
    v29 = v10;
    v5 = v13;
    v3 = v12;
    v0 = v29;
    loop {
        v15 = <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v0, v30, v31, v32, v33);
        v34 = v15;
        if v34 == 9223372036854775809 {
            v25 = a0;
            *((v25 + 32) as &i128) = v9;
            *((v25 + 16) as &i128) = v8;
            *(v25 as &i128) = v6;
            return v25;
        } else if v34 != 0x8000000000000000 {
            v22 = struct24 {
                field_0: v34
                field_8: v16
                field_16: v17
            };
            v6 = hashbrown::map::HashMap<K,V,S,A>::insert(&v22);
        } else {
            v35 = a0;
            *((v35 + 8) as &i64) = v23;
            *(v35 as &i64) = 0;
            return v25;
        }
    }
}
