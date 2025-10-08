fn starship::modules::openstack::get_osp_project_from_config(a0: i64, a1: i64, a2: i128, a3: u64) -> void {
    let v0: struct16;  // [bp-0xe8]
    let v1: core::str::pattern::CharSearcher;  // [bp-0xd8]
    let v2: &mut [u8];  // [bp-0xd8]
    let v3: Option<struct24>;  // [bp-0xd0], Other Possible Types: struct24
    let v4: u64;  // [bp-0xc0]
    let v5: Option<struct24>;  // [bp-0xb8], Other Possible Types: Result<struct32, struct9>, struct24
    let v6: &str;  // [bp-0xa8], Other Possible Types: struct24
    let v7: struct16;  // [bp-0xa0]
    let v8: Option<struct24>;  // [bp-0x90]
    let v9: struct24;  // [bp-0x88]
    let v10: struct40;  // [bp-0x78]
    let v11: struct24;  // [bp-0x70], Other Possible Types: struct40
    let v12: i64;  // [bp-0x60]
    let v13: &str;  // [bp-0x58]
    let v14: u64;  // [bp-0x50]
    let v15: Option<struct24>;  // [bp-0x48]
    let v16: struct24;  // [bp-0x38]
    let v17: u8;  // [bp-0x30]

    v13 = a2;
    v14 = a3;
    v5 = starship::context_env::Env::get_env("PWD");
    if !((((0 ^ v5 as i64) & (0 ^ -(v5 as i64))) >> 63) as char) {
        v16 = v6;
        v15 = v5 as i128;
        v11 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v15, &g_540f33);
    }
    starship::context::Context::get_home(&v17);
    if *(&v17 as &i64) != 0x8000000000000000 {
        v5 = starship::modules::openstack::get_osp_project_from_config::{{closure}}(&v17);
        v1 = v6;
        v0.field_0 = v5.field_0;
    }
    v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("/etc/openstack/clouds.yaml");
    v10 = v4;
    v9 = v3.field_0;
    v5 = v11.field_0;
    v6 = v12;
    v7 = *(&v0.field_0 as &i128);
    v8 = v1;
    v0 = struct16 {
        field_0: &v5
        field_8: &v11
    };
    v2 = &v13;
    v3 = core::iter::traits::iterator::Iterator::try_fold(&v0, &v2);
    match v3 {
        Some(_) => {
            return struct24 {
                field_0: v3 as i128
                field_16: v4
            };
        },
        None => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
    }
}
