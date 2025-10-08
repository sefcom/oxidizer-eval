long long uu_dd::parseargs::Parser::parse_output_flags(unsigned long a0, char a1[208], unsigned long long a2, unsigned long long a3)
{
    struct_0 *v0;  // [bp-0xf0]
    unsigned long long v1;  // [bp-0xe0]
    int v2;  // [bp-0xd8], Other Possible Types: char
    unsigned long v3;  // [bp-0xc8]
    int v4;  // [bp-0xc0], Other Possible Types: char
    unsigned long v5;  // [bp-0xb0]
    int v6;  // [bp-0xa8], Other Possible Types: char
    unsigned long v7;  // [bp-0x98]
    int v8;  // [bp-0x90], Other Possible Types: char
    unsigned long v9;  // [bp-0x80]
    void* v10;  // [bp-0x78]
    unsigned long long v11;  // [bp-0x70]
    char v12;  // [bp-0x68]
    unsigned short v13;  // [bp-0x38]
    unsigned long long v15;  // rax
    unsigned long long v16;  // r14
    unsigned long long v17;  // rdx
    unsigned long long v18;  // r15
    unsigned long long v19;  // r15
    unsigned long long v20;  // rax

    v12.into_searcher(44, a2, a3);
    v10 = 0;
    v1 = a3;
    v11 = a3;
    v13 = 1;
    v15 = v10.next();
    if (v15)
    {
        v16 = v15;
        do
        {
            v19 = v18;
            if ((char)v16.equal(v19, "ciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src", 3))
            {
                v20 = (&v0->field_0)[1].to_vec(a2, v1);
                v0->field_0 = 11;
                return v20;
            }
            if ((char)v16.equal(v19, "directdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/pa", 6))
            {
                a1[195] = 1;
            }
            else if ((char)v16.equal(v19, "directorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parsearg", 9))
            {
                a1[196] = 1;
            }
            else if ((char)v16.equal(v19, "dsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 5))
            {
                a1[197] = 1;
            }
            else if ((char)v16.equal(v19, "syncCyan    \"`$\\EADV", 4))
            {
                a1[198] = 1;
            }
            else if ((char)v16.equal(v19, "nocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 7))
            {
                a1[199] = 1;
            }
            else if ((char)v16.equal(v19, "nonblockNO_COLORNulErrorIO errorUIoErrorUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE", 8))
            {
                a1[200] = 1;
            }
            else if ((char)v16.equal(v19, "noatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 7))
            {
                a1[201] = 1;
            }
            else if ((char)v16.equal(v19, "nocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 6))
            {
                a1[202] = 1;
            }
            else if ((char)v16.equal(v19, "nofollowextern \"", 8))
            {
                a1[203] = 1;
            }
            else if ((char)v16.equal(v19, "nolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 7))
            {
                v4.to_vec(v16, v19);
                v0->field_0 = 11;
                *((void*)&(&v0->field_0)[1]) = v4;
                *((unsigned long *)((char *)&v0->field_8 + 8)) = v5;
                return v5;
            }
            else if ((char)v16.equal(v19, "binaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 6))
            {
                v6.to_vec(v16, v19);
                v0->field_0 = 11;
                *((void*)&(&v0->field_0)[1]) = v6;
                *((unsigned long *)((char *)&v0->field_8 + 8)) = v7;
                return v7;
            }
            else if ((char)v16.equal(v19, "textswabdumb", 4))
            {
                v8.to_vec(v16, v19);
                v0->field_0 = 11;
                *((void*)&(&v0->field_0)[1]) = v8;
                *((unsigned long *)((char *)&v0->field_8 + 8)) = v9;
                return v9;
            }
            else if ((char)v16.equal(v19, "appendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 6))
            {
                a1[193] = 1;
            }
            else if ((char)v16.equal(v19, "seek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 10))
            {
                a1[207] = 1;
            }
            else if (!(char)v16.equal(v19, "fullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 9) && !(char)v16.equal(v19, "count_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 11) && !(char)v16.equal(v19, "skip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 10))
            {
                v2.to_vec(v16, v19);
                v0->field_0 = 5;
                *((void*)&(&v0->field_0)[1]) = v2;
                *((unsigned long *)((char *)&v0->field_8 + 8)) = v3;
                return v3;
            }
            v16 = v10.next();
            v17 = v17;
        } while (v16);
    }
    v0->field_0 = 14;
    return a0;
}
