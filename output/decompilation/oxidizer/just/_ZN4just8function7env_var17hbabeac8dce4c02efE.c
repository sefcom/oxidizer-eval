fn just::function::env_var(a1: i64, a2: &str) -> : struct32 {
    let a0: u64;  // rdi
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0xd0]
    let v1: struct24;  // [bp-0x78]
    let v2: struct24;  // [bp-0x68]
    let v3: alloc::string::String;  // [bp-0x58]
    let v4: alloc::string::String;  // [bp-0x48]
    let v5: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x40]
    let v6: u128;  // [bp-0x38]
    let v8: i64;  // rcx
    let v9: u64;  // rdx
    let v10: u64;  // rax

    v0 = v8;
    v10 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(*(*((*(a1 as &i64) + 8) as &i64) as &i64), *((*((*(a1 as &i64) + 8) as &i64) + 8) as &i64), v9, v8);
    if v10 {
        <alloc::string::String as core::clone::Clone>::clone(a0 + 8, v10);
    }
    v5 = std::env::var(a2);
    if !(v5 as i8 & 1) {
        return struct32 {
            field_0: 0
            field_8: v6
            field_24: *((&v5 as &char + 24) as &i64)
        };
    } else if (((0 ^ *((&v5 as &char + 8) as &i64)) & (0 ^ -(*((&v5 as &char + 8) as &i64)))) >> 63) as char {
        format!("environment variable `{}` not present", &a2);
        return struct8 {
            field_0: 1
        };
    } else {
        v2 = *((&v5 as &char + 24) as &i64);
        v1 = v6;
        v3 = format!("environment variable `{}` not unicode: {}", &a2, &v1);
        return struct32 {
            field_0: 1
            field_8: *(&v3.vec.buf.inner.cap as &i128)
            field_24: v4
        };
    }
}
