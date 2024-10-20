fn uu_nproc::available_parallelism(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v2: u64;  // rax
    let v3: &struct_1;  // rdx
    let v4: u64;  // rax
    let v5: u64;  // rbx
    let v6: &&struct_0;  // rax

    v0 = v2;
    if !std::thread::available_parallelism() {
        return v5;
    }
    v4 = v3 as u32 & 3;
    if v4 - 2 < 2 {
        return 1;
    } else if !v4 {
        return 1;
    } else {
        if !*(*(&(&v3->padding_0)[1] as &i64) as &i64) {
            return 1;
        }
        v6();
    }
}
