long long uu_env::split_iterator::SplitIterator::state_root(struct_0 *a0, unsigned long long a1)
{
    int v0;  // [bp-0x40]
    int v1;  // [bp-0x30]
    char v2;  // [bp-0x20]
    unsigned long long v4;  // rax

    while (true)
    {
        v0.state_delimiter(a1);
        if ((int)v0 != 10)
            break;
        v0.drop_in_place<core::result::Result<(),uu_env::EnvError>>();
    }
    if ((int)v0 != 9)
    {
        v4 = *((long long *)&v2);
        a0->field_20 = v4;
        *((void*)&a0->field_10) = v1;
        *((void*)&a0->field_0) = v0;
        return v4;
    }
    *((unsigned int *)&a0->field_0) = 12;
    return v0.drop_in_place<core::result::Result<(),uu_env::EnvError>>();
}
