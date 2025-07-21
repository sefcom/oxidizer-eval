fn uu_dd::Output::new_file_from_stdout(a1: i64) -> : struct24 {
    let a0: u64;  // rsi
    let v0: Result<struct4, struct8>;  // [bp-0x28], Other Possible Types: struct8
    let v1: u32;  // [bp-0x24]
    let v3: i64;  // rdi
    let v4: u64;  // rdx
    let v5: u32;  // edx
    let v6: void*;  // rcx
    let v7: i64;  // rdi
    let v8: u64;  // rdx

    std::io::stdio::stdout();
    v0 = uucore::mods::io::OwnedFileDescriptorOrHandle::from();
    match v0 {
        Err(_) => {
            *((v3 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v0 as &char + 8) as &i64));
            *((v3 + 16) as &u64) = v4;
            *(v3 as &i8) = 4;
            return;
        },
        Ok(_) => {
            if uu_dd::make_linux_oflags(a0 + 150) as i32 == 1 {
                v0 = struct8 {
                    field_0: 5
                    field_4: v5
                };
                if nix::fcntl::fcntl(v1 as u64, &v0) as u32 {
                    *((v7 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<nix::errno::consts::Errno> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5 as u64);
                    *((v7 + 16) as &u64) = v8;
                    *(v7 as &i8) = 4;
                    return;
                }
            }
            uu_dd::Output::prepare_file(v1 as u64, a0 as u32, v6);
            return;
        },
    }
}
