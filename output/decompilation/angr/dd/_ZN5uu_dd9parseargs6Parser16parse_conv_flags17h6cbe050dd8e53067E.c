long long uu_dd::parseargs::Parser::parse_conv_flags(unsigned long a0, char a1[176], unsigned long long a2, unsigned long long a3)
{
    struct_0 *v0;  // [bp-0x98]
    int v1;  // [bp-0x90], Other Possible Types: char
    unsigned long v2;  // [bp-0x80]
    void* v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    char v5;  // [bp-0x68]
    unsigned short v6;  // [bp-0x38]
    unsigned long long v8;  // rax
    unsigned long long v9;  // rbx
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rbp
    unsigned long long v12;  // rbp

    v5.into_searcher(44, a2, a3);
    v3 = 0;
    v4 = a3;
    v6 = 1;
    v8 = v3.next();
    if (v8)
    {
        v9 = v8;
        do
        {
            v12 = v11;
            if ((char)v9.equal(v12, "asciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 5))
            {
                a1[160] = 1;
            }
            else if ((char)v9.equal(v12, "ebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 6))
            {
                a1[161] = 1;
            }
            else if ((char)v9.equal(v12, "ibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 3))
            {
                a1[162] = 1;
            }
            else if ((char)v9.equal(v12, "lcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 5))
            {
                a1[164] = 1;
            }
            else if ((char)v9.equal(v12, "ucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 5))
            {
                a1[163] = 1;
            }
            else if ((char)v9.equal(v12, "blockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 5))
            {
                a1[165] = 1;
            }
            else if ((char)v9.equal(v12, "unblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 7))
            {
                a1[166] = 1;
            }
            else if ((char)v9.equal(v12, "swabdumb", 4))
            {
                a1[167] = 1;
            }
            else if ((char)v9.equal(v12, "syncCyan    \"`$\\EADV", 4))
            {
                a1[168] = 1;
            }
            else if ((char)v9.equal(v12, "noerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 7))
            {
                a1[169] = 1;
            }
            else if ((char)v9.equal(v12, "sparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 6))
            {
                a1[170] = 1;
            }
            else if ((char)v9.equal(v12, "exclkeysu128for<", 4))
            {
                a1[171] = 1;
            }
            else if ((char)v9.equal(v12, "nocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 7))
            {
                a1[172] = 1;
            }
            else if ((char)v9.equal(v12, "notruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 7))
            {
                a1[173] = 1;
            }
            else if ((char)v9.equal(v12, "fdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 9))
            {
                a1[174] = 1;
            }
            else if ((char)v9.equal(v12, "fsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs", 5))
            {
                a1[175] = 1;
            }
            else
            {
                v1.to_vec(v9, v12);
                v0->field_0 = 6;
                *((void*)&(&v0->field_0)[1]) = v1;
                *((unsigned long *)((char *)&v0->field_8 + 8)) = v2;
                return v2;
            }
            v9 = v3.next();
            v10 = v10;
        } while (v9);
    }
    v0->field_0 = 14;
    return a0;
}
