__int64 __fastcall bat::pager::PagerKind::from_bin(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r14
  unsigned __int64 *v6; // r15
  __int128 v7; // kr00_16
  unsigned __int64 v9; // [rsp+8h] [rbp-60h] BYREF
  __int128 v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h] BYREF
  __int128 v12; // [rsp+30h] [rbp-38h]

  LOBYTE(v2) = 4;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aBuiltin, 7LL) )
  {
    v3 = std::path::Path::file_stem(a1, a2);
    v5 = v4;
    v6 = &v9;
    std::env::args_os(&v9);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v11, &v9);
    core::ptr::drop_in_place<std::env::ArgsOs>(&v9);
    LOBYTE(v6) = 5;
    if ( v11 != 0x8000000000000000LL )
    {
      v10 = v12;
      v9 = v11;
      LODWORD(v6) = 5 * ((unsigned __int8)bat::pager::PagerKind::from_bin::{{closure}}(v3, v5, &v9) == 0);
    }
    if ( v3 )
    {
      alloc::string::String::from_utf8_lossy(&v9, v3, v5);
      if ( v9 != 0x8000000000000001LL )
      {
        v7 = v10;
        LOBYTE(v2) = 1;
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                v10,
                                *((_QWORD *)&v10 + 1),
                                aLess_0,
                                4LL) )
          goto LABEL_12;
        LOBYTE(v2) = 2;
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, *((_QWORD *)&v7 + 1), aMore, 4LL) )
          goto LABEL_12;
        LOBYTE(v2) = 3;
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                v7,
                                *((_QWORD *)&v7 + 1),
                                "most─ full]",
                                4LL) )
          goto LABEL_12;
      }
    }
    else
    {
      v9 = 0x8000000000000001LL;
    }
    v2 = (unsigned int)v6;
LABEL_12:
    core::ptr::drop_in_place<nu_ansi_term::display::OSControl<str>>(&v9);
  }
  return v2;
}