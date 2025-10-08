fn just::recipe::Recipe<D>::working_directory(a0: i64, a1: i64, a2: void*, a3: u32) -> int {
    let v0: struct24;  // [bp-0xa0]
    let v1: void*;  // [bp-0x98]
    let v2: u64;  // [bp-0x90], Other Possible Types: unsigned long
    let v3: struct24;  // [bp-0x88], Other Possible Types: struct72
    let v4: struct24;  // [bp-0x40]
    let v7: struct24;  // rax
    let v8: struct24;  // rax
    let v10: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // rax

    if just::attribute_set::AttributeSet::contains(a1 + 216, 9) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v0 = just::execution_context::ExecutionContext::working_directory(a2, a3);
    v7 = *((a1 + 216) as &i64);
    v8 = v7;
    if v8 {
        v8 = *((a1 + 232) as &i64);
    }
    v3 = struct72 {
        field_0: (v7) as u8 as u64
        field_8: 0
        field_16: v7
        field_24: *((a1 + 224) as &i64)
        field_32: v3
        field_40: 0
        field_48: v7
        field_56: *((a1 + 224) as &i64)
        field_64: v8
    };
    loop {
        v10 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v3) as u64;
        if !v10 {
            return struct24 {
                field_0: *(&v0.field_0 as &i128)
                field_16: v2
            };
        } else if *(v10 as &i64) + 9223372036854775807 == 19 {
            v4 = std::path::Path::join(v1, v2, v10 + 8);
            return struct24 {
                field_0: *(&v4.field_0 as &i128)
                field_16: v4.field_16
            };
        }
    }
}
