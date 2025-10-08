__int64 __fastcall bat::theme::choose_theme_opt(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v4; // [rsp+0h] [rbp-68h]
  __int64 v5; // [rsp+10h] [rbp-58h]
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+30h] [rbp-38h]
  __int128 v8; // [rsp+38h] [rbp-30h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h]

  if ( a2 == 2 )
  {
    core::ptr::drop_in_place<bat::theme::choose_theme_opt::{{closure}}>(a3);
    *(_QWORD *)&v6 = 0x8000000000000000LL;
  }
  else
  {
    bat::theme::choose_theme(&v8, a3, a2);
    *(_QWORD *)&v6 = 0x8000000000000000LL;
    if ( (_QWORD)v8 != 0x8000000000000001LL )
    {
      v5 = v9;
      v4 = v8;
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(&v6);
      goto LABEL_6;
    }
  }
  v5 = v7;
  v4 = v6;
LABEL_6:
  *(_QWORD *)(a1 + 16) = v5;
  *(_OWORD *)a1 = v4;
  result = *((_QWORD *)&v4 + 1);
  *(_BYTE *)(a1 + 24) = a2;
  return result;
}