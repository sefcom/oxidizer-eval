fn bat::app::App::style_components(a1: i64) -> Result<struct81, struct49> {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0x168]
    let v1: u128;  // [bp-0x159]
    let v2: u64;  // [bp-0x158]
    let v3: struct48;  // [bp-0x148], Other Possible Types: struct64, u128
    let v4: struct48;  // [bp-0x148], Other Possible Types: struct64
    let v5: u128;  // [bp-0x138]
    let v6: u128;  // [bp-0x138]
    let v7: iNone;  // [bp-0x128]
    let v8: u128;  // [bp-0x128]
    let v9: Option<struct48>;  // [bp-0x108], Other Possible Types: struct24
    let v10: u64;  // [bp-0xf8]
    let v11: iNone;  // [bp-0xe8]
    let v12: u8;  // [bp-0xd8]
    let v13: i8;  // [bp-0xd7]
    let v14: &str;  // [bp-0xd0], Other Possible Types: struct24
    let v15: u64;  // [bp-0xc0]
    let v16: u128;  // [bp-0xb8]
    let v17: void*;  // [bp-0xa8], Other Possible Types: char
    let v18: u8;  // [bp-0xa0]
    let v19: u64;  // [bp-0x9f]
    let v20: u128;  // [bp-0x98]
    let v21: struct40;  // [bp-0x88], Other Possible Types: struct56, struct64
    let v22: struct24;  // [bp-0x38]
    let v24: u8;  // al
    let v25: u128;  // xmm0
    let v26: iNone;  // xmm3
    let v27: u64;  // rax
    let v28: u64;  // rdx

    v9 = bat::app::App::forced_style_components(a1);
    if v9 as i64 {
        v7 = v11;
        v5 = *((&v9 as &char + 16) as &i128);
        v3 = v9 as i128;
    } else if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "style") {
        v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "style");
        v3 = clap_builder::parser::error::MatchesError::unwrap("style", &v21);
        if !v3.field_0 as i64 {
            core::option::expect_failed("styles present"); /* do not return */
        }
        v21 = v4;
        core::iter::traits::iterator::Iterator::collect(&v12, &v21);
        v24 = v12;
        if v24 != 13 {
            v25 = *(&v13 as &i128);
            v26 = *(&v17 as &i128);
            v1 = v14.field_0;
            v0 = v25;
            return Ok(struct88 {
                field_0: v24
                field_1: <UNKNOWN>
                field_16: <UNKNOWN>
                field_32: <UNKNOWN>
                field_48: <UNKNOWN>
                field_64: <UNKNOWN>
            });
        }
        v22 = v14;
        bat::style::StyleComponentList::to_components(&v3 as u32, &v22, *((a1 + 56) as &i8));
    } else {
        v27 = bat::style::StyleComponent::components(10) as u64;
        v3 = <std::collections::hash::set::HashSet<T,S> as core::iter::traits::collect::FromIterator<T>>::from_iter(v27, v28 + v27);
    }
    vvar_385{stack -328} = struct48 OrderedDict([(0, 𝜙@128b [((8029724, None), vvar_316{stack -328}), ((8029446, None), vvar_310{stack -328}), ((8029742, None), None)]), (16, 𝜙@128b [((8029724, None), vvar_317{stack -312}), ((8029446, None), vvar_309{stack -312}), ((8029742, None), None)]), (32, 𝜙@128b [((8029724, None), vvar_318{stack -296}), ((8029446, None), vvar_308{stack -296}), ((8029742, None), None)])])
    if !bat::style::StyleComponents::grid(&v4) || !hashbrown::map::HashMap<K,V,S,A>::remove(&v4) {
        return struct56 {
            field_0: 13
            padding_1: <UNKNOWN>
            field_8: v4.field_0
            field_24: v6
            field_40: v8
        };
    }
    v18 = 0;
    v17 = 0;
    v19 = 90194313222;
    v12 = 0x8000000000000000;
    v14 = "[bat warning]";
    v15 = 9223372036854775810;
    v21 = struct40 {
        field_0: "Style 'rule' is a subset of style 'grid', 'rule' will not be visible."
        field_8: 1
        field_16: 8
        field_24: 0
    };
    v9 = core::option::Option<T>::map_or_else(&g_4854b5, &v21);
    v0 = v9.field_0;
    v2 = v10;
    eprintln!("{}: {}", &v12 as u8, &v0 as u8);
    return struct56 {
        field_0: 13
        padding_1: <UNKNOWN>
        field_8: v4.field_0
        field_24: v6
        field_40: v8
    };
}
