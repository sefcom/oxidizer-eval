__int64 __fastcall backdoorautomater::sanitizer::sanitize_choice(unsigned int a1, char a2)
{
  char **v3; // [rsp+8h] [rbp-30h] BYREF
  __int64 v4; // [rsp+10h] [rbp-28h]
  __int64 v5; // [rsp+18h] [rbp-20h]
  __int128 v6; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int8)a1 > 4u )
  {
    v3 = &off_22A560;
    v4 = 1LL;
    v5 = 8LL;
    v6 = 0LL;
    core::panicking::panic_fmt(&v3, &off_22A5A0);
  }
  if ( !(_BYTE)a1 )
  {
    v3 = &off_22A560;
    v4 = 1LL;
    v5 = 8LL;
    v6 = 0LL;
    core::panicking::panic_fmt(&v3, &off_22A570);
  }
  if ( (_BYTE)a1 == 4 && (unsigned __int8)(a2 - 3) < 2u )
  {
    v3 = &off_22A560;
    v4 = 1LL;
    v5 = 8LL;
    v6 = 0LL;
    core::panicking::panic_fmt(&v3, &off_22A588);
  }
  return a1;
}