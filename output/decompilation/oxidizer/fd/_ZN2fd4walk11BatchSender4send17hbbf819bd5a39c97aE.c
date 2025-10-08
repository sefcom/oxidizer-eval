fn fd::walk::BatchSender::send(a0: i64, a1: u64) -> long long {
    let v0: u32;  // [bp-0x174]
    let v1: u8;  // [bp-0x168]
    let v3: struct24;  // r14
    let v4: u64;  // r12
    let v5: u64;  // r14
    let v6: u64;  // 4097
    let v7: u64;  // rax
    let v8: u32;  // ebx

    v3 = fd::walk::Batch::lock(*((a0 + 16) as &i64));
    v4 = a0 + 16;
    if (((0 ^ *((v3 + 8) as &i64)) & (0 ^ -(*((v3 + 8) as &i64)))) >> 63) as char || *((v3 + 24) as &i64) >= *((a0 + 24) as &i64) {
        v5 = fd::walk::Batch::new();
        *(v4 as &u64) = v5;
        v3 = fd::walk::Batch::lock(v5);
        if *((v3 + 8) as &i64) == 0x8000000000000000 {
            v0 = 1;
            core::option::unwrap_failed(); /* do not return */
        }
    }
    memcpy(&v1, a1, 312);
    v0 = 0;
    alloc::vec::Vec<T,A>::push(v3 + 8, &v1);
    if *((v3 + 24) as &i64) == 1 {
        v6 = atomic_fetch_add(*(v4 as &i64));
        if _ccall(14, 24, v6 + 1, 0, (*((v3 + 24) as &i64) < 1) as u8 as u64) as char {
            [D] Unsupported jumpkind Ijk_NoDecode at address 6257871()
        }
        v0 = 0;
        v7 = crossbeam_channel::channel::Sender<T>::send(*(a0 as &i64), *((a0 + 8) as &i64), *(v4 as &i64));
    }
    return v8;
}
