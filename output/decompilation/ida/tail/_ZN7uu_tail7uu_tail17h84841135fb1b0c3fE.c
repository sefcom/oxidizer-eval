__int64 __fastcall uu_tail::uu_tail(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  _QWORD *v4; // rbp
  __int64 v5; // rax
  _BYTE *v6; // rdi
  char v7; // bp
  __int64 v9; // rax
  _BYTE v10[2]; // [rsp+Eh] [rbp-19Ah] BYREF
  __int128 v11; // [rsp+10h] [rbp-198h] BYREF
  __int64 v12; // [rsp+20h] [rbp-188h]
  _BYTE v13[8]; // [rsp+30h] [rbp-178h] BYREF
  __int64 v14; // [rsp+38h] [rbp-170h]
  __int64 v15; // [rsp+40h] [rbp-168h]
  _QWORD v16[2]; // [rsp+48h] [rbp-160h] BYREF
  _BYTE src[144]; // [rsp+58h] [rbp-150h] BYREF
  _OWORD dest[12]; // [rsp+E8h] [rbp-C0h] BYREF

  v10[0] = *(_BYTE *)(a1 + 74);
  v10[1] = 1;
  uu_tail::follow::watch::Observer::from((__int64)src, a1);
  v2 = uu_tail::follow::watch::Observer::start((__int64)src, a1);
  if ( v2 )
  {
LABEL_2:
    core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(src);
    return v2;
  }
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v13, a1 + 24);
  v16[0] = v14;
  v16[1] = v14 + 48 * v15;
  v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v16);
  if ( v3 )
  {
    v4 = (_QWORD *)v3;
    while ( 1 )
    {
      if ( v4[3] == 0x8000000000000000LL )
        goto LABEL_8;
      std::sys::os_str::bytes::Slice::to_owned(dest, aDevStdin, 10LL);
      v12 = *(_QWORD *)&dest[1];
      v11 = dest[0];
      if ( (unsigned __int8)<std::path::PathBuf as core::cmp::PartialEq>::eq(v4[4], v4[5], *((_QWORD *)&dest[0] + 1)) )
        break;
      core::ptr::drop_in_place<std::path::PathBuf>(&v11);
      v5 = uu_tail::tail_file(a1, (__int64)v10, v4, v4[4], v4[5], (__int64)src, 0LL);
LABEL_10:
      v2 = v5;
      if ( v5 )
      {
        core::ptr::drop_in_place<alloc::vec::Vec<uu_tail::paths::Input>>(v13);
        goto LABEL_2;
      }
      v4 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v16);
      if ( !v4 )
        goto LABEL_12;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v11);
LABEL_8:
    v5 = uu_tail::tail_stdin(a1, (__int64)v10, v4, (__int64)src);
    goto LABEL_10;
  }
LABEL_12:
  v6 = v13;
  core::ptr::drop_in_place<alloc::vec::Vec<uu_tail::paths::Input>>(v13);
  if ( *(_BYTE *)(a1 + 76) == 2 || (v6 = (_BYTE *)a1, (unsigned __int8)uu_tail::args::Settings::has_only_stdin(a1)) )
  {
    v7 = 0;
  }
  else
  {
    memcpy(dest, src, 0x90uLL);
    v6 = dest;
    v9 = uu_tail::follow::watch::follow((__int64)dest, a1);
    if ( v9 )
      return v9;
    v7 = 1;
  }
  uucore::mods::error::get_exit_code(v6);
  if ( !v7 )
    core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(src);
  return 0LL;
}
