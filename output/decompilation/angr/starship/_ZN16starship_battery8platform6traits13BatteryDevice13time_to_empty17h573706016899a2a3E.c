long long starship_battery::platform::traits::BatteryDevice::time_to_empty(struct_0 *a0)
{
    unsigned int v0;  // [bp-0xc]
    unsigned long v2;  // cc_ndep

    if (((char)((CmpF(a0->field_84, 0) & 69) >> 6) & 1) == 1 && !((char)_ccall(10, 0, (unsigned long long)(CmpF(a0->field_84, 0) & 69), 0, v2)))
        return 0;
    if (a0->field_8c != 2)
        return 0;
    <uom::si::Quantity<Dl,Ul,V> as core::ops::arith::Div<uom::si::Quantity<Dr,Ur,V>>>::div();
    v0 = a0->field_78;
    uom::si::from_base();
    if (((CmpF(a0->field_78, 0x41200000) & 69 | (char)((CmpF(a0->field_78, 0x41200000) & 69) >> 6)) & 1) != 1)
        return 0;
    return 1;
}
