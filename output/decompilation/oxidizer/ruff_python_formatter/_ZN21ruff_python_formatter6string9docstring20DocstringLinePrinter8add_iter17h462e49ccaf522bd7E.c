fn ruff_python_formatter::string::docstring::DocstringLinePrinter::add_iter(a1: &struct40, a2: &struct96) -> : struct4 {
    let a0: u64;  // rdi
    let v0: i64;  // [bp-0x80]
    let v1: u64;  // [bp-0x78]
    let v2: struct21;  // [bp-0x60]
    let v3: struct40;  // [bp-0x58]
    let v5: u64;  // rbx
    let v6: core::fmt::Arguments;  // rbp
    let v7: struct16;  // 4117
    let v8: core::fmt::Arguments;  // rdx
    let v9: i64;  // rax
    let v10: Option<struct24>;  // [bp-0x70]

    v1 = a2 + 24;
    loop {
        v5 = a2[8] as i64;
        v6 = a2[16] as i64;
        v7 = *(a2 as &i8) & 1;
        *(a2 as &i64) = 0;
        if !v7 as u8 {
            v5 = core::str::iter::SplitInternal<P>::next(v1);
            v6 = v8;
        }
        if !v5 {
            ruff_python_formatter::string::docstring::CodeExample::finish(a1 + 32, a1);
            ruff_python_formatter::string::docstring::DocstringLinePrinter::run_action_queue(a0, a1);
            return;
        }
        v9 = core::option::Option<T>::get_or_insert_with(a2, v1);
        v3 = struct40 {
            field_0: v5
            padding_8: <UNKNOWN>
            field_16: *(v9 as &i128)
            field_32: *((a1 + 144) as &i32)
        };
        if v6 >> 32 {
            core::result::Result<T,E>::unwrap(1, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_text_size/src/traits.rs");
        } else {
            core::result::Result<T,E>::unwrap(0, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_text_size/src/traits.rs");
        }
        core::result::Result<T,E>::unwrap(0, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_text_size/src/traits.rs");
        *((a1 + 144) as &u32) = *((a1 + 144) as &i32) + v6 as u32;
        v10 = ruff_python_formatter::string::docstring::DocstringLinePrinter::add_one(a1, &v3);
        if let Some(_) = v10 {
            *((v0 + 16) as &struct21) = v2;
            *(v0 as &i128) = v10 as i128;
            return;
        }
    }
}
