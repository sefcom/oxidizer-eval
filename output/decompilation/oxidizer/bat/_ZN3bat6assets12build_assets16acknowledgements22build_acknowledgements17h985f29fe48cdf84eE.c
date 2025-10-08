fn bat::assets::build_assets::acknowledgements::build_acknowledgements(a0: i64, a1: u64, a2: u64, a3: u32) -> int {
    let v0: u8;  // [bp-0x2f8]
    let v1: void*;  // [bp-0x2f0]
    let v2: iNone;  // [bp-0x2e8], Other Possible Types: struct16
    let v3: struct8;  // [bp-0x2d8]
    let v4: struct24;  // [bp-0x2d8]
    let v5: u64;  // [bp-0x2c8]
    let v6: struct33;  // [bp-0x2c0]
    let v7: u64;  // [bp-0x2c0]
    let v8: u32;  // [bp-0x2bc]
    let v9: struct16;  // [bp-0x2b8]
    let v10: struct16;  // [bp-0x2b0]
    let v11: u128;  // [bp-0x2a0]
    let v12: u128;  // [bp-0x290]
    let v13: u128;  // [bp-0x280]
    let v14: struct72;  // [bp-0x270]
    let v19: core::iter::adapters::flatten::FlattenCompat<core::iter::adapters::map::Map<core::str::iter::Chars, std::sys_common::wtf8::{impl#10}::fmt::write_str_escaped::{closure_env#0}>, core::char::EscapeDebug>;  // [bp-0x228]
    let v20: u64;  // [bp-0x1f0]
    let v21: u64;  // [bp-0x1e8]
    let v22: struct60;  // [bp-0x1e0], Other Possible Types: u64
    let v23: u64;  // [bp-0x1d8]
    let v24: i64;  // [bp-0x1d0]
    let v25: u128;  // [bp-0x1c8]
    let v44: u8;  // al
    let v45: &std::path::Path;  // ecx
    let v46: u64;  // rcx

    if !a3 {
        return struct16 {
            field_0: 13
            padding_1: <UNKNOWN>
            field_8: 0x8000000000000000
        };
    }
    v22 = "Copyright (c) 2018-2021 bat-developers (https://github.com/sharkdp/bat).\n\nbat is made available under the terms of either the MIT License or the Apache\nLicense 2.0, at your option.\n\nSee the LICENSE-APACHE and LICENSE-MIT files for license details.\n\n\n";
    v23 = 1;
    v24 = &v0;
    v25 = 0;
    v4 = core::option::Option<T>::map_or_else("Copyright (c) 2018-2021 bat-developers (https://github.com/sharkdp/bat).\n\nbat is made available under the terms of either the MIT License or the Apache\nLicense 2.0, at your option.\n\nSee the LICENSE-APACHE and LICENSE-MIT files for license details.\n\n\n", &v22);
    v22 = walkdir::WalkDir::new(a1, a2);
    v14 = walkdir::WalkDir::sort_by(&v22);
    loop {
        <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v19);
        if v19.iter.iter as i64 == 0x8000000000000000 {
            *(&v1[24] as &u64) = v5;
            *(&v1[8] as &struct8) = v3;
            *(v1 as &i8) = 13;
            return;
        }
        v6 = bat::assets::build_assets::acknowledgements::handle_file(&v19);
        v44 = v6.field_0;
        if v44 != 13 {
            v45 = *(&(&v6.field_0)[1] as &i32);
            *(&v1[4] as &u32) = v8;
            *(&v1[1] as &&std::path::Path) = v45;
            v46 = v6.field_1;
            v2 = v10;
            *(&v1[64] as &u128) = v13;
            *(&v1[48] as &u128) = v12;
            *(&v1[32] as &u128) = v11;
            v1[16] = v2;
            *(v1 as &u8) = v44;
            *(&v1[8] as &u64) = v46;
            return;
        }
        v2 = v10;
        if v6.field_1 as i64 != 0x8000000000000000 {
            v7 = v6.field_1;
            v9 = v2;
            v3 = bat::assets::build_assets::acknowledgements::append_to_acknowledgements(v20, v21, v9.field_0 as i64, *((&v9.field_0 as &char + 8) as &i64));
        }
    }
}
