__int64 __fastcall uu_who::platform::unix::Who::print_user(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v3; // rbx
  bool v4; // bp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 (__fastcall *v13)(); // r14
  __int64 v14; // r12
  const char *v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int128 v22; // [rsp+0h] [rbp-248h]
  __int128 v23; // [rsp+10h] [rbp-238h]
  int v24; // [rsp+5Ch] [rbp-1ECh] BYREF
  __int128 v25; // [rsp+60h] [rbp-1E8h] BYREF
  __int64 v26; // [rsp+70h] [rbp-1D8h]
  __int128 v27; // [rsp+78h] [rbp-1D0h] BYREF
  __int64 v28; // [rsp+88h] [rbp-1C0h]
  __int64 v29; // [rsp+90h] [rbp-1B8h]
  _QWORD v30[2]; // [rsp+98h] [rbp-1B0h] BYREF
  unsigned __int64 v31; // [rsp+B0h] [rbp-198h] BYREF
  const char *v32; // [rsp+B8h] [rbp-190h]
  __int64 v33; // [rsp+C0h] [rbp-188h]
  __int128 *v34; // [rsp+C8h] [rbp-180h] BYREF
  __int64 (__fastcall *v35)(); // [rsp+D0h] [rbp-178h]
  __int64 v36; // [rsp+D8h] [rbp-170h]
  _BYTE v37[24]; // [rsp+E0h] [rbp-168h] BYREF
  __int64 v38; // [rsp+100h] [rbp-148h]
  __int64 v39; // [rsp+108h] [rbp-140h]
  __int64 v40; // [rsp+110h] [rbp-138h]
  __int64 v41; // [rsp+118h] [rbp-130h]
  _BYTE v42[8]; // [rsp+120h] [rbp-128h] BYREF
  __int64 v43; // [rsp+128h] [rbp-120h]
  __int64 v44; // [rsp+130h] [rbp-118h]
  _BYTE v45[8]; // [rsp+138h] [rbp-110h] BYREF
  __int64 v46; // [rsp+140h] [rbp-108h]
  __int64 v47; // [rsp+148h] [rbp-100h]
  _QWORD v48[2]; // [rsp+150h] [rbp-F8h] BYREF
  _BYTE dest[24]; // [rsp+160h] [rbp-E8h] BYREF
  __int64 v50; // [rsp+178h] [rbp-D0h]
  __int64 v51; // [rsp+180h] [rbp-C8h]
  char v52; // [rsp+198h] [rbp-B0h]
  __int64 v53; // [rsp+1C8h] [rbp-80h]

  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v30, &unk_192A4);
  uucore::features::utmpx::Utmpx::tty_device(dest, a2);
  std::path::PathBuf::push(v30, *(_QWORD *)&dest[8], *(_QWORD *)&dest[16]);
  core::ptr::drop_in_place<alloc::string::String>(dest);
  std::fs::metadata(dest);
  if ( *(_QWORD *)dest == 2LL )
  {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2LL, *(_QWORD *)&dest[8]);
    v2 = 63;
  }
  else
  {
    v3 = v53;
    v4 = (v52 & 0x10) == 0;
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(
      *(_QWORD *)dest,
      *(_QWORD *)&dest[8]);
    v2 = 2 * v4 + 43;
    if ( v3 )
    {
      uu_who::platform::unix::idle_string((__int64)&v31, v3);
      if ( !*(_BYTE *)(a1 + 24) )
        goto LABEL_9;
LABEL_5:
      uucore::features::utmpx::Utmpx::canon_host(dest, a2);
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        &v27,
        dest,
        a2);
      v9 = *((_QWORD *)&v27 + 1);
      v10 = v28;
      if ( (_QWORD)v27 == 0x8000000000000000LL )
        goto LABEL_14;
      v25 = v27;
      v26 = v28;
      if ( v28 )
        goto LABEL_10;
      goto LABEL_7;
    }
  }
  v32 = asc_1AB76;
  v33 = 3LL;
  v31 = 0x8000000000000000LL;
  if ( *(_BYTE *)(a1 + 24) )
    goto LABEL_5;
LABEL_9:
  uucore::features::utmpx::Utmpx::host(&v25, a2);
  v10 = v26;
  if ( v26 )
  {
LABEL_10:
    v34 = &v25;
    v35 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)dest = &off_FEFA8;
    *(_QWORD *)&dest[8] = 2LL;
    v51 = 0LL;
    *(_QWORD *)&dest[16] = &v34;
    v50 = 1LL;
    core::option::Option<T>::map_or_else(&v27, dest, v5, v6, v7, v8);
    *(_OWORD *)v37 = v27;
    *(_QWORD *)&v37[16] = v28;
    goto LABEL_11;
  }
LABEL_7:
  *(_QWORD *)&v37[16] = v26;
  *(_OWORD *)v37 = v25;
LABEL_11:
  v29 = v10;
  uucore::features::utmpx::Utmpx::user(v42, a2);
  v11 = v43;
  v12 = v44;
  uucore::features::utmpx::Utmpx::tty_device(v45, a2);
  v40 = v12;
  v41 = v11;
  v39 = v46;
  v38 = v47;
  uu_who::platform::unix::time_string((__int64)&v34, a2);
  v13 = v35;
  v14 = v36;
  v15 = v32;
  v16 = v33;
  v24 = *(_DWORD *)(a2 + 4);
  v48[0] = &v24;
  v48[1] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
  *(_QWORD *)dest = &unk_18A60;
  *(_QWORD *)&dest[8] = 1LL;
  v51 = 0LL;
  *(_QWORD *)&dest[16] = v48;
  v50 = 1LL;
  core::option::Option<T>::map_or_else(&v27, dest, v17, v18, v19, v20);
  *(_QWORD *)&dest[16] = v28;
  *(_OWORD *)dest = v27;
  *((_QWORD *)&v23 + 1) = v16;
  *(_QWORD *)&v23 = v15;
  *((_QWORD *)&v22 + 1) = v14;
  *(_QWORD *)&v22 = v13;
  uu_who::platform::unix::Who::print_line(
    a1,
    v41,
    v40,
    v2,
    v39,
    v38,
    v22,
    v23,
    *(__int128 *)&dest[8],
    *(__int128 *)&v37[8],
    1uLL);
  core::ptr::drop_in_place<alloc::string::String>(dest);
  core::ptr::drop_in_place<alloc::string::String>(&v34);
  core::ptr::drop_in_place<alloc::string::String>(v45);
  core::ptr::drop_in_place<alloc::string::String>(v42);
  core::ptr::drop_in_place<alloc::string::String>(v37);
  if ( v29 )
    core::ptr::drop_in_place<alloc::string::String>(&v25);
  v9 = 0LL;
LABEL_14:
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v31);
  core::ptr::drop_in_place<std::path::PathBuf>(v30[0], v30[1]);
  return v9;
}