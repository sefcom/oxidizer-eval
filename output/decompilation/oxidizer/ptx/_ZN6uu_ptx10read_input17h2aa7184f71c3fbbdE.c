fn uu_ptx::read_input(a1: i64, a2: i64) -> : struct8 {
    let a0: core::fmt::Arguments;  // rdi
    let v0: i64;  // [bp-0x168]
    let v1: u64;  // [bp-0x160]
    let v2: u64;  // [bp-0x158]
    let v3: struct56;  // [bp-0x150]
    let v4: Result<struct4, struct8>;  // [bp-0x148]
    let v5: struct56;  // [bp-0x148]
    let v6: u32;  // [bp-0x144]
    let v7: u64;  // [bp-0x140]
    let v8: struct56;  // [bp-0x138]
    let v9: struct56;  // [bp-0x138]
    let v10: u128;  // [bp-0x108]
    let v11: u128;  // [bp-0xf8]
    let v12: u64;  // [bp-0xe8]
    let v13: iNone;  // [bp-0xd0]
    let v14: u64;  // [bp-0xc0]
    let v15: struct24;  // [bp-0xb8]
    let v16: struct56;  // [bp-0xa0]
    let v17: Option<struct56>;  // [bp-0x68]
    let v19: i64;  // r14
    let v20: u64;  // rax
    let v21: Result<struct40, struct16>;  // r15
    let v22: Result<struct40, struct16>;  // rbx
    let v23: u64;  // r15
    let v24: u64;  // rax
    let v25: u64;  // rdx
    let v27: core::fmt::Arguments;  // rbx
    let v28: u64;  // rdx

    v19 = a1;
    v20 = std::thread::local::LocalKey<T>::with();
    v10 = g_650de8.field_0;
    v11 = g_650df8.field_0;
    v12 = v20;
    if a2 {
        do {
            v23 = v21;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v19 + 8) as &i64), *((v19 + 16) as &i64), "-") {
                alloc::boxed::Box<T>::new(std::io::stdio::stdin());
            } else {
                v4 = std::fs::File::open(v19);
                match v4 {
                    Err(_) => {
                        v27 = a0;
                        *((v0 + 8) as &u64) = v7;
                        *(v27 as &i64) = 0;
                        return;
                    },
                    Ok(_) => {
                        alloc::boxed::Box<T>::new(v6);
                    },
                }
            }
            v16 = std::io::buffered::bufreader::BufReader<R>::with_capacity(v24, v25);
            core::iter::traits::iterator::Iterator::collect(&v5, &v16);
            if (((0 ^ v5.field_0) & (0 ^ -(v5.field_0))) >> 63) as char {
                v27 = a0;
                *((v0 + 8) as &u64) = v7;
                *(v27 as &i64) = 0;
                return;
            }
            v1 = v5.field_0;
            v2 = v7;
            v3 = v8;
            core::iter::traits::iterator::Iterator::collect(&v13, v7, v7 + v3 * 24);
            v15 = <alloc::string::String as core::clone::Clone>::clone(v19);
            v5 = struct56 {
                field_0: *(&v1 as &i128)
                field_16: v3
                field_24: v13
                field_40: v14
                field_48: v22
            };
            v17 = hashbrown::map::HashMap<K,V,S,A>::insert(&v10, &v15, &v5);
            v8 = v9;
            v21 = v23 - 24;
        } while (v23 != 24);
    }
    *((v0 + 32) as &u64) = v12;
    *((v0 + 40) as &u64) = v28;
    *((v0 + 16) as &u128) = v11;
    *(v0 as &u128) = v10;
    return;
}
