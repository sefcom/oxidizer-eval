__int64 __fastcall uu_env::string_parser::StringParser::set_pointer(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v4; // [rsp+18h] [rbp-40h]
  _BYTE v5[16]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v6; // [rsp+40h] [rbp-18h]

  *(_QWORD *)(a1 + 32) = a2;
  if ( a2 > *(_QWORD *)(a1 + 8) )
  {
    v3[0] = &off_1104E8;
    v3[1] = 1LL;
    v3[2] = 8LL;
    v4 = 0LL;
    core::panicking::panic_fmt(v3, &off_110750);
  }
  result = core::slice::<impl [T]>::split_at_unchecked(v5, *(_QWORD *)a1);
  *(_OWORD *)(a1 + 16) = v6;
  return result;
}