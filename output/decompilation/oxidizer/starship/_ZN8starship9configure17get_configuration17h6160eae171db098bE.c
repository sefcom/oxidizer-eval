fn starship::configure::get_configuration() -> Result<struct80, struct75> {
    let a0: i64;  // rdi
    let v0: Option<struct24>;  // [bp-0x78]
    let v1: u64;  // [bp-0x78]
    let v2: void*;  // [bp-0x70]
    let v3: u64;  // [bp-0x68]
    let v4: struct80;  // [bp-0x60]
    let v5: u128;  // [bp-0x58]
    let v6: u128;  // [bp-0x48]
    let v7: u128;  // [bp-0x38]
    let v8: iNone;  // [bp-0x28]
    let v11: void*;  // rsi
    let v12: u64;  // rax
    let v13: struct16;  // rax
    let v14: void*;  // rax
    let v15: u64;  // rdx
    let v16: u64;  // rax

    v0 = starship::context::Context::get_config_path_os();
    v11 = 0;
    if !((((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char) {
        v11 = v2;
    }
    v4 = starship::config::StarshipConfig::initialize(v11, v3);
    v12 = v4.field_0;
    if v4.field_0 != 0x8000000000000000 {
        *((a0 + 72) as &u64) = v4.field_72;
        *((a0 + 56) as void*) = v8;
        *((a0 + 40) as &u128) = v7;
        *((a0 + 24) as &u128) = v6;
        *((a0 + 8) as &u128) = v5;
    }
    v13 = std::thread::local::LocalKey<T>::with();
    v14 = 0;
    return Ok(struct80 {
        field_0: v16
        field_8: 8
        field_16: 0
        field_24: g_11ed458.field_0
        field_40: g_11ed468.field_0
        field_56: v13
        field_64: v15
        field_72: 0
        field_74: 0
    });
}
