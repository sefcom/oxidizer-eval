__int64 __fastcall uu_join::State::reset_read_line(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+0h] [rbp-68h] BYREF
  __int64 v4; // [rsp+8h] [rbp-60h]
  __int128 v5; // [rsp+10h] [rbp-58h]
  __int128 v6; // [rsp+20h] [rbp-48h]
  _QWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v8; // [rsp+40h] [rbp-28h]
  __int128 v9; // [rsp+50h] [rbp-18h]

  uu_join::State::read_line(&v3, a1, a2 + 2);
  result = v4;
  if ( v3 != 0x8000000000000001LL )
  {
    v9 = v6;
    v8 = v5;
    v7[0] = v3;
    v7[1] = v4;
    uu_join::State::reset(a1, v7);
    return 0LL;
  }
  return result;
}
