long long just::function::uuid(void* *a0)
{
    char v0;  // [bp-0x20]

    v0.new_v4();
    a0 + 1.spec_to_string(&v0);
    *(a0) = 0;
    return a0;
}
