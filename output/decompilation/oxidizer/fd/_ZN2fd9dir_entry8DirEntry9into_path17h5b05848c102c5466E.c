fn fd::dir_entry::DirEntry::into_path(a0: u64, a1: void*) -> long long {
    let v0: struct112;  // [bp-0x78]
    let v2: u64;  // rax

    if *(a1 as &i32) != 3 {
        v0 = struct112 {
            field_0: *(a1 as &i128)
            field_16: a1[16] as i128
            field_32: a1[32] as i128
            field_48: a1[48] as i128
            field_64: a1[64] as i128
            field_80: a1[80] as i128
            field_96: a1[96] as i128
        };
        return ignore::walk::DirEntry::into_path(a0, &v0);
    }
    v2 = a1[24] as i64;
    return struct24 {
        field_0: a1[8] as i128
        field_16: v2
    };
}
