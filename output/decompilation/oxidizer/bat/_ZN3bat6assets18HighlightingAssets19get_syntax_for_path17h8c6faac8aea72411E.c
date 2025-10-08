fn bat::assets::HighlightingAssets::get_syntax_for_path(a0: void*, a1: u64, a2: i64, a3: void*) -> void {
    let v0: i64;  // [bp-0xd8]
    let v1: Result<struct24, struct24>;  // [sp-0xd0], Other Possible Types: u704
    let v2: Result<struct81, struct17>;  // [sp-0xd0], Other Possible Types: u704
    let v3: struct17;  // [bp-0xd0]
    let v4: struct24;  // [bp-0xd0]
    let v5: u128;  // [bp-0xc9]
    let v6: u64;  // [bp-0xb9]
    let v7: u128;  // [bp-0xb8]
    let v8: u128;  // [bp-0xa8]
    let v9: u128;  // [bp-0x98]
    let v10: u64;  // [bp-0x88]
    let v11: alloc::string::String;  // [sp-0x78], Other Possible Types: u128
    let v12: u64;  // [bp-0x68]
    let v13: struct8;  // [bp-0x60]
    let v14: void*;  // [bp-0x58]
    let v15: u8;  // [bp-0x50]
    let v19: u64;  // rax
    let v20: void*;  // rbx
    let v21: u64;  // rbp
    let v22: u64;  // rax
    let v23: u64;  // rcx
    let v24: void*;  // rdx
    let v25: u8;  // al
    let v26: u32;  // ecx
    let v27: void*;  // rsi
    let v28: iNone;  // xmm0
    let v29: u64;  // rax
    let v30: u64;  // rax
    let v31: u64;  // rcx
    let v32: u32;  // ecx
    let v33: &std::path::Path;  // rax:rdx

    v33 = std::path::<impl core::convert::AsRef<std::path::Path> for alloc::string::String>::as_ref(*((a2 + 8) as &i64));
    v13 = bat::syntax_mapping::SyntaxMapping::get_syntax_for(a3, v33.data_ptr, v33.length);
    if v13 {
        if v13 as u32 == 1 {
            v1 = alloc::string::String::from_utf8_lossy(v33.data_ptr, v33.length);
            v11 = <alloc::string::String as core::convert::From<alloc::borrow::Cow<str>>>::from(&v1);
        } else {
            std::path::Path::file_name(v33.data_ptr, v33.length);
            v21 = a3 + 24;
            v2 = bat::assets::HighlightingAssets::get_syntax_for_file_name(a1, v19, v20, v21);
            if &v2 != "\r" {
                v26 = *((&v2 as &char + 1) as &i32);
                v27 = a0;
                *((v0 + 4) as &i32) = *((&v2 as &char + 4) as &i32);
                *((v0 + 1) as &u32) = v26;
                *((v0 + 40) as &u128) = v8;
                *((v0 + 56) as &u128) = v9;
                *((v0 + 72) as &u64) = v10;
                *((v0 + 24) as &u128) = v7;
                *(v27 as &u8) = v25;
                v27[8] = v28;
                return;
            } else if *((&v2 as &char + 8) as &i64) {
                *(&a0[8] as &u64) = v22;
                *(&a0[16] as &u64) = v23;
                *(a0 as &i8) = 13;
                return;
            } else if v13 as u32 == 2 {
                v1 = alloc::string::String::from_utf8_lossy(v33.data_ptr, v33.length);
                v11 = <alloc::string::String as core::convert::From<alloc::borrow::Cow<str>>>::from(&v1);
            } else {
                v2 = bat::assets::HighlightingAssets::get_syntax_for_file_extension(a1, v19, v20, v21);
                if &v2 != "\r" {
                    v26 = *((&v2 as &char + 1) as &i32);
                    v27 = a0;
                    *((v0 + 4) as &i32) = *((&v2 as &char + 4) as &i32);
                    *((v0 + 1) as &u32) = v26;
                    *((v0 + 40) as &u128) = v8;
                    *((v0 + 56) as &u128) = v9;
                    *((v0 + 72) as &u64) = v10;
                    *((v0 + 24) as &u128) = v7;
                    *(v27 as &u8) = v25;
                    v27[8] = v28;
                    return;
                } else if *((&v2 as &char + 8) as &i64) {
                    *(&a0[8] as &u64) = v22;
                    *(&a0[16] as &u64) = v23;
                    *(a0 as &i8) = 13;
                    return;
                } else {
                    v1 = alloc::string::String::from_utf8_lossy(v33.data_ptr, v33.length);
                    v11 = <alloc::string::String as core::convert::From<alloc::borrow::Cow<str>>>::from(&v1);
                }
            }
        }
        v5 = v11;
        v6 = v12;
        v24 = a0;
        *(v0 as &i8) = 7;
        v30 = *((&v1 as &char + 15) as &i64);
        v31 = *((&v1 as &char + 23) as &i64);
        *(&v24[1] as &i128) = v1;
        *(&v24[16] as &u64) = v30;
        *(&v24[24] as &u64) = v31;
        return;
    } else {
        v3 = bat::assets::HighlightingAssets::find_syntax_by_token(a1, v14, *(&v15 as &i64));
        if &v3 != "\r" {
            v32 = *(&(&v3.field_0)[1] as &i32);
            v27 = a0;
            *((v0 + 4) as &u32) = v3.field_1;
            *((v0 + 1) as &u32) = v32;
            *((v0 + 24) as &u128) = v7;
            *((v0 + 40) as &u128) = v8;
            *((v0 + 56) as &u128) = v9;
            *((v0 + 72) as &u64) = v10;
            *(v27 as &u8) = v25;
            v27[8] = v28;
            return;
        } else if *(&v3.field_4 as &i64) {
            *(&a0[8] as &u64) = v22;
            *(&a0[16] as &u64) = v23;
            *(a0 as &i8) = 13;
            return;
        } else {
            v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v14, *(&v15 as &i64));
            v29 = v4.field_16;
            v5 = *(&v4.field_0 as &i128);
            v6 = v29;
            v24 = a0;
            *(v0 as &i8) = 8;
            v30 = *((&v1 as &char + 15) as &i64);
            v31 = *((&v1 as &char + 23) as &i64);
            *(&v24[1] as &i128) = v1;
            *(&v24[16] as &u64) = v30;
            *(&v24[24] as &u64) = v31;
            return;
        }
    }
}
