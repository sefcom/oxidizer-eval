fn uu_dd::Output::discard_cache(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x78]
    let v1: u64;  // [sp-0x68]
    let v2: &struct_1;  // [sp-0x60]
    let v3: &u8;  // [sp-0x58]
    let v4: u64;  // [sp-0x50]
    let v5: &u8;  // [sp-0x48]
    let v6: u64;  // [sp-0x40]
    let v7: Arguments;  // [sp-0x38]
    let v8: u64;  // [sp-0x30]
    let v9: &&struct_2;  // [sp-0x28]
    let v10: u64;  // [sp-0x20]
    let v11: void*;  // [sp-0x18]
    let v13: u64;  // rax
    let v14: u64;  // rax
    let v15: &struct_1;  // rdx
    let v16: u64;  // rax

    v13 = <core::result::Result<T,nix::errno::consts::Errno> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_dd::Dest::discard_cache(*(a0 as &i32), *((a0 as &char + 4) as &i32), a1, a2) as i32);
    v14 = v13;
    if v13 {
        v0 = v13;
        uucore::mods::error::set_exit_code(v15->field_60());
        v1 = uucore::util_name();
        v2 = v15;
        v3 = &v1;
        v4 = <&T as core::fmt::Display>::fmt;
        v5 = &v0;
        v6 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v7 = &g_561070;
        v8 = 3;
        v11 = 0;
        v9 = &v3;
        v10 = 2;
        std::io::stdio::_eprint(&v7);
        v14 = v16;
        return v14;
    }
    return v14;
}
