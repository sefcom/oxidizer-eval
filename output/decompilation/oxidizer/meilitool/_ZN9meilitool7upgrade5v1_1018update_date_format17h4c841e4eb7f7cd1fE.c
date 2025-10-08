fn meilitool::upgrade::v1_10::update_date_format(a0: u64, a1: u64, a2: u64, a3: u64) -> long long {
    let v0: u64;  // [bp-0x68]
    let v1: u8;  // [bp-0x58]
    let v2: u64;  // [bp-0x50]
    let v3: u8;  // [bp-0x48]
    let v4: Result<struct12, struct8>;  // [bp-0x40]

    v0 = a0;
    v4 = meilitool::try_opening_poly_database(a2, a3, "main");
    anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v1, &v4, &v0);
    if *(&v1 as &i32) == 1 {
        return v2;
    }
    return meilitool::upgrade::v1_10::date_round_trip(a3, a0, a1, v2, *(&v3 as &i32), &g_5522a6);
}
