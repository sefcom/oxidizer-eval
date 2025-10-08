fn just::function::env_var_or_default(a1: i64, a2: &str, a3: i64, a4: i32) -> Result<struct24, struct24> {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xe8]
    let v1: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0xd8]
    let v2: u64;  // [bp-0xc0]
    let v3: alloc::string::String;  // [bp-0x98]
    let v4: u64;  // [bp-0x88]
    let v5: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x50]
    let v6: struct24;  // [bp-0x48], Other Possible Types: u128
    let v8: u64;  // rcx
    let v9: u64;  // rdx
    let v10: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // rax

    v2 = v8;
    v10 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(*(*((*(a1 as &i64) + 8) as &i64) as &i64), *((*((*(a1 as &i64) + 8) as &i64) + 8) as &i64), v9, v8);
    if v10 {
        <alloc::string::String as core::clone::Clone>::clone(a0 + 8, v10);
    }
    v5 = std::env::var(a2);
    if !(v5 as i8 & 1) {
        return Ok(struct24 {
            field_0: v6
            field_16: *((&v5 as &char + 24) as &i64)
        });
    } else if (((0 ^ *((&v5 as &char + 8) as &i64)) & (0 ^ -(*((&v5 as &char + 8) as &i64)))) >> 63) as char {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0 + 8, a3, a4);
    } else {
        v1 = *((&v5 as &char + 24) as &i64);
        v0 = v6;
        v3 = format!("environment variable `{}` not unicode: {}", &a2, &v0);
        return Err(struct24 {
            field_0: *(&v3.vec.buf.inner.cap as &i128)
            field_16: v4
        });
    }
}
