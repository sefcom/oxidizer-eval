fn uu_cp::calculate_dest_permissions(a0: u64, a1: u64, a2: u64, a3: u32, a4: u8, a5: i128, a6: u64, a7: u64) -> long long {
    let v0: core::fmt::rt::Argument;  // [bp-0xe8]
    let v1: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0], Other Possible Types: struct24
    let v2: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v3: u64;  // [bp-0xd8]
    let v4: struct16;  // eax
    let v5: u32;  // eax

    v0 = a5;
    v1 = std::fs::metadata(a1, a2);
    match v1 {
        Err(_) => {
            v4 = uu_cp::handle_no_preserve_mode(a4, v0.ty as i8, a3 as u64) as u32;
            v5 = ~(uucore::features::mode::get_umask() as u32) & v4;
        },
        Ok(_) => {
            v2 = std::fs::symlink_metadata(a1, a2);
            if let Err(_) = v2 {
                v1 = struct24 {
                    field_0: a6
                    field_8: a7
                    field_16: v3
                };
                return <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(a0, &v1);
            }
        },
    }
    return struct16 {
        field_0: 9223372036854775820
        field_8: v5
    };
}
