fn just::settings::Settings::shell(a1: i64, a2: i64) -> : struct16 {
    let a0: u64;  // rdi
    let v1: struct12;  // r15
    let v2: u64;  // r14

    if !((((0 ^ *((a2 + 192) as &i64)) & (0 ^ -(*((a2 + 192) as &i64)))) >> 63) as char) {
        v1 = *((a2 + 200) as &i64);
        v2 = *((a2 + 208) as &i64);
        if *((a2 + 216) as &i64) == 0x8000000000000000 {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0 + 16, "-cu", 1);
        } else {
            core::iter::traits::iterator::Iterator::collect(a0 + 16, *((a2 + 224) as &i64), *((a2 + 224) as &i64) + *((a2 + 232) as &i64) * 24);
        }
    } else if *((a2 + 216) as &i64) != 0x8000000000000000 {
        core::iter::traits::iterator::Iterator::collect(a0 + 16, *((a2 + 224) as &i64), *((a2 + 224) as &i64) + *((a2 + 232) as &i64) * 24);
    } else if *((a1 + 120) as &i64) == 0x8000000000000000 {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0 + 16, "-cu", 1);
    } else {
        v1 = *((a1 + 152) as &i64);
        v2 = *((a1 + 160) as &i64);
        core::iter::traits::iterator::Iterator::collect(a0 + 16, *((a1 + 128) as &i64), *((a1 + 136) as &i64) * 48 + *((a1 + 128) as &i64));
    }
    return struct16 {
        field_0: v1
        field_8: v2
    };
}
