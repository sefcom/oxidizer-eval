fn uu_env::apply_ignore_signal(a0: i64) -> long long {
    let v0: struct16;  // [bp-0x20]
    let v2: i64;  // rax
    let v3: u32;  // edx
    let v4: u64;  // rax
    let v5: u64;  // rdx

    v0 = struct16 {
        field_0: *((a0 + 104) as &i64)
        field_8: *((a0 + 104) as &i64) + *((a0 + 112) as &i64) * 8
    };
    loop {
        v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
        if !v2 {
            return 0;
        } else if !<nix::sys::signal::Signal as core::convert::TryFrom<i32>>::try_from(*(v2 as &i32)) as i32 {
            v4 = uu_env::ignore_signal(v3);
            if v4 {
                return v4;
            }
        } else {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5 * 0x100000000 | 2);
        }
    }
}
