fn bat::assets::clear_assets(a0: u64, a1: u64) -> void {
    let v0: struct24;  // [bp-0x30]

    v0 = std::path::Path::join(a0, a1, "themes.bin");
    bat::assets::clear_asset(&v0, "theme set cache");
    v0 = std::path::Path::join(a0, a1, "syntaxes.bin");
    bat::assets::clear_asset(&v0, "syntax set cache");
    v0 = std::path::Path::join(a0, a1, "metadata.yaml");
    bat::assets::clear_asset(&v0, "metadata file");
    return;
}
