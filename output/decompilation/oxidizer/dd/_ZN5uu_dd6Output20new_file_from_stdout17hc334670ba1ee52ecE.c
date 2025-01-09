fn uu_dd::Output::new_file_from_stdout(a0: &struct24, a1: u32) -> u64 {
    let v0: i32;  // [sp-0x28], Other Possible Types: Result<struct4, struct8>
    let v1: i32;  // [sp-0x24]
    let v3: i32;  // ebp
    let v4: i64;  // rdx
    let v5: i32;  // edx

    std::io::stdio::stdout();
    v0 = uucore::mods::io::OwnedFileDescriptorOrHandle::from();
    if v0 {
        *((a0 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v0);
        *((a0 + 16) as &i64) = v4;
        *(a0 as &i8) = 4;
        return a0;
    }
    v3 = v1;
    if uu_dd::make_linux_oflags(a1 + 150) as i32 == 1 {
        v1 = v5;
        v0 = 5;
        if nix::fcntl::fcntl(v3, &v0) as i32 {
            return a0;
        }
    }
    uu_dd::Output::prepare_file(a0, v3, a1);
    return a0;
}
