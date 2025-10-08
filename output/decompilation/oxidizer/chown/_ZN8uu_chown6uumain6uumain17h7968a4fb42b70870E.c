fn uu_chown::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct712;  // [bp-0x2e0]

    v0 = uu_chown::uu_app();
    return uucore::features::perms::chown_base(&v0, a0, a1);
}
