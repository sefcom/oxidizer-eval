__int64 __fastcall uu_logname::get_userlogin(__int64 a1)
{
  char *v1; // rax
  char *v2; // r14
  size_t v3; // rax
  __int64 v4; // r14
  __int64 v6; // [rsp+8h] [rbp-40h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v1 = getlogin();
  if ( v1 )
  {
    v2 = v1;
    v3 = strlen(v1);
    alloc::string::String::from_utf8_lossy(&v6, v2, v3);
    v4 = v7;
    <alloc::borrow::Cow<str> as alloc::string::SpecToString>::spec_to_string(&v9, v7, v8);
    *(_QWORD *)(a1 + 16) = v10;
    *(_OWORD *)a1 = v9;
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v6, v4);
  }
  else
  {
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  return a1;
}