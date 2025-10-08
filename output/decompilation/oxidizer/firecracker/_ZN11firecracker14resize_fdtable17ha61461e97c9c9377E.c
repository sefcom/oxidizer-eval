fn firecracker::resize_fdtable() -> u64 {
    let v0: Result<struct56, struct16>;  // [bp-0x28]
    let v2: u32;  // ebp
    let v3: struct24;  // rbx
    let v4: struct48;  // ebp
    let v5: u64;  // rbx

    v0 = 0;
    if getrlimit(7, &v0) >= 0 {
        v2 = (v0 as i64 <= 2147483647 ? v0 as i64 : 0x800);
        v3 = 3;
        if v2 >= 4 {
            v4 = v2 - 1;
            if dup2(0, v4) >= 0 && close(v4) >= 0 {
                return 3;
            }
            __errno_location();
            return v5;
        }
    }
    return v3;
}
