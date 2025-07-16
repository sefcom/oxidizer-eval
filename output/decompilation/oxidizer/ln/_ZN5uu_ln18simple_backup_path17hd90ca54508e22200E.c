fn uu_ln::simple_backup_path(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x50], Other Possible Types: core::result::Result<&str, core::str::error::Utf8Error>
    let v1: void*;  // [bp-0x48]
    let v2: u32;  // [bp-0x40]
    let v3: u8;  // [bp-0x38]
    let v4: u64;  // [bp-0x28]
    let v7: &str;  // rax:rdx

    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a1, a2);
    match v0 {
        Err(_) => {
            core::option::unwrap_failed(); /* do not return */
        },
        Ok(_) => {
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v1, v2);
            v4 = v2;
            memcpy(&v3, &v0, 16);
            v7 = core::slice::iter::Iter<T>::make_slice(a3);
            alloc::vec::Vec<T,A>::append_elements(&v3, v7.data_ptr, a2);
            return struct24 {
                field_0: v3
                field_16: v4
            };
        },
    }
}
