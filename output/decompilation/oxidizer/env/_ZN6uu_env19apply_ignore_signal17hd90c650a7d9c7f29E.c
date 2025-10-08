fn uu_env::apply_ignore_signal(a0: i64) -> u64 {
    let v0: core::option::Option<(std::ffi::os_str::OsString, std::ffi::os_str::OsString)>;  // [bp-0x28]
    let v2: i64;  // rax
    let v3: i64;  // r12
    let v4: u32;  // edx
    let v5: u32;  // rsi
    let v6: u32;  // rdx
    let v7: u64;  // rcx
    let v8: u64;  // rax

    v0 = v2;
    v3 = 0;
    while (*((a0 + 112) as &i64) * 8 != v3) {
        if !(<nix::sys::signal::Signal as core::convert::TryFrom<i32>>::try_from(*((*((a0 + 104) as &i64) + v3) as &i32)) & 1) {
            v8 = uu_env::ignore_signal(v4, v5, v6, v7);
            v3 += 8;
            if v8 {
                return v8;
            }
        } else {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6 * 0x100000000 | 2);
        }
    }
    return 0;
}
