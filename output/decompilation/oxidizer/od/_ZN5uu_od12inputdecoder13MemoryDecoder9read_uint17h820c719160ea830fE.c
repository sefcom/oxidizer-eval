fn uu_od::inputdecoder::MemoryDecoder::read_uint(a0: i64, a1: u32, a2: i64, a3: u64) -> long long {
    let v0: u64;  // [bp-0x50]

    v0 = a3;
    match (a3) {
        1 => {
            break;
        }
        _ => {
            panic!("Invalid byte_size: {}", &v0);
        }
    }
}
