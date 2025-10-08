fn fd::walk::ReceiverBuffer<W>::flush(a0: i64) -> u64 {
    let v0: core::result::Result<(), std::io::error::Error>;  // [bp-0x10]
    let v2: u8;  // bl
    let v3: u32;  // ebx

    v0 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a0 + 16);
    v2 = !v0;
    return (v3 & -0x100 | v2) & -0x100 | v2 * 2 | 4;
}
