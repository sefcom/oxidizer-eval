__int64 __fastcall alacritty::cli::parse_class(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 result; // rax
  _QWORD v8[2]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v9; // [rsp+18h] [rbp-30h]
  __int64 v10; // [rsp+20h] [rbp-28h]

  v4 = a2;
  core::str::<impl str>::split_once(v8);
  v5 = v8[0];
  v6 = a3;
  if ( v8[0] )
  {
    v4 = v9;
    a3 = v10;
    if ( (unsigned __int8)<char as core::str::pattern::Pattern>::is_contained_in(44LL, v9, v10) )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 1, aTooManyParamet);
      result = 0x8000000000000000LL;
      *a1 = 0x8000000000000000LL;
      return result;
    }
    v6 = v8[1];
    a2 = v5;
  }
  return alacritty::config::window::Class::new(a1, a2, v6, v4, a3);
}