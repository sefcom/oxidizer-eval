fn uu_uniq::should_extract_obs_skip_chars(a0: u32, a1: u32, a2: u8, a3: u8) -> u64 {
    let v0: u64;  // [bp-0x30]
    let v1: u64;  // [sp-0x28]
    let v3: u64;  // rdx
    let v4: void*;  // rax
    let v5: u64;  // rdi
    let v6: u64;  // rsi

    v0 = 0;
    if !core::slice::<impl [T]>::starts_with(a0, a1, core::char::methods::encode_utf8_raw(43, &v0), v3) as i8 {
        return 0;
    }
    if !uucore::mods::posix::posix_version() {
        return 0;
    } else if v3 > 199209 {
        return 0;
    } else if !a2 && !a3 {
        v0 = a0;
        v1 = a1 + a0;
        v5 = 0x110000;
        if !<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(v6, v3) {
            v5 = (core::str::validations::next_code_point(&v0) as i32 ? v3 : 0x110000);
        }
        v4 = core::option::Option<T>::map_or(v5);
        return v4;
    }
}
