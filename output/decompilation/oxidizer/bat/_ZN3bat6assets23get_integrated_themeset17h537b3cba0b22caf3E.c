fn bat::assets::get_integrated_themeset() -> : struct24 {
    let a0: u64;  // rdi
    let v0: Result<struct24, struct24>;  // [bp-0x60]

    v0 = bat::assets::asset_from_contents(&g_591c7f, 58235, "n/a");
    core::result::Result<T,E>::expect(a0, &v0);
    return;
}
