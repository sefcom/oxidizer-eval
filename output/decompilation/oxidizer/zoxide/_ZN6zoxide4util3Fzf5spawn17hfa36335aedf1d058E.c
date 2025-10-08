fn zoxide::util::Fzf::spawn(a0: u64, a1: u64) -> int {
    let v0: u32;  // [bp-0x50]
    let v1: u64;  // [bp-0x48]
    let v2: struct32;  // [bp-0x30]
    let v3: u64;  // [bp-0x28]
    let v5: u64;  // r14
    let v6: iNone;  // xmm0

    v2 = std::process::Command::spawn(a1);
    if v2.field_0 != 1 {
        v6 = *(&(&v2.field_0)[1] as &i128);
        return Ok(struct24 {
            padding_0: <UNKNOWN>
            field_8: *((&v2.field_4 as &char + 8) as &i128)
        });
    }
    v5 = v3;
    if !std::io::error::Error::kind(v5) as u8 {
        return Err(anyhow::kind::Adhoc::new());
    }
    v1 = v5;
    v0 = 1;
    anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(a0, &v0);
    return;
}
