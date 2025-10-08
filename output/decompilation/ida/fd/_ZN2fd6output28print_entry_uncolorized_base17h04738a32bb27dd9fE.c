__int64 __fastcall fd::output::print_entry_uncolorized_base(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r12
  __int128 v11; // [rsp+0h] [rbp-78h] BYREF
  _QWORD *v12; // [rsp+10h] [rbp-68h]
  __int128 v13; // [rsp+18h] [rbp-60h] BYREF
  _QWORD *v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+38h] [rbp-40h]
  _QWORD v17[6]; // [rsp+48h] [rbp-30h] BYREF

  v4 = fd::dir_entry::DirEntry::stripped_path((__int64)a2, *(_BYTE *)(a3 + 487));
  alloc::string::String::from_utf8_lossy(&v11, v4);
  if ( !__OFSUB__(0LL, *(_QWORD *)(a3 + 360)) )
  {
    fd::output::replace_path_separator(&v13, *((_QWORD *)&v11 + 1), v12, *(_QWORD *)(a3 + 368), *(_QWORD *)(a3 + 376));
    alloc::borrow::Cow<B>::to_mut(&v11);
    core::ptr::drop_in_place<alloc::string::String>(&v11);
    v12 = v14;
    v11 = v13;
  }
  v17[0] = &v11;
  v17[1] = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
  *(_QWORD *)&v13 = asc_70810;
  *((_QWORD *)&v13 + 1) = 1LL;
  v16 = 0LL;
  v14 = v17;
  v15 = 1LL;
  v9 = ((__int64 (__fastcall *)(__int64, __int128 *, __int64, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD *))std::io::Write::write_fmt)(
         a1,
         &v13,
         v5,
         v6,
         v7,
         v8,
         v11,
         *((_QWORD *)&v11 + 1),
         v12);
  if ( !v9 )
    v9 = fd::output::print_trailing_slash(a1, a2, *(_QWORD *)(a3 + 184), *(_QWORD *)(a3 + 192), 0LL);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v11);
  return v9;
}