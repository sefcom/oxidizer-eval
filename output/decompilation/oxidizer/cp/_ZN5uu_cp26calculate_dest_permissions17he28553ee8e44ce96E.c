fn uu_cp::calculate_dest_permissions(a1: i64, a2: i64, a3: i32, a4: i8, a5: i32, a6: i64, a7: i64) -> Result<struct32, struct4> {
    let a0: u64;  // rdi
    let v0: u32;  // [bp-0xe8]
    let v1: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0], Other Possible Types: struct24
    let v2: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v3: u64;  // [bp-0xd8]
    let v4: u32;  // eax
    let v5: u64;  // rax

    v0 = a5;
    v1 = std::fs::metadata(a1, a2);
    match v1 {
        Err(_) => {
            v4 = uu_cp::handle_no_preserve_mode(a4, v0 as i8, a3 as u64) as i32;
            v5 = (~(uucore::features::mode::get_umask() as i32) & v4) as u64;
        },
        Ok(_) => {
            v2 = std::fs::symlink_metadata(a1, a2);
            if let Err(_) = v2 {
                v1 = struct24 {
                    field_0: a6
                    field_8: a7
                    field_16: v3
                };
                v1 = struct24 {
                    field_0: a6
                    field_16: v3
                };
                return <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(a0, &v1) as u64;
            }
        },
    }
    return struct16 {
        field_0: 13
        field_8: v5 as u32
    };
}
