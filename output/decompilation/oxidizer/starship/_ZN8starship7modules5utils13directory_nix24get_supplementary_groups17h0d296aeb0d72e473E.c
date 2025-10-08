fn starship::modules::utils::directory_nix::get_supplementary_groups(a0: i64) -> int {
    let v0: struct24;  // [bp-0x50], Other Possible Types: struct32
    let v1: Result<struct24, struct24>;  // [bp-0x30]

    v0 = nix::unistd::getgroups();
    v1 = core::result::Result<T,E>::unwrap_or_default(&v0);
    v0 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v1);
    core::iter::traits::iterator::Iterator::collect(a0, &v0);
    return;
}
