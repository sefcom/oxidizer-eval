fn uu_join::get_field_number(a1: i64, a2: i64, a3: i64, a4: i64) -> Result<struct16, struct16> {
    let a0: u64;  // rsi
    let v0: core::option::Option<u32>;  // [bp-0x90]
    let v1: u64;  // [bp-0x88]
    let v2: i64;  // [bp-0x80]
    let v3: u64;  // [bp-0x78]
    let v4: i64;  // [bp-0x70]
    let v5: u64;  // [bp-0x68]
    let v6: struct8;  // [bp-0x60], Other Possible Types: struct24
    let v7: struct8;  // [bp-0x58]
    let v8: struct8;  // [bp-0x50]
    let v9: struct8;  // [bp-0x48]
    let v10: struct48;  // [bp-0x40]
    let v11: u8;  // [bp-0x30]
    let v13: u64;  // [bp-0x10]
    let v14: u64;  // [bp-0x8]
    let v16: u64;  // r14
    let v17: u64;  // rbx
    let v18: i64;  // rdi
    let v19: i64;  // rdi
    let v20: i64;  // rdi

    if a0 != 1 {
        *((v19 + 8) as &void*) = a3;
        *(v19 as &i64) = 0;
        return;
    }
    if a2 == 1 && a1 != a3 {
        v14 = v16;
        v13 = v17;
        v0 = a1 + 1;
        v1 = a3 + 1;
        v2 = &v0;
        v3 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v4 = &v1;
        v5 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v6 = "incompatible join fields ";
        v7 = 2;
        v10 = 0;
        v8 = &v2;
        v9 = 2;
        v6 = core::option::Option<T>::map_or_else(a1 + 1);
        *(v20 as &double) = alloc::boxed::Box<T>::new(&v11);
        *((v20 + 8) as &&u8) = &g_5352b8;
        return;
    }
    *((v18 + 8) as &u64) = a1;
    *(v18 as &i64) = 0;
    return;
}
