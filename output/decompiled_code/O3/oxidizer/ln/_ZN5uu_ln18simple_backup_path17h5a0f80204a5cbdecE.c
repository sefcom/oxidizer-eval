fn uu_ln::simple_backup_path(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64) -> int {
    let v0: i128;  // [sp-0x50], Other Possible Types: Result<struct16, struct10>, struct24
    let v1: i8;  // [bp-0x40]
    let v2: i128;  // [sp-0x38], Other Possible Types: struct16
    let v3: i64;  // [sp-0x28]
    let v5: i128;  // xmm0
    let v6: i64;  // rdx

    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a1, a2);
    match v0 {
        Ok(_) => {
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(*((&v0 as &char + 8) as &i64), v1);
            v3 = *((&v0 as &char + 16) as &i64);
            v5 = v0;
            v2 = v5;
            v2 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(a3, a4 + a3), v6);
            return struct24 {
                field_0: v2
                field_16: v3
            };
        },
        Err(_) => {
            core::option::unwrap_failed(); /* do not return */
        },
    }
}
