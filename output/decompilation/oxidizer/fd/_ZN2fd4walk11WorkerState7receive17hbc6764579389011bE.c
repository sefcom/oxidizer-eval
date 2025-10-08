fn fd::walk::WorkerState::receive(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: u32;  // [bp-0xe8]
    let v1: u8;  // [bp-0xe4]
    let v2: struct16;  // [bp-0xe0]
    let v3: std::io::stdio::Stdout;  // [bp-0xd0], Other Possible Types: struct125, struct32, u64
    let v4: u64;  // [bp-0xc8]
    let v5: void*;  // [bp-0xc0]
    let v6: void*;  // [bp-0xa0]
    let v7: struct33;  // [bp-0x48]
    let v9: i64;  // rax
    let v10: struct24;  // eax

    v2 = struct16 {
        field_0: a1
        field_8: a2
    };
    v9 = *((a0 + 456) as &i64);
    if !v9 {
        v3 = std::io::stdio::stdout();
        v7 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(std::io::stdio::Stderr::lock(&v3));
        v3 = fd::walk::ReceiverBuffer<W>::new(a0, a1, a2, &v7);
        v10 = fd::walk::ReceiverBuffer<W>::process(&v3);
    } else if *((v9 + 40) as &i8) {
        v3 = a1;
        v4 = a2;
        v5 = 0;
        v6 = 0;
        return fd::exec::job::batch(&v3, *((v9 + 24) as &i64), *((v9 + 32) as &i64), a0);
    } else {
        v0 = 0;
        v1 = 0;
        v3 = struct32 {
            field_0: a0
            field_8: &v2
            field_16: a0 + 456
            field_24: &v0
        };
        v10 = std::thread::scoped::scope(&v3);
    }
    return v10 as u64;
}
