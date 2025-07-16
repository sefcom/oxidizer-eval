fn uu_env::apply_ignore_signal(a0: i64) -> long long {
    let v0: u64;  // [bp-0x20]
    let v1: u64;  // [bp-0x18]
    let v3: i64;  // rax
    let v4: u32;  // edx
    let v5: u64;  // rax
    let v6: u64;  // rdx

    v0 = *((a0 + 104) as &i64);
    v1 = *((a0 + 104) as &i64) + *((a0 + 112) as &i64) * 8;
    loop {
        v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
        if !v3 {
            return 0;
        } else if !<nix::sys::signal::Signal as core::convert::TryFrom<i32>>::try_from(*(v3 as &i32)) as i32 {
            v5 = uu_env::ignore_signal(v4);
            if v5 {
                return v5;
            }
        } else {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6 * 0x100000000 | 2);
        }
    }
}
