fn fd::walk::WorkerState::spawn_senders(a0: u64, a1: u64, a2: u64, a3: u64) -> int {
    let v0: struct16;  // [bp-0x18]

    v0 = struct16 {
        field_0: a2
        field_8: a3
    };
    ignore::walk::WalkParallel::run(a1, a0, &v0);
    return;
}
