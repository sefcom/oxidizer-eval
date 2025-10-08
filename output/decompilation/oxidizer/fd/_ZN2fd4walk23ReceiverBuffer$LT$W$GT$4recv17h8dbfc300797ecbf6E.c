fn fd::walk::ReceiverBuffer<W>::recv(a0: u32, a1: i64) -> void {
    let v0: struct48;  // [bp-0x8]
    let v2: struct48;  // rbx
    let v3: u64;  // rax

    if *((a1 + 128) as &i8) != 1 {
        crossbeam_channel::channel::Receiver<T>::recv_deadline(a0, *(a1 as &i64));
        return;
    }
    v0 = v2;
    v3 = crossbeam_channel::channel::Receiver<T>::recv(*(a1 as &i64)) as u64;
    if !v3 {
        return struct2 {
            field_0: 257
        };
    }
    return struct16 {
        field_0: 0
        padding_1: <UNKNOWN>
        field_8: v3
    };
}
