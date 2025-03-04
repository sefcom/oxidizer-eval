__int64 __fastcall uu_join::State::reset_next_line(__int64 a1, __int64 a2, char *a3)
{
  __int64 result; // rax
  __int128 v4; // [rsp+0h] [rbp-98h]
  __int64 v5; // [rsp+20h] [rbp-78h] BYREF
  __int128 v6; // [rsp+28h] [rbp-70h]
  __int64 v7; // [rsp+38h] [rbp-60h]
  __int128 v8; // [rsp+40h] [rbp-58h]
  __int64 v9; // [rsp+50h] [rbp-48h] BYREF
  __int128 v10; // [rsp+58h] [rbp-40h]
  __int64 v11; // [rsp+68h] [rbp-30h]
  __int128 v12; // [rsp+70h] [rbp-28h]

  uu_join::State::next_line((__int64)&v5, a2, a3);
  v4 = v6;
  if ( v5 == 0x8000000000000001LL )
  {
    result = v7;
    *(_QWORD *)(a1 + 16) = v7;
    *(_OWORD *)a1 = v4;
  }
  else
  {
    v12 = v8;
    v9 = v5;
    v10 = v6;
    v11 = v7;
    result = uu_join::State::reset(a2, (__int128 *)&v9);
    *(_QWORD *)a1 = 0x8000000000000001LL;
  }
  return result;
}
