fn zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::query(a0: i64, a1: &struct64) -> u64 {
    let v0: u64;  // [bp-0x108]
    let v1: i64;  // [bp-0x100]
    let v2: iNone;  // [bp-0xf8]
    let v3: iNone;  // [bp-0xe8]
    let v4: iNone;  // [bp-0xd8]
    let v5: iNone;  // [bp-0xc8]
    let v6: iNone;  // [bp-0xb8]
    let v7: iNone;  // [bp-0xa8]
    let v8: u64;  // [bp-0x98]
    let v9: Result<struct120, struct16>;  // [bp-0x90]
    let v10: u64;  // [bp-0x90]
    let v11: i64;  // [bp-0x88]
    let v12: iNone;  // [bp-0x80]
    let v13: iNone;  // [bp-0x70]
    let v14: iNone;  // [bp-0x60]
    let v15: iNone;  // [bp-0x50]
    let v16: iNone;  // [bp-0x40]
    let v17: iNone;  // [bp-0x30]
    let v19: u64;  // rdx
    let v20: u64;  // rdx

    if (zoxide::util::current_time() & 1) {
        return v20;
    }
    v9 = zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::get_stream(a0, a1, v19);
    if (((0 ^ v9 as i64) & (0 ^ -(v10))) >> 63) as char {
        return v1;
    }
    v8 = *((&v9 as &char + 112) as &i64);
    v7 = v17;
    v6 = v16;
    v5 = v15;
    v4 = v14;
    v3 = v13;
    v2 = v12;
    v0 = v9 as i64;
    v1 = v11;
    v1 = (!*((a0 + 73) as &i8) ? (!*((a0 + 74) as &i8) ? zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::query_first(a0, &v0, v19) : zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::query_list(a0, &v0, v19)) : zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::query_interactive(a0, &v0, v19));
    return v1;
}
