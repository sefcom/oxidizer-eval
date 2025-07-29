fn metal_crusher::music::play_audio() {
    let v0: void*;  // [bp-0x58], Other Possible Types: struct24
    let v1: u64;  // [bp-0x48]
    let v2: u8;  // [bp-0x30]
    let v3: struct24;  // [bp-0x28]

    v1 = 0x8000000000000000;
    v0 = 0;
    v2 = 0;
    v3 = std::thread::Builder::spawn_unchecked(&v0);
    v0 = core::result::Result<T,E>::expect(&v3);
    return;
}
