__int64 __fastcall bat::assets::serialized_syntax_set::SerializedSyntaxSet::deserialize(_QWORD *a1, _QWORD *a2)
{
  bool v3; // of
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 result; // rax
  _BYTE v7[104]; // [rsp-68h] [rbp-68h] BYREF

  v3 = __OFSUB__(0LL, *a2);
  v4 = a2[1];
  v5 = a2[2];
  if ( !v3 )
    return bat::assets::asset_from_cache(a1, v4, v5);
  bat::assets::asset_from_contents(v7, v4, v5, aNA, 3LL);
  result = core::result::Result<T,E>::expect(a1 + 1, v7);
  *a1 = 0LL;
  return result;
}