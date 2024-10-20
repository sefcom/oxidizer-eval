fn uu_yes::prepare_buffer(a0: void*) -> u64 {
    let v1: u64;  // r14
    let v2: u64;  // rax
    let v3: u64;  // rdx
    let v4: u64;  // r12
    let v5: u64;  // r15
    let v6: u64;  // r14
    let v7: u64;  // r15

    v1 = a0[2];
    v2 = v1 * 2;
    if v2 > 0x4000 {
        return v2;
    } else if !v1 {
        core::panicking::panic(); /* do not return */
    } else {
        v3 = 0x4000;
        if v1 <= 0x4000 {
            v2 = (0 CONCAT 0x4000) /m v1 & 4294967295;
            v3 = (0 CONCAT 0x4000) /m v1 >> 32 & 4294967295;
        }
        v4 = 0x4000 - v3;
        if v1 >= v4 {
            return v2;
        }
        do {
            v5 = v4 - v1;
            v7 = v6;
            if *(a0) - v1 < v7 {
                alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a0, v1, v7);
                v1 = a0[2];
            }
            v2 = memcpy(a0[1] + v1, a0[1], v7);
            v1 += v7;
            a0[2] = v1;
        } while (v1 < v4);
        return v2;
    }
}
