fn uu_uniq::should_extract_obs_skip_chars(a0: i64, a1: i64, a2: i32, a3: i8) -> u64 {
    let v0: struct16;  // [bp-0x30], Other Possible Types: u32
    let v2: u64;  // rdx
    let v4: &mut [u8];  // rax:rdx
    let v5: core::option::Option<u32>;  // rax:rax

    v0 = 0;
    v4 = core::char::methods::encode_utf8_raw(43, &v0, a2);
    if core::slice::<impl [T]>::starts_with(a0, a1) && !((~(uucore::mods::posix::posix_version()) | a2 | 199210 <= v2 | a3) & 1) {
        v0 = struct16 {
            field_0: a0
            field_8: a1 + a0
        };
        if !<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(&v0, 1) {
            v5 = core::str::validations::next_code_point(&v0) as u128;
        }
    }
    return 0;
}
