__int64 *__fastcall uu_uniq::handle_obsolete(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 *result; // rax
  __int64 v5; // rdx
  __int64 v6; // [rsp+0h] [rbp-148h]
  __int64 v7; // [rsp+8h] [rbp-140h]
  __int64 v8; // [rsp+18h] [rbp-130h]
  __int128 v9; // [rsp+40h] [rbp-108h] BYREF
  __int64 v10; // [rsp+50h] [rbp-F8h]
  __int128 v11; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v12; // [rsp+68h] [rbp-E0h]
  char v13; // [rsp+76h] [rbp-D2h] BYREF
  char v14; // [rsp+77h] [rbp-D1h] BYREF
  _QWORD v15[3]; // [rsp+78h] [rbp-D0h] BYREF
  _BYTE v16[48]; // [rsp+90h] [rbp-B8h] BYREF
  _QWORD v17[4]; // [rsp+C0h] [rbp-88h] BYREF
  __int128 v18; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v19; // [rsp+F0h] [rbp-58h]
  __int128 v20; // [rsp+100h] [rbp-48h] BYREF
  __int64 v21; // [rsp+110h] [rbp-38h]
  __int64 v22; // [rsp+120h] [rbp-28h]
  __int64 v23; // [rsp+128h] [rbp-20h]
  char v24; // [rsp+136h] [rbp-12h]
  char v25; // [rsp+137h] [rbp-11h]

  v25 = 1;
  *(_QWORD *)&v9 = 0x8000000000000000LL;
  v24 = 1;
  *(_QWORD *)&v11 = 0x8000000000000000LL;
  v13 = 0;
  v14 = 0;
  v17[0] = &v9;
  v17[1] = &v11;
  v17[2] = &v13;
  v17[3] = &v14;
  core::iter::traits::iterator::Iterator::filter_map(v16, a2, a3, v17);
  core::iter::traits::iterator::Iterator::collect(v15, v16);
  v25 = 0;
  v19 = v10;
  v18 = v9;
  v6 = core::option::Option<T>::and_then((unsigned int)&v18);
  v7 = v3;
  v24 = 0;
  v21 = v12;
  v20 = v11;
  v8 = core::option::Option<T>::and_then((unsigned int)&v20);
  result = a1;
  v22 = v15[1];
  v23 = v15[2];
  a1[2] = v15[0];
  a1[3] = v22;
  a1[4] = v23;
  *a1 = v6;
  a1[1] = v7;
  a1[5] = v8;
  a1[6] = v5;
  return result;
}
