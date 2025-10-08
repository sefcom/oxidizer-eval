fn just::parser::Parser::parse_disjunct(a1: i64) -> : struct128 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x268], Other Possible Types: struct65
    let v1: Result<struct40, struct16>;  // [bp-0x258], Other Possible Types: struct17
    let v2: iNone;  // [bp-0x248], Other Possible Types: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>
    let v3: &mut [u8];  // [bp-0x238], Other Possible Types: int
    let v4: iNone;  // [bp-0x228], Other Possible Types: alloc::string::String
    let v5: struct24;  // [bp-0x210]
    let v6: struct128;  // [bp-0x208]
    let v7: struct82;  // [bp-0x208]
    let v8: struct89;  // [bp-0x208]
    let v9: struct128;  // [bp-0x208]
    let v10: struct65;  // [bp-0x1f8]
    let v11: struct81;  // [bp-0x1e8]
    let v12: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // [bp-0x1d8]
    let v13: &mut [u8];  // [bp-0x1c8]
    let v14: u8;  // [bp-0x1c0]
    let v15: u32;  // [bp-0x1bc]
    let v16: alloc::string::String;  // [bp-0x1b8]
    let v17: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0x1a8]
    let v18: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // [bp-0x198]
    let v19: u64;  // [bp-0x190]
    let v20: struct16;  // [bp-0x188]
    let v21: struct65;  // [bp-0x180]
    let v22: core::fmt::rt::Argument;  // [bp-0x178]
    let v23: struct17;  // [bp-0x170]
    let v24: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // [bp-0x160]
    let v25: &mut [u8];  // [bp-0x150]
    let v26: alloc::string::String;  // [bp-0x140]
    let v27: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0x130]
    let v28: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // [bp-0x120]
    let v29: u64;  // [bp-0x110]
    let v30: alloc::string::String;  // [bp-0x108]
    let v31: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // [bp-0xf8]
    let v32: &mut [u8];  // [bp-0xe8]
    let v33: alloc::string::String;  // [bp-0xd8]
    let v34: struct103;  // [bp-0xc8]
    let v35: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // [bp-0xb8]
    let v36: struct72;  // [bp-0xa8]
    let v37: struct128;  // [bp-0xa0]
    let v39: struct144;  // r12
    let v40: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // xmm0
    let v41: u8;  // al
    let v42: struct89;  // xmm0
    let v43: core::result::Result<usize, core::num::error::ParseIntError>;  // xmm1
    let v44: struct81;  // xmm2
    let v45: struct24;  // r15
    let v46: core::fmt::rt::Argument;  // rax
    let v47: core::fmt::rt::Argument;  // xmm0
    let v48: struct16;  // xmm1
    let v49: alloc::string::String;  // xmm2

    v6 = just::parser::Parser::parse_conjunct(a1);
    v39 = v6.field_0 as i64;
    v0 = *((&v6.field_0 as &char + 8) as &i128);
    v1 = *((&v6.field_16 as &char + 8) as &i128);
    v2 = *((&v6.field_32 as &char + 8) as &i128);
    v3 = *((&v6.field_48 as &char + 8) as &i128);
    v4 = *((&v6.field_64 as &char + 8) as &i128);
    if v39 == 18 {
        return struct88 {
            field_0: 18
            field_8: v0
            field_24: v1
            field_40: v2
            field_56: v3
            field_72: v4
        };
    }
    v29 = v19;
    v40 = *((&v6.field_80 as &char + 8) as &i128);
    *(&v28.range.front as &i128) = *((&v6.field_96 as &char + 8) as &i128);
    v27 = v40;
    v21 = v0;
    v23 = v1;
    v24 = v2;
    v25 = v3;
    v26 = v4;
    v20 = v39;
    v8 as u704 = just::parser::Parser::accepted(a1, 0);
    v41 = v7.field_0;
    if v14 != 37 {
        v47 = *((&v7.field_0 as &char + 1) as &i128);
        v48 = *((&v7.field_16 as &char + 1) as &i128);
        v49 = *((&v7.field_32 as &char + 1) as &i128);
        return struct104 {
            field_0: 18
            field_8: v41
            field_9: <UNKNOWN>
            field_25: <UNKNOWN>
            field_41: <UNKNOWN>
            field_57: <UNKNOWN>
            field_72: v14
            field_80: <UNKNOWN>
            field_81: <UNKNOWN>
            field_84: <UNKNOWN>
        };
    }
    if (v41 & 1) {
        alloc::collections::btree::map::BTreeMap<K,V,A>::insert(a1 + 104, 1);
        *(&v18.range.front as &i128) = *((&v28.range.front as &char + 8) as &i128);
        *(&v17.b as &i128) = *((&v27.b as &char + 8) as &i128);
        *(&v16.vec.buf.inner.cap as &i128) = *(&v26.vec.buf.inner.ptr as &i128);
        *(&v13.data_ptr as &i128) = *(&v25.length as &i128);
        v42 = *(&v20.field_0 as &i128);
        v43 = *((&v21.field_0 as &char + 8) as &i128);
        v44 = *(&v23.field_8 as &i128);
        *(&v12.range.front as &i128) = *((&v24.range.front as &char + 8) as &i128);
        v11 = v44;
        *(&v10.field_0 as &core::result::Result<usize, core::num::error::ParseIntError>) = v43;
        v8 = v42;
        v45 = alloc::boxed::Box<T>::new(&v8 as u704) as u64;
        v5 = v45;
        v9 = just::parser::Parser::parse_disjunct(a1);
        v0 = *((&v9.field_0 as &char + 8) as &i128);
        v1 = *((&v9.field_16 as &char + 8) as &i128);
        v2 = *((&v9.field_32 as &char + 8) as &i128);
        v3 = *((&v9.field_48 as &char + 8) as &i128);
        v4 = *((&v9.field_64 as &char + 8) as &i128);
        if v9.field_0 as i64 == 18 {
            return struct88 {
                field_0: 18
                field_8: v0
                field_24: v1
                field_40: v2
                field_56: v3
                field_72: v4
            };
        }
        v37 = struct128 {
            field_0: v9.field_0 as i64
            field_8: v0
            field_24: v1
            field_40: v2
            field_56: v3
            field_72: v4
            field_88: *((&v9.field_80 as &char + 8) as &i128)
            field_104: *((&v9.field_96 as &char + 8) as &i128)
            field_120: v19
        };
        v46 = alloc::boxed::Box<T>::new(&v37) as u64;
    } else {
        v45 = v21.field_0 as i64;
        v46 = v22;
        v30 = *(&v23.field_0 as &i128);
        v31 = v24.range.front as i128;
        v32 = *(&v25.data_ptr as &i128);
        v33 = *(&v26.vec.buf.inner.cap as &i128);
        v34 = v27.b as i128;
        v35 = v28.range.front as i128;
        v36 = v29;
    }
    return struct128 {
        field_0: v39
        field_8: v45
        field_16: v46
        field_24: v30
        field_40: v31
        field_56: v32
        field_72: v33
        field_88: v34
        field_104: v35
        field_120: v36
    };
}
