fn uu_dd::Output::new_file_from_stdout(a1: i64) -> Result<struct24, struct17> {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x28], Other Possible Types: Result<struct4, struct8>
    let v1: u32;  // [bp-0x24]
    let v2: u32;  // [bp-0x24]
    let v4: i64;  // rdi
    let v5: u64;  // rdx
    let v6: u32;  // edx
    let v7: void*;  // rcx
    let v8: i64;  // rdi
    let v9: u64;  // rdx

    std::io::stdio::stdout();
    v0 = uucore::mods::io::OwnedFileDescriptorOrHandle::from();
    match v0 {
        Err(_) => {
            *((v4 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v0 as &char + 8) as &i64));
            *((v4 + 16) as &u64) = v5;
            *(v4 as &i8) = 4;
            return;
        },
        Ok(_) => {
            if uu_dd::make_linux_oflags(a0 + 150) as i32 == 1 {
                v1 = v6;
                v0 = 5;
                if nix::fcntl::fcntl(v2 as u64, &v0) as u32 {
                    *((v8 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<nix::errno::consts::Errno> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6 as u64);
                    *((v8 + 16) as &u64) = v9;
                    *(v8 as &i8) = 4;
                    return;
                }
            }
            uu_dd::Output::prepare_file(v2 as u64, a0 as u32, v7);
            return;
        },
    }
}
