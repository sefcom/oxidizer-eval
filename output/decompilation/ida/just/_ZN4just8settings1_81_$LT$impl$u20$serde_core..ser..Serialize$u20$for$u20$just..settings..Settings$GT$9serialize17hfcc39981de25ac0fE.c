__int64 __fastcall just::settings::_::<impl serde_core::ser::Serialize for just::settings::Settings>::serialize(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v4; // [rsp+8h] [rbp-10h]

  <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_struct(&v3, a2, 19LL);
  result = v3;
  if ( (_BYTE)v4 != 3 )
  {
    result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
               &v3,
               "allow_duplicate_recipesallow_duplicate_variablesdotenv_filenamedotenv_loaddotenv_overridedotenv_pathdoten"
               "v_requiredignore_commentsno_exit_messagepositional_argumentswindows_powershellwindows_shellworking_direct"
               "oryAmpersandAmpersandAtBangEqualsBangTildeBarBarBraceLBraceRByteOrderMarkColonColonColonColonEqualsCommaC"
               "ommentDedentDollarEofEolEqualsEqualsEqualsEqualsTildeIdentifierIndentInterpolationStartParenLParenRQuesti"
               "onMarkSlashStringTokenUnspecifiedWhitespaceneveralways",
               23LL,
               *(unsigned int *)(a1 + 312));
    if ( !result )
    {
      result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                 &v3,
                 "allow_duplicate_variablesdotenv_filenamedotenv_loaddotenv_overridedotenv_pathdotenv_requiredignore_comm"
                 "entsno_exit_messagepositional_argumentswindows_powershellwindows_shellworking_directoryAmpersandAmpersa"
                 "ndAtBangEqualsBangTildeBarBarBraceLBraceRByteOrderMarkColonColonColonColonEqualsCommaCommentDedentDolla"
                 "rEofEolEqualsEqualsEqualsEqualsTildeIdentifierIndentInterpolationStartParenLParenRQuestionMarkSlashStri"
                 "ngTokenUnspecifiedWhitespaceneveralways",
                 25LL,
                 *(unsigned __int8 *)(a1 + 313));
      if ( !result )
      {
        result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                   &v3,
                   "dotenv_filenamedotenv_loaddotenv_overridedotenv_pathdotenv_requiredignore_commentsno_exit_messageposi"
                   "tional_argumentswindows_powershellwindows_shellworking_directoryAmpersandAmpersandAtBangEqualsBangTil"
                   "deBarBarBraceLBraceRByteOrderMarkColonColonColonColonEqualsCommaCommentDedentDollarEofEolEqualsEquals"
                   "EqualsEqualsTildeIdentifierIndentInterpolationStartParenLParenRQuestionMarkSlashStringTokenUnspecifie"
                   "dWhitespaceneveralways",
                   15LL,
                   a1);
        if ( !result )
        {
          result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                     &v3,
                     "dotenv_loaddotenv_overridedotenv_pathdotenv_requiredignore_commentsno_exit_messagepositional_argume"
                     "ntswindows_powershellwindows_shellworking_directoryAmpersandAmpersandAtBangEqualsBangTildeBarBarBra"
                     "ceLBraceRByteOrderMarkColonColonColonColonEqualsCommaCommentDedentDollarEofEolEqualsEqualsEqualsEqu"
                     "alsTildeIdentifierIndentInterpolationStartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways",
                     11LL,
                     *(unsigned __int8 *)(a1 + 314));
          if ( !result )
          {
            result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                       &v3,
                       "dotenv_overridedotenv_pathdotenv_requiredignore_commentsno_exit_messagepositional_argumentswindow"
                       "s_powershellwindows_shellworking_directoryAmpersandAmpersandAtBangEqualsBangTildeBarBarBraceLBrac"
                       "eRByteOrderMarkColonColonColonColonEqualsCommaCommentDedentDollarEofEolEqualsEqualsEqualsEqualsTi"
                       "ldeIdentifierIndentInterpolationStartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways",
                       15LL,
                       *(unsigned __int8 *)(a1 + 315));
            if ( !result )
            {
              result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                         &v3,
                         "dotenv_pathdotenv_requiredignore_commentsno_exit_messagepositional_argumentswindows_powershellw"
                         "indows_shellworking_directoryAmpersandAmpersandAtBangEqualsBangTildeBarBarBraceLBraceRByteOrder"
                         "MarkColonColonColonColonEqualsCommaCommentDedentDollarEofEolEqualsEqualsEqualsEqualsTildeIdenti"
                         "fierIndentInterpolationStartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways",
                         11LL,
                         a1 + 24);
              if ( !result )
              {
                result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                           &v3,
                           "dotenv_requiredignore_commentsno_exit_messagepositional_argumentswindows_powershellwindows_sh"
                           "ellworking_directoryAmpersandAmpersandAtBangEqualsBangTildeBarBarBraceLBraceRByteOrderMarkCol"
                           "onColonColonColonEqualsCommaCommentDedentDollarEofEolEqualsEqualsEqualsEqualsTildeIdentifierI"
                           "ndentInterpolationStartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways",
                           15LL,
                           *(unsigned int *)(a1 + 316));
                if ( !result )
                {
                  result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                             &v3,
                             aExport_0,
                             6LL,
                             *(unsigned __int8 *)(a1 + 317));
                  if ( !result )
                  {
                    result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                               &v3,
                               "fallback\r",
                               8LL,
                               *(unsigned __int8 *)(a1 + 318));
                    if ( !result )
                    {
                      result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                                 &v3,
                                 "ignore_commentsno_exit_messagepositional_argumentswindows_powershellwindows_shellworkin"
                                 "g_directoryAmpersandAmpersandAtBangEqualsBangTildeBarBarBraceLBraceRByteOrderMarkColonC"
                                 "olonColonColonEqualsCommaCommentDedentDollarEofEolEqualsEqualsEqualsEqualsTildeIdentifi"
                                 "erIndentInterpolationStartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways",
                                 15LL,
                                 *(unsigned __int8 *)(a1 + 319));
                      if ( !result )
                      {
                        result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                                   &v3,
                                   "no_exit_messagepositional_argumentswindows_powershellwindows_shellworking_directoryAm"
                                   "persandAmpersandAtBangEqualsBangTildeBarBarBraceLBraceRByteOrderMarkColonColonColonCo"
                                   "lonEqualsCommaCommentDedentDollarEofEolEqualsEqualsEqualsEqualsTildeIdentifierIndentI"
                                   "nterpolationStartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways",
                                   15LL,
                                   *(unsigned int *)(a1 + 320));
                        if ( !result )
                        {
                          result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                                     &v3,
                                     "positional_argumentswindows_powershellwindows_shellworking_directoryAmpersandAmpers"
                                     "andAtBangEqualsBangTildeBarBarBraceLBraceRByteOrderMarkColonColonColonColonEqualsCo"
                                     "mmaCommentDedentDollarEofEolEqualsEqualsEqualsEqualsTildeIdentifierIndentInterpolat"
                                     "ionStartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways",
                                     20LL,
                                     *(unsigned __int8 *)(a1 + 321));
                          if ( !result )
                          {
                            result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                                       &v3,
                                       aQuiet_0,
                                       5LL,
                                       *(unsigned __int8 *)(a1 + 322));
                            if ( !result )
                            {
                              result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                                         &v3,
                                         aShell_0,
                                         5LL,
                                         a1 + 120);
                              if ( !result )
                              {
                                result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                                           &v3,
                                           aTempdir_0,
                                           7LL,
                                           a1 + 192);
                                if ( !result )
                                {
                                  result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                                             &v3,
                                             aUnstable_0,
                                             8LL,
                                             *(unsigned __int8 *)(a1 + 323));
                                  if ( !result )
                                  {
                                    result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                                               &v3,
                                               "windows_powershellwindows_shellworking_directoryAmpersandAmpersandAtBangE"
                                               "qualsBangTildeBarBarBraceLBraceRByteOrderMarkColonColonColonColonEqualsCo"
                                               "mmaCommentDedentDollarEofEolEqualsEqualsEqualsEqualsTildeIdentifierIndent"
                                               "InterpolationStartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhit"
                                               "espaceneveralways",
                                               18LL,
                                               *(unsigned int *)(a1 + 324));
                                    if ( !result )
                                    {
                                      result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                                                 &v3,
                                                 "windows_shellworking_directoryAmpersandAmpersandAtBangEqualsBangTildeBa"
                                                 "rBarBraceLBraceRByteOrderMarkColonColonColonColonEqualsCommaCommentDede"
                                                 "ntDollarEofEolEqualsEqualsEqualsEqualsTildeIdentifierIndentInterpolatio"
                                                 "nStartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways",
                                                 13LL,
                                                 a1 + 216);
                                      if ( !result )
                                      {
                                        result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                                                   &v3,
                                                   "working_directoryAmpersandAmpersandAtBangEqualsBangTildeBarBarBraceLB"
                                                   "raceRByteOrderMarkColonColonColonColonEqualsCommaCommentDedentDollarE"
                                                   "ofEolEqualsEqualsEqualsEqualsTildeIdentifierIndentInterpolationStartP"
                                                   "arenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways",
                                                   17LL,
                                                   a1 + 288);
                                        if ( !result )
                                          return <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::end(
                                                   v3,
                                                   v4);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}