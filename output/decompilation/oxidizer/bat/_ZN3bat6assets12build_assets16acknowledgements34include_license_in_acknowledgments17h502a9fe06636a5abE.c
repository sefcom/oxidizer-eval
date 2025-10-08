fn bat::assets::build_assets::acknowledgements::include_license_in_acknowledgments(a0: i64, a1: i64) -> u64 {
    let v0: struct24;  // [bp-0x28]
    let v2: struct24;  // rax
    let v4: core::result::Result<(), std::io::error::Error>;  // rbx

    v0 = v2;
    v4 = alloc::alloc::Global::alloc_impl(8, 80, 0);
    *(v4 as &&u8) = &g_49fc7c;
    *((v4 + 8) as &i64) = 126;
    *((v4 + 16) as &&u8) = &g_49fcfa;
    *((v4 + 24) as &i64) = 73;
    *((v4 + 32) as &&u8) = &g_49fd43;
    *((v4 + 40) as &i64) = 72;
    *((v4 + 48) as &&u8) = &g_49fd8b;
    *((v4 + 56) as &i64) = 63;
    *((v4 + 64) as &&u8) = &g_49fdca;
    *((v4 + 72) as &i64) = 61;
    return bat::assets::build_assets::acknowledgements::license_contains_marker(a0, a1, v4, 5);
}
