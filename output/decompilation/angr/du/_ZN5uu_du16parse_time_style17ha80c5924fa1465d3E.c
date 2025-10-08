long long uu_du::parse_time_style(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x38]
    char v1;  // [bp-0x30]
    unsigned long long v3;  // rax

    if (a1)
    {
        if ((char)a1.equal(a2, "full-isoENOTSOCK", 8))
        {
            a0[1] = "%Y-%m-%d %H:%M:%S.%f %zatimectime(uutils coreutils) 0.0.30Estimate file space usageDisplay values are in units of the first available SIZE from --block-size,\nand the DU_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\nOtherwise, units default to";
            a0[2] = 23;
            goto LABEL_498975;
        }
        if ((char)a1.equal(a2, "long-isoDateTimetimezone", 8))
            goto LABEL_498962;
        if ((char)a1.equal(a2, "iso%Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %zatimectime(uutils coreutils) 0.0.30Estimate file space usageDisplay values are in units of the first available SIZE from --block-size,\nand the DU_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\nOtherwise,", 3))
        {
            a0[1] = "%Y-%m-%dENETDOWNThursday\n       February";
            a0[2] = 8;
LABEL_498975:
            v3 = 0;
        }
        else
        {
            v1.to_vec(a1, a2);
            v0 = 2;
            *((double *)&a0[1]) = v0.new();
            a0[2] = &g_545d90;
            v3 = 1;
        }
    }
    else
    {
LABEL_498962:
        a0[1] = "%Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %zatimectime(uutils coreutils) 0.0.30Estimate file space usageDisplay values are in units of the first available SIZE from --block-size,\nand the DU_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\nOtherwise, un";
        a0[2] = 14;
        goto LABEL_498975;
    }
    a0[0] = v3;
    return a0;
}
