__int64 __fastcall rg::flags::doc::version::features(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v4; // [rsp+0h] [rbp-88h] BYREF
  __int64 v5; // [rsp+10h] [rbp-78h]
  _QWORD v6[2]; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v7[2]; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v8[6]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v9[32]; // [rsp+68h] [rbp-20h] BYREF

  *(_QWORD *)&v4 = 0LL;
  *((_QWORD *)&v4 + 1) = 8LL;
  v5 = 0LL;
  v7[0] = asc_69BA0;
  v7[1] = 1LL;
  v6[0] = v7;
  v6[1] = <&T as core::fmt::Display>::fmt;
  v8[0] = &unk_3EACF0;
  v8[1] = 2LL;
  v8[4] = 0LL;
  v8[2] = v6;
  v8[3] = 1LL;
  core::option::Option<T>::map_or_else(v9, 0LL, a3, v8);
  alloc::vec::Vec<T,A>::push(&v4, v9, &off_3EAD10);
  result = v5;
  *(_QWORD *)(a1 + 16) = v5;
  *(_OWORD *)a1 = v4;
  return result;
}