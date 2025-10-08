fn uu_shred::BytesWriter::from_pass_type() -> int {
    let v0: struct40;  // [bp-0x20060]
    let v1: void*;  // [bp-0x20050]
    let v2: u64;  // [bp-0x20048]
    let v3: u8;  // [bp-0x20034]
    let v4: u8;  // [bp-0x10032]
    let v7: i64;  // rsi
    let v8: i64;  // rdi
    let v9: u64;  // r14
    let v10: u64;  // r15
    let v11: core::result::Result<usize, core::num::error::ParseIntError>;  // bpl

    if *(v7 as &i8) == 2 {
        rand_core::SeedableRng::from_os_rng(v8 + 16);
        memset(v8 + 336, 0, 0x10000);
    } else {
        v9 = v7 + 1;
        if (*(v7 as &i8) & 1) {
            memset(&v4, 0, 65538);
            v0 = core::slice::<impl [T]>::chunks_exact_mut(&v4, 65538, 3);
            v10 = v0.field_32;
            if v2 >= v10 {
                do {
                    v2 -= v10;
                    core::slice::<impl [T]>::copy_from_slice(v1, v10, v9, 3, "src/uu/shred/src/shred.rs");
                    v1 += v10;
                } while (v2 >= v10);
            }
            memcpy(&v3, &v4, 65538);
        } else {
            memset(&v3, *(v9 as &i8), 65538);
        }
        *((v8 + 65544) as &i64) = 0;
        memcpy(v8 + 1, &v3, 65538);
    }
    *(v8 as &core::result::Result<usize, core::num::error::ParseIntError>) = v11;
    return;
}
