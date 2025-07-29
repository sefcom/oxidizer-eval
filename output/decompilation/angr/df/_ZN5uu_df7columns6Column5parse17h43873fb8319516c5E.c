long long uu_df::columns::Column::parse(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax

    v0 = v2;
    if ((char)a0.equal(a1, "sourcefstypeitotaliusediavailipcentavailpcenttarget", 6))
        return 0;
    v3 = a0.equal(a1, "fstypeitotaliusediavailipcentavailpcenttarget", 6);
    if ((char)v3)
        return v3 & 0xffffffffffffff00 | 11;
    v4 = a0.equal(a1, "itotaliusediavailipcentavailpcenttarget", 6);
    if ((char)v4)
        return v4 & 0xffffffffffffff00 | 6;
    v5 = a0.equal(a1, "iusediavailipcentavailpcenttarget", 5);
    if ((char)v5)
        return v5 & 0xffffffffffffff00 | 7;
    v6 = a0.equal(a1, "iavailipcentavailpcenttarget", 6);
    if ((char)v6)
        return v6 & 0xffffffffffffff00 | 8;
    v7 = a0.equal(a1, "ipcentavailpcenttarget", 6);
    if ((char)v7)
        return v7 & 0xffffffffffffff00 | 9;
    v8 = a0.equal(a1, "sizefilei128", 4);
    if ((char)v8)
        return v8 & 0xffffffffffffff00 | 1;
    v9 = a0.equal(a1, "usedERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4);
    if ((char)v9)
        return v9 & 0xffffffffffffff00 | 2;
    v10 = a0.equal(a1, "availpcenttarget", 5);
    if ((char)v10)
        return v10 & 0xffffffffffffff00 | 3;
    v11 = a0.equal(a1, "pcenttarget", 5);
    if ((char)v11)
        return v11 & 0xffffffffffffff00 | 4;
    v12 = a0.equal(a1, "filei128", 4);
    if (!(char)v12)
        return ((char)a0.equal(a1, "target", 6) ? 5 : 12);
    return v12 & 0xffffffffffffff00 | 10;
}
