fn bat::printer::InteractivePrinter::create_fake_panel(a0: u64, a1: u64, a2: u64) -> int {
    let v0: struct24;  // [bp-0xc8]
    let v1: struct24;  // [bp-0xb8], Other Possible Types: struct32
    let v2: struct24;  // [bp-0xa8], Other Possible Types: struct40
    let v3: u64;  // [bp-0x98]
    let v4: struct24;  // [bp-0x78], Other Possible Types: struct_0 *
    let v5: Result<struct16, struct64>;  // [bp-0x70]
    let v6: core::option::Option<(std::ffi::os_str::OsString, std::ffi::os_str::OsString)>;  // [bp-0x68]
    let v7: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x60]
    let v8: Option<struct24>;  // [bp-0x58], Other Possible Types: struct24
    let v9: struct24;  // [bp-0x50]
    let v10: i64;  // [bp-0x48]
    let v11: struct24;  // [bp-0x40]

    if !a2 {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, 1, 0);
        return;
    }
    v2 = struct24 {
        field_0: &g_481174
        field_8: &g_481178
        field_16: a2 - 1
    };
    v11 = core::iter::traits::iterator::Iterator::collect(&v2);
    v2 = alloc::slice::<impl [T]>::repeat(" ", ~(v11.field_16) + a2);
    v1 = v3;
    v0 = *(&v2.field_0 as &i128);
    v4 = &v11;
    v5 = <alloc::string::String as core::fmt::Display>::fmt;
    v6 = &v0;
    v7 = <alloc::string::String as core::fmt::Display>::fmt;
    v2 = struct40 {
        field_0: "\x01\x00"
        field_16: &v4
        field_24: 2
    };
    v8 = core::option::Option<T>::map_or_else(None, a2, &v2);
    v0 = *(&v8.field_0 as &i128);
    v1 = v10;
    if !bat::style::StyleComponents::grid(a1 + 192) {
        return struct24 {
            field_0: v0
            field_16: v1
        };
    }
    v8 = &v0;
    v9 = <alloc::string::String as core::fmt::Display>::fmt;
    v2 = struct40 {
        field_0: &g_aceaa0
        field_8: 2
        field_16: &v8
        field_24: 1
    };
    v4 = core::option::Option<T>::map_or_else(None, a2, &v2);
    return struct24 {
        field_0: *(&v4.field_0 as &i128)
        field_16: v6
    };
}
