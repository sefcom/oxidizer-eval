fn just::executor::Executor::script(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64, a5: u64, a6: u64) -> long long {
    let v0: void*;  // [bp-0xb0]
    let v1: u64;  // [bp-0xa8]
    let v2: void*;  // [bp-0xa0]
    let v3: i64;  // [bp-0x98]
    let v4: u64;  // [bp-0x88]
    let v5: struct17;  // [bp-0x70], Other Possible Types: struct56
    let v6: u64;  // [bp-0x68]
    let v7: u64;  // [bp-0x10]
    let v8: u64;  // r15
    let v9: u64;  // rax
    let v10: i64;  // r13
    let v11: i64;  // rdx
    let v14: struct16;  // rbx
    let v16: i64;  // r12
    let v19: struct16;  // r12
    let v20: core::option::Option<(&u16, &mut u32)>;  // rax
    let v21: i64;  // rdx

    v7 = v8;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v5 = struct17 {
        field_0: a3
        field_8: a4 * 32 + a3
        field_16: 0
    };
    v9 = <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold(&v5);
    v4 = v6;
    if a1 {
        v10 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v9, a5, a6, "src/executor.rs");
        if !!v10 && !!v11 {
            loop {
                v16 += 24;
                if just::shebang::Shebang::include_shebang_line(a1, a2) {
                    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v0, *((v10 + 8) as &i64), *((v10 + 16) as &i64) + *((v10 + 8) as &i64));
                }
                alloc::string::String::push(&v0, 10);
                if v16 == v11 * 24 + v10 {
                    break;
                }
                v10 = v16;
                if !v10 {
                    break;
                }
            }
        }
    }
    v5 = core::iter::traits::iterator::Iterator::zip(a3, v4, a5, a6);
    if !v14 {
        goto LABEL_667ec0;
    } else {
        goto LABEL_667e9c;
    }
    do {
        loop {
            if v19 < *((v20 + 24) as &i64) {
                do {
                    alloc::string::String::push(&v0, 10);
                } while (v19 < *((v20 + 24) as &i64));
            }
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v0, *((v11 + 8) as &i64), *((v11 + 16) as &i64) + *((v11 + 8) as &i64));
            alloc::string::String::push(&v0, 10);
            if v14 {
                break;
            }
LABEL_667ec0:
            <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v5);
            if let None = v20 {
                *((v3 + 16) as &i64) = 0;
                *(v3 as &i128) = *(&v0 as &i128);
                return 0;
            }
        }
LABEL_667e9c:
        v14 = 0;
        <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::nth(&v5, v14);
        v21 = v11;
    } while (v20);
    *((v3 + 16) as &i64) = 0;
    *(v3 as &i128) = *(&v0 as &i128);
    return 0;
}
