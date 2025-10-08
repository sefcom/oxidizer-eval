fn uu_sort::chunks::parse_lines(a0: u64, a1: u64, a2: i64, a3: i64, a4: u8, a5: u64) -> void {
    let v0: void*;  // [bp-0xb8], Other Possible Types: u32
    let v1: u64;  // [bp-0xb0]
    let v2: void*;  // [bp-0xa8]
    let v3: struct48;  // [bp-0x98]
    let v4: core::str::pattern::CharSearcher;  // [bp-0x68]
    let v5: u16;  // [bp-0x38]
    let v7: u32;  // ebp
    let v9: u64;  // rdx
    let v10: core::option::Option<&str>;  // rax
    let v11: u64;  // r13
    let v12: u64;  // 4096
    let v13: &mut [u8];  // rax:rdx

    v7 = a4;
    v0 = 0;
    v13 = core::char::methods::encode_utf8_raw(v7, &v0, a2);
    v10 = <&str as core::str::pattern::Pattern>::strip_suffix_of(v13.data_ptr, v13.length, a0, a1) as u64;
    match v10 {
        None => {
            v11 = a1;
            if let Some(_) = v10 {
                goto LABEL_4c2504;
            }
LABEL_4c2503:
            v12 = a0;
        },
        Some(_) => {
            v11 = v9;
            if let None = v10 {
                goto LABEL_4c2503;
            }
LABEL_4c2504:
            v12 = v10;
        },
    }
    if *((a2 + 16) as &i64) {
        core::panicking::panic("assertion failed: lines.is_empty()"); /* do not return */
    } else if *((a3 + 16) as &i64) {
        core::panicking::panic("assertion failed: line_data.selections.is_empty()"); /* do not return */
    } else if *((a3 + 40) as &i64) {
        core::panicking::panic("assertion failed: line_data.num_infos.is_empty()"); /* do not return */
    } else if *((a3 + 64) as &i64) {
        core::panicking::panic("assertion failed: line_data.parsed_floats.is_empty()"); /* do not return */
    } else if !*((a3 + 88) as &i64) {
        v0 = 0;
        v1 = 8;
        v2 = 0;
        v4 = <char as core::str::pattern::Pattern>::into_searcher(v7, v12, v11);
        v5 = 1;
        v3 = struct48 {
            field_0: a3
            field_8: &v0
            field_16: a5
            field_24: 0
            field_40: v11
        };
        alloc::vec::Vec<T,A>::extend_desugared(a2, &v3);
        return;
    } else {
        core::panicking::panic("assertion failed: line_data.line_num_floats.is_empty()"); /* do not return */
    }
}
