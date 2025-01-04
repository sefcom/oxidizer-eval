long long uu_touch::filetime_to_datetime::h118b2d8253ee418f(unsigned int *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x24]
    char v1;  // [bp-0x1c]
    unsigned long long v2;  // [sp-0x18]
    unsigned int v3;  // [sp-0x10]
    unsigned long long v5;  // rax

    v5 = ::0x5c1250::chrono::datetime::DateTime$LT$chrono..offset..utc..Utc$GT$::from_timestamp::h8ab0e73f75167f24(&v0, a1, a2);
    if (!*((int *)&v0))
    {
        *(a0) = 0;
        return v5;
    }
    v3 = *((int *)&v1);
    v2 = *((long long *)&v0);
    v5 = _$LT$chrono..datetime..DateTime$LT$chrono..offset..local..Local$GT$$u20$as$u20$core..convert..From$LT$chrono..datetime..DateTime$LT$chrono..offset..utc..Utc$GT$$GT$$GT$::from::he1bf453ed4172c95(a0, &v2);
    return v5;
}
