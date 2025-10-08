fn fd::walk::ReceiverBuffer<W>::process(a0: i64) -> long long {
    let v1: core::result::Result<u64, core::num::error::ParseIntError>;  // rax

    do {
        v1 = fd::walk::ReceiverBuffer<W>::poll(a0);
    } while (v1 as u8 == 6);
    core::sync::atomic::atomic_store(*((a0 + 104) as &i64), 1, 0);
    return v1 & 4294967295;
}
