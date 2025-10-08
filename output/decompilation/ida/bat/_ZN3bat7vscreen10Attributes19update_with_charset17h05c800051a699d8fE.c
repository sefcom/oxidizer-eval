__int64 __fastcall bat::vscreen::Attributes::update_with_charset(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 result; // rax
  int v6; // [rsp+Ch] [rbp-9Ch] BYREF
  _QWORD v7[4]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v8[6]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v9; // [rsp+60h] [rbp-48h] BYREF
  __int64 v10; // [rsp+70h] [rbp-38h]
  _BYTE v11[48]; // [rsp+78h] [rbp-30h] BYREF

  v6 = a2;
  core::iter::traits::iterator::Iterator::take(v8, a3, a4);
  core::iter::traits::iterator::Iterator::collect(v11, v8);
  v7[0] = &v6;
  v7[1] = <char as core::fmt::Display>::fmt;
  v7[2] = v11;
  v7[3] = <alloc::string::String as core::fmt::Display>::fmt;
  v8[0] = &off_6CED50;
  v8[1] = 2LL;
  v8[4] = 0LL;
  v8[2] = v7;
  v8[3] = 2LL;
  core::option::Option<T>::map_or_else(&v9, 0LL, v4, v8);
  core::ptr::drop_in_place<alloc::string::String>(v11);
  core::ptr::drop_in_place<alloc::string::String>(a1 + 72);
  result = v10;
  *(_QWORD *)(a1 + 88) = v10;
  *(_OWORD *)(a1 + 72) = v9;
  return result;
}