__int64 __fastcall uu_join::State::reset_read_line(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _OWORD v3[3]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v4[3]; // [rsp+30h] [rbp-38h] BYREF

  uu_join::State::read_line((__int64)v3, a1, a2 + 2);
  result = *((_QWORD *)&v3[0] + 1);
  if ( *(_QWORD *)&v3[0] != 0x8000000000000001LL )
  {
    v4[2] = v3[2];
    v4[1] = v3[1];
    v4[0] = v3[0];
    uu_join::State::reset(a1, v4);
    return 0LL;
  }
  return result;
}
