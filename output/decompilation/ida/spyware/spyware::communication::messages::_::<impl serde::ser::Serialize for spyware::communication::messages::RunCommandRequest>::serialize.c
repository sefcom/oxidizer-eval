__int64 __fastcall spyware::communication::messages::_::<impl serde::ser::Serialize for spyware::communication::messages::RunCommandRequest>::serialize(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // eax
  int v4; // ecx
  __int64 v5; // rdx
  __int8 v6; // si
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v10; // [rsp+8h] [rbp-50h] BYREF
  __m256i v11; // [rsp+18h] [rbp-40h]
  __int64 v12; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int8 v13; // [rsp+40h] [rbp-18h]

  <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_struct(&v10, a3, aRuncommandrequ, 17LL, 2LL);
  v3 = v10;
  if ( (_DWORD)v10 == 33 )
  {
    v12 = *((_QWORD *)&v10 + 1);
    v13 = v11.m256i_i8[0];
    <ron::ser::Compound<W> as serde::ser::SerializeStruct>::serialize_field(&v10, &v12, aCommand_0, 7LL, a2);
    if ( (_DWORD)v10 == 33
      && (<ron::ser::Compound<W> as serde::ser::SerializeStruct>::serialize_field(&v10, &v12, aAsyncRun_0, 9LL, a2 + 24),
          (_DWORD)v10 == 33) )
    {
      <ron::ser::Compound<W> as serde::ser::SerializeStruct>::end(a1, v12, v13);
    }
    else
    {
      v7 = v10;
      v8 = *(_OWORD *)v11.m256i_i8;
      *(_OWORD *)(a1 + 32) = *(_OWORD *)&v11.m256i_u64[2];
      *(_OWORD *)(a1 + 16) = v8;
      *(_OWORD *)a1 = v7;
    }
  }
  else
  {
    v4 = DWORD1(v10);
    v5 = *((_QWORD *)&v10 + 1);
    v6 = v11.m256i_i8[0];
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v11.m256i_u64[2];
    *(_OWORD *)(a1 + 17) = *(_OWORD *)&v11.m256i_i8[1];
    *(_DWORD *)a1 = v3;
    *(_DWORD *)(a1 + 4) = v4;
    *(_QWORD *)(a1 + 8) = v5;
    *(_BYTE *)(a1 + 16) = v6;
  }
  return a1;
}