fn uu_ln::simple_backup_path(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64) -> int {
    let v0: u64;  // [sp-0x50], Other Possible Types: struct16, Enum
    let v1: u64;  // [sp-0x48]
    let v2: u64;  // [sp-0x40]
    let v3: void*;  // [sp-0x38], Other Possible Types: u64
    let v5: u64;  // r12
    let v7: u64;  // r13
    let v9: u64;  // r12
    let v10: u128;  // xmm0
    let v11: u256;  // ymm0

    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a1, a2);
    if v0 {
        core::option::unwrap_failed(); /* do not return */
    }
    v5 = v2;
    if v5 {
        if v5 < 0 {
            v3 = 0;
        }
        v3 = 1;
    }
    memcpy(v1, v1, v5);
    v0 = v5;
    v1 = v7;
    v2 = v5;
    if !a4 {
        memcpy(v1 + v9, a3, a4);
        v2 = v9 + a4;
        v10 = v0;
        a0->field_0 = v10;
        a0->field_10 = v2;
        return Conv(256->64, ((vvar_115{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_114{reg 224})));
    }
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v5, a4);
    v9 = v2;
}
