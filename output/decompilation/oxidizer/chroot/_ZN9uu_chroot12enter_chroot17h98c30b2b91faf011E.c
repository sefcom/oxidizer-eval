fn uu_chroot::enter_chroot(a0: i64, a1: i64, a2: i8) -> u64 {
    let v0: void*;  // [bp-0x98]
    let v1: u64;  // [bp-0x90]
    let v2: Result<struct32, struct24>;  // [bp-0x88]
    let v3: struct16;  // [bp-0x58], Other Possible Types: struct24
    let v4: alloc::string::String;  // [bp-0x48]
    let v7: u32;  // eax

    v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, a1);
    v2 = <T as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v3);
    v7 = chroot(core::result::Result<T,E>::unwrap(&v2));
    if v7 {
        v0 = a0;
        v1 = a1;
        v4 = format!("{}", &v0);
        v3 = struct16 {
            field_0: 0
            padding_4: <UNKNOWN>
            field_8: *(__errno_location() as u64 as &i32) as u32 as u64 * 0x100000000 | 2
        };
        return alloc::boxed::Box<T>::new(&v3) as u64;
    }
    if a2 {
        return 0;
    }
    core::result::Result<T,E>::unwrap(std::env::set_current_dir());
    return 0;
}
