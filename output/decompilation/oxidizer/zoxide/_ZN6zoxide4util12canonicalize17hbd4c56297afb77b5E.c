fn zoxide::util::canonicalize(a0: u64, a1: u64) -> long long {
    let v0: struct24;  // [bp-0x38]
    let v1: struct16;  // [bp-0x30]

    v0 = a1;
    v1 = dunce::canonicalize(&v0);
    anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(a0, &v1, a1);
    return a0;
}
