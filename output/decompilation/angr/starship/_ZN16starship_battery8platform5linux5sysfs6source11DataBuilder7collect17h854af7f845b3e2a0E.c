long long starship_battery::platform::linux::sysfs::source::DataBuilder::collect(void* a0, unsigned long long a1[2])
{
    char v0;  // [bp-0x68], Other Possible Types: unsigned long long
    char v1;  // [bp-0x60], Other Possible Types: unsigned int
    unsigned int v2;  // [bp-0x5c]
    char v3;  // [bp-0x58]
    unsigned int v4;  // [bp-0x4c]
    unsigned int v5;  // [bp-0x48]
    unsigned int v6;  // [bp-0x44]
    unsigned int v7;  // [bp-0x40]
    unsigned int v8;  // [bp-0x3c]
    unsigned int v9;  // [bp-0x38]
    unsigned int v10;  // [bp-0x34]
    unsigned int v11;  // [bp-0x30]
    unsigned int v12;  // [bp-0x2c]
    unsigned long long v14;  // rax
    char v15;  // bpl

    v0.state_of_charge(a1);
    v14 = *((long long *)&v1);
    if (v0 == 9223372036854775810)
    {
        v12 = *((int *)*((long long *)&v1));
        v0.state_of_health(a1);
        v14 = *((long long *)&v1);
        if (v0 == 9223372036854775810)
        {
            v11 = *((int *)*((long long *)&v1));
            v0.energy(a1);
            v14 = *((long long *)&v1);
            if (v0 == 9223372036854775810)
            {
                v10 = *((int *)*((long long *)&v1));
                v0.energy_full(a1);
                v14 = *((long long *)&v1);
                if (v0 == 9223372036854775810)
                {
                    v9 = *((int *)*((long long *)&v1));
                    v0.energy_full_design(a1);
                    v14 = *((long long *)&v1);
                    if (v0 == 9223372036854775810)
                    {
                        v8 = *((int *)*((long long *)&v1));
                        v0.energy_rate(a1);
                        v14 = *((long long *)&v1);
                        if (v0 == 9223372036854775810)
                        {
                            v7 = *((int *)*((long long *)&v1));
                            v0.voltage(a1[0], a1[1]);
                            if (v0 != 9223372036854775810)
                            {
                                *((unsigned int *)&a0[36]) = v4;
                                *((int128_t *)&a0[20]) = *((int128_t *)&v2);
                                *((unsigned long long *)&a0[8]) = v0;
                                *((unsigned int *)&a0[16]) = v1;
                                *((unsigned int *)a0) = 2;
                                return v0;
                            }
                            v6 = v1;
                            v0.state(a1);
                            v14 = *((long long *)&v1);
                            if (v0 == 9223372036854775810)
                            {
                                v15 = *((char *)*((long long *)&v1));
                                v0.temperature(a1[0], a1[1]);
                                if (v0 != 9223372036854775810)
                                {
                                    *((int128_t *)&a0[24]) = *((int128_t *)&v3);
                                    *((unsigned long long *)&a0[8]) = v0;
                                    *((unsigned int *)&a0[16]) = v1;
                                    *((unsigned int *)&a0[20]) = v2;
                                    *((unsigned int *)a0) = 2;
                                    return v0;
                                }
                                v5 = v2;
                                v0.cycle_count(a1[0], a1[1]);
                                v14 = v2;
                                if (v0 != 9223372036854775810)
                                {
                                    *((int128_t *)&a0[24]) = *((int128_t *)&v3);
                                    *((unsigned long long *)&a0[8]) = v0;
                                    *((unsigned int *)&a0[16]) = v1;
                                    *((unsigned int *)&a0[20]) = v14;
                                    *((unsigned int *)a0) = 2;
                                    return v14;
                                }
                                *((unsigned int *)a0) = v1;
                                *((unsigned int *)&a0[4]) = v5;
                                *((unsigned int *)&a0[8]) = v1;
                                *((unsigned int *)&a0[12]) = v14;
                                *((unsigned int *)&a0[16]) = v11;
                                *((unsigned int *)&a0[20]) = v12;
                                *((unsigned int *)&a0[24]) = v10;
                                *((unsigned int *)&a0[28]) = v9;
                                *((unsigned int *)&a0[32]) = v8;
                                *((unsigned int *)&a0[36]) = v7;
                                *((unsigned int *)&a0[40]) = v6;
                                *((char *)&a0[44]) = v15;
                                return v14;
                            }
                        }
                    }
                }
            }
        }
    }
    *((int128_t *)&a0[24]) = *((int128_t *)&v3);
    *((unsigned long long *)&a0[8]) = v0;
    *((unsigned long long *)&a0[16]) = v14;
    *((unsigned int *)a0) = 2;
    return v14;
}
