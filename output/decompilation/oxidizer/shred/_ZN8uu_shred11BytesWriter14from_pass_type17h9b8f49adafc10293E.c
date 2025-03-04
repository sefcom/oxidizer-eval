fn uu_shred::BytesWriter::from_pass_type(a0: &Option<struct9>, a1: &u64) -> u64 {
    let v0: struct40;  // [sp-0x20058]
    let v1: i8;  // [bp-0x2002c]
    let v2: i8;  // [bp-0x20028]
    let v3: i8;  // [bp-0x1002a]
    let v4: i64;  // [sp-0x2028]
    let v6: i32;  // eax
    let v9: struct16;  // rax
    let v10: i64;  // rdx

    do {
        v4 = 0;
    } while (&v4 != &v2);
    match (v6) {
        0 => {
            memset(&v1, *((a1 + 1) as &i8), 65538);
            goto LABEL_4bc1eb;
        }
        2 => {
            rand_core::SeedableRng::from_entropy(a0 + 16);
            memset(a0 + 336, 0, 0x10000);
            break;
        }
        _ => {
            memset(&v3, 0, 65538);
            v0 = core::slice::<impl [T]>::chunks_exact_mut(&v3);
            v9 = <core::slice::iter::ChunksExactMut<T> as core::iter::traits::iterator::Iterator>::next();
            if v9 {
                do {
                    core::slice::<impl [T]>::copy_from_slice(v9, v10, a1 + 1, 3, "src/uu/shred/src/shred.rs");
                    v9 = <core::slice::iter::ChunksExactMut<T> as core::iter::traits::iterator::Iterator>::next();
                } while (v9);
            }
            memcpy(&v1, &v3, 65538);
LABEL_4bc1eb:
            *((a0 + 65544) as &i64) = 0;
            memcpy(a0 + 1, &v1, 65538);
            break;
        }
    }
    return struct1 {
        field_0: v7
    };
}
