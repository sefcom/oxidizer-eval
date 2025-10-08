long long just::settings::_::<impl serde_core::ser::Serialize for just::settings::Settings>::serialize(struct_0 *a0, unsigned long long a1)
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
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax

    v0.serialize_struct(a1, 19);
    v3 = v1;
    if (v1 == 3)
        return v0;
    v4 = v0.serialize_field("allow_duplicate_recipesallow_duplicate_variablesdotenv_filenamedotenv_loaddotenv_overridedotenv_pathdotenv_requiredignore_commentsno_exit_messagepositional_argumentswindows_powershellwindows_shellworking_directoryAmpersandAmpersandAtBangEqualsBangTildeBarBarBraceLBraceRByteOrderMarkColonColonColonColonEqualsCommaCommentDedentDollarEofEolEqualsEqualsEqualsEqualsTildeIdentifierIndentInterpolationStartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways", 23, (unsigned long long)a0->field_138);
    if (v4)
        return v4;
    v5 = v0.serialize_field("allow_duplicate_variablesdotenv_filenamedotenv_loaddotenv_overridedotenv_pathdotenv_requiredignore_commentsno_exit_messagepositional_argumentswindows_powershellwindows_shellworking_directoryAmpersandAmpersandAtBangEqualsBangTildeBarBarBraceLBraceRByteOrderMarkColonColonColonColonEqualsCommaCommentDedentDollarEofEolEqualsEqualsEqualsEqualsTildeIdentifierIndentInterpolationStartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways", 25, a0->field_138[1]);
    if (v5)
        return v5;
    v6 = v0.serialize_field("dotenv_filenamedotenv_loaddotenv_overridedotenv_pathdotenv_requiredignore_commentsno_exit_messagepositional_argumentswindows_powershellwindows_shellworking_directoryAmpersandAmpersandAtBangEqualsBangTildeBarBarBraceLBraceRByteOrderMarkColonColonColonColonEqualsCommaCommentDedentDollarEofEolEqualsEqualsEqualsEqualsTildeIdentifierIndentInterpolationStartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways", 15, a0);
    if (v6)
        return v6;
    v7 = v0.serialize_field("dotenv_loaddotenv_overridedotenv_pathdotenv_requiredignore_commentsno_exit_messagepositional_argumentswindows_powershellwindows_shellworking_directoryAmpersandAmpersandAtBangEqualsBangTildeBarBarBraceLBraceRByteOrderMarkColonColonColonColonEqualsCommaCommentDedentDollarEofEolEqualsEqualsEqualsEqualsTildeIdentifierIndentInterpolationStartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways", 11, a0->field_138[2]);
    if (v7)
        return v7;
    v8 = v0.serialize_field("dotenv_overridedotenv_pathdotenv_requiredignore_commentsno_exit_messagepositional_argumentswindows_powershellwindows_shellworking_directoryAmpersandAmpersandAtBangEqualsBangTildeBarBarBraceLBraceRByteOrderMarkColonColonColonColonEqualsCommaCommentDedentDollarEofEolEqualsEqualsEqualsEqualsTildeIdentifierIndentInterpolationStartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways", 15, a0->field_138[3]);
    if (v8)
        return v8;
    v9 = v0.serialize_field("dotenv_pathdotenv_requiredignore_commentsno_exit_messagepositional_argumentswindows_powershellwindows_shellworking_directoryAmpersandAmpersandAtBangEqualsBangTildeBarBarBraceLBraceRByteOrderMarkColonColonColonColonEqualsCommaCommentDedentDollarEofEolEqualsEqualsEqualsEqualsTildeIdentifierIndentInterpolationStartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways", 11, &a0->padding_0[24]);
    if (v9)
        return v9;
    v10 = v0.serialize_field("dotenv_requiredignore_commentsno_exit_messagepositional_argumentswindows_powershellwindows_shellworking_directoryAmpersandAmpersandAtBangEqualsBangTildeBarBarBraceLBraceRByteOrderMarkColonColonColonColonEqualsCommaCommentDedentDollarEofEolEqualsEqualsEqualsEqualsTildeIdentifierIndentInterpolationStartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways", 15, *((int *)&a0->field_139));
    if (v10)
        return v10;
    v11 = v0.serialize_field("exportvalue", 6, a0->field_13a);
    if (v11)
        return v11;
    v12 = v0.serialize_field("fallback\r", 8, a0->field_13b);
    if (v12)
        return v12;
    v13 = v0.serialize_field("ignore_commentsno_exit_messagepositional_argumentswindows_powershellwindows_shellworking_directoryAmpersandAmpersandAtBangEqualsBangTildeBarBarBraceLBraceRByteOrderMarkColonColonColonColonEqualsCommaCommentDedentDollarEofEolEqualsEqualsEqualsEqualsTildeIdentifierIndentInterpolationStartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways", 15, a0->field_13c[0]);
    if (v13)
        return v13;
    v14 = v0.serialize_field("no_exit_messagepositional_argumentswindows_powershellwindows_shellworking_directoryAmpersandAmpersandAtBangEqualsBangTildeBarBarBraceLBraceRByteOrderMarkColonColonColonColonEqualsCommaCommentDedentDollarEofEolEqualsEqualsEqualsEqualsTildeIdentifierIndentInterpolationStartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways", 15, *((int *)&a0->field_13c[1]));
    if (v14)
        return v14;
    v15 = v0.serialize_field("positional_argumentswindows_powershellwindows_shellworking_directoryAmpersandAmpersandAtBangEqualsBangTildeBarBarBraceLBraceRByteOrderMarkColonColonColonColonEqualsCommaCommentDedentDollarEofEolEqualsEqualsEqualsEqualsTildeIdentifierIndentInterpolationStartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways", 20, a0->field_13c[2]);
    if (v15)
        return v15;
    v16 = v0.serialize_field("quietJUST_QUIETSuppress all outputALLOW-MISSINGallow-missingJUST_ALLOW_MISSINGIgnore missing recipe and module errorsSETsetVALUESHELLshellInvoke <SHELL> to run recipesshell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInv", 5, a0->field_13c[3]);
    if (v16)
        return v16;
    v17 = v0.serialize_field("shellInvoke <SHELL> to run recipesshell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInvoke <COMMAND> with the shell used to run recipe lines and backticksTEMPDIRJUST_TEMPDIRtempdirSave temporary files to <TEMPDIR>.TIMEST", 5, &a0->padding_0[120]);
    if (v17)
        return v17;
    v18 = v0.serialize_field("tempdirSave temporary files to <TEMPDIR>.TIMESTAMPtimestampJUST_TIMESTAMPPrint recipe command timestampsJUST_TIMESTAMP_FORMATTimestamp format stringJUST_UNSORTEDReturn list and summary entries in source orderJUST_UNSTABLEEnable unstable featuresVERBOSEverb", 7, &a0->padding_0[192]);
    if (v18)
        return v18;
    v19 = v0.serialize_field(&g_469510, 8, a0->field_13d);
    if (v19)
        return v19;
    v20 = v0.serialize_field("windows_powershellwindows_shellworking_directoryAmpersandAmpersandAtBangEqualsBangTildeBarBarBraceLBraceRByteOrderMarkColonColonColonColonEqualsCommaCommentDedentDollarEofEolEqualsEqualsEqualsEqualsTildeIdentifierIndentInterpolationStartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways", 18, *((int *)&a0->field_13e));
    if (v20)
        return v20;
    v21 = v0.serialize_field("windows_shellworking_directoryAmpersandAmpersandAtBangEqualsBangTildeBarBarBraceLBraceRByteOrderMarkColonColonColonColonEqualsCommaCommentDedentDollarEofEolEqualsEqualsEqualsEqualsTildeIdentifierIndentInterpolationStartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways", 13, &a0->padding_0[216]);
    if (v21)
        return v21;
    v22 = v0.serialize_field("working_directoryAmpersandAmpersandAtBangEqualsBangTildeBarBarBraceLBraceRByteOrderMarkColonColonColonColonEqualsCommaCommentDedentDollarEofEolEqualsEqualsEqualsEqualsTildeIdentifierIndentInterpolationStartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways", 17, &a0->padding_0[288]);
    if (!v22)
        return v0.end(*((int *)&v1));
    return v22;
}
