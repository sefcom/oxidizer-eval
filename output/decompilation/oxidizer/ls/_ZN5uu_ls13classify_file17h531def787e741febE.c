fn uu_ls::classify_file(a0: i32, a1: i32) -> long long {
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax
    let v3: i64;  // rcx
    let v4: i64;  // rax

    v0 = v2;
    v3 = uu_ls::PathData::file_type(a0, a1);
    if !v3 {
        return 0x110000;
    }
    match ((0xf000 & *(v3 as &i32)) - 0x1000 >> 12) {
        0 => {
            break;
        }
        7 => {
            v4 = uu_ls::PathData::get_metadata(a0, a1);
        }
        _ => {
            return 0x110000;
        }
    }
    return 64;
}
