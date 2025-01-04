fn uu_ls::get_block_size(a0: u32, a1: u64, a2: u64, a3: u8) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax

    if (a0 & 0xb000 | 0x4000) != 0x6000 {
        v2 = a1 * 0x200;
        if a3 {
            return v2;
        }
    } else {
        v2 = 0;
        if a3 {
            return 0;
        }
    }
    if !a2 {
        v0 = v2;
        core::panicking::panic_const::panic_const_div_by_zero(); /* do not return */
    } else if !(v0 | a2) >> 32 {
        return ((0 CONCAT v0) % (a2 & 4294967295) CONCAT (0 CONCAT v0) / (a2 & 4294967295)) & 4294967295;
    } else {
        return (0 CONCAT v0) % a2 CONCAT (0 CONCAT v0) / a2;
    }
}
