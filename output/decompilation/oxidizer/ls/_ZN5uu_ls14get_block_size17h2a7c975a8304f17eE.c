fn uu_ls::get_block_size(a0: u32, a1: u32, a2: u32, a3: u8) -> u64 {
    let v0: u64;  // [sp-0x8]

    if (a0 & 0xb000 | 0x4000) != 0x6000 {
        if a3 {
            return a1 * 0x200;
        }
    } else {
        if a3 {
            return 0;
        }
    }
    if (v0 | a2) >> 32 {
        return (0 CONCAT v0) % a2 CONCAT (0 CONCAT v0) / a2;
    }
    return ((0 CONCAT v0) % (a2 & 4294967295) CONCAT (0 CONCAT v0) / (a2 & 4294967295)) & 4294967295;
}
