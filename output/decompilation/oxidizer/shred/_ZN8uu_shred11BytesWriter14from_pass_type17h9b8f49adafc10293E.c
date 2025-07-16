fn uu_shred::BytesWriter::from_pass_type() -> int {
    let v0: struct40;  // [bp-0x20058]
    let v1: u8;  // [bp-0x2002c]
    let v2: u8;  // [bp-0x1002a]
    let v5: i64;  // rsi
    let v6: u32;  // eax
    let v7: i64;  // rdi
    let v8: void*;  // rax
    let v9: u64;  // rdx
    let v10: u8;  // bpl

    v6 = *(v5 as &i8);
    match (v6) {
        0 => {
            memset(&v1, *((v5 + 1) as &i8), 65538);
        }
        2 => {
            rand_core::SeedableRng::from_entropy(v7 + 16);
            memset(v7 + 336, 0, 0x10000);
            break;
        }
        _ => {
            memset(&v2, 0, 65538);
            v0 = core::slice::<impl [T]>::chunks_exact_mut(&v2);
            v8 = <core::slice::iter::ChunksExactMut<T> as core::iter::traits::iterator::Iterator>::next(&v0);
            if v8 {
                do {
                    core::slice::<impl [T]>::copy_from_slice(v8, v9, v5 + 1, 3, "src/uu/shred/src/shred.rs");
                } while ((v8 = <core::slice::iter::ChunksExactMut<T> as core::iter::traits::iterator::Iterator>::next(&v0), v8));
            }
            memcpy(&v1, &v2, 65538);
        }
    }
    *((v7 + 65544) as &i64) = 0;
    memcpy(v7 + 1, &v1, 65538);
    *(v7 as &u8) = v10;
    return;
}
