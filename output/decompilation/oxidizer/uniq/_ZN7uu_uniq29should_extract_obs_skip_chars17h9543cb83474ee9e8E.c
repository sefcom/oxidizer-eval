fn uu_uniq::should_extract_obs_skip_chars(a0: i64, a1: i64, a2: i32, a3: i8) -> long long {
    let v0: struct16;  // [bp-0x30], Other Possible Types: u32
    let v1: u64;  // [bp-0x30]
    let v3: u64;  // rdx
    let v4: u64;  // rdi
    let v6: &mut [u8];  // rax:rdx
    let v7: core::option::Option<u32>;  // rax:rax

    v0 = 0;
    v0 = v1 & -0x100000000;
    v6 = core::char::methods::encode_utf8_raw(43, &v0, a2);
    if !core::slice::<impl [T]>::starts_with() {
        return 0;
    } else if !uucore::mods::posix::posix_version() {
        return 0;
    } else if v3 > 199209 {
        return 0;
    } else if a2 {
        return 0;
    } else if !a3 {
        v0 = struct16 {
            field_0: a0
            field_8: a1 + a0
        };
        v0 = struct16 {
            field_0: a0
            field_8: a1 + a0
        };
        v4 = 0x110000;
        if <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(&v0) {
            return core::option::Option<T>::map_or(v4);
        }
        v7 = core::str::validations::next_code_point(&v0) as u128;
        return core::option::Option<T>::map_or(v4);
    } else {
        return 0;
    }
}
