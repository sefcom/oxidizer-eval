long long ruff_python_formatter::comments::Comments::new(uint128_t a0[5], unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    int v2;  // [bp-0x58]
    int v3;  // [bp-0x48]
    int v4;  // [bp-0x38]
    int v5;  // [bp-0x28]
    int v6;  // [bp-0x18]
    unsigned long long v7;  // [bp-0x8]

    v0 = 1;
    v1 = 1;
    *((uint128_t *)&v2) = a0[0];
    *((uint128_t *)&v3) = a0[1];
    *((uint128_t *)&v4) = a0[2];
    *((uint128_t *)&v5) = a0[3];
    *((uint128_t *)&v6) = a0[4];
    v7 = a1;
    return v0.new();
}
