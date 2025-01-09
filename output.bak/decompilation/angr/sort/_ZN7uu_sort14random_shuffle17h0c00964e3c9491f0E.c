long long uu_sort::random_shuffle::h0c00964e3c9491f0(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [sp-0x3a]
    char v1;  // [sp-0x39]
    unsigned long long v2;  // [sp-0x38]
    unsigned long long v3;  // [sp-0x30]
    unsigned long long v4;  // [sp-0x28]
    unsigned long long v5;  // [sp-0x20]
    unsigned long long v6;  // [sp-0x18]
    unsigned long long v7;  // [sp-0x10]
    unsigned long v9;  // r15
    unsigned long v10;  // r14
    unsigned long v11;  // r13
    unsigned long v12;  // r12
    unsigned long v13;  // rbx

    v7 = v9;
    v6 = v10;
    v5 = v11;
    v4 = v12;
    v3 = v13;
    v2 = 14695981039346656037;
    _$LT$fnv..FnvHasher$u20$as$u20$core..hash..Hasher$GT$::write::h1f40931822b5a752(&v2, a0, a1);
    v0 = 255;
    _$LT$fnv..FnvHasher$u20$as$u20$core..hash..Hasher$GT$::write::h1f40931822b5a752(&v2, &v0, 1);
    core::hash::impls::_$LT$impl$u20$core..hash..Hash$u20$for$u20$$RF$T$GT$::hash::h8c5e13fb85b9f364(a4, &v2);
    v2 = 14695981039346656037;
    _$LT$fnv..FnvHasher$u20$as$u20$core..hash..Hasher$GT$::write::h1f40931822b5a752(&v2, a2, a3);
    v1 = 255;
    _$LT$fnv..FnvHasher$u20$as$u20$core..hash..Hasher$GT$::write::h1f40931822b5a752(&v2, &v1, 1);
    core::hash::impls::_$LT$impl$u20$core..hash..Hash$u20$for$u20$$RF$T$GT$::hash::h8c5e13fb85b9f364(a4, &v2);
    return (v2 <= v2 ? (-0x100 | v2 != v2) & 4294967295 & 4294967295 : 255);
}
