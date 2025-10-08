fn uu_rm::path_is_current_or_parent_directory(a0: &[u8]) -> u64 {
    let v0: struct4;  // [bp-0x34]
    let v2: void*;  // [bp-0x30]
    let v3: u64;  // [bp-0x28]
    let v4: u64;  // [bp-0x20]
    let v6: u64;  // rdi
    let v7: u64;  // rsi
    let v8: u64;  // rbp

    v3 = v6;
    v4 = v7;
    v2 = 0;
    if v7 != 2 {
        if v7 == 1 && v6 == "." {
            return v8 & 4294967295;
        }
    } else {
        if v6 == ".." {
            return v8 & 4294967295;
        }
    }
    if !core::slice::<impl [T]>::ends_with(v6, v7) && !core::slice::<impl [T]>::ends_with(v6, v7) {
        v0 = struct4 {
            field_0: 11823
            field_2: 47
        };
        if !core::slice::<impl [T]>::ends_with(v6, v7) {
            strncpy(&v0, 0, 4);
            core::slice::<impl [T]>::ends_with(v6, v7);
        }
    }
    return v8 & 4294967295;
}
