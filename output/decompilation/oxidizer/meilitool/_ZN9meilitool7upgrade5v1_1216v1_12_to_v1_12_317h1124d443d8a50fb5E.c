fn meilitool::upgrade::v1_12::v1_12_to_v1_12_3(a0: u64, a1: u64, a2: u32, a3: u32, a4: u32) -> long long {
    let v0: u32;  // [bp-0x8c]
    let v1: u32;  // [bp-0x88]
    let v2: u32;  // [bp-0x84]

    v0 = a2;
    v1 = a3;
    v2 = a4;
    println!("Upgrading from v1.12.{0, 1, 2} to v1.12.3");
    if a3 != 12 {
        println!("Not rebuilding field distribution as it wasn't corrupted coming from v{}.{}.{}", &v0, &v1, &v2);
        return 0;
    }
    return meilitool::upgrade::v1_12::rebuild_field_distribution(a0, a1);
}
