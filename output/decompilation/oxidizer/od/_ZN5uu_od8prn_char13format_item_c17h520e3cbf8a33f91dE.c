fn uu_od::prn_char::format_item_c(a0: u64, a1: i64, a2: u32) -> long long {
    let v0: u8;  // [bp-0x71]
    let v3: core::fmt::Arguments;  // [bp-0x60]
    let v9: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x30]
    let v13: u64;  // rax
    let v16: u8;  // sil
    let v17: u64;  // r8

    v13 = *(a1 as &i8);
    v0 = v13;
    if v13 >= 0 {
        vvar_221{stack -96} = core::fmt::Arguments OrderedDict([(0, &[&str] OrderedDict([(0, 𝜙@64b [((4632777, None), vvar_166{stack -96}), ((4633092, None), vvar_180{stack -96})])])), (16, &[core::fmt::rt::Argument] OrderedDict([(0, vvar_19{reg 16}), (8, 0x1<64>)]))])
        core::option::Option<T>::map_or_else(a0, &v3);
        return a0;
    } else if (v13 & 255) < 192 {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, "  **");
        return a0;
    } else {
        if !((v13 & 224) == 192 & a2 != 1) && !((v13 & 240) == 224 & 3 <= a2) && !((v13 & 248) == 240 & 4 <= a2) {
            vvar_224{stack -96} = core::fmt::Arguments OrderedDict([(0, &[&str] OrderedDict([(0, 𝜙@64b [((4632777, None), vvar_166{stack -96}), ((4633092, None), vvar_180{stack -96})])])), (16, &[core::fmt::rt::Argument] OrderedDict([(0, vvar_19{reg 16}), (8, 0x1<64>)]))])
            core::option::Option<T>::map_or_else(a0, &v3);
            return a0;
        }
        v9 = core::str::converts::from_utf8(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v16, a1, a2, v17), a2);
        vvar_227{stack -96} = core::fmt::Arguments OrderedDict([(0, &[&str] OrderedDict([(0, 𝜙@64b [((4632777, None), vvar_166{stack -96}), ((4633092, None), vvar_180{stack -96})])])), (16, &[core::fmt::rt::Argument] OrderedDict([(0, vvar_19{reg 16}), (8, 0x1<64>)]))])
        core::option::Option<T>::map_or_else(a0, &v3);
        return a0;
    }
}
