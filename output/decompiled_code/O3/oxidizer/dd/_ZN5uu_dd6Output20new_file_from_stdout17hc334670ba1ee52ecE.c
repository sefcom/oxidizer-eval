fn uu_dd::Output::new_file_from_stdout(a0: &Result<struct24, struct17>, a1: u32, a2: u32) -> u64 {
    let v0: u32;  // [sp-0x28], Other Possible Types: Result<struct4, struct8>
    let v1: u32;  // [sp-0x24]
    let v4: u32;  // ebp
    let v6: u32;  // edx

    std::io::stdio::stdout();
    v0 = uucore::mods::io::OwnedFileDescriptorOrHandle::from();
    if v0 {
        return struct17 {
            field_0: 4
            field_8: <UNKNOWN>
            field_16: <UNKNOWN>
        };
    }
    v4 = v1;
    if uu_dd::make_linux_oflags(a1 + 150) as i32 == 1 {
        v1 = v6;
        v0 = 5;
        if nix::fcntl::fcntl(v4, &v0) as i32 {
            return struct17 {
                field_0: 4
                field_8: <UNKNOWN>
                field_16: <UNKNOWN>
            };
        }
    }
    uu_dd::Output::prepare_file(a0, v4, a1);
    return struct17 {
        field_0: 4
        field_8: <UNKNOWN>
        field_16: <UNKNOWN>
    };
}
