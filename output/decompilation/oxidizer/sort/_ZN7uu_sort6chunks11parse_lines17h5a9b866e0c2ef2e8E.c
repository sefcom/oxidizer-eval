fn uu_sort::chunks::parse_lines(a0: i64, a1: i64, a2: i64, a3: i64, a4: i8, a5: i64) -> int {
    let v0: void*;  // [bp-0xe0]
    let v1: &[u8];  // [bp-0xd8]
    let v2: void*;  // [bp-0xd0]
    let v3: u32;  // [bp-0xc8]
    let v4: core::str::pattern::CharSearcher;  // [bp-0xc8]
    let v5: u128;  // [bp-0xb8]
    let v6: u384;  // [bp-0x98]
    let v7: u8;  // [bp-0x68]
    let v8: u128;  // [bp-0x58]
    let v9: u8;  // [bp-0x48]
    let v10: u16;  // [bp-0x38]
    let v12: u32;  // ebp
    let v14: u64;  // rdx
    let v15: core::option::Option<&str>;  // rax
    let v16: struct8;  // r12, Other Possible Types: u64
    let v17: core::option::Option<&str>;  // 4096
    let v18: &[u8];  // rax:rdx

    v12 = a4;
    v3 = 0;
    v18 = core::char::methods::encode_utf8_raw(v12, &v3, a2);
    v15 = <&str as core::str::pattern::Pattern>::strip_suffix_of(v18.ptr, v18.len, a0, a1) as u64;
    match v15 {
        None => {
            v16 = a1;
            if !(!v15) {
                goto LABEL_55d1a6;
            }
LABEL_55d1a5:
            v17 = a0;
        },
        Some(_) => {
            v16 = v14;
            if let None = v15 {
                goto LABEL_55d1a5;
            }
LABEL_55d1a6:
            v17 = v15;
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
        v4 = <char as core::str::pattern::Pattern>::into_searcher(v12, v17, v16);
        memcpy(&v9, &v4 as u128, 16);
        v8 = v5;
        memcpy(&v7, &v4, 16);
        v10 = 1;
        v6 = struct48 {
            field_0: a3
            field_8: &v0
            field_16: a5
            field_24: 0
            field_40: v16
        };
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(a2, &v6);
        return;
    } else {
        core::panicking::panic("assertion failed: line_data.parsed_floats.is_empty()"); /* do not return */
    }
}
