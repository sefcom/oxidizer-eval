fn uu_stty::tiocgwinsz(a0: i32, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax

    v0 = v2;
    return nix::errno::<impl nix::errno::consts::Errno>::result(ioctl(a0, 21523) as u32);
}
