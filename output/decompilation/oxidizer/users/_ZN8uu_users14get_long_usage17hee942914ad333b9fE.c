fn uu_users::get_long_usage(a0: i64) -> u64 {
    let v0: u128;  // [bp-0x48]

    v0 = _ZN6uucore8features5utmpx2ut12DEFAULT_FILE17h6ad9aaf5b9ead8d5E.field_0;
    format!("Output who is currently logged in according to FILE.\nIf FILE is not specified, use {}.  /var/log/wtmp as FILE is common.", &v0);
    return a0;
}
