long long uu_dd::Output::sync(struct_0 *a0)
{
    if (a0->field_10->field_95)
    {
        return (unsigned long long)a0.fsync();
    }
    else if (!a0->field_10->field_94)
    {
        return 0;
    }
    else
    {
        return (unsigned long long)a0.fdatasync();
    }
}
