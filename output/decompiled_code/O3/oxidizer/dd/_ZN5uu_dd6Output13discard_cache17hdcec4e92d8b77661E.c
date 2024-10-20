fn uu_dd::Output::discard_cache(a0: &struct_1, a1: u64, a2: u64) -> u64 {
    let v0: &&struct_0;  // [sp-0x88]
    let v7: u64;  // rdi
    let v8: u32;  // eax
    let v9: &&struct_0;  // rax
    let v10: &u64;  // rdx

    v7 = 29;
    if a0->field_0 == 1 {
        v8 = posix_fadvise(a0->field_4, a1, a2, 4);
        v7 = (!v8 ? nix::errno::consts::from_i32(v8) as i32 : 134);
    }
    v9 = <core::result::Result<T,nix::errno::consts::Errno> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v7);
    if !v9 {
        return v9;
    }
    v0 = v9;
LABEL_49a746:
    _ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108 = v10[12]();
    if BinaryOp CasCmpNE {
        goto LABEL_49a746;
    }
    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 == 2 {
        goto LABEL_0x49a768;
    }
}
