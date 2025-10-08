fn uu_ls::display_item_long(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i32) -> u64 {
    let v0: u8;  // [bp-0xe9]
    let v1: struct8;  // [bp-0xe8]
    let v2: struct8;  // [bp-0xe8]
    let v3: struct8;  // [bp-0xe8]
    let v4: struct8;  // [bp-0xe8]
    let v5: u64;  // [bp-0xe8]
    let v6: struct8;  // [bp-0xe8]
    let v7: u32;  // [bp-0xe0]
    let v8: void*;  // [bp-0xd8]
    let v9: Option<struct48>;  // [bp-0xc8], Other Possible Types: Result<struct24, struct24>, struct24
    let v10: struct24;  // [bp-0xc8]
    let v11: Result<struct24, struct24>;  // [bp-0xc8]
    let v12: u64;  // [bp-0xc8]
    let v13: u64;  // [bp-0xc0]
    let v14: u64;  // [bp-0xc0]
    let v15: u64;  // [bp-0xb8]
    let v16: u64;  // [bp-0xb8]
    let v17: u64;  // [bp-0xb0]
    let v18: u64;  // [bp-0xa8]
    let v19: u64;  // [bp-0xa0]
    let v20: struct24;  // [bp-0x98]
    let v21: i64;  // [bp-0x88]
    let v22: u32;  // [bp-0x7c]
    let v23: u64;  // [bp-0x70]
    let v24: u64;  // [bp-0x68]
    let v25: u64;  // [bp-0x60]
    let v26: u64;  // [bp-0x58]
    let v27: u64;  // [bp-0x48]
    let v28: struct24;  // [bp-0x40]
    let v29: i8;  // [bp-0x38]
    let v31: i64;  // r15
    let v32: u8;  // al
    let v33: u64;  // rax
    let v34: struct16;  // rdx
    let v35: std::env::ArgsOs;  // cc_ndep
    let v36: i64;  // rax
    let v37: i64;  // rax
    let v38: i64;  // rax
    let v40: struct24;  // r15
    let v41: Option<struct48>;  // r13
    let v43: u64;  // rsi
    let v46: u64;  // r15
    let v47: u64;  // rax
    let v48: void*;  // rbx
    let v49: &str;  // rax:rdx

    v22 = a5;
    v5 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(128, 1, 1, "src/uu/ls/src/ls.rs");
    v8 = 0;
    if *((a3 + 133) as &i8) != 2 {
        v11 = uu_ls::colors::StyleManager::apply_normal(a3 + 104);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v5, v14, v16 + v14);
    }
    v0 = *((a2 + 246) as &i8);
    if *((a2 + 246) as &i8) {
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v5, &g_4d2809, &g_4d280b);
    }
    v31 = uu_ls::PathData::get_metadata(a0, a3);
    if v31 {
        v9 = xattr::list(a0[8] as i64, a0[16] as i64);
        v32 = core::result::Result<T,E>::is_ok_and(&v9);
        v9 = uucore::features::fs::display_permissions(v31, 1);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v5, v14, v16 + v14);
        v33 = a0[64] as i64;
        if 2 <= v33 || v32 {
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v5, (_ccall(3, 8, v33, 2, v35) as char ? &g_4d164b : &g_4d420b), v34);
        }
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v5, &g_4d1d8f, &g_4d1d90);
        v9 = uu_ls::display_symlink_count(*((v31 + 48) as &i64));
        <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_left(&v5, v14, v16, a1[8] as i64);
        if *((a2 + 234) as &i8) {
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v5, &g_4d1d8f, &g_4d1d90);
            v36 = uu_ls::display_uname(*((v31 + 60) as &i32), *((a2 + 235) as &i8), a3);
            v1 = <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_right(*((v36 + 8) as &i64), *((v36 + 16) as &i64), a1[16] as i64);
        }
        if *((a2 + 233) as &i8) {
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v1, &g_4d1d8f, &g_4d1d90);
            v37 = uu_ls::display_group(*((v31 + 64) as &i32), *((a2 + 235) as &i8), a3);
            v3 = <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_right(*((v37 + 8) as &i64), *((v37 + 16) as &i64), a1[24] as i64);
        }
        if *((a2 + 243) as &i8) {
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v1, &g_4d1d8f, &g_4d1d90);
            v3 = <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_right(a0[56] as i64, a0[64] as i64, a1[32] as i64);
        }
        if *((a2 + 232) as &i8) {
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v1, &g_4d1d8f, &g_4d1d90);
            v38 = uu_ls::display_uname(*((v31 + 60) as &i32), *((a2 + 235) as &i8), a3);
            v4 = <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_right(*((v38 + 8) as &i64), *((v38 + 16) as &i64), a1[16] as i64);
        }
        v9 = uu_ls::display_len_or_rdev(v31, *((a2 + 208) as &i64), *((a2 + 249) as &i8));
        if (((0 ^ v9 as i64) & (0 ^ -(v12))) >> 63) as char {
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v3, &g_4d1d8f, &g_4d1d90);
            <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_left(&v3, v16, v17, a1[40] as i64);
        } else {
            v26 = v18;
            v25 = v19;
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v3, &g_4d1d8f, &g_4d1d90);
            <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_left(&v3, v14, v16, core::cmp::Ord::max(a1[48] as i64, ((_ccall(3, 4, a1[56] as i64, 2, v35) as char ? a1[56] as i64 + 2 : -1) <= a1[40] as i64 ? a1[40] as i64 - (_ccall(3, 4, a1[56] as i64, 2, v35) as char ? a1[56] as i64 + 2 : -1) : 0)));
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v3, &g_4d1ec7, &g_4d1ec9);
            <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_left(&v3, v26, v25, a1[56] as i64);
        }
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v3, &g_4d1d8f, &g_4d1d90);
        v9 = uu_ls::display_date(v31, *((a2 + 251) as &i8), a3);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v3, v14, v16 + v14);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v3, &g_4d1d8f, &g_4d1d90);
        v20 = struct24 {
            field_0: 0
            field_8: ""
        };
        v9 = struct24 {
            field_0: 0
            field_8: alloc::boxed::Box<T>::new(&v3)
            field_16: &g_686ce8
        };
        uu_ls::display_item_name(&v27, a0, a2, 0, a4, &v20, a3, &v9);
        v40 = v28;
        v41 = *(&v29 as &i64);
        if !(!*((&v11 as &char + 76) as &i8) || uu_ls::os_str_starts_with(v40, v41, &g_4d4209)) {
            v9 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(" ");
            v20 = v10;
            std::ffi::os_str::OsString::push(&v20, &v27);
            v40 = 1;
            v41 = v21;
            if v0 {
LABEL_59dd52:
                uu_ls::dired::update_positions(a4, (!*((a4 + 16) as &i64) ? 0 : *((*((a4 + 8) as &i64) + *((a4 + 16) as &i64) * 16 - 8) as &i64) + 1) + v8, (!*((a4 + 16) as &i64) ? 0 : *((*((a4 + 8) as &i64) + *((a4 + 16) as &i64) * 16 - 8) as &i64) + 1) + v8 + v41);
            }
        } else if !(!v0) {
            goto LABEL_59dd52;
        }
        uu_ls::write_os_str(&v3, v40, v41);
        v9 = <T as alloc::string::SpecToString>::spec_to_string(a2 + 258);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v3, v13, v15 + v13);
    } else {
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v5, v43, v43 + 1);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v5, &g_4d420c, &g_4d4215);
        if a0[64] as i64 >= 2 {
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v5, &g_4d164b, &g_4d164c.field_0);
        }
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v5, &g_4d1d8f, &g_4d1d90);
        <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_left(&v5, "?", a1[8] as i64);
        if *((a2 + 234) as &i8) {
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v5, &g_4d1d8f, &g_4d1d90);
            v6 = <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_right("?", a1[16] as i64);
        }
        if *((a2 + 233) as &i8) {
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v5, &g_4d1d8f, &g_4d1d90);
            v1 = <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_right("?", a1[24] as i64);
        }
        if *((a2 + 243) as &i8) {
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v1, &g_4d1d8f, &g_4d1d90);
            v2 = <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_right(a0[56] as i64, a0[64] as i64, a1[32] as i64);
        }
        if *((a2 + 232) as &i8) {
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v1, &g_4d1d8f, &g_4d1d90);
            v3 = <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_right("?", a1[16] as i64);
        }
        v20 = struct24 {
            field_0: 0
            field_8: ""
        };
        v11 as u192 = struct24 {
            field_0: 0
            field_8: alloc::boxed::Box<T>::new(&v2)
            field_16: &g_686d08
        };
        uu_ls::display_item_name(&v11 as u8, a0, a2, 0, a4, &v20, a3, &v11 as u192);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v2, &g_4d1d8f, &g_4d1d90);
        <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_left(&v2, "?", a1[40] as i64);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v2, &g_4d1d8f, &g_4d1d90);
        <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_left(&v2, "?", 12);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v2, &g_4d1d8f, &g_4d1d90);
        if v0 {
            v9 = alloc::string::String::from_utf8_lossy(v23, v24);
            v49 = core::str::<impl str>::trim_matches(v13, v15, a2);
            uu_ls::dired::calculate_and_update_positions(a4, v8, v49.data_ptr);
        }
        uu_ls::write_os_str(&v2, v23, v24);
        v9 = <T as alloc::string::SpecToString>::spec_to_string(a2 + 258);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v2, v13, v15 + v13);
    }
    v46 = *((a3 + 16) as &i64);
    if v8 < *(a3 as &i64) - v46 {
        memcpy(*((a3 + 8) as &i64) + v46, v7, v8);
        *((a3 + 16) as &void*) = v46 + v8;
    } else {
        v47 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v7, v8);
        if v47 {
            v48 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v47);
        }
    }
    return v48;
}
