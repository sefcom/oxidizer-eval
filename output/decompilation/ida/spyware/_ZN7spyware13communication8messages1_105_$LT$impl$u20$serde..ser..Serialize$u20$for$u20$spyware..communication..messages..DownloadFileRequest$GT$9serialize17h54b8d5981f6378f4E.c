__int64 __fastcall spyware::communication::messages::_::<impl serde::ser::Serialize for spyware::communication::messages::DownloadFileRequest>::serialize(
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
  __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int8 v11; // [rsp+10h] [rbp-48h]
  __int128 v12; // [rsp+18h] [rbp-40h] BYREF
  __m256i v13; // [rsp+28h] [rbp-30h]

  <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_struct(&v12, a3, aDownloadfilere, 19LL, 1LL);
  v3 = v12;
  if ( (_DWORD)v12 == 33 )
  {
    v10 = *((_QWORD *)&v12 + 1);
    v11 = v13.m256i_i8[0];
    <ron::ser::Compound<W> as serde::ser::SerializeStruct>::serialize_field(&v12, &v10, aPath, 4LL, a2);
    if ( (_DWORD)v12 == 33 )
    {
      <ron::ser::Compound<W> as serde::ser::SerializeStruct>::end(a1, v10, v11);
    }
    else
    {
      v7 = v12;
      v8 = *(_OWORD *)v13.m256i_i8;
      *(_OWORD *)(a1 + 32) = *(_OWORD *)&v13.m256i_u64[2];
      *(_OWORD *)(a1 + 16) = v8;
      *(_OWORD *)a1 = v7;
    }
  }
  else
  {
    v4 = DWORD1(v12);
    v5 = *((_QWORD *)&v12 + 1);
    v6 = v13.m256i_i8[0];
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v13.m256i_u64[2];
    *(_OWORD *)(a1 + 17) = *(_OWORD *)&v13.m256i_i8[1];
    *(_DWORD *)a1 = v3;
    *(_DWORD *)(a1 + 4) = v4;
    *(_QWORD *)(a1 + 8) = v5;
    *(_BYTE *)(a1 + 16) = v6;
  }
  return a1;
}