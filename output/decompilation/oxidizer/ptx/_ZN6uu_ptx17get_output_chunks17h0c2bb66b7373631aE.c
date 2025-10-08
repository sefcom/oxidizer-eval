fn uu_ptx::get_output_chunks(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64, a5: u64, a6: i64) -> void {
    let v0: u64;  // [bp-0x1c0]
    let v1: struct8;  // [bp-0x1b8], Other Possible Types: u128
    let v2: u64;  // [bp-0x1b8]
    let v3: u64;  // [bp-0x1b0]
    let v4: void*;  // [bp-0x1a8]
    let v5: u64;  // [bp-0x1a0]
    let v6: struct8;  // [bp-0x198], Other Possible Types: u128
    let v7: u64;  // [bp-0x198]
    let v8: u64;  // [bp-0x190]
    let v9: u64;  // [bp-0x188]
    let v10: i64;  // [bp-0x180]
    let v11: u64;  // [bp-0x170]
    let v12: u64;  // [bp-0x168]
    let v13: struct8;  // [bp-0x158], Other Possible Types: u64
    let v14: u64;  // [bp-0x150]
    let v15: void*;  // [bp-0x148]
    let v16: struct8;  // [bp-0x140], Other Possible Types: u64
    let v17: u64;  // [bp-0x138]
    let v18: void*;  // [bp-0x130]
    let v20: struct2;  // [bp-0x128]
    let v21: core::fmt::rt::Argument;  // [bp-0x118]
    let v22: struct2;  // [bp-0x118]
    let v23: u64;  // [bp-0x108]
    let v24: i64;  // [bp-0xf8]
    let v25: core::fmt::Arguments;  // [bp-0xf0]
    let v26: struct24;  // [bp-0xc0]
    let v27: u64;  // [bp-0xb8]
    let v28: struct24;  // [bp-0xa8]
    let v29: u64;  // [bp-0xa0]
    let v30: struct24;  // [bp-0x90]
    let v31: u64;  // [bp-0x88]
    let v32: struct24;  // [bp-0x78]
    let v33: u64;  // [bp-0x70]
    let v34: alloc::string::String;  // [bp-0x60]
    let v35: void*;  // [bp-0x50]
    let v36: struct24;  // [bp-0x48]
    let v37: u64;  // rbp
    let v38: u64;  // rdx
    let v39: u64;  // rbx
    let v40: u64;  // rax
    let v41: u64;  // rax
    let v43: u64;  // rax
    let v44: u64;  // rbp
    let v45: u64;  // rax
    let v46: u64;  // rax
    let v47: u64;  // rbx
    let v48: u64;  // rax
    let v49: u64;  // rbp
    let v50: u64;  // rax

    v37 = *((a6 + 72) as &i64) >> 1;
    v12 = *((a6 + 80) as &i64);
    v0 = core::cmp::Ord::max(v37 - *((a6 + 80) as &i64), a1);
    v23 = *((a6 + 40) as &i64);
    v5 = core::cmp::Ord::max(~(*((a6 + 40) as &i64) * 2 + a3) + v37, a1);
    v7 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v37, 1, 1, "/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs");
    v8 = v38;
    v9 = 0;
    v2 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v37, 1, 1, "/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs");
    v3 = v38;
    v4 = 0;
    v13 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v37, 1, 1, "/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs");
    v14 = v38;
    v15 = 0;
    v39 = a1;
    v16 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v37, 1, 1, "/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs");
    v17 = v38;
    v18 = 0;
    uu_ptx::trim_idx(v39, a2, 0, a2);
    v40 = uu_ptx::trim_idx(v39, a2, uu_ptx::trim_broken_word_left(v39, a2, core::cmp::Ord::max(v38 - v0, a1), v38), v38);
    v41 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v40, v38, v39, a2, "src/uu/ptx/src/ptx.rs");
    v26 = core::iter::traits::iterator::Iterator::collect(v41, v41 + v38 * 4);
    v11 = v40;
    v1 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(v27);
    if v0 < v4 {
        core::panicking::panic("assertion failed: max_before_size >= before.len()"); /* do not return */
    }
    uu_ptx::trim_idx(a4, a5, 0, uu_ptx::trim_broken_word_right(a4, a5, 0, core::cmp::Ord::min(v5, a5)));
    v43 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v38, a4, a5, "src/uu/ptx/src/ptx.rs");
    v28 = core::iter::traits::iterator::Iterator::collect(v43, v43 + v38 * 4);
    v10 = &v13;
    v13 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(v29);
    if v5 < v15 {
        core::panicking::panic("assertion failed: max_after_size >= after.len()"); /* do not return */
    }
    v44 = uu_ptx::trim_idx(a4, a5, v38, a5);
    v45 = core::cmp::Ord::max(v0 - (v4 + v12), a1);
    v0 = uu_ptx::trim_idx(a4, a5, v44, uu_ptx::trim_broken_word_right(a4, a5, v44, core::cmp::Ord::min(a5, v44 + v45)));
    v46 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v0, v38, a4, a5, "src/uu/ptx/src/ptx.rs");
    v30 = core::iter::traits::iterator::Iterator::collect(v46, v46 + v38 * 4);
    v16 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(v31);
    v47 = a1;
    uu_ptx::trim_idx(v47, a2, 0, v11);
    v48 = core::cmp::Ord::max(v5 - (v12 + v15), a1);
    v49 = uu_ptx::trim_idx(v47, a2, uu_ptx::trim_broken_word_left(v47, a2, core::cmp::Ord::max(v38 - v48, a1), v38), v38);
    v50 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v49, v38, v47, a2, "src/uu/ptx/src/ptx.rs");
    v32 = core::iter::traits::iterator::Iterator::collect(v50, v50 + v38 * 4);
    v6 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(v33);
    if v38 != a5 {
        if v0 != v38 {
            v10 = &v16;
            if v38 == a5 {
                goto LABEL_52ca4b;
            }
        }
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(v10, *((a6 + 32) as &i64));
    }
LABEL_52ca4b:
    if v11 {
        if v49 == v38 {
            v34 = format!("{}{}", a6 + 24, &v1);
            v4 = v35;
            v1 = *(&v34.vec.buf.inner.cap as &i128);
        } else if v49 {
            v21 = core::fmt::rt::Argument {
                ty: &v6
            };
            v25 = core::fmt::Arguments {
                pieces: [&g_455170, &g_455180]
                args: [v20, v22]
                fmt: 0
            };
            v36 = core::option::Option<T>::map_or_else(&v25);
            v9 = v36.field_16;
            v6 = v36.field_0;
        }
    }
    *((v24 + 16) as &i64) = 0;
    *(v24 as &i128) = *(&v16 as &i128);
    *((v24 + 40) as &void*) = v4;
    *((v24 + 24) as &u128) = v1;
    *((v24 + 48) as &i128) = *(&v13 as &i128);
    *((v24 + 64) as &void*) = v15;
    *((v24 + 72) as &u128) = v6;
    *((v24 + 88) as &u64) = v9;
    return;
}
