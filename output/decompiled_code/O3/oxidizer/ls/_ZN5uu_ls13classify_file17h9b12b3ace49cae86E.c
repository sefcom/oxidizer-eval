fn uu_ls::classify_file(a0: u64, a1: u64) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v2: u64;  // rax
    let v3: &u32;  // rcx
    let v6: &struct_0;  // rax

    v0 = v2;
    v3 = uu_ls::PathData::file_type(a0, a1);
    if !v3 {
        return 0x110000;
    }
    switch ((0xf000 & *(v3)) - 0x1000 >> 12) {
    case 0:
        return 124;
    case 3:
        return 47;
    case 7:
        v6 = uu_ls::PathData::get_metadata(a0, a1);
        if v6 && core::ops::function::FnOnce::call_once(v6->field_38) as i32 {
            return 42;
        }
    case 9:
        return 64;
    case 11:
        return 61;
    default:
        return 0x110000;
    }
}
