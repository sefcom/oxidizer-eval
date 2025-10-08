__int64 __fastcall sniffnet::networking::types::data_representation::ByteMultiple::pretty_print(
        __int64 a1,
        unsigned __int8 a2,
        char a3)
{
  __int64 v3; // rdx
  __int64 result; // rax
  _QWORD *v5; // [rsp+8h] [rbp-80h] BYREF
  __int64 (__fastcall *v6)(); // [rsp+10h] [rbp-78h]
  __int128 v7; // [rsp+18h] [rbp-70h] BYREF
  __int64 v8; // [rsp+28h] [rbp-60h]
  _QWORD v9[6]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v10[5]; // [rsp+60h] [rbp-28h] BYREF

  if ( a3 )
  {
    if ( a3 == 1 )
    {
      sniffnet::networking::types::data_representation::ByteMultiple::get_char(v10, a2);
      v5 = v10;
      v6 = <alloc::string::String as core::fmt::Display>::fmt;
      v9[0] = &unk_2DFF9F0;
    }
    else
    {
      sniffnet::networking::types::data_representation::ByteMultiple::get_char(v10, a2);
      v5 = v10;
      v6 = <alloc::string::String as core::fmt::Display>::fmt;
      v9[0] = &unk_2DFFA10;
    }
    v9[1] = 2LL;
    v9[4] = 0LL;
    v9[2] = &v5;
    v9[3] = 1LL;
    core::option::Option<T>::map_or_else(&v7, 0LL, v3, v9);
    core::ptr::drop_in_place<alloc::string::String>(v10);
    result = v8;
    *(_QWORD *)(a1 + 16) = v8;
    *(_OWORD *)a1 = v7;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 1LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}