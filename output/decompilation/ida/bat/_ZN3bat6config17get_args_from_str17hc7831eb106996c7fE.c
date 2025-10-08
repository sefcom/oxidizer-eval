__int64 __fastcall bat::config::get_args_from_str(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v5; // [rsp+8h] [rbp-90h] BYREF
  __int64 v6; // [rsp+18h] [rbp-80h]
  __int128 v7; // [rsp+20h] [rbp-78h] BYREF
  __int64 v8; // [rsp+30h] [rbp-68h]
  __int64 v9; // [rsp+40h] [rbp-58h] BYREF
  __int64 v10; // [rsp+48h] [rbp-50h]
  _QWORD v11[6]; // [rsp+50h] [rbp-48h] BYREF
  __int16 v12; // [rsp+80h] [rbp-18h]

  <char as core::str::pattern::Pattern>::into_searcher(v11, 10LL, a2, a3);
  v9 = 0LL;
  v10 = a3;
  v12 = 1;
  core::iter::traits::iterator::Iterator::collect(&v5, &v9);
  if ( __OFSUB__(0LL, (_QWORD)v5) )
  {
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    v8 = v6;
    v7 = v5;
    v9 = *((_QWORD *)&v5 + 1);
    v10 = *((_QWORD *)&v5 + 1) + 24 * v6;
    v11[0] = 0LL;
    v11[2] = 0LL;
    core::iter::traits::iterator::Iterator::collect(&v5, &v9);
    a1[2] = v6;
    *(_OWORD *)a1 = v5;
    return core::ptr::drop_in_place<alloc::vec::Vec<alloc::vec::Vec<alloc::string::String>>>(&v7);
  }
  return result;
}