fn ruff_python_formatter::string::docstring::CodeExampleMarkdown::new(a1: i64, a2: i64) -> Option<struct49> {
    let a0: i64;  // rdi
    let v0: struct8;  // [bp-0xd0]
    let v1: Result<struct8, struct12>;  // [bp-0xc8], Other Possible Types: struct32, struct8
    let v2: Option<struct72>;  // [bp-0xc8]
    let v3: struct16;  // [bp-0xc0]
    let v4: u64;  // [bp-0xb8]
    let v5: u64;  // [bp-0xb0]
    let v6: u128;  // [bp-0xa8]
    let v7: u128;  // [bp-0x98]
    let v8: u64;  // [bp-0x88]
    let v9: struct32;  // [bp-0x80]
    let v10: struct16;  // [bp-0x78]
    let v11: struct80;  // [bp-0x68]
    let v12: struct80;  // [bp-0x58]
    let v13: u128;  // [bp-0x48]
    let v14: i64;  // [bp-0x40]
    let v15: struct21;  // [bp-0x38]
    let v17: struct12;  // xmm0
    let v18: iNone;  // xmm1
    let v19: core::option::Option<&str>;  // rax
    let v20: u64;  // rdx
    let v21: u64;  // rax

    v1 = ruff_python_formatter::string::docstring::indent_with_suffix(a1, a2);
    if core::slice::<impl [T]>::starts_with(v4, v5, "```") || core::slice::<impl [T]>::starts_with(v4, v5, "~~~") {
        std::sync::poison::once::Once::call_once(&g_9c19e0, "");
        v2 = regex::regex::string::Regex::captures_at(v4, v5);
        if let Some(_) = v2 {
            v9 = v3;
            v15 = v8;
            v17 = v2 as i128;
            v18 = *((&v2 as &char + 16) as &i128);
            v13 = v7;
            v12 = v6;
            v11 = v18;
            v10 = v17;
            v1 = regex_automata::util::captures::Captures::get_group_by_name(&v11, "ticks");
            v0 = v1;
            if v1 != 1 {
                v1 = regex_automata::util::captures::Captures::get_group_by_name(&v11, "tilds");
                if v1.field_0 as i32 != 1 {
                    core::option::expect_failed("no ticks means it must be tildes"); /* do not return */
                }
            }
            v19 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v3, v4, v14, v15) as u64;
            v21 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v19, v20 + v19);
            v1 = ruff_python_formatter::string::docstring::Indentation::from_str(v0, v9);
            return Some(struct56 {
                field_0: 8
                field_8: 0
                field_16: v1 as i128
                field_32: v4
                field_40: v21
                field_48: v1 as i64 as i8 ^ 1
            });
        }
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
