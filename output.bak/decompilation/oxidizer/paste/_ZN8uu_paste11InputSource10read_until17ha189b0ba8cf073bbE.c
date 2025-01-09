fn uu_paste::InputSource::read_until(a0: &struct16, a1: &u64, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x30]
    let v1: u8;  // [sp-0x28]
    let v3: u64;  // rax
    let v4: u64;  // rax
    let v5: u32;  // rdx
    let v6: u8;  // dl
    let v7: u32;  // rdx

    if *(a1) {
        v3 = std::io::read_until(a1, a2, a3);
        return struct16 {
            field_0: 0
            field_8: v5
        };
        v3 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
        return struct16 {
            field_0: v3
            field_8: v5
        };
    }
    v4 = core::cell::RefCell<T>::try_borrow(a1[1] + 16);
    if !v4 {
        *(a0 as &long long) = uu_paste::InputSource::read_until::{{closure}}();
        v3 = &g_5135a0;
        a0[1] = &g_5135a0;
    }
    v0 = std::io::stdio::Stdin::lock(v4);
    v1 = v6 & 1;
    if !<std::io::stdio::StdinLock as std::io::BufRead>::read_until(&v0, a2, a3) {
        return struct16 {
            field_0: 0
            field_8: v5
        };
    }
    *(a0 as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
    a0[1] = v7;
}
