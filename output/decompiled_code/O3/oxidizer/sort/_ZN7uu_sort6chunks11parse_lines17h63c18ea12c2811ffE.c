fn uu_sort::chunks::parse_lines(a0: i64, a1: i64, a2: i64, a3: i64, a4: i32, a5: i64) -> u64 {
    let v0: i64;  // [sp-0xe0]
    let v1: i64;  // [sp-0xd8]
    let v2: i64;  // [sp-0xd0]
    let v3: struct41;  // [bp-0xc8], Other Possible Types: struct4
    let v5: struct98;  // [bp-0x98]
    let v7: i64;  // rdx
    let v8: i64;  // rax
    let v9: i64;  // 4096

    v3 = struct4 {
        field_0: 0
        field_1: 0
        field_2: <UNKNOWN>
        field_3: <UNKNOWN>
    };
    v8 = <&str as core::str::pattern::Pattern>::strip_suffix_of(core::char::methods::encode_utf8_raw(a4, &v3), v7, a0, a1);
    if !v8 {
        v9 = a0;
    } else {
        v9 = v8;
    }
    if *((a2 + 16) as &i64) {
        core::panicking::panic(); /* do not return */
    }
    if *((a3 + 16) as &i64) {
        core::panicking::panic(); /* do not return */
    }
    if *((a3 + 40) as &i64) {
        core::panicking::panic(); /* do not return */
    }
    if *((a3 + 64) as &i64) {
        core::panicking::panic(); /* do not return */
    }
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v3 = <char as core::str::pattern::Pattern>::into_searcher(a4, v9, a1);
    v5 = struct98 {
        field_0: a3
        field_8: &v0
        field_16: a5
        field_24: 0
        field_40: a1
        field_48: v3
        field_64: *((&v3 as &char + 16) as &i128)
        field_80: v4
        field_96: 1
    };
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(a2, &v5, v7);
}
