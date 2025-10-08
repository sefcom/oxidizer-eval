fn fd::walk::ReceiverBuffer<W>::stop(a0: &struct25) -> u64 {
    let v1: u64;  // rax

    if *((a0 + 128) as &i8) {
        return v1 & -0x100 | 2;
    }
    alloc::slice::stable_sort(*((a0 + 64) as &i64), *((a0 + 72) as &i64));
    v1 = fd::walk::ReceiverBuffer<W>::stream(a0);
    return v1;
}
