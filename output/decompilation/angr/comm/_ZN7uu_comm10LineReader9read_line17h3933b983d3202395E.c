long long uu_comm::LineReader::read_line::h3933b983d3202395(struct_0 *a0, unsigned long long a1[3])
{
    char v0;  // [bp-0x38], Other Possible Types: unsigned long
    char v1;  // [sp-0x30]
    unsigned long long v3;  // r12
    unsigned int v4;  // ebp
    unsigned long long v5;  // r14
    char v6;  // dl
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rsi

    v3 = a0->field_30;
    v4 = v3;
    if (a0->field_0)
    {
        v5 = std::io::read_until::h8fb7c8014b7193eb(a0, v4, a1);
    }
    else
    {
        v0 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&a0->padding_8);
        v1 = v6 & 1;
        v5 = _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::read_until::h22767f011618eb41(&v0, v4);
        core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h53bab959efd69a8e(v0, *((int *)&v1));
    }
    v7 = a1[1];
    v8 = a1[2];
    v0 = v3;
    if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h6db73eece4d5ba57(v7, v8, &v0, 1))
    {
        alloc::vec::Vec$LT$T$C$A$GT$::push::h396eb65ba5211a69(a1, v4);
        return v5;
    }
    return v5;
}
