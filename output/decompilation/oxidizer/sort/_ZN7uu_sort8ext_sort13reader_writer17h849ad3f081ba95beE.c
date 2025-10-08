fn uu_sort::ext_sort::reader_writer(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64, a7: i64) -> u64 {
    let v0: Result<struct24, struct24>;  // [bp-0x110]
    let v2: u64;  // [bp-0x108]
    let v5: u64;  // [bp-0x28]
    let v6: u64;  // [bp-0x20]
    let v7: u64;  // r12
    let v8: u64;  // rbx

    v6 = v7;
    v5 = v8;
    v0 = uu_sort::ext_sort::read_write_loop(a0, a7, *((a1 + 153) as &i8), *((a1 + 104) as &i64) / 10, a1, a2, a3, a4, a5);
    return v2;
}
