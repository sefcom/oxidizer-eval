__int64 __fastcall just::recipe::_::<impl serde_core::ser::Serialize for just::recipe::Recipe<D>>::serialize(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v4; // [rsp+8h] [rbp-10h]

  <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_struct(&v3, a2, 11LL);
  result = v3;
  if ( (_BYTE)v4 != 3 )
  {
    result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v3, a1 + 216);
    if ( !result )
    {
      result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                 &v3,
                 *(_QWORD *)(a1 + 8),
                 *(_QWORD *)(a1 + 16));
      if ( !result )
      {
        result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                   &v3,
                   *(_QWORD *)(a1 + 32),
                   *(_QWORD *)(a1 + 40));
        if ( !result )
        {
          result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                     &v3,
                     aDoc,
                     3LL,
                     a1 + 96);
          if ( !result )
          {
            result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                       &v3,
                       a1 + 144);
            if ( !result )
            {
              result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                         &v3,
                         "namepathstride: xidstart( ",
                         8LL,
                         a1 + 120);
              if ( !result )
              {
                result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                           &v3,
                           *(_QWORD *)(a1 + 80),
                           *(_QWORD *)(a1 + 88));
                if ( !result )
                {
                  result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                             &v3,
                             *(_QWORD *)(a1 + 240));
                  if ( !result )
                  {
                    result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                               &v3,
                               aPrivate_0,
                               7LL,
                               *(unsigned int *)(a1 + 252));
                    if ( !result )
                    {
                      result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                                 &v3,
                                 aQuiet_0,
                                 5LL,
                                 *(unsigned __int8 *)(a1 + 253));
                      if ( !result )
                      {
                        result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                                   &v3,
                                   "shebangNo justfile foundGlobal justfile not foundCannot initialize global justfileI/O"
                                   " error reading directory `Justfile path had no parent: Multiple candidate justfiles f"
                                   "ound in `src/search_error.rsallow_duplicate_recipesallow_duplicate_variablesdotenv_fi"
                                   "lenamedotenv_loaddotenv_overridedotenv_pathdotenv_requiredignore_commentsno_exit_mess"
                                   "agepositional_argumentswindows_powershellwindows_shellworking_directoryAmpersandAmper"
                                   "sandAtBangEqualsBangTildeBarBarBraceLBraceRByteOrderMarkColonColonColonColonEqualsCom"
                                   "maCommentDedentDollarEofEolEqualsEqualsEqualsEqualsTildeIdentifierIndentInterpolation"
                                   "StartParenLParenRQuestionMarkSlashStringTokenUnspecifiedWhitespaceneveralways",
                                   7LL,
                                   *(unsigned __int8 *)(a1 + 254));
                        if ( !result )
                          return <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::end(v3, v4);
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