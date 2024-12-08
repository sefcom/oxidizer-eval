fn uu_shred::BytesWriter::from_pass_type() -> u32 {
    let v0: struct40;  // [sp-0x20058]
    let v1: i8;  // [bp-0x2002c]
    let v2: i8;  // [bp-0x20028]
    let v3: i8;  // [bp-0x1002a]
    let v4: i64;  // [sp-0x2028]
    let v6: i64;  // rsi
    let v7: i32;  // eax
    let v8: i64;  // rdi
    let v9: i64;  // rdx
    let v10: i8;  // bpl
    let v11: struct16;  // rax
    let v12: i64;  // rdx

    do {
        v4 = 0;
    } while (&v4 != &v2);
    switch (v7) {
    case 0:
        memset(&v1, *((v6 + 1) as &i8), 65538);
        goto LABEL_4bb8db;
    case 2:
        rand_core::SeedableRng::from_entropy(v8 + 16, v6, v9);
        v10 = 0;
        memset(v8 + 336, 0, 0x10000);
        break;
    default:
        memset(&v3, 0, 65538);
        v0 = core::slice::<impl [T]>::chunks_exact_mut(&v3);
        v11 = <core::slice::iter::ChunksExactMut<T> as core::iter::traits::iterator::Iterator>::next();
        if v11 {
            do {
                core::slice::<impl [T]>::copy_from_slice(v11, v12, v6 + 1, 3, "src/uu/shred/src/shred.rs");
                v11 = <core::slice::iter::ChunksExactMut<T> as core::iter::traits::iterator::Iterator>::next();
            } while (v11);
        }
        memcpy(&v1, &v3, 65538);
LABEL_4bb8db:
        *((v8 + 65544) as &i64) = 0;
        memcpy(v8 + 1, &v1, 65538);
        v10 = vvar_58{reg 56} | -0x100 | 1;
        break;
    }
    *(v8 as &i8) = v10;
    return;
}
