fn uu_head::take::TakeAllLinesBuffer::fill_buffer(a0: i64, a1: i64, a2: u32, a3: u8) -> long long {
    let v3: u8;  // [bp-0x28]
    let v5: u64;  // rdx
    let v6: u64;  // rax
    let v7: u64;  // rax
    let v8: u64;  // rdx
    let v9: u64;  // rax
    let v11: &str;  // rax
    let v12: u64;  // rax

    if (uu_head::take::TakeAllBuffer::fill_buffer(a1, a2) & 1) {
        *((a0 + 8) as &u64) = v5;
        v6 = 1;
    }
    v7 = uu_head::take::TakeAllBuffer::remaining_buffer(a1);
    *((a1 + 32) as &u64) = memchr::arch::generic::memchr::Iter::count(v7, v8 + v7, &v3) as u64;
    v9 = uu_head::take::TakeAllBuffer::remaining_buffer(a1);
    if v8 && *((v9 + v8 - 1) as &i8) != a3 {
        *((a1 + 40) as &i8) = 1;
    }
    v11 = 0;
    return struct24 {
        field_0: v12
        field_8: v8
        field_16: *((a1 + 32) as &i64)
    };
}
