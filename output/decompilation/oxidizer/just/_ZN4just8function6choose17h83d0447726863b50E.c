fn just::function::choose(a0: u64, a1: i64, a2: u64, a3: u64, a4: u64, a5: u64) -> long long {
    let v0: u8;  // [bp-0x121]
    let v1: void*;  // [bp-0x120]
    let v2: i32;  // [bp-0x118]
    let v3: u64;  // [bp-0x100]
    let v4: struct32;  // [bp-0xe0]
    let v5: alloc::string::String;  // [bp-0xb0]
    let v6: u64;  // [bp-0xb0]
    let v7: u64;  // [bp-0xa8]
    let v8: u8;  // [bp-0x98]
    let v9: u8;  // [bp-0x97]
    let v11: struct16;  // [bp-0x88]
    let v12: struct32;  // [bp-0x78]
    let v13: alloc::string::String;  // [bp-0x48]
    let v16: u32;  // rdx
    let v18: u64;  // rdx
    let v19: struct24;  // rbx
    let v20: struct24;  // xmm0
    let v21: core::option::Option<u32>;  // rax:rax
    let v22: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v23: core::option::Option<u32>;  // rax:rax

    v11 = struct16 {
        field_0: a2
        field_8: a3
    };
    v12 = hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(a5, std::thread::local::LocalKey<T>::with(), v16);
    v6 = a4;
    v7 = a5 + a4;
    v21 = core::str::validations::next_code_point(&v6) as u128;
    if let Some(_) = v21 {
        do {
            v2 = v18 as u32;
            if hashbrown::map::HashMap<K,V,S,A>::insert(&v12, v18 & 4294967295) as u8 {
                v13 = format!("alphabet contains repeated character `{}`", &v2);
                v19 = a0;
                *(&v1[24] as &u64) = v13.vec.len;
                *(&v1[8] as &i128) = *(&v13.vec.buf.inner.cap as &i128);
                *(v1 as &i64) = 1;
                return v19;
            }
            v23 = core::str::validations::next_code_point(&v6) as u128;
        } while ((v23 as i8 & 1));
    }
    core::iter::traits::iterator::Iterator::collect(&v2, a4, v7);
    v22 = core::num::<impl usize>::from_ascii_radix(&v8, a2, a3);
    if v8 {
        v0 = v9;
        v5 = format!("failed to parse `{}` as positive integer: {}", &v11, &v0);
        if !((((0 ^ v5.vec.buf.inner.cap.__0) & (0 ^ -(v6))) >> 63) as char) {
            v20 = *(&v5.vec.buf.inner.ptr as &i128);
            v19 = a0;
            *(&v1[8] as &u64) = v5.vec.buf.inner.cap.__0;
            *(&v1[16] as &struct24) = v20;
            *(v1 as &i64) = 1;
            return v19;
        }
    }
    v3 = rand::rngs::thread::rng();
    v4 = struct32 {
        field_0: &v2
        field_8: &v3
        field_16: 0
        field_24: v7
    };
    core::iter::traits::iterator::Iterator::collect(a0, &v4);
    v19 = a0;
    return v19;
}
