double uu_tail::paths::Input::from::h6db62654b008023a(long long a0, long long a1)
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

    v8 = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h82be18048d2a1ec1(a1);
    _$LT$uu_tail..paths..InputKind$u20$as$u20$core..convert..From$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::from::h609f399a6d164aba(&v5, v8, v9);
    if (*((long long *)&v5) == 0x8000000000000000)
    {
        ::0x510320::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8732f121b58e7ba0(&v0, "standard input/dev/stdin/dev/fd/0 <==\n\n", 14);
        v4 = *((long long *)&v2);
        v10 = *((int128_t *)&v0);
        v3 = v10;
    }
    else
    {
        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v0, v8, v9);
        ::0x5109e0::_$LT$alloc..borrow..Cow$LT$str$GT$$u20$as$u20$alloc..string..ToString$GT$::to_string::ha2cb0370e40ab073(&v3, *((long long *)&v1), *((long long *)&v2));
        ::0x50fe00::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h890545819f3c5be0(&v0);
    }
    *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v6);
    v13 = *((int128_t *)&v5);
    *((void*)&(&a0->field_10)[1]) = v13;
    *((void*)&a0->field_0) = v3;
    a0->field_10 = v4;
    return (unsigned long long)(v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v10 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v3);
}
