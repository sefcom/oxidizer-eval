fn uu_base32::base_common::fast_encode::write_to_output(a0: &struct8, a1: u32, a2: u32, a3: void*, a4: u32) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rcx
    let v4: u64;  // rax

    v0 = v2;
    v3 = a3->field_38;
    if *(a0) == 0x8000000000000000 {
        v4 = uu_base32::base_common::fast_encode::write_without_line_breaks(a1, a2, v3, a4);
        if !v4 {
            return 0;
        }
        return v4;
    } else {
        v4 = uu_base32::base_common::fast_encode::write_with_line_breaks(a0, a1, a2, v3, a4);
        if !v4 {
            return 0;
        }
        return v4;
    }
}
