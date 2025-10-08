__int64 __fastcall rg::haystack::HaystackBuilder::build(__int64 a1, char a2, __int128 *a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 result; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  char v20; // al
  char v21; // al
  _DWORD v22[2]; // [rsp+8h] [rbp-1F0h] BYREF
  _QWORD v23[2]; // [rsp+10h] [rbp-1E8h] BYREF
  __int128 v24; // [rsp+20h] [rbp-1D8h] BYREF
  __int128 v25; // [rsp+30h] [rbp-1C8h]
  __int128 v26; // [rsp+40h] [rbp-1B8h]
  __int128 v27; // [rsp+50h] [rbp-1A8h] BYREF
  __int128 v28; // [rsp+60h] [rbp-198h]
  __int128 v29; // [rsp+70h] [rbp-188h]
  __int128 v30; // [rsp+80h] [rbp-178h]
  __int64 v31; // [rsp+90h] [rbp-168h]
  _QWORD v32[5]; // [rsp+A0h] [rbp-158h] BYREF
  _QWORD *v33; // [rsp+C8h] [rbp-130h] BYREF
  __int64 (__fastcall *v34)(); // [rsp+D0h] [rbp-128h]
  _DWORD *v35; // [rsp+D8h] [rbp-120h]
  __int64 (__fastcall *v36)(); // [rsp+E0h] [rbp-118h]
  char ***v37; // [rsp+E8h] [rbp-110h]
  __int64 (__fastcall *v38)(); // [rsp+F0h] [rbp-108h]
  _QWORD v39[6]; // [rsp+F8h] [rbp-100h] BYREF
  char **v40; // [rsp+128h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+130h] [rbp-C8h]
  _QWORD *v42; // [rsp+138h] [rbp-C0h]
  __int128 v43; // [rsp+140h] [rbp-B8h]

  v3 = *a3;
  v4 = a3[1];
  v5 = a3[2];
  v27 = a3[3];
  v30 = a3[6];
  v29 = a3[5];
  v28 = a3[4];
  v26 = v5;
  v25 = v4;
  v24 = v3;
  LOBYTE(v31) = a2;
  if ( DWORD2(v27) != 9 )
  {
    v23[0] = (char *)&v27 + 8;
    if ( rg::messages::messages() && rg::messages::ignore_messages() )
    {
      v40 = (char **)std::io::stdio::stdout();
      v6 = std::io::stdio::Stdout::lock(&v40);
      v40 = (char **)&std::io::stdio::stderr::INSTANCE;
      v32[0] = std::io::stdio::Stdout::lock(&v40);
      v40 = &off_3E99C8;
      v41 = 1LL;
      v42 = (_QWORD *)&byte_8;
      v43 = 0LL;
      v7 = std::io::Write::write_fmt(v32, &v40);
      v33 = (_QWORD *)v7;
      if ( v7 )
      {
        v40 = (char **)v7;
        v20 = std::io::error::Error::kind(v7);
        std::process::exit(2 * (v20 != 11));
      }
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v33);
      v33 = v23;
      v34 = <&T as core::fmt::Display>::fmt;
      v40 = (char **)&unk_3EA800;
      v41 = 2LL;
      v42 = &v33;
      v43 = 1uLL;
      v8 = std::io::Write::write_fmt(v32, &v40);
      v39[0] = v8;
      if ( v8 )
      {
        v40 = (char **)v8;
        v21 = std::io::error::Error::kind(v8);
        std::process::exit(2 * (v21 != 11));
      }
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v39);
      core::ptr::drop_in_place<std::io::stdio::StderrLock>(v6);
      core::ptr::drop_in_place<std::io::stdio::StderrLock>(v32[0]);
    }
  }
  if ( (unsigned __int8)rg::haystack::Haystack::is_explicit(&v24)
    || (unsigned __int8)rg::haystack::Haystack::is_file(v24, (unsigned int)v27) )
  {
    result = v31;
    *(_QWORD *)(a1 + 112) = v31;
    *(_OWORD *)(a1 + 96) = v30;
    *(_OWORD *)(a1 + 80) = v29;
    *(_OWORD *)(a1 + 64) = v28;
    v10 = v24;
    v11 = v25;
    v12 = v26;
    *(_OWORD *)(a1 + 48) = v27;
    *(_OWORD *)(a1 + 32) = v12;
    *(_OWORD *)(a1 + 16) = v11;
    *(_OWORD *)a1 = v10;
  }
  else
  {
    if ( !(unsigned __int8)rg::haystack::Haystack::is_dir(&v24)
      && (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
    {
      v23[0] = ignore::walk::DirEntry::path(&v24);
      v23[1] = v13;
      if ( (_QWORD)v24 )
      {
        v22[1] = v27;
        v14 = 1;
      }
      else
      {
        v14 = 0;
      }
      v22[0] = v14;
      ignore::walk::DirEntry::metadata(&v40, &v24);
      v33 = v23;
      v34 = <std::path::Display as core::fmt::Display>::fmt;
      v35 = v22;
      v36 = <core::option::Option<T> as core::fmt::Debug>::fmt;
      v37 = &v40;
      v38 = <core::result::Result<T,E> as core::fmt::Debug>::fmt;
      v39[0] = &off_3EB718;
      v39[1] = 3LL;
      v39[4] = 0LL;
      v39[2] = &v33;
      v39[3] = 3LL;
      v19 = log::__private_api::loc(&off_3EB748, &v24, v15, v16, v17, v18);
      v32[0] = aRgHaystack;
      v32[1] = 12LL;
      v32[2] = aRgHaystack;
      v32[3] = 12LL;
      v32[4] = v19;
      log::__private_api::log(v39, 4LL, v32);
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,ignore::Error>>(&v40);
    }
    *(_QWORD *)a1 = 3LL;
    return core::ptr::drop_in_place<rg::haystack::Haystack>(&v24);
  }
  return result;
}