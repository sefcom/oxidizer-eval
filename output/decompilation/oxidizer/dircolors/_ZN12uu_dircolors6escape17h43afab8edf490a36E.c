fn uu_dircolors::escape(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: void*;  // [bp-0x60]
    let v1: u64;  // [bp-0x58]
    let v2: void*;  // [bp-0x50]
    let v3: i64;  // [bp-0x48]
    let v4: core::slice::iter::Iter<u8>;  // [bp-0x40]
    let v8: u64;  // rdx
    let v9: u32;  // ecx
    let v10: u32;  // ebp
    let v11: u64;  // rsi
    let v12: u64;  // rax
    let v13: core::option::Option<u32>;  // rax:rax
    let v14: core::option::Option<u32>;  // rax:rax

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v4 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a2 + a1
        _marker: core::marker::PhantomData<&u8> { }
    };
    v13 = core::str::validations::next_code_point(&v4) as u128;
    if let Some(_) = v13 {
        do {
            v9 = v10;
            v10 = v8 as u32;
            v11 = &g_41a3a0;
            v12 = &g_41a3a4;
            if v8 as u32 == 39 {
LABEL_469630:
                <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v0, v11, v12);
            } else if v8 as u32 == 58 {
                v11 = &g_41c60b;
                v12 = &g_41c60d;
                if v9 == 92 {
                    goto LABEL_46966a;
                }
                goto LABEL_469630;
            } else {
LABEL_46966a:
                alloc::string::String::push(&v0, v10 as u8);
            }
            v14 = core::str::validations::next_code_point(&v4) as u128;
        } while ((v14 as i8 & 1));
    }
    *((v3 + 16) as &i64) = 0;
    *(v3 as &i128) = *(&v0 as &i128);
    return v3;
}
