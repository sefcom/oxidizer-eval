fn uu_tail::follow::watch::Observer::add_stdin(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i32) -> u64 {
    let v0: i64;  // [sp-0x68]
    let v1: i64;  // [sp-0x60]
    let v2: i64;  // [sp-0x50]
    let v3: i192;  // [sp-0x48], Other Possible Types: struct24
    let v5: i8;  // al
    let v6: i64;  // rax
    let v7: i64;  // rax

    v5 = *((a0 + 142) as &i8);
    if v5 != 2 && !(v5 & 1) {
        v3 = std::sys::os_str::bytes::Slice::to_owned(&anon.0aa2dd8ef29f0dcd97eae16e4e959aa3.33.llvm.17052569310818674444, 10);
        v2 = v3;
        v1 = a5;
        v0 = a4;
        v6 = uu_tail::follow::watch::Observer::add_path(a0, *((&v3 as &char + 8) as &i64), *((&v3 as &char + 16) as &i64), a1, a2, a3);
        if v2 {
            return v6;
        }
        return v6;
    }
    if a3 && *(a4 as &i64) {
        v7();
    }
    return 0;
}
