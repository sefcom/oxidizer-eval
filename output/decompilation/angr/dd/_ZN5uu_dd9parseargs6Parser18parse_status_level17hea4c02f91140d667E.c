long long uu_dd::parseargs::Parser::parse_status_level(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1;  // rax

    if ((char)a1.equal(a2, "nonehelpNoneshimconv", 4))
    {
        a0->field_8 = 2;
        goto LABEL_48d452;
    }
    if ((char)a1.equal(a2, "noxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\nsrc/uu/", 6))
    {
        a0->field_8 = 1;
        goto LABEL_48d452;
    }
    else if ((char)a1.equal(a2, "progressNoEqualsargumentFileDescnonblockNO_COLORNulErrorIO errorUIoErrorUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE", 8))
    {
        a0->field_8 = 0;
LABEL_48d452:
        v1 = 14;
    }
    else
    {
        a0->field_8.to_vec(a1, a2);
        v1 = 10;
    }
    a0->field_0 = v1;
    return v1;
}
