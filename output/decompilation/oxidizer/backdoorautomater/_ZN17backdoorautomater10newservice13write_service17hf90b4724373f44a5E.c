fn backdoorautomater::newservice::write_service(a0: i64, a1: u64, a2: u64, a3: u32) -> long long {
    let v0: struct24;  // [bp-0xb8]
    let v1: struct24;  // [bp-0x78]
    let v2: u64;  // [bp-0x50]
    let v3: alloc::string::String;  // [bp-0x48]
    let v4: struct24;  // [bp-0x48]
    let v6: u64;  // rax

    v2 = v6 & -0x100 | 1;
    v3 = <alloc::string::String as core::clone::Clone>::clone(a1);
    if !<&str as core::str::pattern::Pattern>::is_contained_in(*((a0 + 8) as &i64), *((a0 + 16) as &i64), a2, a3) {
        alloc::vec::Vec<T,A>::extend_from_slice(a0, ".service");
    }
    v0 = struct24 {
        field_0: *(a0 as &i128)
        field_16: *((a0 + 16) as &i64)
    };
    v1 = v4;
    backdoorautomater::newservice::create_service(&v0, &v1);
    return 0;
}
