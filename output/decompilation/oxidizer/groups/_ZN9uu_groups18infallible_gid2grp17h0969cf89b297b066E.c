fn uu_groups::infallible_gid2grp(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x98]
    let v1: Result<struct32, struct16>;  // [bp-0x80], Other Possible Types: struct24
    let v2: u64;  // [bp-0x80]
    let v3: u64;  // [bp-0x78]
    let v4: u64;  // [bp-0x70]
    let v5: u64;  // [bp-0x30]
    let v6: u64;  // [bp-0x28]
    let v8: u64;  // rdx
    let v10: core::result::Result<(), core::fmt::Error>;  // rax

    v1 = <uucore::features::entries::Group as uucore::features::entries::Locate<u32>>::locate(*(a1 as &i32));
    if !((((0 ^ v1 as i64) & (0 ^ -(v2))) >> 63) as char) {
        return struct24 {
            field_0: v1 as i64
            field_8: v3
            field_16: v4
        };
    }
    v0 = 9223372036854775809;
    uucore::mods::error::set_exit_code(1);
    v5 = uucore::util_name();
    v6 = v8;
    eprintln!("{}: {}", &v5, &v0);
    v10 = core::fmt::num::imp::<impl u32>::_fmt(*(a1 as &i32), &v1 as u128) as u64;
    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(&v10 as &i64), v8);
    return struct24 {
        field_0: *(&v1.field_0 as &i128)
        field_16: v4
    };
}
