__int64 __fastcall ruff_python_formatter::comments::Comments::new(__int128 *a1, __int64 a2)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm2
  __int128 v4; // xmm3
  _QWORD v6[2]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v7; // [rsp+10h] [rbp-58h]
  __int128 v8; // [rsp+20h] [rbp-48h]
  __int128 v9; // [rsp+30h] [rbp-38h]
  __int128 v10; // [rsp+40h] [rbp-28h]
  __int128 v11; // [rsp+50h] [rbp-18h]
  __int64 v12; // [rsp+60h] [rbp-8h]

  v6[0] = 1LL;
  v6[1] = 1LL;
  v2 = a1[1];
  v3 = a1[2];
  v4 = a1[3];
  v7 = *a1;
  v8 = v2;
  v9 = v3;
  v10 = v4;
  v11 = a1[4];
  v12 = a2;
  return ((__int64 (__fastcall *)(_QWORD *))alloc::boxed::Box<T>::new)(v6);
}