fn uu_chroot::set_context(a0: i64) -> u64 {
    let v0: struct40;  // [bp-0x70]
    let v2: struct40;  // [bp-0x48]
    let v3: struct40;  // [bp-0x48]
    let v5: u64;  // rax
    let v6: i64;  // rdx

    v5 = uu_chroot::enter_chroot(*((a0 + 8) as &i64), *((a0 + 16) as &i64), *((a0 + 96) as &i8));
    if v5 {
        return v5;
    }
    v2 = uu_chroot::set_supplemental_gids_with_strategy(None, v6);
    if v2.field_0 == 14 {
        return 0;
    }
    v0 = v3;
    return alloc::boxed::Box<T>::new(&v0) as u64;
}
