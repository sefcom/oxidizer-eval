fn uu_more::Pager::new(a0: i64, a1: u64, a2: u32, a3: i64) -> void {
    let v0: u64;  // [bp-0xb0]
    let v1: u128;  // [bp-0xa8]
    let v2: struct16;  // [bp-0xa8]
    let v3: u64;  // [bp-0xa8]
    let v4: struct16;  // [bp-0xa8]
    let v5: i64;  // [bp-0xa0]
    let v6: u64;  // [bp-0x98]
    let v7: i64;  // [bp-0x88]
    let v8: void*;  // [bp-0x80], Other Possible Types: struct72
    let v9: u64;  // [bp-0x78]
    let v10: void*;  // [bp-0x70]
    let v11: i64;  // [bp-0x38]
    let v13: i64;  // r15
    let v14: u64;  // r13
    let v15: i64;  // rax
    let v16: u64;  // 4106
    let v17: u64;  // rbx
    let v18: void*;  // r12
    let v19: i64;  // rbp
    let v20: u64;  // rdx
    let v21: u64;  // cc_ndep
    let v22: void*;  // r12
    let v23: u8;  // al
    let v24: u64;  // cc_dep1
    let v25: void*;  // r12
    let v26: void*;  // r12
    let v27: void*;  // r12
    let v28: void*;  // r12
    let v29: void*;  // r12
    let v30: u64;  // rdx
    let v31: u64;  // rcx
    let v32: u64;  // r14
    let v33: i64;  // r12
    let v34: u64;  // rax
    let v35: u16;  // cx

    v13 = a3;
    v8 = std::io::buffered::bufreader::BufReader<R>::with_capacity(a1);
    v14 = alloc::boxed::Box<T>::new(&v8) as u64;
    v15 = alloc::alloc::Global::alloc_impl(8, 8);
    *(v15 as &i64) = 0;
    v3 = 1;
    v5 = v15;
    v6 = 1;
    v8 = 0;
    v9 = 1;
    v16 = *(a3 as &i64);
    if (((0 ^ v16) & (0 ^ -(v16))) >> 63) as char {
        for (v11 = a3; !(std::io::append_to_string(&v8, v14) & 1); v4 = alloc::vec::Vec<T,A>::push(v18 + v20)) {
            if !v20 {
                goto LABEL_47217d;
            }
            v21 = _ccall(20, v20, 0, v21);
            v19 += 1;
        }
    } else if *((a3 + 16) as &i64) {
        for (v0 = v14; !(std::io::append_to_string(&v8, v0) & 1); v13 = v19) {
            if !v20 {
                v14 = v0;
                goto LABEL_47217d;
            }
            v1 = alloc::vec::Vec<T,A>::push(v22 + v20);
            if !v17 {
                v23 = <&str as core::str::pattern::Pattern>::is_contained_in(*((a3 + 8) as &i64), *((a3 + 16) as &i64), 1, 0);
                v24 = v23;
            } else {
                v21 = _ccall(20, v17, 0, v21);
                v19 += 1;
                v14 = v0;
                loop {
                    v25 = v26;
                    v10 = 0;
                    if (std::io::append_to_string(&v8, v14) & 1) {
                        break;
                    }
                    if !v20 {
                        goto LABEL_47217d;
                    }
                    v26 = v25 + v20;
                    v1 = alloc::vec::Vec<T,A>::push(v26);
                    v21 = (v25 + v20 <= v25 ? 1 : 0);
                    v19 += 1;
                }
                break;
            }
        }
LABEL_47217d:
        v30 = std::io::Seek::rewind(v14);
        if !v30 {
            v31 = a2;
            v32 = (_ccall(2, 6, v31 & 65535, 1, v21) as char ? 0 : v31 & -0x10000 | v31 - 1);
            v33 = v11;
            v0 = *((v33 + 24) as &i64);
            v34 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v32, 8, 24, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/more/src/more.rs");
            *((v7 + 56) as &i64) = 1;
            *((v7 + 40) as &u128) = v1;
            v35 = *((v33 + 38) as &i16);
            *(v7 as &u64) = v17;
            *((v7 + 8) as &unsigned long) = v13;
            *((v7 + 16) as &u64) = v34;
            *((v7 + 24) as &u64) = v20;
            *((v7 + 32) as &i64) = 0;
            *((v7 + 64) as &u64) = v14;
            *((v7 + 72) as &&u8) = &g_5240e0;
            *((v7 + 80) as &u64) = v0;
            *((v7 + 88) as &u64) = v32;
            *((v7 + 96) as &i64) = 0;
            *((v7 + 112) as &unsigned long) = v19;
            *((v7 + 120) as &i64) = 0;
            *((v7 + 128) as &u16) = v35;
            return;
        }
    } else {
        v17 = 0;
        v13 = &v3;
        v27 = 0;
        v19 = 0;
        v14 = v0;
        loop {
            v28 = v29;
            v10 = 0;
            if (std::io::append_to_string(&v8, v14) & 1) {
                break;
            }
            if !v20 {
                goto LABEL_47217d;
            }
            v29 = v28 + v20;
            v2 = alloc::vec::Vec<T,A>::push(v29);
            v21 = (v28 + v20 <= v28 ? 1 : 0);
            v19 += 1;
        }
    }
    *((v7 + 8) as &u64) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v30);
    *((v7 + 16) as &u64) = v20;
    *(v7 as &i64) = 2;
    return;
}
