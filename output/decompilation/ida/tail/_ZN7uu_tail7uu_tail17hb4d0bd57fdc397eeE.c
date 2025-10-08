__int64 __fastcall uu_tail::uu_tail(__int64 a1)
{
  __int64 v1; // r13
  _QWORD *v2; // r14
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r13
  char v7; // r15
  char v8; // bp
  __int64 v9; // rax
  _BYTE v11[2]; // [rsp+Eh] [rbp-16Ah] BYREF
  _BYTE v12[8]; // [rsp+10h] [rbp-168h] BYREF
  _QWORD *v13; // [rsp+18h] [rbp-160h]
  __int64 v14; // [rsp+20h] [rbp-158h]
  _BYTE src[144]; // [rsp+28h] [rbp-150h] BYREF
  _QWORD dest[24]; // [rsp+B8h] [rbp-C0h] BYREF

  v11[0] = *(_BYTE *)(a1 + 74);
  v11[1] = 1;
  uu_tail::follow::watch::Observer::from((__int64)src, a1);
  v1 = uu_tail::follow::watch::Observer::start((__int64)src, a1);
  if ( v1 )
  {
LABEL_2:
    core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(src);
    return v1;
  }
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v12, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
  if ( v14 )
  {
    v2 = v13;
    v3 = 48 * v14;
    while ( 1 )
    {
      if ( __OFSUB__(0LL, v2[3])
        || (<T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest, aDevStdin, 10LL),
            v5 = dest[0],
            v6 = dest[1],
            v7 = <std::path::PathBuf as core::cmp::PartialEq>::eq(v2[4], v2[5], dest[1], dest[2]),
            core::ptr::drop_in_place<std::path::PathBuf>(v5, v6),
            v7) )
      {
        v4 = uu_tail::tail_stdin(a1, v11, v2, src);
      }
      else
      {
        v4 = uu_tail::tail_file(a1, (unsigned int)v11, (_DWORD)v2, v2[4], v2[5], (unsigned int)src, 0LL);
      }
      v1 = v4;
      if ( v4 )
        break;
      v2 += 6;
      v3 -= 48LL;
      if ( !v3 )
        goto LABEL_11;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<uu_tail::paths::Input>>(v12);
    goto LABEL_2;
  }
LABEL_11:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_tail::paths::Input>>(v12);
  v8 = 1;
  if ( *(_BYTE *)(a1 + 76) != 2
    && (!(unsigned __int8)uu_tail::args::Settings::has_only_stdin(a1) || *(_DWORD *)(a1 + 68)) )
  {
    memcpy(dest, src, 0x90uLL);
    v9 = uu_tail::follow::watch::follow((__int64)dest, a1);
    if ( v9 )
      return v9;
    v8 = 0;
  }
  uucore::mods::error::get_exit_code();
  if ( v8 )
    core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(src);
  return 0LL;
}