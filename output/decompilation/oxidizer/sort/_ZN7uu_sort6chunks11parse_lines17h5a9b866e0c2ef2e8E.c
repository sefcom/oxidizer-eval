fn uu_sort::chunks::parse_lines(a0: i128, a1: i64, a2: i64, a3: i64, a4: i8, a5: i64) -> int {
    let v0: void*;  // [bp-0xe0]
    let v1: &str;  // [bp-0xd8]
    let v2: void*;  // [bp-0xd0]
    let v3: core::str::pattern::CharSearcher;  // [bp-0xc8], Other Possible Types: u32
    let v4: u128;  // [bp-0xb8]
    let v5: struct16;  // [bp-0xa8]
    let v6: struct104;  // [bp-0x98]
    let v8: u32;  // ebp
    let v10: u64;  // rdx
    let v11: core::option::Option<&str>;  // rax
    let v12: struct8;  // r12, Other Possible Types: u64
    let v13: core::option::Option<&str>;  // 4096
    let v14: &str;  // rax:rdx

    v8 = a4;
    v3 = 0;
    v14 = core::char::methods::encode_utf8_raw(v8, &v3, a2);
    v11 = <&str as core::str::pattern::Pattern>::strip_suffix_of(v14.data_ptr, v14.length, a0, a1) as u64;
    match v11 {
        None => {
            v12 = a1;
            if !(!v11) {
                goto LABEL_55d1a6;
            }
LABEL_55d1a5:
            v13 = a0;
        },
        Some(_) => {
            v12 = v10;
            if let None = v11 {
                goto LABEL_55d1a5;
            }
LABEL_55d1a6:
            v13 = v11;
        },
    }
    if *((a2 + 16) as &i64) {
        core::panicking::panic("assertion failed: lines.is_empty()"); /* do not return */
    } else if *((a3 + 16) as &i64) {
        core::panicking::panic("assertion failed: line_data.selections.is_empty()"); /* do not return */
    } else if *((a3 + 40) as &i64) {
        core::panicking::panic("assertion failed: line_data.num_infos.is_empty()"); /* do not return */
    } else if !*((a3 + 64) as &i64) {
        v0 = 0;
        v1 = 8;
        v2 = 0;
        v3 = <char as core::str::pattern::Pattern>::into_searcher(v8, v13, v12);
        v6 = struct104 {
            field_0: a3
            field_8: &v0
            field_16: a5
            field_24: 0
            field_40: v12
            field_48: *(&v3.haystack.data_ptr as &i128)
            field_64: v4
            field_80: v5
            field_96: 1
        };
        v6 = struct98 {
            field_0: a3
            field_8: &v0
            field_16: a5
            field_24: 0
            field_40: v12
            field_48: *(&v3.haystack.data_ptr as &i128)
            field_64: v4
            field_80: v5
            field_96: 1
        };
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(a2, &v6);
        return;
    } else {
        core::panicking::panic("assertion failed: line_data.parsed_floats.is_empty()"); /* do not return */
    }
}
