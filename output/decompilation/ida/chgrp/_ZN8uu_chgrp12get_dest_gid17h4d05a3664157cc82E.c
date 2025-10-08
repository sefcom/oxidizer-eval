__int64 __fastcall uu_chgrp::get_dest_gid(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  int v7; // eax
  __int64 v8; // rcx
  int v9; // r12d
  __int64 result; // rax
  __int128 v11; // [rsp+0h] [rbp-118h] BYREF
  __int64 v12; // [rsp+10h] [rbp-108h]
  __int128 v13; // [rsp+18h] [rbp-100h] BYREF
  __int64 v14; // [rsp+28h] [rbp-F0h]
  __int64 v15; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v16; // [rsp+38h] [rbp-E0h]
  __int128 dest; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-C8h]
  int v19; // [rsp+58h] [rbp-C0h]
  unsigned int v20; // [rsp+80h] [rbp-98h]

  *(_QWORD *)&v11 = 0LL;
  *((_QWORD *)&v11 + 1) = 1LL;
  v12 = 0LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, a2, aReference_1, 9LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(aReference_1, 9LL, &dest);
  if ( !v2 )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, a2, aGroup_0, 5LL);
    v4 = clap_builder::parser::error::MatchesError::unwrap(aGroup_0, 5LL, &dest);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 8);
      v6 = *(_QWORD *)(v4 + 16);
    }
    else
    {
      v5 = 1LL;
      v6 = 0LL;
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, v5, v6);
    v12 = v18;
    v11 = dest;
    v9 = 0;
    result = core::ptr::drop_in_place<alloc::string::String>(0LL, 1LL);
    if ( v6 )
    {
      uu_chgrp::parse_gid_from_str((__int64)&v13, v5, v6);
      if ( !__OFSUB__(0LL, (_QWORD)v13) )
      {
        v18 = v14;
        dest = v13;
        v19 = 1;
        *(_QWORD *)(a1 + 16) = alloc::boxed::Box<T>::new(&dest);
        *(_QWORD *)(a1 + 24) = &off_F4898;
        *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
        return core::ptr::drop_in_place<alloc::string::String>(v11, *((_QWORD *)&v11 + 1));
      }
      result = DWORD2(v13);
      v9 = 1;
    }
LABEL_14:
    *(_QWORD *)(a1 + 24) = v12;
    *(_OWORD *)(a1 + 8) = v11;
    *(_DWORD *)a1 = v9;
    *(_DWORD *)(a1 + 4) = result;
    return result;
  }
  std::fs::metadata(&dest);
  if ( (_DWORD)dest == 2 )
  {
    *((_QWORD *)&v13 + 1) = *((_QWORD *)&dest + 1);
    v3 = 1;
  }
  else
  {
    v7 = uu_chgrp::get_dest_gid::{{closure}}(&v11, v20);
    DWORD1(v13) = 1;
    DWORD2(v13) = v7;
    v3 = 0;
  }
  LODWORD(v13) = v3;
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v15,
    &v13,
    *(_QWORD *)(v2 + 8),
    *(_QWORD *)(v2 + 16));
  if ( !v15 )
  {
    v9 = v16;
    result = HIDWORD(v16);
    goto LABEL_14;
  }
  v8 = v16;
  *(_QWORD *)(a1 + 16) = v15;
  *(_QWORD *)(a1 + 24) = v8;
  *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
  return core::ptr::drop_in_place<alloc::string::String>(v11, *((_QWORD *)&v11 + 1));
}