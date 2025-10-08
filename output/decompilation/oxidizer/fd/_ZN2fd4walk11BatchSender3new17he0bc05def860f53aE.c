fn fd::walk::BatchSender::new(a0: i64, a1: i320, a2: u64, a3: u64) -> long long {
    let v0: struct40;  // [bp-0x30]
    let v1: u64;  // [bp-0x28]

    v0 = a1;
    v1 = a2;
    return struct32 {
        field_0: a1
        field_8: a2
        field_16: fd::walk::Batch::new()
        field_24: a3
    };
}
