fn bat::assets::build_assets::acknowledgements::handle_file(a1: i64) -> : struct33 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax

    v0 = v2;
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1[32] as i64, a1[40] as i64, "NOTICE") {
        bat::assets::build_assets::acknowledgements::handle_notice(a0, a1[8] as i64, a1[16] as i64);
        return;
    } else if core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(a1[32] as i64, a1[40] as i64, "LICENSE") {
        bat::assets::build_assets::acknowledgements::handle_license(a0, a1[8] as i64, a1[16] as i64);
        return;
    } else {
        return struct16 {
            field_0: 13
            padding_1: <UNKNOWN>
            field_8: 0x8000000000000000
        };
    }
}
