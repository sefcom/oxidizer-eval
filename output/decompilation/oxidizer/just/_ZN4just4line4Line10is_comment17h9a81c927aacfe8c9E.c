fn just::line::Line::is_comment(a0: void*, a1: u64) -> long long {
    let v0: u64;  // [bp-0x18]
    let v1: u32;  // [bp-0x14]
    let v3: u64;  // rax
    let v4: u64;  // rax
    let v5: u64;  // rdx
    let v6: &mut [u8];  // rax:rdx

    v0 = v3;
    v4 = just::line::Line::first(a0, a1);
    if !v4 {
        return 0;
    }
    v1 = 0;
    v6 = core::char::methods::encode_utf8_raw(35, &v1, v5);
    return core::slice::<impl [T]>::starts_with(v4, v5, v6.data_ptr, v6.length);
}
