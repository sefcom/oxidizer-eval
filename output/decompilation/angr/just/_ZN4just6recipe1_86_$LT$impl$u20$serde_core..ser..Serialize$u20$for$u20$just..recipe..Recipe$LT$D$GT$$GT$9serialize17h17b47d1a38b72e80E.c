long long just::recipe::_::<impl serde_core::ser::Serialize for just::recipe::Recipe<D>>::serialize(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x18], Other Possible Types: unsigned long long
    char v1;  // [bp-0x10]
    char v3;  // cl
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax

    v0.serialize_struct(a1, 11);
    v3 = v1;
    if (v1 == 3)
        return v0;
    v4 = v0.serialize_field(&a0->padding_60[120]);
    if (v4)
        return v4;
    v5 = v0.serialize_field(a0->field_8, a0->field_10);
    if (v5)
        return v5;
    v6 = v0.serialize_field(a0->field_20, a0->field_28);
    if (v6)
        return v6;
    v7 = v0.serialize_field("docexit-messagegroupmacosno-cdno-exit-messageopenbsdpositional-argumentsprivatescriptwindowsexportvalue", 3, &a0->padding_60);
    if (v7)
        return v7;
    v8 = v0.serialize_field(&a0->padding_60[48]);
    if (v8)
        return v8;
    v9 = v0.serialize_field("namepathstride: xidstart( ", 8, &a0->padding_60[24]);
    if (v9)
        return v9;
    v10 = v0.serialize_field(a0->field_50, a0->field_58);
    if (v10)
        return v10;
    v11 = v0.serialize_field(a0->field_f0);
    if (v11)
        return v11;
    v12 = v0.serialize_field("privatescriptwindowsexportvalue", 7, (unsigned long long)a0->field_fc);
    if (v12)
        return v12;
    v13 = v0.serialize_field("quietJUST_QUIETSuppress all outputALLOW-MISSINGallow-missingJUST_ALLOW_MISSINGIgnore missing recipe and module errorsSETsetVALUESHELLshellInvoke <SHELL> to run recipesshell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInv", 5, a0->field_fc[1]);
    if (v13)
        return v13;
    v14 = v0.serialize_field("shebangNo justfile foundGlobal justfile not foundCannot initialize global justfileI/O error reading directory `Justfile path had no parent: Multiple candidate justfiles found in `src/search_error.rs", 7, a0->field_fc[2]);
    if (!v14)
        return v0.end(*((int *)&v1));
    return v14;
}
