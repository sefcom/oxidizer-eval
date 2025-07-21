fn uu_pr::header_content(a1: i64, a2: i64) -> Result<struct24, struct24> {
    let a0: i64;  // rsi
    let v0: u64;  // [bp-0x88]
    let <0x5c88d0[is_2]|Stack bp-0x68, 1 B>: i64;  // [bp-0x68]
    let v1: struct48;  // [bp-0x80]
    let v2: u64;  // [bp-0x70]
    let v3: struct88;  // [bp-0x68]
    let v4: struct24;  // [bp-0x38]
    let v6: i64;  // rdi
    let v7: core::result::Result<core::ptr::non_null::NonNull<[u8]>, core::alloc::AllocError>;  // rax
    let v8: u64;  // rdi

    v0 = a1;
    if !*((a0 + 321) as &i8) {
        *(v6 as &i64) = 0;
        *((v6 + 8) as &i64) = 8;
        *((v6 + 16) as &i64) = 0;
        return;
    }
    v3 = struct88 {
        field_0: a0 + 120
        field_8: <alloc::string::String as core::fmt::Display>::fmt
        field_16: a0 + 48
        field_24: <alloc::string::String as core::fmt::Display>::fmt
        field_32: &v0
        field_40: core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt
        field_48: &g_709590
        field_56: 3
        field_64: &<0x5c88d0[is_2]|Stack bp-0x68, 1 B> as u64
        field_72: 3
        field_80: 0
    };
    v4 = core::option::Option<T>::map_or_else(a1);
    v7 = alloc::alloc::Global::alloc_impl(0x8, 120, a1) as u64;
    *(v7 as &i64) = 0;
    *((v7 + 8) as &i64) = 1;
    *((v7 + 16) as &i128) = 0;
    *((v7 + 32) as &i64) = 1;
    *((v7 + 40) as &i64) = 0;
    *((v7 + 48) as &struct48) = v1;
    *((v7 + 64) as &u64) = v2;
    *((v7 + 72) as &i64) = 0;
    *((v7 + 80) as &i64) = 1;
    *((v7 + 88) as &i128) = 0;
    *((v7 + 104) as &i64) = 1;
    *((v7 + 112) as &i64) = 0;
    alloc::slice::hack::into_vec(v8, v7, 5);
    return;
}
