__int64 __fastcall uu_nl::NumberFormat::format(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  void *v4; // rax
  __int64 *v6; // [rsp+8h] [rbp-A0h] BYREF
  __int64 (__fastcall *v7)(); // [rsp+10h] [rbp-98h]
  __int64 v8; // [rsp+18h] [rbp-90h]
  __int64 v9; // [rsp+20h] [rbp-88h]
  _QWORD v10[6]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v11; // [rsp+58h] [rbp-50h] BYREF
  __int64 v12; // [rsp+60h] [rbp-48h] BYREF
  __int64 v13; // [rsp+70h] [rbp-38h]
  __int64 v14; // [rsp+78h] [rbp-30h]
  __int64 v15; // [rsp+80h] [rbp-28h]
  __int64 v16; // [rsp+88h] [rbp-20h]
  char v17; // [rsp+90h] [rbp-18h]
  __int64 v18; // [rsp+98h] [rbp-10h] BYREF

  v11 = a3;
  if ( *a2 )
  {
    if ( *a2 == 1 )
    {
      v6 = &v11;
      v7 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
      v8 = a4;
      v9 = 0LL;
      v12 = 2LL;
      v13 = 1LL;
      v14 = 1LL;
      v15 = 0LL;
      v16 = 32LL;
    }
    else
    {
      if ( a3 < 0 )
      {
        v18 = -a3;
        v6 = &v18;
        v7 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
        v8 = a4 - 1;
        v9 = 0LL;
        v12 = 2LL;
        v13 = 1LL;
        v14 = 1LL;
        v15 = 0LL;
        v16 = 48LL;
        v17 = 1;
        v4 = &off_2D9A98;
        goto LABEL_9;
      }
      v6 = &v11;
      v7 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
      v8 = a4;
      v9 = 0LL;
      v12 = 2LL;
      v13 = 1LL;
      v14 = 1LL;
      v15 = 0LL;
      v16 = 48LL;
    }
    v17 = 1;
  }
  else
  {
    v6 = &v11;
    v7 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
    v8 = a4;
    v9 = 0LL;
    v12 = 2LL;
    v13 = 1LL;
    v14 = 1LL;
    v15 = 0LL;
    v16 = 32LL;
    v17 = 0;
  }
  v4 = &unk_61370;
LABEL_9:
  v10[0] = v4;
  v10[1] = 1LL;
  v10[4] = &v12;
  v10[5] = 1LL;
  v10[2] = &v6;
  v10[3] = 2LL;
  core::option::Option<T>::map_or_else(a1, v10);
  return a1;
}
