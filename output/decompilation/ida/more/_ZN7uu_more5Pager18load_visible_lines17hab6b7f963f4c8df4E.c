__int64 __fastcall uu_more::Pager::load_visible_lines(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int128 v7; // [rsp+8h] [rbp-50h] BYREF
  __int64 v8; // [rsp+18h] [rbp-40h]
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]

  v2 = a1[3];
  v3 = a1[4];
  a1[4] = 0LL;
  core::ptr::drop_in_place<[alloc::string::String]>(v2, v3);
  a1[15] = 0LL;
  result = uu_more::Pager::seek_to_line(a1, a1[10]);
  if ( !result )
  {
    *(_QWORD *)&v7 = 0LL;
    *((_QWORD *)&v7 + 1) = 1LL;
    v8 = 0LL;
    if ( a1[11] )
    {
      while ( 1 )
      {
        v8 = 0LL;
        if ( ((*(__int64 (__fastcall **)(_QWORD, __int128 *))(a1[9] + 128LL))(a1[8], &v7) & 1) != 0 )
          break;
        if ( v5 )
        {
          if ( (unsigned __int8)uu_more::Pager::should_squeeze_line(a1, *((_QWORD *)&v7 + 1), v8) )
          {
            ++a1[15];
          }
          else
          {
            v10 = v8;
            v9 = v7;
            *(_QWORD *)&v7 = 0LL;
            *((_QWORD *)&v7 + 1) = 1LL;
            v8 = 0LL;
            alloc::vec::Vec<T,A>::push(a1 + 2, &v9);
          }
          if ( a1[4] < a1[11] )
            continue;
        }
        goto LABEL_10;
      }
      v6 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
      core::ptr::drop_in_place<alloc::string::String>(&v7);
      return v6;
    }
    else
    {
LABEL_10:
      core::ptr::drop_in_place<alloc::string::String>(&v7);
      return 0LL;
    }
  }
  return result;
}