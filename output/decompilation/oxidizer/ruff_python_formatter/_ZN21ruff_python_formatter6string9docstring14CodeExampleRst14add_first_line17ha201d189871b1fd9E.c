fn ruff_python_formatter::string::docstring::CodeExampleRst::add_first_line(a1: &struct80, a2: i64, a3: i64) -> Option<struct80> {
    let a0: i64;  // rdi
    let v0: struct32;  // [bp-0x98], Other Possible Types: struct80
    let v1: u64;  // [bp-0x88]
    let v2: u64;  // [bp-0x80]
    let v3: Result<struct8, struct12>;  // [bp-0x48]
    let v5: struct16;  // rax

    if a1[48] as i32 != 5 {
        core::panicking::panic("assertion failed: self.min_indent.is_none()"); /* do not return */
    }
    v0 = ruff_python_formatter::string::docstring::indent_with_suffix(*(a2 as &i64), *((a2 + 8) as &i64));
    if !v2 {
        v0 = struct80 {
            field_0: 9223372036854775811
            field_16: <UNKNOWN>
            field_32: <UNKNOWN>
            field_48: <UNKNOWN>
            field_64: <UNKNOWN>
        };
        alloc::collections::vec_deque::VecDeque<T,A>::push_back(a3, &v0, "crates/ruff_python_formatter/src/string/docstring.rs");
        return Some(struct80 {
            field_0: *(a1 as &i128)
            field_16: a1[16] as i128
            field_32: a1[32] as i128
            field_48: a1[48] as i128
            field_64: a1[64] as i128
        });
    }
    if a1[72] as i8 && ruff_python_formatter::string::docstring::is_rst_option(v1, v2) {
        v0 = struct80 {
            field_0: 9223372036854775811
            field_16: <UNKNOWN>
            field_32: <UNKNOWN>
            field_48: <UNKNOWN>
            field_64: <UNKNOWN>
        };
        alloc::collections::vec_deque::VecDeque<T,A>::push_back(a3, &v0, "crates/ruff_python_formatter/src/string/docstring.rs");
        return Some(struct80 {
            field_0: *(a1 as &i128)
            field_16: a1[16] as i128
            field_32: a1[32] as i128
            field_48: a1[48] as i128
            field_64: a1[64] as i128
        });
    }
    v3 = ruff_python_formatter::string::docstring::Indentation::from_str(v0.field_0, v0.field_8);
    if <ruff_python_formatter::string::docstring::Indentation as core::cmp::PartialOrd>::partial_cmp(&v3, a1 + 24) <= 0 {
        v0 = struct80 {
            field_0: 9223372036854775814
            field_16: <UNKNOWN>
            field_32: <UNKNOWN>
            field_48: <UNKNOWN>
            field_64: <UNKNOWN>
        };
        alloc::collections::vec_deque::VecDeque<T,A>::push_back(a3, &v0, "crates/ruff_python_formatter/src/string/docstring.rs");
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v5 = a1 + 48;
    *((v5 + 16) as &i64) = *((&v3 as &char + 16) as &i64);
    *(v5 as &i128) = v3 as i128;
    ruff_python_formatter::string::docstring::CodeExampleRst::push(a1, a2);
    v0 = 9223372036854775812;
    alloc::collections::vec_deque::VecDeque<T,A>::push_back(a3, &v0, "crates/ruff_python_formatter/src/string/docstring.rs");
    return Some(struct80 {
        field_0: *(a1 as &i128)
        field_16: a1[16] as i128
        field_32: a1[32] as i128
        field_48: a1[48] as i128
        field_64: a1[64] as i128
    });
}
