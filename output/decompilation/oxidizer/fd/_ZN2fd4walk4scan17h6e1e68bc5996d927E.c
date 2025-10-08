fn fd::walk::scan(a0: u64, a1: u32, a2: i64, a3: void*, a4: u64) -> int {
    let v0: struct504;  // [bp-0x240]

    v0 = fd::walk::WorkerState::new(a3, a4);
    fd::walk::WorkerState::scan(a0, &v0, a1);
    return;
}
