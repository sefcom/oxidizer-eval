fn uu_ls::colors::color_name(a0: u32, a1: u64, a2: i64, a3: i64, a4: u64, a5: i64, a6: u8) -> long long {
    let v0: struct24;  // [bp-0x240], Other Possible Types: u64
    let v1: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x240]
    let v2: Result<struct176, struct16>;  // [bp-0x190], Other Possible Types: u64
    let v3: Result<struct176, struct16>;  // [bp-0xe0]
    let v4: u64;  // rax
    let v5: alloc::string::String;  // rcx
    let v6: u64;  // r13
    let v7: void*;  // rcx

    v4 = lscolors::LsColors::style_for_indicator(*(a3 as &i64), 17);
    if v4 {
        v0 = xattr::list(*((a2 + 32) as &i64), *((a2 + 40) as &i64));
        if core::result::Result<T,E>::is_ok_and(&v0) {
            return uu_ls::colors::StyleManager::apply_style(a0, a3, v4, a1, a6);
        }
    }
    if !*((a2 + 296) as &i8) && *((a2 + 0x100) as &i64) {
        return uu_ls::colors::StyleManager::apply_style_based_on_dir_entry(a0, a3, a2 + 0x100, a1, a6);
    }
    if a5 {
        v3 = uu_ls::get_metadata_with_deref_opt(*((a5 + 32) as &i64), *((a5 + 40) as &i64), *((a2 + 296) as &i8));
        match v3 {
            Err(_) => {
                v2 = uu_ls::colors::color_name::{{closure}}(*((a2 + 32) as &i64), *((a2 + 40) as &i64), *((&v3 as &char + 8) as &i64));
                if let Ok(_) = v2 {
                    goto LABEL_590a46;
                }
            },
            Ok(_) => {
                memcpy(&v2 as u8, &v3, 176);
                if v2 != 2 {
LABEL_590a46:
                    memcpy(&v0, &v2, 176);
                }
            },
        }
    } else {
        v6 = uu_ls::PathData::get_metadata(a2, a4);
        v1 = std::fs::symlink_metadata(*((a2 + 32) as &i64), *((a2 + 40) as &i64));
        if let Ok(_) = v1 {
            memcpy(&v2 as u8, &v1, 176);
        }
        if v6 {
            v5 = v6;
        } else {
            v5 = v7;
        }
    }
    return uu_ls::colors::StyleManager::apply_style_based_on_metadata(a0, a3, a2, v5, a1, a6);
}
