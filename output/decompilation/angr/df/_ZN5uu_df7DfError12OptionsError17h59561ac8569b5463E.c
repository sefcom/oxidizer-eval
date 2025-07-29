double uu_df::DfError::OptionsError(long long a0, long long a1)
{
    int v1;  // xmm0

    v1 = a1[0];
    a0[1] = a1[1];
    *((void*)&a0[0]) = v1;
    return (unsigned long long)v1;
}
