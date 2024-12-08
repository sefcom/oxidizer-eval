double uu_tail::paths::Input::from::h208d1fe4f6a3e0e8(long long a0, long long a1, long long a2)
{
    char v0;  // [bp-0x60]
    char v1;  // [bp-0x58]
    char v2;  // [bp-0x50]
    int v3;  // [sp-0x48], Other Possible Types: char
    unsigned long long v4;  // [sp-0x38]
    char v5;  // [bp-0x30]
    char v6;  // [bp-0x20]
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx
    int v10;  // xmm0
    int v11;  // ymm0
    int v13;  // xmm0

    v8 = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h8f4735b695f7b516(a1);
    _$LT$uu_tail..paths..InputKind$u20$as$u20$core..convert..From$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::from::h3c8720402a6e64e6(&v5, v8, v9);
    if (*((long long *)&v5) == 0x8000000000000000)
    {
        ::0x501bd0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h5629222471bca721(&v0, "standard input/dev/stdin/dev/fd/0\n <==\ncannot open '' for reading", 14);
        v4 = *((long long *)&v2);
        v10 = *((int128_t *)&v0);
        v3 = v10;
    }
    else
    {
        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v0, v8, v9);
        ::0x502050::_$LT$alloc..borrow..Cow$LT$str$GT$$u20$as$u20$alloc..string..ToString$GT$::to_string::ha2cb0370e40ab073(&v3, *((long long *)&v1), *((long long *)&v2));
        ::0x501630::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hc2c3244e7174161c(&v0);
    }
    *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v6);
    v13 = *((int128_t *)&v5);
    *((void*)&(&a0->field_10)[1]) = v13;
    *((void*)&a0->field_0) = v3;
    a0->field_10 = v4;
    return (unsigned long long)(v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v10 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v3);
}
