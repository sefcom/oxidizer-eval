fn zoxide::util::current_dir(a0: u64) -> long long {
    let v0: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x28]

    v0 = std::env::current_dir();
    return anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(a0, &v0);
}
