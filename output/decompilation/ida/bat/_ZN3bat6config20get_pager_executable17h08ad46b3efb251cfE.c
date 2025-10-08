_QWORD *__fastcall bat::config::get_pager_executable(_QWORD *a1)
{
  __int64 v2; // [rsp+8h] [rbp-80h] BYREF
  __int128 v3; // [rsp+10h] [rbp-78h]
  __int128 v4; // [rsp+20h] [rbp-68h] BYREF
  __int128 v5; // [rsp+30h] [rbp-58h]
  __int128 v6; // [rsp+40h] [rbp-48h]
  __int128 v7; // [rsp+50h] [rbp-38h]
  __int128 v8; // [rsp+60h] [rbp-28h]

  bat::pager::get_pager(&v2);
  if ( v2 == 0x8000000000000001LL )
  {
    core::ptr::drop_in_place<core::result::Result<core::option::Option<bat::pager::Pager>,shell_words::ParseError>>(&v2);
  }
  else
  {
    v8 = v5;
    v7 = v4;
    v6 = v3;
    if ( v2 != 0x8000000000000000LL )
    {
      v3 = v6;
      v5 = v8;
      v4 = v7;
      a1[2] = *((_QWORD *)&v6 + 1);
      *a1 = v2;
      a1[1] = v3;
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v4);
      return a1;
    }
  }
  *a1 = 0x8000000000000000LL;
  return a1;
}