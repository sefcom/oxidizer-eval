fn starship::modules::fossil_metrics::FossilDiff::parse(a1: &str, a2: i32) -> : struct32 {
    let a0: i64;  // rdi
    let v0: struct66;  // [bp-0x108], Other Possible Types: struct72, struct32, u128
    let v2: Option<struct48>;  // [bp-0xf8]
    let v3: Option<struct32>;  // [bp-0xc0], Other Possible Types: core::str::pattern::CharSearcher
    let v4: iNone;  // [bp-0xb0]
    let v5: struct72;  // [bp-0xa0]
    let v6: struct32;  // [bp-0x90]
    let v7: Option<struct72>;  // [bp-0x70]
    let v8: u576;  // [bp-0x70]
    let v10: u64;  // rdx
    let v11: u64;  // rsi
    let v12: struct72;  // rax
    let v14: &str;  // rax:rdx

    v0 = regex::regex::string::Regex::new("^\\s*(\\d+)\\s+(\\d+) TOTAL over \\d+ changed files?$");
    v6 = core::result::Result<T,E>::unwrap(&v0, "src/modules/fossil_metrics.rs");
    v3 = <char as core::str::pattern::Pattern>::into_searcher(0xa, a1);
    v0 = struct66 {
        field_0: 0
        field_8: v10
        field_16: *(&v3.haystack.data_ptr as &i128)
        field_32: v4
        field_48: v5
        field_64: 0
    };
    v12 = core::str::iter::SplitInternal<P>::next_back_inclusive(&v0, v11, v10);
    if v12 {
        v14 = <core::str::LinesMap as core::ops::function::Fn<(&str,)>>::call(v12, v10, v10);
        v7 = regex::regex::string::Regex::captures_at(&v6, v14.data_ptr, v14.length);
        if let Some(v0) = v7 {
            v3 = starship::modules::fossil_metrics::FossilDiff::parse::{{closure}}(a2 as u64, &v0);
            if let Some(_) = v3 {
                v2 = v4;
                v0 = v3 as i128 as u128;
                return struct32 {
                    field_0: *(&v0.field_0 as &i128)
                    field_16: v2
                };
            }
        }
    }
    vvar_219{stack -264} = struct32 OrderedDict([(0, 𝜙@64b [((12145717, None), vvar_192{stack -264}), ((12145761, None), vvar_192{stack -264}), ((12145852, None), vvar_192{stack -264})]), (16, 𝜙@128b [((12145717, None), vvar_191{stack -248}), ((12145761, None), vvar_191{stack -248}), ((12145852, None), vvar_209{stack -248})])])
    core::tuple::<impl core::default::Default for (U,T)>::default(&v0);
    return struct32 {
        field_0: *(&v0.field_0 as &i128)
        field_16: v2
    };
}
