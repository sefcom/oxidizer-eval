fn starship::modules::haxe::parse_haxe_version(a0: i64, a1: i64, a2: i64) {
    let v0: Option<struct24>;  // [bp-0xa8], Other Possible Types: struct16, struct24, struct32
    let v1: u384;  // [bp-0xa8]
    let v2: struct24;  // [bp-0x98]
    let v3: Result<struct24, struct16>;  // [bp-0x90], Other Possible Types: u64
    let v4: Result<struct24, struct16>;  // [bp-0x88]
    let v5: Result<struct16, struct64>;  // [bp-0x80]
    let v6: struct72;  // [bp-0x78]
    let v7: struct72;  // [bp-0x70]
    let v8: u64;  // [bp-0x60]
    let v9: struct48;  // [bp-0x58]
    let v12: &str;  // rax:rdx

    v0 = regex::regex::string::Regex::new("(?:[0-9a-zA-Z][-+0-9.a-zA-Z]+)");
    if !v0.field_0 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v8 = v3;
    v7 = *(&v0.field_8 as &i128);
    v6 = v0.field_0;
    v0 = struct16 {
        field_24: 0
        field_32: a1
    };
    v2 = a2;
    v3 = 0;
    v4 = a2;
    v5 = 1;
    regex_automata::util::search::Input::set_span(&v0, a2);
    v9 = v1;
    v0 = regex_automata::meta::regex::Regex::search_half(v6, v7.field_0, &v9);
    match v0 {
        None => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
        Some(_) => {
            v12 = core::str::<impl str>::trim_matches(a1, a2, a2);
            v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v12.data_ptr, a2);
            return struct24 {
                field_0: v0.field_0
                field_16: v2
            };
        },
    }
}
