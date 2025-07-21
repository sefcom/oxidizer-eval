fn uu_shuf::read_input_file(a1: i64, a2: i64) -> : struct24 {
    let a0: void*;  // rsi
    let v0: Result<struct16, struct12>;  // [bp-0x80], Other Possible Types: struct16
    let v1: u64;  // [bp-0x78]
    let v2: Result<struct4, struct8>;  // [bp-0x70], Other Possible Types: alloc::vec::Vec<u8, alloc::alloc::Global>, struct24
    let v3: struct56;  // [bp-0x58]
    let v5: u64;  // rax
    let v6: u64;  // rcx
    let v7: i64;  // rdi
    let v9: i64;  // rdi
    let v10: i64;  // rdi
    let v12: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-") as i8 {
        v5 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
    } else {
        v2 = std::fs::File::open(a0, a1);
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v2, a0, a1);
        match v0 {
            Ok(_) => {
                *((v7 + 8) as &i64) = v0 as i64;
                *((v7 + 16) as &u64) = v1;
                *(v7 as &i64) = 0x8000000000000000;
                return;
            },
            Err(_) => {
                v5 = alloc::boxed::Box<T>::new(*((&v0 as &char + 8) as &i32) as u32 as u64);
            },
        }
    }
    v3 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v5, v6);
    v2 = struct24 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v2 = alloc::vec::Vec<u8, alloc::alloc::Global> {
        buf: alloc::raw_vec::RawVec<u8, alloc::alloc::Global> {
            cap: alloc::raw_vec::Cap {
                __0: 0
            }
            ptr: core::ptr::unique::Unique<u8> {
                pointer: core::ptr::non_null::NonNull<u8> {
                    pointer: 1
                }
                _marker: core::marker::PhantomData<u8> { }
            }
            alloc: alloc::alloc::Global { }
        }
        len: 0
    };
    v12 = <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read_to_end(&v3, &v2);
    v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v12 as i64, a1, a0, a1);
    if v0.field_0 {
        *((v9 + 8) as &u64) = v0.field_0;
        *((v9 + 16) as &u64) = v1;
        *(v9 as &i64) = 0x8000000000000000;
    } else {
        *((v10 + 16) as &i64) = 0;
        *(v10 as &i128) = *(&v2.buf.cap as &i128);
    }
    return;
}
