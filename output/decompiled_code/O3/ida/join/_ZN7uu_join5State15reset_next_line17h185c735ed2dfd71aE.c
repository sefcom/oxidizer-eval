__int64 __fastcall uu_join::State::reset_next_line(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // [rsp+0h] [rbp-98h]
  __int64 v4; // [rsp+20h] [rbp-78h] BYREF
  __int128 v5; // [rsp+28h] [rbp-70h]
  __int64 v6; // [rsp+38h] [rbp-60h]
  __int128 v7; // [rsp+40h] [rbp-58h]
  __int64 v8; // [rsp+50h] [rbp-48h] BYREF
  __int128 v9; // [rsp+58h] [rbp-40h]
  __int64 v10; // [rsp+68h] [rbp-30h]
  __int128 v11; // [rsp+70h] [rbp-28h]

  uu_join::State::next_line(&v4);
  v3 = v5;
  if ( v4 == 0x8000000000000001LL )
  {
    result = v6;
    *(_QWORD *)(a1 + 16) = v6;
    *(_OWORD *)a1 = v3;
  }
  else
  {
    v11 = v7;
    v8 = v4;
    v9 = v5;
    v10 = v6;
    result = uu_join::State::reset(a2, &v8);
    *(_QWORD *)a1 = 0x8000000000000001LL;
  }
  return result;
}
