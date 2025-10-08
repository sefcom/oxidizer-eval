long long uu_dd::parseargs::Parser::parse_input_flags(unsigned long a0, char a1[192], unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x100]
    struct_1 *v1;  // [bp-0xf8]
    void* v2;  // [bp-0xf0]
    unsigned long long v3;  // [bp-0xe8]
    char v4;  // [bp-0xe0]
    unsigned short v5;  // [bp-0xb0]
    char v6;  // [bp-0xa8]
    char v7;  // [bp-0x90]
    char v8;  // [bp-0x78]
    char v9;  // [bp-0x60]
    char v10;  // [bp-0x48]
    unsigned long long v12;  // rax
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rdx
    unsigned long long v15;  // r13
    unsigned long long v16;  // r13
    struct_0 *v17;  // r14
    unsigned long long v18;  // rax

    v4.into_searcher(44, a2, a3);
    v2 = 0;
    v3 = a3;
    v5 = 1;
    v12 = v2.next();
    if (v12)
    {
        v13 = v12;
        v0 = 11;
        do
        {
            v16 = v15;
            if ((char)v13.equal(v16, "ciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src", 3))
            {
                v17 = &v7;
                v17.to_vec(v13, v16);
                v1->field_0 = v0;
                *((char [16])&(&v1->field_0)[1]) = v17->field_0;
                v18 = v17->field_10;
                *((unsigned long long *)((char *)&v1->field_8 + 8)) = v18;
                return v18;
            }
            if ((char)v13.equal(v16, "directdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/pa", 6))
            {
                a1[177] = 1;
            }
            else if ((char)v13.equal(v16, "directorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parsearg", 9))
            {
                a1[178] = 1;
            }
            else if ((char)v13.equal(v16, "dsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 5))
            {
                a1[179] = 1;
            }
            else if ((char)v13.equal(v16, "syncCyan    \"`$\\EADV", 4))
            {
                a1[180] = 1;
            }
            else if ((char)v13.equal(v16, "nocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 7))
            {
                a1[181] = 1;
            }
            else if ((char)v13.equal(v16, "nonblockNO_COLORNulErrorIO errorUIoErrorUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE", 8))
            {
                a1[182] = 1;
            }
            else if ((char)v13.equal(v16, "noatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 7))
            {
                a1[183] = 1;
            }
            else if ((char)v13.equal(v16, "nocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 6))
            {
                a1[184] = 1;
            }
            else if ((char)v13.equal(v16, "nofollowextern \"", 8))
            {
                a1[185] = 1;
            }
            else if ((char)v13.equal(v16, "nolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 7))
            {
                v17 = &v8;
                v17.to_vec(v13, v16);
                v1->field_0 = v0;
                *((char [16])&(&v1->field_0)[1]) = v17->field_0;
                v18 = v17->field_10;
                *((unsigned long long *)((char *)&v1->field_8 + 8)) = v18;
                return v18;
            }
            else if ((char)v13.equal(v16, "binaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 6))
            {
                v17 = &v9;
                v17.to_vec(v13, v16);
                v1->field_0 = v0;
                *((char [16])&(&v1->field_0)[1]) = v17->field_0;
                v18 = v17->field_10;
                *((unsigned long long *)((char *)&v1->field_8 + 8)) = v18;
                return v18;
            }
            else if ((char)v13.equal(v16, "textswabdumb", 4))
            {
                v17 = &v10;
                v17.to_vec(v13, v16);
                v1->field_0 = v0;
                *((char [16])&(&v1->field_0)[1]) = v17->field_0;
                v18 = v17->field_10;
                *((unsigned long long *)((char *)&v1->field_8 + 8)) = v18;
                return v18;
            }
            else if ((char)v13.equal(v16, "fullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 9))
            {
                a1[189] = 1;
            }
            else if ((char)v13.equal(v16, "count_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 11))
            {
                a1[190] = 1;
            }
            else if ((char)v13.equal(v16, "skip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 10))
            {
                a1[191] = 1;
            }
            else if (!(char)v13.equal(v16, "appendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 6) && !(char)v13.equal(v16, "seek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 10))
            {
                v0 = 5;
                v0 = 5;
                v17 = &v6;
                v17.to_vec(v13, v16);
                v1->field_0 = 5;
                *((char [16])&(&v1->field_0)[1]) = v17->field_0;
                v18 = v17->field_10;
                *((unsigned long long *)((char *)&v1->field_8 + 8)) = v18;
                return v18;
            }
            v13 = v2.next();
            v14 = v14;
        } while (v13);
    }
    v1->field_0 = 14;
    return a0;
}
