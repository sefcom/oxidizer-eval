fn change_log::adapters::octocrab::OctocrabAdapter::new(a0: u64, a1: void*, a2: u32) -> long long {
    let v0: struct24;  // [bp-0x378]
    let v1: u64;  // [bp-0x358]
    let v2: u64;  // [bp-0x350]
    let v3: u64;  // [bp-0x348]
    let v4: void*;  // [bp-0x2d8]
    let v5: u64;  // [bp-0x2d0]
    let v6: u128;  // [bp-0x2c8]
    let v7: u64;  // [bp-0x2b8]
    let v8: void*;  // [bp-0x2b0]
    let v9: u32;  // [bp-0x2a0]
    let v10: u32;  // [bp-0x290]
    let v11: u32;  // [bp-0x280]
    let v12: u8;  // [bp-0x278]
    let v13: u8;  // [bp-0x220]
    let v14: void*;  // [bp-0x1c8]
    let v15: struct24;  // [bp-0x1b8], Other Possible Types: struct416
    let v16: struct24;  // [bp-0x1b8]

    v1 = 1;
    v2 = 3;
    v3 = 2;
    v4 = 0;
    v5 = 8;
    v6 = 0;
    v7 = 8;
    v8 = 0;
    v9 = 0x3b9aca00;
    v10 = 0x3b9aca00;
    v11 = 0x3b9aca00;
    v12 = 3;
    v13 = 3;
    v14 = 0;
    v15 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
    v0 = v16;
    v15 = octocrab::OctocrabBuilder<octocrab::NoSvc,octocrab::DefaultOctocrabBuilderConfig,octocrab::NoAuth,octocrab::NotLayerReady>::personal_token(&v1, &v0);
    octocrab::OctocrabBuilder<octocrab::NoSvc,octocrab::DefaultOctocrabBuilderConfig,octocrab::NoAuth,octocrab::NotLayerReady>::build(&v1, &v15);
    core::result::Result<T,E>::unwrap(a0, &v1);
    return a0;
}
