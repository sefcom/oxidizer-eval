fn uu_cp::calculate_dest_permissions(a0: &Result<struct32, struct4>, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32, a6: u32, a7: u32) -> u64 {
    let v0: i32;  // [sp-0xe8]
    let v1: Result<struct176, struct8>;  // [sp-0xe0], Other Possible Types: struct24
    let v2: i32;  // r14d
    let v3: i64;  // rax

    v0 = a5;
    v1 = std::fs::metadata(a1, a2);
    if v2 == 2 {
        v3 = ~(uucore::features::mode::get_umask() as i32) & uu_cp::handle_no_preserve_mode(a4 as u64, v0 as i8, a3 as u64) as i32;
    } else {
        v1 = std::fs::symlink_metadata(a1, a2);
        if v1 as i32 == 2 {
            v1 = struct24 {
                field_0: a6
                field_16: *((&v1 as &char + 8) as &i64)
            };
            <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(a0, &v1);
        }
    }
    return Err(struct4 {
        field_0: v3 as u32
    });
}
