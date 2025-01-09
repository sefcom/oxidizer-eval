fn uu_dd::Output::new_file_from_stdout(a0: &Result<struct24, struct16>, a1: u32) -> u64 {
    let v0: u32;  // [sp-0x28], Other Possible Types: Result<struct4, struct8>
    let v1: u32;  // [sp-0x24]
    let v2: u8;  // [bp-0x20]
    let v4: u32;  // ebp
    let v5: u64;  // rdx
    let v6: u32;  // edx
    let v7: u64;  // rdx

    std::io::stdio::stdout();
    v0 = uucore::mods::io::OwnedFileDescriptorOrHandle::from() as u64;
    if v0 {
        *(&a0->field_8 as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(&v2 as &i64));
        a0->field_10 = v5;
        a0->field_0 = 4;
        return a0;
    }
    v4 = v1;
    if uu_dd::make_linux_oflags(a1 + 150) as i32 == 1 {
        v1 = v6;
        v0 = 5;
        if nix::fcntl::fcntl(v4, &v0) as i32 {
            *(&a0->field_8 as &long long) = uucore::mods::error::<impl core::convert::From<nix::errno::consts::Errno> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
            a0->field_10 = v7;
            a0->field_0 = 4;
            return a0;
        }
    }
    uu_dd::Output::prepare_file(a0, v4, a1);
    return a0;
}
