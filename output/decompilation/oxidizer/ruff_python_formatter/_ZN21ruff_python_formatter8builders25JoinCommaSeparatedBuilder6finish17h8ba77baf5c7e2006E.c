fn ruff_python_formatter::builders::JoinCommaSeparatedBuilder::finish(a0: u64, a1: i64) -> long long {
    let v0: struct32;  // [bp-0x20]
    let v2: u64;  // rax

    v0 = struct32 {
        field_0: *((a1 + 32) as &i64)
        field_8: a1
        field_16: a1 + 40
        field_24: a1 + 44
    };
    if *((a1 + 8) as &i32) != 4 {
        v2 = *((a1 + 28) as &i32);
        return struct32 {
            field_0: *((a1 + 8) as &i32)
            field_4: <UNKNOWN>
            field_20: <UNKNOWN>
        };
    }
    return ruff_python_formatter::builders::JoinCommaSeparatedBuilder::finish::{{closure}}(a0, &v0);
}
