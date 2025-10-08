fn uu_echo::filter_echo_flags(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x10a]
    let v1: struct24;  // [bp-0x108]
    let v2: u64;  // [bp-0xf8]
    let v3: void*;  // [bp-0xe8]
    let v4: struct16;  // [bp-0xe8]
    let v5: struct16;  // [bp-0xe8]
    let v6: u64;  // [bp-0xe0]
    let v7: void*;  // [bp-0xd8]
    let v8: i64;  // [bp-0xd0]
    let v9: u128;  // [bp-0xc8]
    let v10: u64;  // [bp-0xb8]
    let v11: u128;  // [bp-0xa8]
    let v12: core::iter::adapters::peekable::Peekable<core::str::iter::Bytes>;  // [bp-0x90]
    let v13: struct24;  // [bp-0x90]
    let v15: u128;  // [bp-0x78]
    let v16: u128;  // [bp-0x68]
    let v17: u128;  // [bp-0x58]
    let v18: u8;  // [bp-0x48]
    let v20: core::option::Option<u8>;  // rax:rax
    let v21: core::option::Option<u8>;  // rax:rax

    v3 = 0;
    v6 = 8;
    v7 = 0;
    v0 = 1;
    v17 = *((a1 + 32) as &i128);
    v16 = *((a1 + 16) as &i128);
    v15 = *(a1 as &i128);
    do {
        vvar_186{stack -144} = core::iter::adapters::peekable::Peekable<core::str::iter::Bytes> OrderedDict([(0, core::str::iter::Bytes OrderedDict([(0, core::iter::adapters::copied::Copied<core::slice::iter::Iter<u8>> OrderedDict([(0, core::slice::iter::Iter<u8> OrderedDict([(0, core::ptr::non_null::NonNull<u8> OrderedDict([(0, 𝜙@128b [((4353515, None), vvar_151{stack -144}), ((4353296, None), None)])])), (16, core::marker::PhantomData<&u8> OrderedDict())]))]))])), (16, 𝜙@64b [((4353515, None), vvar_154{stack -128}), ((4353296, None), None)])])
        v20 = <core::iter::adapters::peekable::Peekable<I> as core::iter::traits::iterator::Iterator>::next(&v12) as u128;
        if v12.iter.__0.it.ptr.pointer == 0x8000000000000000 {
            goto LABEL_426e17;
        } else {
            goto LABEL_426db5;
        }
LABEL_426db5:
        v1 = v13;
    } while (uu_echo::is_echo_flag(&v1, &v0));
    v10 = v2;
    v9 = v1.field_0;
    v4 = alloc::vec::Vec<T,A>::push(&v9, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/echo/src/echo.rs");
LABEL_426e17:
    v11 = v17;
    v10 = v16;
    v9 = v15;
    loop {
        v21 = <core::iter::adapters::peekable::Peekable<I> as core::iter::traits::iterator::Iterator>::next(&v18) as u128;
        if *(&v18 as &i64) == 0x8000000000000000 {
            break;
        }
        v5 = alloc::vec::Vec<T,A>::push(&v18, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/echo/src/echo.rs");
    }
    *((v8 + 16) as &i64) = 0;
    *(v8 as &i128) = *(&v5.field_0 as &i128);
    *((v8 + 24) as &u64) = v0;
    return v0;
}
