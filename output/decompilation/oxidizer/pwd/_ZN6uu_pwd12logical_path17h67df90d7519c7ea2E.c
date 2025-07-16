fn uu_pwd::logical_path() -> Result<struct24, struct16> {
    let a0: i64;  // rsi
    let v0: struct24;  // [bp-0x40]
    let v1: u32;  // [bp-0x38]
    let v2: u32;  // [bp-0x30]
    let v3: struct24;  // [bp-0x28]
    let v5: i64;  // rdi
    let v6: u64;  // rsi

    v3 = std::env::var_os("PWD");
    if v3.field_0 != 0x8000000000000000 {
        v0 = core::ops::function::FnOnce::call_once(&v3);
        if v0.field_0 != 0x8000000000000000 && uu_pwd::logical_path::looks_reasonable(v1, v2) as i8 {
            *((v5 + 16) as &u32) = v2;
            *(v5 as &i128) = *(&v0.field_0 as &i128);
            return;
        }
    }
    std::env::current_dir(v6);
    return;
}
