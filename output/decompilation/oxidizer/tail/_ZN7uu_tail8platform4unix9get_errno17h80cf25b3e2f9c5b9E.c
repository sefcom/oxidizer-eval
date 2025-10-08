fn uu_tail::platform::unix::get_errno() -> u64 {
    let v0: core::result::Result<u64, std::io::error::Error>;  // [bp-0x20]
    let v1: struct9;  // [bp-0x18]
    let v3: i64;  // rax

    v3 = __errno_location();
    v0 = *(v3 as &i32) * 0x100000000 | 2;
    v1 = std::io::error::repr_bitpacked::decode_repr(*(v3 as &i32) * 0x100000000 | 2);
    core::option::unwrap(v1);
    return *((&v1.field_0 as &char + 4) as &i32);
}
