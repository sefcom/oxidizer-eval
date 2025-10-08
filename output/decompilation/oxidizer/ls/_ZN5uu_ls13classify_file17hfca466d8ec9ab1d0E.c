fn uu_ls::classify_file(a0: void*, a1: u64) -> long long {
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax
    let v3: struct48;  // rcx
    let v4: struct48;  // rax

    v0 = v2;
    v3 = uu_ls::PathData::file_type(a0, a1);
    if !v3 {
        return 0x110000;
    }
    match ((0xf000 & *(v3 as &i32)) - 0x1000 >> 12) {
        0 => {
            break;
        }
        3 => {
            return 47;
        }
        7 => {
            v4 = uu_ls::PathData::get_metadata(a0, a1);
            if v4 && (*((v4 + 56) as &i8) & 73) {
                return 42;
            }
            break;
        }
        9 => {
            return 64;
        }
        11 => {
            return 61;
        }
        _ => {
            return 0x110000;
        }
    }
}
