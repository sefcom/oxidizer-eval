fn just::recipe::Recipe<D>::doc(a0: i64) -> u64 {
    let v0: struct72;  // [bp-0x60], Other Possible Types: u64
    let v2: struct72;  // rax
    let v3: struct72;  // rax
    let v5: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // rax

    v2 = *((a0 + 216) as &i64);
    v3 = v2;
    if v3 {
        v3 = *((a0 + 232) as &i64);
    }
    v0 = struct72 {
        field_0: (v2) as u8 as u64
        field_8: 0
        field_16: v2
        field_24: *((a0 + 224) as &i64)
        field_32: v0
        field_40: 0
        field_48: v2
        field_56: *((a0 + 224) as &i64)
        field_64: v3
    };
    loop {
        v5 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v0) as u64;
        if !v5 {
            return (*((a0 + 96) as &i64) == 0x8000000000000000 ? 0 : *((a0 + 104) as &i64));
        } else if *(v5 as &i64) + 0x8000000000000000 == 3 {
            return (*((v5 + 8) as &i64) == 0x8000000000000000 ? 0 : *((v5 + 16) as &i64));
        }
    }
}
