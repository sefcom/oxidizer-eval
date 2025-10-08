fn bat::assets::build_assets::acknowledgements::license_not_needed_in_acknowledgements(a0: i64, a1: i64) -> u64 {
    let v0: std::io::stdio::Stdout;  // [bp-0x28]
    let v2: std::io::stdio::Stdout;  // rax
    let v4: core::result::Result<(), std::io::error::Error>;  // rbx

    v0 = v2;
    v4 = alloc::alloc::Global::alloc_impl(8, 48, 0);
    *(v4 as &&u8) = &g_49fe07;
    *((v4 + 8) as &i64) = 71;
    *((v4 + 16) as &&u8) = &g_49fe4e;
    *((v4 + 24) as &i64) = 43;
    *((v4 + 32) as &&u8) = &g_49fe79;
    *((v4 + 40) as &i64) = 206;
    return bat::assets::build_assets::acknowledgements::license_contains_marker(a0, a1, v4, 3);
}
