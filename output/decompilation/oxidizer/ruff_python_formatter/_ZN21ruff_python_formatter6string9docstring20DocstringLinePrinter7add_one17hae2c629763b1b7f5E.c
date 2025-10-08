fn ruff_python_formatter::string::docstring::DocstringLinePrinter::add_one(a1: i64, a2: i64) -> Option<struct24> {
    let a0: u64;  // rdi
    let v0: struct29;  // [bp-0x40]
    let v2: void*;  // r12

    v2 = *((a1 + 136) as &i64);
    if *((ruff_formatter::formatter::Formatter<Context>::options(*(v2 as &i64), v2[8] as i64) + 13) as &i8) == 1 && *((*((v2[8] as i64 + 48) as &i64)(*(v2 as &i64)) as i64 + 60) as &i8) == 2 {
        ruff_python_formatter::string::docstring::CodeExample::add(a1 + 32, a2, a1);
        ruff_python_formatter::string::docstring::DocstringLinePrinter::run_action_queue(a0, a1);
        return;
    }
    v0 = struct29 {
        field_0: 0x8000000000000000
        field_8: *(a2 as &i128)
        field_24: *((a2 + 32) as &i32)
        field_28: (!*((a2 + 16) as &i64)) as u8 as u8
    };
    ruff_python_formatter::string::docstring::DocstringLinePrinter::print_one(a0, a1, &v0);
    return;
}
