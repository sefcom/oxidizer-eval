fn uu_cp::calculate_dest_permissions(a0: &Result<struct32, struct4>, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i32;  // [sp-0xe8]
    let v1: i192;  // [sp-0xe0], Other Possible Types: struct16
    let v3: i64;  // [bp+0x8]
    let v4: i32;  // r14d
    let v5: i64;  // rax

    v0 = a5;
    v1 = std::fs::metadata(a1, a2);
    if v4 == 2 {
        v5 = ~(uucore::features::mode::get_umask() as i32) & uu_cp::handle_no_preserve_mode(a4, v0, a3) as i32;
    } else {
        v1 = std::fs::symlink_metadata(a1, a2);
        if v1 == 2 {
            v1 = v3;
            <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(a0, &v1);
        }
    }
    return Err(struct4 {
        field_0: v5 as i32
    });
}
