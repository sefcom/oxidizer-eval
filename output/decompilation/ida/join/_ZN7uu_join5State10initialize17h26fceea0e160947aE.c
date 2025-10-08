__int64 __fastcall uu_join::State::initialize(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+0h] [rbp-78h] BYREF
  __int64 v9; // [rsp+8h] [rbp-70h]
  __int128 v10; // [rsp+10h] [rbp-68h]
  __int128 v11; // [rsp+20h] [rbp-58h]
  _QWORD v12[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v13; // [rsp+40h] [rbp-38h]
  __int128 v14; // [rsp+50h] [rbp-28h]

  uu_join::State::read_line(v12, a1, a2);
  if ( v12[0] == 0x8000000000000001LL )
    return 1LL;
  v11 = v14;
  v10 = v13;
  v8 = v12[0];
  v9 = v12[1];
  if ( v12[0] == 0x8000000000000000LL )
  {
    core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v8);
  }
  else
  {
    ((void (__fastcall *)(__int64, __int64 *, char **))alloc::vec::Vec<T,A>::push)(a1, &v8, &off_FD318);
    result = 0LL;
    if ( !a3 )
      return result;
    if ( !*(_QWORD *)(a1 + 16) )
      core::panicking::panic_bounds_check(
        0LL,
        0LL,
        &off_FD330,
        v5,
        v6,
        v7,
        v8,
        v9,
        v10,
        *((_QWORD *)&v10 + 1),
        v11,
        *((_QWORD *)&v11 + 1));
  }
  return 0LL;
}