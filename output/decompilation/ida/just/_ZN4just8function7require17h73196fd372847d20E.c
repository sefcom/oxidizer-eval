__int64 __fastcall just::function::require(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  char **v8; // [rsp+0h] [rbp-68h] BYREF
  __int64 v9; // [rsp+8h] [rbp-60h]
  __int128 v10; // [rsp+10h] [rbp-58h]
  __int64 v11; // [rsp+20h] [rbp-48h]
  __int128 v12; // [rsp+30h] [rbp-38h]
  _QWORD v13[2]; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+50h] [rbp-18h] BYREF

  v13[0] = a3;
  v13[1] = a4;
  just::which::which(&v8, *a2);
  v5 = v9;
  v12 = v10;
  if ( (_DWORD)v8 == 1 )
  {
    *(_OWORD *)(a1 + 16) = v12;
    *(_QWORD *)(a1 + 8) = v5;
  }
  else
  {
    if ( !__OFSUB__(-v9, 1LL) )
    {
      *(_OWORD *)(a1 + 16) = v12;
      *(_QWORD *)(a1 + 8) = v5;
      v6 = 0LL;
      goto LABEL_7;
    }
    v14[0] = v13;
    v14[1] = <&T as core::fmt::Display>::fmt;
    v8 = &off_430000;
    v9 = 2LL;
    v11 = 0LL;
    *(_QWORD *)&v10 = v14;
    *((_QWORD *)&v10 + 1) = 1LL;
    core::option::Option<T>::map_or_else(a1 + 8, 0LL, v4, &v8);
  }
  v6 = 1LL;
LABEL_7:
  *(_QWORD *)a1 = v6;
  return a1;
}