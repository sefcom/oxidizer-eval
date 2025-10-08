fn uu_dd::Output::new_file_from_stdout(a1: i64) -> Result<struct24, struct17> {
    let a0: u64;  // rdi
    let v0: Result<struct4, struct8>;  // [bp-0x28], Other Possible Types: struct8
    let v1: u32;  // [bp-0x24]
    let v3: u64;  // rdx
    let v4: u32;  // edx
    let v5: u64;  // rdx

    std::io::stdio::stdout();
    v0 = uucore::mods::io::OwnedFileDescriptorOrHandle::from();
    match v0 {
        Err(_) => {
            return struct24 {
                field_0: 4
                padding_1: <UNKNOWN>
                field_8: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v0 as &char + 8) as &i64))
                field_16: v3
            };
        },
        Ok(_) => {
            if (uu_dd::make_linux_oflags(a1 + 150) as u8 & 1) {
                v0 = struct8 {
                    field_0: 5
                    field_4: v4
                };
                if (nix::fcntl::fcntl(v1 as u64, &v0) as u8 & 1) {
                    return struct24 {
                        field_0: 4
                        padding_1: <UNKNOWN>
                        field_8: uucore::mods::error::<impl core::convert::From<nix::errno::consts::Errno> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4 as u64)
                        field_16: v5
                    };
                }
            }
            uu_dd::Output::prepare_file(a0, v1, a1);
            return;
        },
    }
}
