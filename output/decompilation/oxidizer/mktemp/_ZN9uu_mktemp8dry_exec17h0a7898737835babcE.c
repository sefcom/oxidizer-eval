fn uu_mktemp::dry_exec(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64, a7: i64) -> : struct24 {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0xb8]
    let v1: u64;  // [bp-0xb0]
    let v2: void*;  // [bp-0xa8]
    let v3: u128;  // [bp-0xa0], Other Possible Types: core::result::Result<alloc::string::String, alloc::string::FromUtf8Error>, struct24
    let v4: u64;  // [bp-0x98]
    let v5: u64;  // [bp-0x78]
    let v6: u64;  // [bp-0x70]
    let v7: u192;  // [bp-0x68]
    let v8: struct24;  // [bp-0x48]
    let v9: u64;  // r13
    let v10: u64;  // r12
    let v11: u64;  // rdx
    let v12: i64;  // rax
    let v13: u8;  // cl
    let v14: u32;  // edx
    let v15: u8;  // dl
    let v16: u8;  // cl
    let v17: u64;  // rdi

    v6 = a1;
    v5 = a0;
    v9 = a4 + a3;
    v3 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v9 + a6, 0);
    v0 = v4;
    v1 = v3.field_16;
    v2 = 0;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v0, a2, a2 + a3);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(&v0, a4, 88);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v0, a5, a6 + a5);
    v10 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(a3, v9, v1, v2, "src/uu/mktemp/src/mktemp.rs");
    v3 = rand::rngs::thread::thread_rng();
    rand::rng::Rng::fill(&v3, v10, v11);
    v3 = struct16 {
        field_0: v10
        field_8: v10 + v11
    };
    v12 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(&v3);
    if v12 {
        do {
            v13 = *(v12 as &i8);
            v14 = (v13 >> 1) * 133 >> 12;
            v16 = v13 - (v14 * 64 - v14 * 2);
        } while ((*(v12 as &i32) = ((v13 as u64 - v15 as u64 & 255) < 10 ? v16 | 48 : (v16 < 36 ? v16 + 87 : v16 + 29)), v12 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(&v3), v12));
    }
    v7 = alloc::vec::Vec<u8, alloc::alloc::Global> {
        buf: alloc::raw_vec::RawVec<u8, alloc::alloc::Global> {
            cap: alloc::raw_vec::Cap {
                __0: <UNKNOWN>
            }
            ptr: core::ptr::unique::Unique<u8> {
                pointer: core::ptr::non_null::NonNull<u8> {
                    pointer: <UNKNOWN>
                }
                _marker: core::marker::PhantomData<u8> { }
            }
            alloc: alloc::alloc::Global { }
        }
        len: v2
    };
    memcpy(&v7, &v0, 16);
    v3 = alloc::string::String::from_utf8(&v7);
    v8 = core::result::Result<T,E>::unwrap(&v3);
    std::path::Path::join(v17);
    return;
}
