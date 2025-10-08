long long firecracker::<impl core::convert::From<firecracker::MainError> for vmm::FcExitCode>::from(struct_0 *a0)
{
    unsigned long v1;  // rbx
    unsigned long long v2;  // rbx

    v2 = v1 & 0xffffffffffffff00 | 1;
    switch (a0->field_0)
    {
    case 2:
        v2 = v2 & 0xffffffffffffff00 | 153;
        goto LABEL_55966f;
    case 4:
        core::ptr::drop_in_place<firecracker::MainError>(a0);
        return (unsigned int)v2 & 0xffffff00 | 152;
    case 9:
        if (a0->field_8 == 29)
        {
            core::ptr::drop_in_place<firecracker::MainError>(a0);
            return a0->field_9;
        }
    case 10:
        if (a0->field_8 == 28)
        {
            core::ptr::drop_in_place<firecracker::MainError>(a0);
            return a0->field_9;
        }
    default:
LABEL_55966f:
        core::ptr::drop_in_place<firecracker::MainError>(a0);
        return v2 & 4294967295;
    }
}
