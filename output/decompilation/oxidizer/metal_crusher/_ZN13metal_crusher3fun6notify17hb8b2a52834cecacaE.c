fn metal_crusher::fun::notify(a0: u64, a1: u64, a2: u64, a3: u64) -> int {
    let v0: u128;  // [bp-0x358]
    let v1: u64;  // [bp-0x348]
    let v2: &str;  // [bp-0x340]
    let v3: &str;  // [bp-0x330]
    let v4: u64;  // [bp-0x320]
    let v5: u64;  // [bp-0x318]
    let v6: u64;  // [bp-0x310]
    let v7: u64;  // [bp-0x308]
    let v8: u128;  // [bp-0x300]
    let v9: u128;  // [bp-0x2f0]
    let v10: u64;  // [bp-0x2e0]
    let v11: u64;  // [bp-0x2d8]
    let v12: u32;  // [bp-0x2d0]
    let v13: u32;  // [bp-0x2cc]
    let v14: struct64;  // [bp-0x2c0]
    let v15: struct24;  // [bp-0x280], Other Possible Types: struct81, u64
    let v16: u64;  // [bp-0x270]
    let v18: u32;  // eax
    let v19: u64;  // rax
    let v20: u64;  // rdx

    v15 = rand::rngs::thread::rng();
    v18 = rand::rng::Rng::random_range(&v15, 0, -1, "src/fun.rs");
    std::sync::poison::once::Once::call_once();
    v15 = <T as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(0x1, 0, 0, "src/fun.rs");
    v19 = std::thread::local::LocalKey<T>::with(&g_996588);
    v2 = "Metal Crusher";
    v12 = v18;
    v3 = "dialog-information";
    v4 = a0;
    v5 = a1;
    v6 = a2;
    v7 = a3;
    v0 = v15.field_0;
    v1 = v16;
    v8 = g_996590.field_0;
    v9 = g_9965a0.field_0;
    v10 = v19;
    v11 = v20;
    v13 = 3000;
    v15 = struct81 {
        field_0: ""
        field_8: "/org/freedesktop/Notifications"
        field_24: "Notify"
        field_40: &v0
        field_48: "org.freedesktop.Notifications"
        field_64: "org.freedesktop.Notifications"
        field_80: 0
    };
    v14 = async_io::driver::block_on(&v15);
    return;
}
