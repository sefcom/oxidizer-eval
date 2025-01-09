fn uu_env::apply_ignore_signal(a0: &u64) -> u64 {
    let v0: u64;  // [sp-0x20]
    let v1: u64;  // [sp-0x18]
    let v3: struct8;  // rax
    let v4: u32;  // edx
    let v5: void*;  // rax
    let v6: u64;  // rdx

    v0 = a0[13];
    v1 = v0 + a0[14] * 8;
    loop {
        v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if !v3 {
            return 0;
        } else if !<nix::sys::signal::Signal as core::convert::TryFrom<i32>>::try_from(*(v3 as &i32)) as i32 {
            v5 = uu_env::ignore_signal(v4);
            if v5 {
                return v5;
            }
        } else {
            v5 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6 * 0x100000000 | 2);
            return v5;
        }
    }
}
