fn uu_cp::calculate_dest_permissions(a0: i64, a1: i64, a2: i64, a3: i32, a4: i32, a5: i32) -> u64 {
    let v0: i32;  // [sp-0xe8]
    let v1: i192;  // [sp-0xe0], Other Possible Types: Result<struct176, struct16>
    let v2: i64;  // [bp+0x8]
    let v4: i64;  // rax

    v0 = a5;
    v1 = std::fs::metadata(a1, a2);
    if v1 == 2 {
        v4 = ~(uucore::features::mode::get_umask() as i32) & uu_cp::handle_no_preserve_mode(a4, v0, a3) as i32;
    } else {
        v1 = std::fs::symlink_metadata(a1, a2);
        match v1 {
            Err(_) => {
                v1 = v2;
                v4 = <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(a0, &v1);
                return v4;
            },
            Ok(_) => {
                v4 = *((&v1 as &char + 56) as &i32) as u32 as u64;
            },
        }
    }
    return struct12 {
        field_0: 13
        field_8: v4 as i32
    };
}
