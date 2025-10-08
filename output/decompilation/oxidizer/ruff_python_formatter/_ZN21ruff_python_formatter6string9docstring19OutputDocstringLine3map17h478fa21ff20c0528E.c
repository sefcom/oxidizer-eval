fn ruff_python_formatter::string::docstring::OutputDocstringLine::map(a0: i64, a1: i64, a2: u64) -> void {
    let v0: struct24;  // [bp-0x28]

    v0 = ruff_python_formatter::string::docstring::DocstringLinePrinter::run_action_queue::{{closure}}(a2, *((a1 + 8) as &i64), *((a1 + 16) as &i64));
    return struct32 {
        field_0: v0.field_0
        field_16: v0.field_16
        field_24: *((a1 + 24) as &i32)
        field_28: *((a1 + 28) as &i8)
    };
}
