fn ruff_python_formatter::string::docstring::CodeExampleRst::new_code_block(a1: i64, a2: i64) -> Option<struct45> {
    let a0: i64;  // rdi
    let v0: Option<struct24>;  // [bp-0x78], Other Possible Types: Result<struct8, struct12>, struct16
    let v1: u384;  // [bp-0x78]
    let v2: struct12;  // [bp-0x68]
    let v3: struct21;  // [bp-0x60]
    let v4: struct12;  // [bp-0x58]
    let v5: struct21;  // [bp-0x50]
    let v6: struct48;  // [bp-0x48]

    std::sync::poison::once::Once::call_once(&g_9c19b8, "");
    v0 = struct16 {
        field_24: 0
        field_32: a1
    };
    v2 = a2;
    v3 = 0;
    v4 = a2;
    v5 = 1;
    regex_automata::util::search::Input::set_span(&v0, a2);
    v6 = v1;
    v0 = regex_automata::meta::regex::Regex::search_half(&v6);
    match v0 {
        None => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
        Some(_) => {
            v0 = ruff_python_formatter::string::docstring::Indentation::from_str(a1, a2);
            return Some(struct48 {
                field_0: 8
                field_8: 0
                field_16: v0 as i128
                field_32: v2
                field_40: 5
                padding_48: <UNKNOWN>
                field_64: <UNKNOWN>
            });
        },
    }
}
