__int64 __fastcall uu_tail::uu_tail(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  _QWORD *v3; // rbp
  __int64 v4; // rax
  char v5; // bp
  __int64 v7; // rax
  _BYTE v8[2]; // [rsp+Eh] [rbp-19Ah] BYREF
  __int128 v9; // [rsp+10h] [rbp-198h] BYREF
  __int64 v10; // [rsp+20h] [rbp-188h]
  _BYTE v11[8]; // [rsp+30h] [rbp-178h] BYREF
  __int64 v12; // [rsp+38h] [rbp-170h]
  __int64 v13; // [rsp+40h] [rbp-168h]
  _QWORD v14[2]; // [rsp+48h] [rbp-160h] BYREF
  _BYTE src[144]; // [rsp+58h] [rbp-150h] BYREF
  _OWORD dest[12]; // [rsp+E8h] [rbp-C0h] BYREF

  v8[0] = *(_BYTE *)(a1 + 74);
  v8[1] = 1;
  uu_tail::follow::watch::Observer::from(src, a1);
  v1 = uu_tail::follow::watch::Observer::start(src, a1);
  if ( v1 )
  {
LABEL_2:
    core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(src);
    return v1;
  }
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v11, a1 + 24);
  v14[0] = v12;
  v14[1] = v12 + 48 * v13;
  v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v14);
  if ( v2 )
  {
    v3 = (_QWORD *)v2;
    while ( 1 )
    {
      if ( v3[3] == 0x8000000000000000LL )
        goto LABEL_8;
      std::sys::os_str::bytes::Slice::to_owned(dest, aDevStdin, 10LL);
      v10 = *(_QWORD *)&dest[1];
      v9 = dest[0];
      if ( (unsigned __int8)<std::path::PathBuf as core::cmp::PartialEq>::eq(v3[4], v3[5], *((_QWORD *)&dest[0] + 1)) )
        break;
      core::ptr::drop_in_place<std::path::PathBuf>(&v9);
      v4 = uu_tail::tail_file(a1, (unsigned int)v8, (_DWORD)v3, v3[4], v3[5], (unsigned int)src, 0LL);
LABEL_10:
      v1 = v4;
      if ( v4 )
      {
        core::ptr::drop_in_place<alloc::vec::Vec<uu_tail::paths::Input>>(v11);
        goto LABEL_2;
      }
      v3 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v14);
      if ( !v3 )
        goto LABEL_12;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v9);
LABEL_8:
    v4 = uu_tail::tail_stdin(a1, v8, v3, src);
    goto LABEL_10;
  }
LABEL_12:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_tail::paths::Input>>(v11);
  if ( *(_BYTE *)(a1 + 76) == 2 || (unsigned __int8)uu_tail::args::Settings::has_only_stdin(a1) )
  {
    v5 = 0;
  }
  else
  {
    memcpy(dest, src, 0x90uLL);
    v7 = uu_tail::follow::watch::follow(dest, a1);
    if ( v7 )
      return v7;
    v5 = 1;
  }
  uucore::mods::error::get_exit_code();
  if ( !v5 )
    core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(src);
  return 0LL;
}
