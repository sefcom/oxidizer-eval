fn uvx::main() -> long long {
    let v0: u64;  // [bp-0x60]
    let v1: struct12;  // [bp-0x58]
    let v2: u32;  // [bp-0x54]
    let v3: u64;  // [bp-0x50]
    let v5: u64;  // rax

    v1 = uvx::run();
    if v1.field_0 != 1 {
        v5 = v2;
        return (!(v5 & 127) ? v5 >> 8 : 2);
    }
    v0 = v3;
    eprintln!("error: {}", &v0);
    return;
}
