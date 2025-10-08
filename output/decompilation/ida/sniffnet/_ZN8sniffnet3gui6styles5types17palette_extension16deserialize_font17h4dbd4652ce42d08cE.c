__int64 __fastcall sniffnet::gui::styles::types::palette_extension::deserialize_font(__int64 a1)
{
  __int64 result; // rax
  __int128 v2; // xmm0
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 v9; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+10h] [rbp-A8h]
  __int128 v11; // [rsp+20h] [rbp-98h] BYREF
  __int64 v12; // [rsp+30h] [rbp-88h]
  __m256i v13; // [rsp+40h] [rbp-78h] BYREF
  __int128 v14; // [rsp+60h] [rbp-58h]
  __int128 v15; // [rsp+70h] [rbp-48h]
  __int128 v16; // [rsp+80h] [rbp-38h]
  __int128 v17; // [rsp+90h] [rbp-28h]

  <serde::private::de::content::ContentDeserializer<E> as serde_core::de::Deserializer>::deserialize_string(&v13);
  result = v13.m256i_i64[0];
  v9 = *(_OWORD *)&v13.m256i_u64[1];
  v10 = v13.m256i_i64[3];
  if ( v13.m256i_i64[0] != 2 )
  {
    v3 = v14;
    v4 = v15;
    v5 = v16;
    *(_OWORD *)(a1 + 80) = v17;
    *(_OWORD *)(a1 + 64) = v5;
    *(_OWORD *)(a1 + 48) = v4;
    *(_OWORD *)(a1 + 32) = v3;
    *(_QWORD *)(a1 + 24) = v10;
    *(_OWORD *)(a1 + 8) = v9;
    *(_QWORD *)a1 = result;
    return result;
  }
  v11 = v9;
  v12 = v10;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                          *((_QWORD *)&v9 + 1),
                          v10,
                          aSarasaMono,
                          11LL) )
  {
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&qword_2DFF3A0;
    v2 = unk_2DFF390;
  }
  else
  {
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                             *((_QWORD *)&v9 + 1),
                             v10,
                             aSarasaMonoBold,
                             16LL) )
    {
      LOBYTE(v9) = 5;
      ((void (__fastcall *)(__m256i *, __int128 *, char **, void *))serde_core::de::Error::invalid_value)(
        &v13,
        &v9,
        &off_2DFF3D0,
        &unk_2DF26A8);
      *(_OWORD *)(a1 + 80) = v17;
      *(_OWORD *)(a1 + 64) = v16;
      v6 = *(_OWORD *)v13.m256i_i8;
      v7 = *(_OWORD *)&v13.m256i_u64[2];
      v8 = v14;
      *(_OWORD *)(a1 + 48) = v15;
      *(_OWORD *)(a1 + 32) = v8;
      *(_OWORD *)(a1 + 16) = v7;
      *(_OWORD *)a1 = v6;
      return core::ptr::drop_in_place<alloc::string::String>(&v11);
    }
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&qword_2DFF3C0;
    v2 = unk_2DFF3B0;
  }
  *(_OWORD *)(a1 + 8) = v2;
  *(_QWORD *)a1 = 2LL;
  return core::ptr::drop_in_place<alloc::string::String>(&v11);
}