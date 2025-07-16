fn uu_ls::get_block_size(a0: i32, a1: i64, a2: i64, a3: i8) -> long long {
    let v1: u64;  // rax

    if (a0 & 0xb000 | 0x4000) == 0x6000 {
        v1 = 0;
        if a3 {
            return 0;
        }
    } else {
        v1 = a1 * 0x200;
        if a3 {
            return a1 * 0x200;
        }
    }
    if !(v1 | a2) >> 32 {
        return ((0 CONCAT v1) % (a2 & 4294967295) CONCAT (0 CONCAT v1) / (a2 & 4294967295)) & 4294967295;
    }
    return (0 CONCAT v1) % a2 CONCAT (0 CONCAT v1) / a2;
}
