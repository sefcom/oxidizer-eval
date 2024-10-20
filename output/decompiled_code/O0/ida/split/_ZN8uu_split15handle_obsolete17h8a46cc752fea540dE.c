_QWORD *__fastcall uu_split::handle_obsolete(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax
  _QWORD v4[3]; // [rsp+18h] [rbp-A0h] BYREF
  char v5; // [rsp+36h] [rbp-82h] BYREF
  char v6; // [rsp+37h] [rbp-81h] BYREF
  _QWORD v7[3]; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v8[40]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v9[3]; // [rsp+78h] [rbp-40h] BYREF
  __int64 v10; // [rsp+90h] [rbp-28h]
  __int64 v11; // [rsp+98h] [rbp-20h]
  __int64 v12; // [rsp+A0h] [rbp-18h]

  v4[0] = 0x8000000000000000LL;
  v5 = 0;
  v6 = 0;
  v9[0] = v4;
  v9[1] = &v5;
  v9[2] = &v6;
  core::iter::traits::iterator::Iterator::filter_map(v8, a2, a3, v9);
  core::iter::traits::iterator::Iterator::collect(v7, v8);
  result = a1;
  v10 = v4[0];
  v11 = v4[1];
  v12 = v4[2];
  *a1 = v7[0];
  a1[1] = v7[1];
  a1[2] = v7[2];
  a1[3] = v10;
  a1[4] = v11;
  a1[5] = v12;
  return result;
}
