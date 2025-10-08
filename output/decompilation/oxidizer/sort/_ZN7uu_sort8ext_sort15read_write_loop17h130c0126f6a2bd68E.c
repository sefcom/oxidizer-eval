fn uu_sort::ext_sort::read_write_loop(a1: i64, a2: i64, a3: i32, a4: i64, a5: i64, a6: i64, a7: i64, a8: i64, a9: i64) -> Result<struct24, struct24> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x228]
    let v1: u64;  // [bp-0x220]
    let v2: Result<struct16, struct9>;  // [bp-0x218]
    let v3: Result<struct24, struct24>;  // [sp-0x218], Other Possible Types: u64
    let v4: struct24;  // [bp-0x218]
    let v5: u64;  // [bp-0x218]
    let v6: u64;  // [bp-0x210]
    let v7: u64;  // [bp-0x208]
    let v8: u64;  // [bp-0x200]
    let v9: u64;  // [bp-0x1f8]
    let v10: void*;  // [bp-0x1f0], Other Possible Types: u64
    let v11: struct16;  // [bp-0x1f0]
    let v12: u64;  // [bp-0x1e8]
    let v13: void*;  // [bp-0x1e0]
    let v14: u32;  // [bp-0x1d8]
    let v15: u64;  // [bp-0x1d0]
    let v16: &u64;  // [bp-0x1c8]
    let v17: void*;  // [bp-0x1c0]
    let v18: u64;  // [bp-0x1b8]
    let v19: void*;  // [bp-0x1b0]
    let v20: u64;  // [bp-0x1a8]
    let v21: u64;  // [bp-0x198]
    let v22: u64;  // [bp-0x190]
    let v23: struct24;  // [bp-0x188]
    let v24: &u64;  // [bp-0x170], Other Possible Types: Result<struct16, struct9>, struct8, struct144
    let v25: struct36;  // [bp-0x170]
    let v26: struct32;  // [bp-0x170]
    let v27: u64;  // [bp-0x168]
    let v28: i8;  // [bp-0x160]
    let v29: struct32;  // [bp-0xe0]
    let v30: struct120;  // [bp-0xc0]
    let v31: u64;  // 4096
    let v33: u64;  // r15
    let v35: u64;  // rax
    let v36: u64;  // rax

    v21 = a8;
    v22 = a9;
    v24 = <&mut I as core::iter::traits::iterator::Iterator>::next(a1);
    core::option::unwrap(v24);
    if (v24 as u8 & 1) {
        return struct24 {
            field_0: 9223372036854775811
            field_8: v27
            field_16: v1
        };
    }
    v0 = v27;
    v1 = *(&v28 as &i64);
    v17 = 0;
    v18 = 1;
    v19 = 0;
    if a4 < 8000 {
        v31 = a4;
    } else {
        v31 = 8000;
    }
    v33 = v31;
    v24 = uu_sort::chunks::RecycledChunk::new(v33);
    v2 = uu_sort::chunks::read(a8, a9, &v24, 1, a4, &v17, &v0, a1, a3, a5);
    match v2 {
        Ok(_) => {
            return struct24 {
                field_0: 9223372036854775811
                field_8: v3
                field_16: v6
            };
        },
        Err(_) => {
            if *((&v2 as &char + 8) as &i8) {
                v24 = uu_sort::chunks::RecycledChunk::new(v33 as u8);
                v2 = uu_sort::chunks::read(a8, a9, &v24, 1, a4, &v17, &v0, a1, a3, a5);
                if v2 as i64 {
                    return struct24 {
                        field_0: 9223372036854775811
                        field_8: v3
                        field_16: v6
                    };
                } else if *((&v2 as &char + 8) as &i8) == 1 {
                    v8 = a8;
                    v9 = a9;
                    v10 = 0;
                    v12 = 8;
                    v13 = 0;
                    v15 = 0x8000000000000000;
                    v14 = (*((a5 + 48) as &i64) == 0x8000000000000000 ? 0 : *((a5 + 56) as &i64));
                    v20 = *((a5 + 64) as &i64);
                    do {
                        do {
                            v24 = std::sync::mpmc::Receiver<T>::recv(a6, a7);
                            if !v24 {
                                return Ok(struct24 {
                                    field_0: *((&v3 as &char + 40) as &i128)
                                    field_16: 0
                                });
                            }
                            v16 = v24;
                            v25 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a2);
                            if v27 == v15 {
                                *((a0 + 8) as &i128) = *((&v25.field_4 as &char + 8) as &i128);
                            }
                            v29 = v26;
                            v3 = uu_sort::ext_sort::write(v16, &v29, v14, v20, a3 as u64);
                            if v3 as i64 == v15 {
                                return struct24 {
                                    field_0: 9223372036854775811
                                    field_8: v6
                                    field_16: v7
                                };
                            }
                            v23 = v4;
                            v11 = alloc::vec::Vec<T,A>::push(&v23, "src/uu/sort/src/ext_sort.rs");
                            v30 = uu_sort::chunks::Chunk::recycle(v16);
                        } while (a8 == 3);
                        v24 = uu_sort::chunks::read(a8, a9, &v30, 0, a5, &v17, &v0, a1, a3, a5);
                    } while (!v24 as i64);
                    return struct24 {
                        field_0: 9223372036854775811
                        field_8: v24 as i64
                        field_16: v27
                    };
                }
            }
            v10 = std::sync::mpmc::Receiver<T>::recv(a6, a7);
            if !v10 {
                return Ok(struct24 {
                    field_0: 0x8000000000000000
                    field_8: v5
                    field_16: v36
                });
            }
            v5 = v10;
            std::sync::mpmc::Receiver<T>::recv(a6, a7);
            return Ok(struct24 {
                field_0: 9223372036854775809
                field_8: v5
                field_16: v35
            });
        },
    }
}
