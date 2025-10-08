long long uu_sort::KeySettings::set_dictionary_order(void* a0, char a1[6])
{
    unsigned long long v0[2];  // [bp-0x28]
    char v1;  // [bp-0x18]
    unsigned long long v3;  // rax

    v0.check_compatibility(a1[5], a1[3], 1);
    if (!((char)(((0 ^ v0[0]) & (0 ^ -(v0[0]))) >> 63)))
    {
        v3 = *((long long *)&v1);
        *((unsigned long long *)&a0[16]) = v3;
        *((unsigned long long [2])a0) = v0;
        return v3;
    }
    a1[2] = 1;
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
