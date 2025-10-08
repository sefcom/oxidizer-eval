__int64 __fastcall sniffnet::gui::styles::types::palette_extension::serialize_font(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // eax
  __int64 v6; // rsi
  const char *v7; // rdx
  __int64 v8; // rcx

  if ( *(_QWORD *)a2 )
    goto LABEL_2;
  v4 = *(unsigned __int8 *)(a2 + 25);
  if ( v4 == 3 )
  {
    if ( *(_BYTE *)(a2 + 26) == 4
      && !*(_BYTE *)(a2 + 24)
      && (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(a2 + 8),
                            *(_QWORD *)(a2 + 16),
                            aSarasaMonoScFo,
                            27LL) )
    {
      v6 = a3;
      v7 = aSarasaMono;
      v8 = 11LL;
      return <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_str(a1, v6, v7, v8);
    }
LABEL_2:
    result = <toml_edit::ser::Error as serde_core::ser::Error>::custom(a1 + 1);
    *a1 = 8LL;
    return result;
  }
  if ( v4 != 6
    || *(_BYTE *)(a2 + 26) != 4
    || *(_BYTE *)(a2 + 24)
    || !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                           *(_QWORD *)(a2 + 8),
                           *(_QWORD *)(a2 + 16),
                           aSarasaMonoScFo,
                           27LL) )
  {
    goto LABEL_2;
  }
  v6 = a3;
  v7 = aSarasaMonoBold;
  v8 = 16LL;
  return <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_str(a1, v6, v7, v8);
}