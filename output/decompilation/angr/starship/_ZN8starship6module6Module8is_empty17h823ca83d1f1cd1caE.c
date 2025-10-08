char starship::module::Module::is_empty(unsigned long long a0[9])
{
    unsigned long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = a0[7];
    v1 = a0[8] * 56 + a0[7];
    return v0.all();
}
