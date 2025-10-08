fn uu_pathchk::check_extra(a0: u64, a1: u64) -> long long {
    let v0: u32;  // [bp-0x98]
    let v1: Result<struct24, struct24>;  // [bp-0x98]
    let v14: void*;  // rbx
    let v15: struct437;  // 4096
    let v16: u64;  // rdx
    let v18: u64;  // rcx
    let v20: u64;  // rax
    let v22: &mut [u8];  // rax:rdx

    if a1 {
        v14 = 0;
        v15 = a1;
        loop {
            v0 = 0;
            v22 = core::char::methods::encode_utf8_raw(&v0 as u32, v15, v16);
            if core::slice::<impl [T]>::starts_with(*((8 + a0 + v14 as &u8) as &i64), *((16 + a0 + v14 as &u8) as &i64), v22.data_ptr, v18) {
                break;
            }
            v14 += 24;
            if a1 * 24 == v14 {
                goto LABEL_4561a5;
            }
        }
    }
LABEL_4561a5:
    v1 = alloc::str::join_generic_copy(a0, a1);
    v20 = core::ptr::drop_in_place<alloc::string::String>(v1 as i64) & -0x100 | 1;
}
