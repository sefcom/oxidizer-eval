double starship::config::_::<impl serde_core::de::Deserialize for starship::config::Either<A,B>>::deserialize(long long a0, long long a1)
{
    char v0;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x60]
    char v2;  // [bp-0x5f]
    unsigned int v3;  // [bp-0x5c]
    int v4;  // [bp-0x58], Other Possible Types: char
    int v5;  // [bp-0x58]
    char v6;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x48]
    char v8;  // [bp-0x40], Other Possible Types: unsigned long long
    char v9;  // [bp-0x38]
    unsigned long long v10;  // [bp-0x30]
    char v11;  // [bp-0x28]
    unsigned int v12;  // [bp-0x27]
    unsigned int v13;  // [bp-0x24]
    unsigned long long v14;  // [bp-0x20]
    char v15;  // [bp-0x18]
    char v17;  // al
    int v18;  // xmm0
    unsigned long v19;  // xmm0lq
    unsigned long long v20;  // rdx

    v0.__deserialize_content_v1(a1);
    v17 = v0;
    if (v17 == 22)
    {
        v18 = *((int128_t *)&v4);
        a0[8] = v18;
        *((unsigned long long *)a0) = 2;
        return (unsigned long long)v18;
    }
    v13 = v3;
    v12 = *((int *)&v2);
    v11 = v17;
    v14 = *((long long *)&v4);
    memcpy(&v15, &v6, 16);
    v8.deserialize(&v11);
    if ((char)(((0 ^ v8) & (0 ^ -(v8))) >> 63))
    {
        memcpy(&v4, &v9, 16);
        v0 = 2;
        core::ptr::drop_in_place<core::result::Result<starship::config::Either<alloc::vec::Vec<starship::config::VecOr<&str>>,starship::config::VecOr<&str>>,serde_core::de::value::Error>>(&v0);
        v8.deserialize(&v11);
        if (v8 == 0x8000000000000000)
        {
            v19 = *((int128_t *)&v9);
            *((int128_t *)&v4) = *((int128_t *)&v9);
            v0 = 2;
            core::ptr::drop_in_place<core::result::Result<starship::config::Either<alloc::vec::Vec<starship::config::VecOr<&str>>,starship::config::VecOr<&str>>,serde_core::de::value::Error>>(&v0);
            *((long long *)&a0[8]) = "data did not match any variant of untagged enum EitherAwsConfigregion_aliasesprofile_aliasesexpiration_symbolforce_displayAzureConfigsubscription_aliasesstruct AzureConfigBatteryConfigfull_symbolcharging_symboldischarging_symbolunknown_symbolempty_symboldi".custom(54);
            *((unsigned long long *)&a0[16]) = v20;
            *((unsigned long long *)a0) = 2;
        }
        else
        {
            v7 = v10;
            v19 = *((int128_t *)&v8);
            *((int128_t *)&v5) = *((int128_t *)&v8);
            v1 = 1;
LABEL_bdaa99:
            *((unsigned long long *)&a0[16]) = v6;
            *((unsigned long long *)&a0[24]) = v7;
            *((unsigned long long *)a0) = v1;
            *((long long *)&a0[8]) = (long long)v5;
        }
    }
    else
    {
        v7 = v10;
        v19 = *((int128_t *)&v8);
        *((int128_t *)&v5) = *((int128_t *)&v8);
        v1 = 0;
        goto LABEL_bdaa99;
    }
    core::ptr::drop_in_place<serde_core::private::content::Content>(&v11);
    return v19;
}
