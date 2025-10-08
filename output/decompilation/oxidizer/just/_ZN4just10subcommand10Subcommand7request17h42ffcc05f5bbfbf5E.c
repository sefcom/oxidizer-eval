fn just::subcommand::Subcommand::request(a1: i64) -> : struct9 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0xd0]
    let v1: struct24;  // [bp-0xc8]
    let v3: struct24;  // [bp-0xb0]
    let v5: u64;  // [bp-0x98]
    let v7: u32;  // rdx
    let v8: u64;  // rcx
    let v12: struct16;  // rax
    let v14: Result<struct8, struct4>;  // bpl

    if (((0 ^ *(a1 as &i64)) & (0 ^ -(*(a1 as &i64)))) >> 63) as char {
        nix::sys::signal::SigSet::all(&v5);
        core::result::Result<T,E>::unwrap(nix::sys::signal::SigSet::thread_block(&v5, a1, v7, v8));
        core::result::Result<T,E>::unwrap(nix::sys::signal::SigSet::wait(), v7);
        v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(nix::sys::signal::Signal::as_str(v7), v7);
    } else {
        v1 = std::env::var_os(a1);
    }
    v0 = v12;
    v14 = 18;
    return struct16 {
        field_0: vvar_16{reg 56}
        padding_1: <UNKNOWN>
        field_8: serde_json::ser::to_writer(std::io::stdio::stdout(), &v0)
    };
}
