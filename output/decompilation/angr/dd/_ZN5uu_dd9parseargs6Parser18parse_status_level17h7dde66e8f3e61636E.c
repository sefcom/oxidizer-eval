long long uu_dd::parseargs::Parser::parse_status_level(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1;  // rax

    if ((char)a1.equal(a2, "nonehelpNoneshimconvname", 4))
    {
        a0->field_8 = 2;
        goto LABEL_4c94f2;
    }
    if ((char)a1.equal(a2, "noxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warning-zero-multipliersrc/uu/dd/src/par", 6))
    {
        a0->field_8 = 1;
        goto LABEL_4c94f2;
    }
    else if ((char)a1.equal(a2, "progressNoEqualsargumentFileDescnonblockNO_COLORNulError", 8))
    {
        a0->field_8 = 0;
LABEL_4c94f2:
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
