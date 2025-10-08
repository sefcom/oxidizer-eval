void starship::modules::hg_branch::get_hg_current_bookmark(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    char v3;  // [bp-0x20]

    v0.join(a1, a2, ".hgtopicbookmarks.currentError in module `hg_state`:\nsrc/modules/hg_state.rs", 3);
    v3.join(v1, v2, "bookmarks.currentError in module `hg_state`:\nsrc/modules/hg_state.rs", 17);
    starship::utils::read_file(a0, &v3);
    core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    return;
}
