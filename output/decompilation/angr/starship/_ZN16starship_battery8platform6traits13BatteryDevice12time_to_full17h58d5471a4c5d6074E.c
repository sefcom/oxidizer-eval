long long starship_battery::platform::traits::BatteryDevice::time_to_full(struct_0 *a0)
{
    unsigned int v0;  // [bp-0xc]
    unsigned int v2;  // ymm1
    int v3;  // ymm0
    uint256_t v4;  // ymm0
    unsigned long v5;  // cc_ndep
    uint256_t v6;  // ymm0

    v2 = a0->field_84;
    v4 = v3 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    if (((char)((CmpF(v2, (unsigned long long)v4) & 69) >> 6) & 1) == 1 && !((char)_ccall(10, 0, (unsigned long long)(CmpF(v2, (unsigned long long)v4) & 69), 0, v5)))
        return 0;
    if (a0->field_8c != 1)
        return 0;
    v0 = v2;
    v6 = v4 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | a0->field_7c;
    <uom::si::Quantity<D,Ul,V> as core::ops::arith::Sub<uom::si::Quantity<D,Ur,V>>>::sub();
    if ((unsigned int)v6 < 0)
        return 0;
    <uom::si::Quantity<Dl,Ul,V> as core::ops::arith::Div<uom::si::Quantity<Dr,Ur,V>>>::div();
    v0 = v6;
    uom::si::from_base();
    if (((CmpF((unsigned long long)v6, 0x41200000) & 69 | (char)((CmpF((unsigned long long)v6, 0x41200000) & 69) >> 6)) & 1) != 1)
        return 0;
    return 1;
}
