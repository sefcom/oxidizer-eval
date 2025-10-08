fn uu_ptx::read_word_filter_file(a0: i64, a1: u64, a2: u64, a3: u64) -> int {
    let v0: u32;  // [bp-0x124]
    let v1: struct48;  // [bp-0x118], Other Possible Types: Result<struct40, struct16>
    let v2: u128;  // [bp-0x118]
    let v3: u32;  // [bp-0x114]
    let v4: u64;  // [bp-0x110]
    let v5: iNone;  // [bp-0x108]
    let v6: iNone;  // [bp-0xf8]
    let v7: u64;  // [bp-0xe8]
    let v8: struct24;  // [bp-0xe0]
    let v9: void*;  // [bp-0xd8]
    let v10: u32;  // [bp-0xd0]
    let v11: iNone;  // [bp-0xc8]
    let v12: struct16;  // [bp-0xc8]
    let v13: iNone;  // [bp-0xb8]
    let v14: iNone;  // [bp-0xa8]
    let v15: struct24;  // [bp-0x98]
    let v16: struct24;  // [bp-0x98]
    let v17: u64;  // [bp-0x90]
    let v19: struct24;  // [bp-0x80]
    let v20: struct56;  // [bp-0x68]
    let v21: iNone;  // [bp-0x58]
    let v22: iNone;  // [bp-0x48]
    let v24: void*;  // rax
    let v25: u32;  // ebx
    let v26: u32;  // ebx
    let v27: u64;  // rax
    let v28: u64;  // rdx

    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, a2, a3);
    v24 = clap_builder::parser::error::MatchesError::unwrap(a2, a3, &v1);
    if !v24 {
        core::option::expect_failed("parsing options failed!"); /* do not return */
    }
    v8 = <alloc::string::String as core::clone::Clone>::clone(v24);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, "-") {
        v26 = (v25 & -0x100 | 1) & -0x100 | 1;
        v27 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
    } else {
        v1 = std::fs::File::open(&v8);
        match v1 {
            Err(_) => {
                return struct16 {
                    field_0: 0
                    field_8: v4
                };
            },
            Ok(_) => {
                v26 = 0;
                v27 = alloc::boxed::Box<T>::new(v3 as u64);
            },
        }
    }
    v20 = std::io::buffered::bufreader::BufReader<R>::with_capacity(v27, v28);
    v0 = v26;
    v1 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
    v14 = v6;
    v13 = v5;
    v11 = v1.field_0;
    v7 = v20.field_48;
    v6 = v22;
    v5 = v21;
    v2 = *(&v20.field_0 as &i128);
    loop {
        vvar_316{stack -152} = struct24 OrderedDict([(0, 𝜙@64b [((5417680, None), vvar_255{stack -152}), ((5417465, None), None)]), (16, 𝜙@64b [((5417680, None), vvar_257{stack -136}), ((5417465, None), None)])])
        <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v16, &v1);
        if v16.field_0 == 9223372036854775809 {
            return struct48 {
                field_0: v11
                field_16: v13
                field_32: v14
            };
        } else if v16.field_0 != 0x8000000000000000 {
            v19 = v15;
            v12 = hashbrown::map::HashMap<K,V,S,A>::insert(&v19);
        } else {
            return struct16 {
                field_0: 0
                field_8: v17
            };
        }
    }
    return;
}
