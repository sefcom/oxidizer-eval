fn starship::modules::username::is_login_user(a0: i64, a1: i64) -> u64 {
    return starship::context_env::Env::get_env("LOGNAME") & -0x100 | 1;
}
