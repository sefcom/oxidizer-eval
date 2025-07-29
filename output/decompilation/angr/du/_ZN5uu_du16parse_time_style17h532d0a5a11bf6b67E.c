long long uu_du::parse_time_style(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x38]
    char v1;  // [bp-0x30]
    unsigned long long v3;  // rax

    if (a1)
    {
        if ((char)a1.equal(a2, "full-isoVariableENOTSOCK", 8))
        {
            a0[1] = "%Y-%m-%d %H:%M:%S.%f %zatimectime(uutils coreutils) 0.1.0du-after-helpdu-help-print-helpalldu-help-allapparent-sizedu-help-apparent-sizedu-help-block-sizebbytesdu-help-bytesctotaldu-help-totaldmax-depthNdu-help-max-depthhhuman-readabledu-help-human-readabl";
            a0[2] = 23;
            goto LABEL_4de855;
        }
        if (!(!(char)a1.equal(a2, "long-isoDateTimetimezone", 8)))
            goto LABEL_4de842;
        if ((char)a1.equal(a2, "iso%Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %zatimectime(uutils coreutils) 0.1.0du-after-helpdu-help-print-helpalldu-help-allapparent-sizedu-help-apparent-sizedu-help-block-sizebbytesdu-help-bytesctotaldu-help-totaldmax-depthNdu-help-max-depthhhuman-readabledu-h", 3))
        {
            a0[1] = "%Y-%m-%d";
            a0[2] = 8;
LABEL_4de855:
            v3 = 0;
        }
        else
        {
            v1.to_vec(a1, a2);
            v0 = 2;
            *((double *)&a0[1]) = v0.new();
            a0[2] = &g_5e4ae0;
            v3 = 1;
        }
    }
    else
    {
LABEL_4de842:
        a0[1] = "%Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %zatimectime(uutils coreutils) 0.1.0du-after-helpdu-help-print-helpalldu-help-allapparent-sizedu-help-apparent-sizedu-help-block-sizebbytesdu-help-bytesctotaldu-help-totaldmax-depthNdu-help-max-depthhhuman-readabledu-help";
        a0[2] = 14;
        goto LABEL_4de855;
    }
    a0[0] = v3;
    return a0;
}
